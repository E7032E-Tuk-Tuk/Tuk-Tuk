/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <stdint.h>
#include <math.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

// Size UART messages

#define pi 3.14159

#define UART_RX_BUFFER_SIZE 16
#define UART_TX_BUFFER_SIZE 12

// Everything is given in SI base units

// Vehicle constants
#define WheelRadiusUnloaded 0.28
#define WheelRadiusLoaded 0.28		// The simulation doesn't distinguish between unloaded, loaded and effective radius
#define WheelRadiusEffective ((2*WheelRadiusUnloaded + WheelRadiusLoaded) / 3)

#define WheelBase 2.0
#define TrackWidth 1.0
#define GearRatio 7.0

// Limits on positive (accelerating) torque, parametrized by a limit on torque and another limit on power
#define MaxMotorTorque 2000 // For low angular velocity. Enter value in Nm
#define MaxMotorPower 3000 // For higher angular velocity. Enter value in W (note that this should be the effective power, not the electrical power going in)
#define AngVelThresholdAcc (MaxMotorPower / MaxMotorTorque) // Use first limit when below threshold and second limit when above

// Limits on negative (braking) torque. Don't know if this also depends on angular velocity, and can be parametrized the same way as the maximum positive? Someone plz HALP!
#define MaxBrakingTorque 300
#define MaxBrakingPower 450
#define AngVelThresholdBrake (MaxBrakingPower / MaxBrakingTorque)

// Yaw rate PI controller constants
#define Kp 700
#define Ki 180

// Anti-spin feature constants
#define A_lambda 0.06
#define B_lambda 20.0

// Misc constants
#define Ts 0.01 // Sampling time
#define MaxCMTorqueFraction 0.8 // Fraction of the maximum available torque to be used for common mode when at full throttle
#define MinVelLong 0.05 // Minimum longitudinal velocity to trigger anti-slip system. Avoids division by zero
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef hadc2;

UART_HandleTypeDef huart2;
DMA_HandleTypeDef hdma_usart2_rx;
DMA_HandleTypeDef hdma_usart2_tx;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void PeriphCommonClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_ADC1_Init(void);
static void MX_ADC2_Init(void);
/* USER CODE BEGIN PFP */
void SIM_set_torques(uint8_t *Tx_data, float torqueLeft, float torqueRight);
void SIM_set_steering_angle(uint8_t *Tx_data, float steeringAngle);

void getMotorTorqueLimits();
void yawRateController();
void torqueVectoring();
void antiSpin();
void calculateMotorTorqueRef();

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

uint8_t UART_Rx_data[UART_RX_BUFFER_SIZE]; // UART receive data buffer.
uint8_t UART_Tx_data[UART_TX_BUFFER_SIZE]; // UART transive data buffer.

uint32_t adc1_value; // Values from potentiometer controlling the torque.
uint8_t adc1_valid = 0;
uint32_t adc2_value; // Values from potentiometer controlling the steering angle.
uint8_t adc2_valid = 0;

// Global variables (ikr...)

// Outputs from the FMU or sensors
float velLong = 0;
float steerAngleMeas = 0;
float yawRate = 0;
// The FMU outputs the angular velocities of the wheels, but for a practical test we would probably read it from the motors
float angVelMotorLeft = 0;
float angVelMotorRight = 0;
float angVelWheelLeft = 0;
float angVelWheelRight = 0;

float accInput = 0; // Accelerator input (Here I'm assuming a value between 0 and 1)

// Variables for the Yaw rate PI controller
float yawTorqueRef = 0;
float previousYawTorqueRef = 0;
float previousError = 0;
float torqueCM = 0;

// Outputs from the TV controller
float motorTorqueLeftRef = 0;
float motorTorqueRightRef = 0;

// Available motor torque limits
float maxMotorTorqueLeft = 2000;
float maxMotorTorqueRight = 2000;
float minMotorTorqueLeft = 0;
float minMotorTorqueRight = 0;


/*
 * HAL_UART_RxCpltCallback
 *
 * @brief Receives data from UART via interrupt.
 *
 * @param huart	UART Handle.
 * @retval none
 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	HAL_UART_Receive_IT(&huart2, UART_Rx_data, UART_RX_BUFFER_SIZE);
	HAL_UART_Transmit_IT(&huart2, UART_Tx_data, sizeof(UART_Tx_data));
}


void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart) {}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{
	if (hadc == &hadc1)
	{
		adc1_value = HAL_ADC_GetValue(&hadc1);
		adc1_valid = 1;
	}

	if (hadc == &hadc2)
	{
		adc2_value = HAL_ADC_GetValue(&hadc2);
		adc2_valid = 1	;
	}
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

/* Configure the peripherals common clocks */
  PeriphCommonClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_USART2_UART_Init();
  MX_ADC1_Init();
  MX_ADC2_Init();
  /* USER CODE BEGIN 2 */
  float throttle;
  float const throttleMax = 1;
  float const throttleMin = 0.001;

  float const steeringAngleMax = pi/6;
  float const steeringAngleMin = -pi/6;


  HAL_UART_Receive_IT(&huart2, UART_Rx_data, UART_RX_BUFFER_SIZE);
  HAL_UART_Transmit_IT(&huart2, UART_Tx_data, sizeof(UART_Tx_data));
  HAL_ADC_Start_IT(&hadc1);
  HAL_ADC_Start_IT(&hadc2);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  if (adc1_valid == 1)
	  {
		  throttle = (float) adc1_value * (throttleMax - throttleMin)/4095 + throttleMin;
		  adc1_valid = 0;
		  HAL_ADC_Start_IT(&hadc1);
	  }

	  if (adc2_valid == 1)
	  {
		  steerAngleMeas = (float) adc2_value*(steeringAngleMax - steeringAngleMin)/4095 + steeringAngleMin;
		  SIM_set_steering_angle(UART_Tx_data, steerAngleMeas);

		  adc2_valid = 0;
		  HAL_ADC_Start_IT(&hadc2);

	  }

	  calculateMotorTorqueRef();
	  SIM_set_torques(UART_Tx_data, motorTorqueLeftRef, motorTorqueRightRef);

	  HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_4);
	  HAL_Delay(10);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 10;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief Peripherals Common Clock Configuration
  * @retval None
  */
void PeriphCommonClock_Config(void)
{
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Initializes the peripherals clock
  */
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_ADC;
  PeriphClkInit.AdcClockSelection = RCC_ADCCLKSOURCE_PLLSAI1;
  PeriphClkInit.PLLSAI1.PLLSAI1Source = RCC_PLLSOURCE_HSI;
  PeriphClkInit.PLLSAI1.PLLSAI1M = 1;
  PeriphClkInit.PLLSAI1.PLLSAI1N = 8;
  PeriphClkInit.PLLSAI1.PLLSAI1P = RCC_PLLP_DIV7;
  PeriphClkInit.PLLSAI1.PLLSAI1Q = RCC_PLLQ_DIV2;
  PeriphClkInit.PLLSAI1.PLLSAI1R = RCC_PLLR_DIV2;
  PeriphClkInit.PLLSAI1.PLLSAI1ClockOut = RCC_PLLSAI1_ADC1CLK;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_MultiModeTypeDef multimode = {0};
  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */

  /** Common config
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.ScanConvMode = ADC_SCAN_DISABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  hadc1.Init.LowPowerAutoWait = DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc1.Init.DMAContinuousRequests = DISABLE;
  hadc1.Init.Overrun = ADC_OVR_DATA_PRESERVED;
  hadc1.Init.OversamplingMode = DISABLE;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure the ADC multi-mode
  */
  multimode.Mode = ADC_MODE_INDEPENDENT;
  if (HAL_ADCEx_MultiModeConfigChannel(&hadc1, &multimode) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_1;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_2CYCLES_5;
  sConfig.SingleDiff = ADC_SINGLE_ENDED;
  sConfig.OffsetNumber = ADC_OFFSET_NONE;
  sConfig.Offset = 0;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief ADC2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC2_Init(void)
{

  /* USER CODE BEGIN ADC2_Init 0 */

  /* USER CODE END ADC2_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC2_Init 1 */

  /* USER CODE END ADC2_Init 1 */

  /** Common config
  */
  hadc2.Instance = ADC2;
  hadc2.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
  hadc2.Init.Resolution = ADC_RESOLUTION_12B;
  hadc2.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc2.Init.ScanConvMode = ADC_SCAN_DISABLE;
  hadc2.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  hadc2.Init.LowPowerAutoWait = DISABLE;
  hadc2.Init.ContinuousConvMode = DISABLE;
  hadc2.Init.NbrOfConversion = 1;
  hadc2.Init.DiscontinuousConvMode = DISABLE;
  hadc2.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc2.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc2.Init.DMAContinuousRequests = DISABLE;
  hadc2.Init.Overrun = ADC_OVR_DATA_PRESERVED;
  hadc2.Init.OversamplingMode = DISABLE;
  if (HAL_ADC_Init(&hadc2) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_2;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_2CYCLES_5;
  sConfig.SingleDiff = ADC_SINGLE_ENDED;
  sConfig.OffsetNumber = ADC_OFFSET_NONE;
  sConfig.Offset = 0;
  if (HAL_ADC_ConfigChannel(&hadc2, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC2_Init 2 */

  /* USER CODE END ADC2_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  huart2.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart2.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA1_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Channel6_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel6_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel6_IRQn);
  /* DMA1_Channel7_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel7_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel7_IRQn);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : LD2_Pin */
  GPIO_InitStruct.Pin = LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PB4 */
  GPIO_InitStruct.Pin = GPIO_PIN_4;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/*
 * Sim_set_torques
 *
 * @brief	Putes the requested torques into UART Tx buffer.
 *
 * @param 	uint8_t *Tx_data UART transmission buffer.
 * @param	float torqueLeft Reference torque for left wheel.
 * @param	float torqueRight Reference torque for right wheel.
 *
 * 	@retval None
 */
void SIM_set_torques(uint8_t *Tx_data, float torqueLeft, float torqueRight)
{
	// bitmask for extracting 1 byte at the time
	uint8_t bitmask = 0xff;

	// Turns the bits to uint32_t.
	uint32_t tempLeft = * (uint32_t *) &torqueLeft;
	uint32_t tempRight = * (uint32_t *) &torqueRight;

    // Puts the values into temp buffer.
	for (int i = 0; i < 4; i++)
	{
		*(Tx_data + i) 		= (uint8_t) (tempLeft >> (24 - 8*i)) & bitmask;
		*(Tx_data + 4 + i) 	= (uint8_t) (tempRight >> (24 - 8*i)) & bitmask;
	}

}

/*
 * SIM_set_steering_angle
 *
 * @brief	Putes the requested torques into UART Tx buffer.
 *
 * @param 	uint8_t *Tx_data UART transmission buffer.
 * @param	float steeringAngle steering angle.
 *
 * 	@retval None
 */
void SIM_set_steering_angle(uint8_t *Tx_data, float steeringAngle)
{

	// bitmask for extracting 1 byte at the time
	uint8_t bitmask = 0xff;

	// Turns the bits to uint32_t.
	uint32_t tempSteer = * (uint32_t *) &steeringAngle;

	for (int i = 0; i < 4; i++)
	{
		*(Tx_data + 8 + i) 	= (uint8_t) (tempSteer >> (24 - 8*i)) & bitmask;
	}

}

void read_UART(uint8_t* Rx_data)
{
	uint8_t tempBuffer[4];

	for (int i = 0; i < 4; i++)
	{
		tempBuffer[i] = *(Rx_data + i);
	}
	yawRate = * (float *) &tempBuffer;

	for (int i = 0; i < 4; i++)
	{
		tempBuffer[i] = *(Rx_data + i + 4);
	}
	velLong = * (float *) &tempBuffer;

	for (int i = 0; i < 4; i++)
	{
		tempBuffer[i] = *(Rx_data + i + 8);
	}
	angVelWheelLeft = * (float *) &tempBuffer;

	for (int i = 0; i < 4; i++)
	{
		tempBuffer[i] = *(Rx_data + i + 12);
	}
	angVelWheelRight = * (float *) &tempBuffer;

}

void getMotorTorqueLimits()
{
	// Change this function if there is a better method to estimate the limits, especially the lower limits (limits on braking torque)

	// Limits on positive (accelerating) torque
	if (angVelMotorLeft < AngVelThresholdAcc){
		maxMotorTorqueLeft = MaxMotorTorque;
	}
	else {
		maxMotorTorqueLeft = MaxMotorPower / angVelMotorLeft;
	}

	if (angVelMotorRight < AngVelThresholdAcc){
		maxMotorTorqueRight = MaxMotorTorque;
	}
	else {
		maxMotorTorqueRight = MaxMotorPower / angVelMotorRight;
	}

	// Limits on negative (braking) torque
	if (angVelMotorLeft < AngVelThresholdBrake){
		minMotorTorqueLeft = -MaxBrakingTorque;
	}
	else {
		minMotorTorqueLeft = -MaxBrakingPower / angVelMotorLeft;
	}
	if (angVelMotorRight < AngVelThresholdBrake){
		minMotorTorqueRight = -MaxBrakingTorque;
	}
	else {
		minMotorTorqueRight = -MaxBrakingPower / angVelMotorRight;
	}
}

void yawRateController()
{
	float yawRateRef = velLong * tan(steerAngleMeas) / WheelBase;
	float error = yawTorqueRef - yawRate;

	// PI controller in incremental form (aka "velocity form")
	yawTorqueRef = previousYawTorqueRef + Kp*(error - previousError) + Ki*Ts*error;
	previousError = error;
}

void torqueVectoring()
{
	// Determine differential mode torque
	float torqueDM = WheelRadiusLoaded * yawTorqueRef / (GearRatio * TrackWidth);

	motorTorqueLeftRef = torqueCM + torqueDM; // NOTE: This assumes that the yaw angle is defined in a clockwise sense; otherwise, flip the signs
	motorTorqueRightRef = torqueCM - torqueDM;

	// Check for motor torque limits and saturate the signals
	motorTorqueLeftRef = fmin(maxMotorTorqueLeft, fmax(motorTorqueLeftRef, minMotorTorqueLeft));
	motorTorqueRightRef = fmin(maxMotorTorqueRight, fmax(motorTorqueRightRef, minMotorTorqueRight));

	// Report the saturated value back to the yaw rate PI as the previous output, which should prevent integrator windup since it's in incremental form
	float saturatedDM = (motorTorqueLeftRef - motorTorqueRightRef) / 2; // Again, flip the signs here if using CCW yaw
	previousYawTorqueRef = saturatedDM * GearRatio * TrackWidth / WheelRadiusLoaded;
}

void antiSpin()
{
	// This code aims to limit the slip ratios below about 0.1 in absolute value to prevent wheel spin and loss of grip

	if (velLong > MinVelLong){
		float slipRatioLeft = (angVelWheelLeft * WheelRadiusEffective - velLong) / velLong;
		float slipRatioRight = (angVelWheelRight * WheelRadiusEffective - velLong) / velLong;

		float limitFractionLeft = exp(-B_lambda * (fabs(slipRatioLeft) - A_lambda));
		limitFractionLeft = fmin(limitFractionLeft, 1);
		float limitFractionRight = exp(-B_lambda * (fabs(slipRatioRight) - A_lambda));
		limitFractionRight = fmin(limitFractionRight, 1);

		motorTorqueLeftRef = limitFractionLeft * motorTorqueLeftRef;
		motorTorqueRightRef = limitFractionRight * motorTorqueRightRef;
	}

	// NOTE: In principle we could recalculate previousYawTorqueRef here instead of in the torqueVectoring step,
	// but at least in the simulations it seems fine to keep integrating when the anti-spin kicks in.
	// Change this if necessary, but be aware it could cause unwanted behaviour since the anti-spin can limit the output quite aggressively.

	// Update: New simulation indicates that it might be benificial to do the recalculation here after all. Best to try both ways.
	// To change, move the last two lines from torqueVectoring() here.
}

void calculateMotorTorqueRef()
{
	// Calculates reference torque values to send to the motor controller and stores them in the global variables motorTorqueLeftRef and motorTorqueRightRef

	angVelMotorLeft = angVelWheelLeft * GearRatio;
	angVelMotorRight = angVelWheelRight * GearRatio;
	/* Replace the above code with the following if we're measuring motor speeds instead of wheel speeds
		angVelWheelLeft = angVelMotorLeft / GearRatio;
		angVelWheelRight = angVelMotorRight / GearRatio;
	*/

	//getMotorTorqueLimits();

	// Determine common mode torque
	float torqueCM = accInput * MaxCMTorqueFraction * fmin(maxMotorTorqueLeft, maxMotorTorqueRight);

	yawRateController();
	torqueVectoring();
	antiSpin();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
