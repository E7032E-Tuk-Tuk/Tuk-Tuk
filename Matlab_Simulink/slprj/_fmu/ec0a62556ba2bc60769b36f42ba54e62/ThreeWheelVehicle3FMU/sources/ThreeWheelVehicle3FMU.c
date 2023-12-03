/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "ThreeWheelVehicle3FMU_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int ThreeWheelVehicle3FMU_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  (data->localData[0]->realVars[346] /* inputRearLeftTorque variable */) = data->simulationInfo->inputVars[0];
  (data->localData[0]->realVars[347] /* inputRearRightTorque variable */) = data->simulationInfo->inputVars[1];
  (data->localData[0]->realVars[348] /* inputSteering variable */) = data->simulationInfo->inputVars[2];
  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[346].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[347].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[348].attribute.start;
  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[346].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[347].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[348].attribute.start = data->simulationInfo->inputVars[2];
  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[346].info.name;
  names[1] = (char *) data->modelData->realVarsData[347].info.name;
  names[2] = (char *) data->modelData->realVarsData[348].info.name;
  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[349] /* outActualSteeringAngle variable */);
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[350] /* outCarAcc[1] variable */);
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[351] /* outCarAcc[2] variable */);
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[352] /* outCarAngle variable */);
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[353] /* outCarAngularAcc variable */);
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[354] /* outCarAngularVelocity variable */);
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[355] /* outCarDistance variable */);
  data->simulationInfo->outputVars[7] = (data->localData[0]->realVars[356] /* outCarPosition[1] variable */);
  data->simulationInfo->outputVars[8] = (data->localData[0]->realVars[357] /* outCarPosition[2] variable */);
  data->simulationInfo->outputVars[9] = (data->localData[0]->realVars[358] /* outCarSpeed variable */);
  data->simulationInfo->outputVars[10] = (data->localData[0]->realVars[359] /* outCarVelocity[1] variable */);
  data->simulationInfo->outputVars[11] = (data->localData[0]->realVars[360] /* outCarVelocity[2] variable */);
  data->simulationInfo->outputVars[12] = (data->localData[0]->realVars[361] /* outEffRadiusFrontWheel variable */);
  data->simulationInfo->outputVars[13] = (data->localData[0]->realVars[362] /* outEffRadiusLeftWheel variable */);
  data->simulationInfo->outputVars[14] = (data->localData[0]->realVars[363] /* outEffRadiusRightWheel variable */);
  data->simulationInfo->outputVars[15] = (data->localData[0]->realVars[364] /* outForceFrontWheel[1,1] variable */);
  data->simulationInfo->outputVars[16] = (data->localData[0]->realVars[365] /* outForceFrontWheel[1,2] variable */);
  data->simulationInfo->outputVars[17] = (data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */);
  data->simulationInfo->outputVars[18] = (data->localData[0]->realVars[367] /* outForceLeftWheel[1,1] variable */);
  data->simulationInfo->outputVars[19] = (data->localData[0]->realVars[368] /* outForceLeftWheel[1,2] variable */);
  data->simulationInfo->outputVars[20] = (data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */);
  data->simulationInfo->outputVars[21] = (data->localData[0]->realVars[370] /* outForceRightWheel[1,1] variable */);
  data->simulationInfo->outputVars[22] = (data->localData[0]->realVars[371] /* outForceRightWheel[1,2] variable */);
  data->simulationInfo->outputVars[23] = (data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */);
  data->simulationInfo->outputVars[24] = (data->localData[0]->realVars[373] /* outSlipAngleFront variable */);
  data->simulationInfo->outputVars[25] = (data->localData[0]->realVars[374] /* outSlipAngleLeft variable */);
  data->simulationInfo->outputVars[26] = (data->localData[0]->realVars[375] /* outSlipAngleRight variable */);
  data->simulationInfo->outputVars[27] = (data->localData[0]->realVars[376] /* outSlipFrontWheel[1] variable */);
  data->simulationInfo->outputVars[28] = (data->localData[0]->realVars[377] /* outSlipFrontWheel[2] variable */);
  data->simulationInfo->outputVars[29] = (data->localData[0]->realVars[378] /* outSlipLeftWheel[1] variable */);
  data->simulationInfo->outputVars[30] = (data->localData[0]->realVars[379] /* outSlipLeftWheel[2] variable */);
  data->simulationInfo->outputVars[31] = (data->localData[0]->realVars[380] /* outSlipRatioFront variable */);
  data->simulationInfo->outputVars[32] = (data->localData[0]->realVars[381] /* outSlipRatioLeft variable */);
  data->simulationInfo->outputVars[33] = (data->localData[0]->realVars[382] /* outSlipRatioRight variable */);
  data->simulationInfo->outputVars[34] = (data->localData[0]->realVars[383] /* outSlipRightWheel[1] variable */);
  data->simulationInfo->outputVars[35] = (data->localData[0]->realVars[384] /* outSlipRightWheel[2] variable */);
  data->simulationInfo->outputVars[36] = (data->localData[0]->realVars[385] /* outTrollFront variable */);
  data->simulationInfo->outputVars[37] = (data->localData[0]->realVars[386] /* outTrollLeft variable */);
  data->simulationInfo->outputVars[38] = (data->localData[0]->realVars[387] /* outTrollRight variable */);
  data->simulationInfo->outputVars[39] = (data->localData[0]->realVars[388] /* outTurnRadOptimal variable */);
  data->simulationInfo->outputVars[40] = (data->localData[0]->realVars[389] /* outTurnRadReal variable */);
  data->simulationInfo->outputVars[41] = (data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */);
  data->simulationInfo->outputVars[42] = (data->localData[0]->realVars[391] /* outWeightTransfer[2] variable */);
  data->simulationInfo->outputVars[43] = (data->localData[0]->realVars[392] /* outWeightTransfer[3] variable */);
  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 1433
type: SIMPLE_ASSIGN
revolute.w = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  (data->localData[0]->realVars[1007] /* revolute.w DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1434
type: SIMPLE_ASSIGN
revolute.cylinder.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  (data->localData[0]->realVars[985] /* revolute.cylinder.R.w[3] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1435
type: SIMPLE_ASSIGN
$DER.revolute.phi = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  (data->localData[0]->realVars[80] /* der(revolute.phi) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1436
type: SIMPLE_ASSIGN
revolute.z = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  (data->localData[0]->realVars[1008] /* revolute.z variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1437
type: SIMPLE_ASSIGN
$DER.revolute.w = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  (data->localData[0]->realVars[81] /* der(revolute.w) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1438
type: SIMPLE_ASSIGN
front2.cylinder.r[3] = front2.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  (data->localData[0]->realVars[217] /* front2.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[53] /* front2.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1439
type: SIMPLE_ASSIGN
revolute.cylinder.r[3] = revolute.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  (data->localData[0]->realVars[994] /* revolute.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[309] /* revolute.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1440
type: SIMPLE_ASSIGN
$DER.body2.phi = body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  (data->localData[0]->realVars[40] /* der(body2.phi) DUMMY_DER */) = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1441
type: SIMPLE_ASSIGN
body2.sphere.r[3] = body2.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  (data->localData[0]->realVars[170] /* body2.sphere.r[3] variable */) = (data->simulationInfo->realParameter[29] /* body2.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1442
type: SIMPLE_ASSIGN
body2.sphere.R.w[3] = body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  (data->localData[0]->realVars[160] /* body2.sphere.R.w[3] variable */) = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1443
type: SIMPLE_ASSIGN
frontTrail.cylinder.r[3] = frontTrail.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  (data->localData[0]->realVars[244] /* frontTrail.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[65] /* frontTrail.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1444
type: SIMPLE_ASSIGN
body.sphere.r[3] = body.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  (data->localData[0]->realVars[137] /* body.sphere.r[3] variable */) = (data->simulationInfo->realParameter[20] /* body.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1445
type: SIMPLE_ASSIGN
body.sphere.r[2] = body.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  (data->localData[0]->realVars[136] /* body.sphere.r[2] variable */) = (data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */);
  TRACE_POP
}
/*
equation index: 1446
type: SIMPLE_ASSIGN
body.sphere.r[1] = body.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  (data->localData[0]->realVars[135] /* body.sphere.r[1] variable */) = (data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */);
  TRACE_POP
}
/*
equation index: 1447
type: SIMPLE_ASSIGN
body.sphere.R.w[3] = body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  (data->localData[0]->realVars[127] /* body.sphere.R.w[3] variable */) = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1448
type: SIMPLE_ASSIGN
front.cylinder.r[3] = front.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  (data->localData[0]->realVars[194] /* front.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[43] /* front.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1449
type: SIMPLE_ASSIGN
front.cylinder.r[2] = body.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  (data->localData[0]->realVars[193] /* front.cylinder.r[2] variable */) = (data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */);
  TRACE_POP
}
/*
equation index: 1450
type: SIMPLE_ASSIGN
front.cylinder.r[1] = body.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  (data->localData[0]->realVars[192] /* front.cylinder.r[1] variable */) = (data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */);
  TRACE_POP
}
/*
equation index: 1451
type: SIMPLE_ASSIGN
rear.cylinder.r[3] = rear.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  (data->localData[0]->realVars[730] /* rear.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[218] /* rear.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1452
type: SIMPLE_ASSIGN
rearRight.cylinder.r[3] = rearRight.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  (data->localData[0]->realVars[872] /* rearRight.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[268] /* rearRight.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1453
type: SIMPLE_ASSIGN
rearLeft.cylinder.r[3] = rearLeft.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  (data->localData[0]->realVars[756] /* rearLeft.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[228] /* rearLeft.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1454
type: SIMPLE_ASSIGN
frontWheel.rim2.r[3] = frontWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  (data->localData[0]->realVars[330] /* frontWheel.rim2.r[3] variable */) = (data->simulationInfo->realParameter[94] /* frontWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1455
type: SIMPLE_ASSIGN
frontWheel.rim1.r[3] = frontWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  (data->localData[0]->realVars[302] /* frontWheel.rim1.r[3] variable */) = (data->simulationInfo->realParameter[94] /* frontWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1456
type: SIMPLE_ASSIGN
frontWheel.cylinder.r[3] = frontWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  (data->localData[0]->realVars[263] /* frontWheel.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[94] /* frontWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1457
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r[3] = rearLeftWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  (data->localData[0]->realVars[849] /* rearLeftWheel.rim2.r[3] variable */) = (data->simulationInfo->realParameter[258] /* rearLeftWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1458
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r[3] = rearLeftWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  (data->localData[0]->realVars[821] /* rearLeftWheel.rim1.r[3] variable */) = (data->simulationInfo->realParameter[258] /* rearLeftWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1459
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r[3] = rearLeftWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  (data->localData[0]->realVars[782] /* rearLeftWheel.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[258] /* rearLeftWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1460
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r[3] = rearRightWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  (data->localData[0]->realVars[965] /* rearRightWheel.rim2.r[3] variable */) = (data->simulationInfo->realParameter[298] /* rearRightWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1461
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r[3] = rearRightWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  (data->localData[0]->realVars[937] /* rearRightWheel.rim1.r[3] variable */) = (data->simulationInfo->realParameter[298] /* rearRightWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1462
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r[3] = rearRightWheel.zPosition
*/
void ThreeWheelVehicle3FMU_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  (data->localData[0]->realVars[898] /* rearRightWheel.cylinder.r[3] variable */) = (data->simulationInfo->realParameter[298] /* rearRightWheel.zPosition PARAM */);
  TRACE_POP
}
/*
equation index: 1463
type: SIMPLE_ASSIGN
body2.w = body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  (data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */) = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1464
type: SIMPLE_ASSIGN
Pright = rearRightInertia.w * inputRearRightTorque
*/
void ThreeWheelVehicle3FMU_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  (data->localData[0]->realVars[96] /* Pright variable */) = ((data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */)) * ((data->localData[0]->realVars[347] /* inputRearRightTorque variable */));
  TRACE_POP
}
/*
equation index: 1465
type: SIMPLE_ASSIGN
Pleft = rearLeftInertia.w * inputRearLeftTorque
*/
void ThreeWheelVehicle3FMU_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  (data->localData[0]->realVars[95] /* Pleft variable */) = ((data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */)) * ((data->localData[0]->realVars[346] /* inputRearLeftTorque variable */));
  TRACE_POP
}
/*
equation index: 1466
type: SIMPLE_ASSIGN
outCarDistance = abs(body.r[1]) + abs(body.r[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  (data->localData[0]->realVars[355] /* outCarDistance variable */) = fabs((data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */)) + fabs((data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */));
  TRACE_POP
}
/*
equation index: 1467
type: SIMPLE_ASSIGN
outCarSpeed = sqrt(body.v[1] ^ 2.0 + body.v[2] ^ 2.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = (data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */);
  tmp1 = (data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */);
  (data->localData[0]->realVars[358] /* outCarSpeed variable */) = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1468
type: SIMPLE_ASSIGN
outTurnRadReal = min(sqrt(outCarSpeed ^ 2.0 / (body.w ^ 2.0 + 1e-09)), turnRadiusMAX)
*/
void ThreeWheelVehicle3FMU_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = (data->localData[0]->realVars[358] /* outCarSpeed variable */);
  tmp3 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[389] /* outTurnRadReal variable */) = fmin(sqrt(DIVISION_SIM((tmp2 * tmp2),(tmp3 * tmp3) + 1e-09,"body.w ^ 2.0 + 1e-09",equationIndexes)),(data->simulationInfo->realParameter[317] /* turnRadiusMAX PARAM */));
  TRACE_POP
}
/*
equation index: 1469
type: SIMPLE_ASSIGN
$DER.body.phi = body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  (data->localData[0]->realVars[12] /* der(body.phi) STATE_DER */) = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1470
type: SIMPLE_ASSIGN
$DER.body.r[2] = body.v[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  (data->localData[0]->realVars[14] /* der(body.r[2]) STATE_DER */) = (data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */);
  TRACE_POP
}
/*
equation index: 1471
type: SIMPLE_ASSIGN
$DER.body.r[1] = body.v[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  (data->localData[0]->realVars[13] /* der(body.r[1]) STATE_DER */) = (data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */);
  TRACE_POP
}
/*
equation index: 1472
type: SIMPLE_ASSIGN
gearRight.flange_b.tau = (-gearRight.ratio) * inputRearRightTorque
*/
void ThreeWheelVehicle3FMU_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  (data->localData[0]->realVars[343] /* gearRight.flange_b.tau variable */) = ((-(data->simulationInfo->realParameter[98] /* gearRight.ratio PARAM */))) * ((data->localData[0]->realVars[347] /* inputRearRightTorque variable */));
  TRACE_POP
}
/*
equation index: 1473
type: SIMPLE_ASSIGN
gearRight.phi_a = gearRight.ratio * rearRightInertia.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  (data->localData[0]->realVars[344] /* gearRight.phi_a variable */) = ((data->simulationInfo->realParameter[98] /* gearRight.ratio PARAM */)) * ((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */));
  TRACE_POP
}
/*
equation index: 1474
type: SIMPLE_ASSIGN
gearLeft.flange_b.tau = (-gearLeft.ratio) * inputRearLeftTorque
*/
void ThreeWheelVehicle3FMU_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  (data->localData[0]->realVars[340] /* gearLeft.flange_b.tau variable */) = ((-(data->simulationInfo->realParameter[96] /* gearLeft.ratio PARAM */))) * ((data->localData[0]->realVars[346] /* inputRearLeftTorque variable */));
  TRACE_POP
}
/*
equation index: 1475
type: SIMPLE_ASSIGN
gearLeft.phi_a = gearLeft.ratio * rearLeftInertia.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  (data->localData[0]->realVars[341] /* gearLeft.phi_a variable */) = ((data->simulationInfo->realParameter[96] /* gearLeft.ratio PARAM */)) * ((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */));
  TRACE_POP
}
/*
equation index: 1476
type: SIMPLE_ASSIGN
$DER.frontInertia.phi = frontInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  (data->localData[0]->realVars[18] /* der(frontInertia.phi) STATE_DER */) = (data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */);
  TRACE_POP
}
/*
equation index: 1477
type: SIMPLE_ASSIGN
$DER.rearRightInertia.phi = rearRightInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  (data->localData[0]->realVars[22] /* der(rearRightInertia.phi) STATE_DER */) = (data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */);
  TRACE_POP
}
/*
equation index: 1478
type: SIMPLE_ASSIGN
$DER.rearLeftInertia.phi = rearLeftInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  (data->localData[0]->realVars[20] /* der(rearLeftInertia.phi) STATE_DER */) = (data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */);
  TRACE_POP
}
/*
equation index: 1479
type: ARRAY_CALL_ASSIGN

planarWorld.gravityArrow.r_head = smooth(0, if noEvent(sqrt(planarWorld.constantGravity[1] ^ 2.0 + planarWorld.constantGravity[2] ^ 2.0) >= 1e-13) then {planarWorld.constantGravity[1] / sqrt(planarWorld.constantGravity[1] ^ 2.0 + planarWorld.constantGravity[2] ^ 2.0), planarWorld.constantGravity[2] / sqrt(planarWorld.constantGravity[1] ^ 2.0 + planarWorld.constantGravity[2] ^ 2.0), 0.0} else {10000000000000.0 * planarWorld.constantGravity[1], 10000000000000.0 * planarWorld.constantGravity[2], 0.0}) * planarWorld.gravityArrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  real_array tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  real_array tmp12;
  modelica_boolean tmp13;
  real_array tmp14;
  real_array tmp15;
  tmp4 = (data->simulationInfo->realParameter[116] /* planarWorld.constantGravity[1] PARAM */);
  tmp5 = (data->simulationInfo->realParameter[117] /* planarWorld.constantGravity[2] PARAM */);
  tmp6 = GreaterEq(sqrt((tmp4 * tmp4) + (tmp5 * tmp5)),1e-13);
  tmp13 = (modelica_boolean)tmp6;
  if(tmp13)
  {
    tmp8 = (data->simulationInfo->realParameter[116] /* planarWorld.constantGravity[1] PARAM */);
    tmp9 = (data->simulationInfo->realParameter[117] /* planarWorld.constantGravity[2] PARAM */);
    tmp10 = (data->simulationInfo->realParameter[116] /* planarWorld.constantGravity[1] PARAM */);
    tmp11 = (data->simulationInfo->realParameter[117] /* planarWorld.constantGravity[2] PARAM */);
    array_alloc_scalar_real_array(&tmp7, 3, (modelica_real)DIVISION_SIM((data->simulationInfo->realParameter[116] /* planarWorld.constantGravity[1] PARAM */),sqrt((tmp8 * tmp8) + (tmp9 * tmp9)),"sqrt(planarWorld.constantGravity[1] ^ 2.0 + planarWorld.constantGravity[2] ^ 2.0)",equationIndexes), (modelica_real)DIVISION_SIM((data->simulationInfo->realParameter[117] /* planarWorld.constantGravity[2] PARAM */),sqrt((tmp10 * tmp10) + (tmp11 * tmp11)),"sqrt(planarWorld.constantGravity[1] ^ 2.0 + planarWorld.constantGravity[2] ^ 2.0)",equationIndexes), (modelica_real)0.0);
    tmp14 = tmp7;
  }
  else
  {
    array_alloc_scalar_real_array(&tmp12, 3, (modelica_real)(10000000000000.0) * ((data->simulationInfo->realParameter[116] /* planarWorld.constantGravity[1] PARAM */)), (modelica_real)(10000000000000.0) * ((data->simulationInfo->realParameter[117] /* planarWorld.constantGravity[2] PARAM */)), (modelica_real)0.0);
    tmp14 = tmp12;
  }
  real_array_create(&tmp15, ((modelica_real*)&((&(data->localData[0]->realVars[706] /* planarWorld.gravityArrow.r_head[1] variable */))[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(mul_alloc_real_array_scalar(tmp14, (data->simulationInfo->realParameter[201] /* planarWorld.gravityArrowLength PARAM */)), tmp15);
  TRACE_POP
}
/*
equation index: 1480
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.length = sqrt(planarWorld.gravityArrow.r_head * planarWorld.gravityArrow.r_head)
*/
void ThreeWheelVehicle3FMU_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  real_array tmp16;
  real_array tmp17;
  modelica_real tmp18;
  real_array_create(&tmp16, ((modelica_real*)&((&data->localData[0]->realVars[706] /* planarWorld.gravityArrow.r_head[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp17, ((modelica_real*)&((&data->localData[0]->realVars[706] /* planarWorld.gravityArrow.r_head[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp18 = mul_real_scalar_product(tmp16, tmp17);
  if(!(tmp18 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(planarWorld.gravityArrow.r_head * planarWorld.gravityArrow.r_head) was %g should be >= 0", tmp18);
    }
  }
  (data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */) = sqrt(tmp18);
  TRACE_POP
}
/*
equation index: 1481
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.rxvisobj[3] = if noEvent(planarWorld.gravityArrow.length < 1e-10) then 0.0 else planarWorld.gravityArrow.r_head[3] / planarWorld.gravityArrow.length
*/
void ThreeWheelVehicle3FMU_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  modelica_boolean tmp19;
  tmp19 = Less((data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */),1e-10);
  (data->localData[0]->realVars[713] /* planarWorld.gravityArrow.rxvisobj[3] variable */) = (tmp19?0.0:DIVISION_SIM((data->localData[0]->realVars[708] /* planarWorld.gravityArrow.r_head[3] variable */),(data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */),"planarWorld.gravityArrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 1482
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.rxvisobj[2] = if noEvent(planarWorld.gravityArrow.length < 1e-10) then 0.0 else planarWorld.gravityArrow.r_head[2] / planarWorld.gravityArrow.length
*/
void ThreeWheelVehicle3FMU_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  modelica_boolean tmp20;
  tmp20 = Less((data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */),1e-10);
  (data->localData[0]->realVars[712] /* planarWorld.gravityArrow.rxvisobj[2] variable */) = (tmp20?0.0:DIVISION_SIM((data->localData[0]->realVars[707] /* planarWorld.gravityArrow.r_head[2] variable */),(data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */),"planarWorld.gravityArrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 1483
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLength = max(0.0, planarWorld.gravityArrow.length - planarWorld.gravityArrowDiameter * 4.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  (data->localData[0]->realVars[698] /* planarWorld.gravityArrow.arrowLength variable */) = fmax(0.0,(data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */) - (((data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */)) * (4.0)));
  TRACE_POP
}
/*
equation index: 1484
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.r[3] = planarWorld.gravityArrow.rxvisobj[3] * planarWorld.gravityArrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  (data->localData[0]->realVars[691] /* planarWorld.gravityArrow.arrowHead.r[3] variable */) = ((data->localData[0]->realVars[713] /* planarWorld.gravityArrow.rxvisobj[3] variable */)) * ((data->localData[0]->realVars[698] /* planarWorld.gravityArrow.arrowLength variable */));
  TRACE_POP
}
/*
equation index: 1485
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.r[2] = planarWorld.gravityArrowTail[2] + planarWorld.gravityArrow.rxvisobj[2] * planarWorld.gravityArrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  (data->localData[0]->realVars[690] /* planarWorld.gravityArrow.arrowHead.r[2] variable */) = (data->simulationInfo->realParameter[203] /* planarWorld.gravityArrowTail[2] PARAM */) + ((data->localData[0]->realVars[712] /* planarWorld.gravityArrow.rxvisobj[2] variable */)) * ((data->localData[0]->realVars[698] /* planarWorld.gravityArrow.arrowLength variable */));
  TRACE_POP
}
/*
equation index: 1486
type: SIMPLE_ASSIGN
$cse1 = max(0.0, planarWorld.gravityArrow.length - planarWorld.gravityArrow.arrowLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  (data->localData[0]->realVars[82] /* $cse1 variable */) = fmax(0.0,(data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */) - (data->localData[0]->realVars[698] /* planarWorld.gravityArrow.arrowLength variable */));
  TRACE_POP
}
/*
equation index: 1487
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.headLength = $cse1
*/
void ThreeWheelVehicle3FMU_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  (data->localData[0]->realVars[703] /* planarWorld.gravityArrow.headLength variable */) = (data->localData[0]->realVars[82] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 1488
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.rxvisobj[1] = if noEvent(planarWorld.gravityArrow.length < 1e-10) then 1.0 else planarWorld.gravityArrow.r_head[1] / planarWorld.gravityArrow.length
*/
void ThreeWheelVehicle3FMU_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  modelica_boolean tmp21;
  tmp21 = Less((data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */),1e-10);
  (data->localData[0]->realVars[711] /* planarWorld.gravityArrow.rxvisobj[1] variable */) = (tmp21?1.0:DIVISION_SIM((data->localData[0]->realVars[706] /* planarWorld.gravityArrow.r_head[1] variable */),(data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */),"planarWorld.gravityArrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 1489
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.r[1] = planarWorld.gravityArrowTail[1] + planarWorld.gravityArrow.rxvisobj[1] * planarWorld.gravityArrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  (data->localData[0]->realVars[689] /* planarWorld.gravityArrow.arrowHead.r[1] variable */) = (data->simulationInfo->realParameter[202] /* planarWorld.gravityArrowTail[1] PARAM */) + ((data->localData[0]->realVars[711] /* planarWorld.gravityArrow.rxvisobj[1] variable */)) * ((data->localData[0]->realVars[698] /* planarWorld.gravityArrow.arrowLength variable */));
  TRACE_POP
}
/*
equation index: 1490
type: ARRAY_CALL_ASSIGN

planarWorld.coordinateSystem.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void ThreeWheelVehicle3FMU_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  real_array tmp22;
  real_array_create(&tmp22, ((modelica_real*)&((&(data->localData[0]->realVars[623] /* planarWorld.coordinateSystem.z_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT3, _OMC_LIT2), tmp22);
  TRACE_POP
}
/*
equation index: 1491
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].lengthDirection[2] = planarWorld.coordinateSystem.z_label.R_lines[1,2] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  (data->localData[0]->realVars[642] /* planarWorld.coordinateSystem.z_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[624] /* planarWorld.coordinateSystem.z_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1492
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].r[1] = planarWorld.coordinateSystem.z_label.R_lines[2,1] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  (data->localData[0]->realVars[647] /* planarWorld.coordinateSystem.z_label.cylinders[3].r[1] variable */) = ((data->localData[0]->realVars[626] /* planarWorld.coordinateSystem.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1493
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].r[2] = planarWorld.coordinateSystem.z_label.R_lines[2,2] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  (data->localData[0]->realVars[648] /* planarWorld.coordinateSystem.z_label.cylinders[3].r[2] variable */) = ((data->localData[0]->realVars[627] /* planarWorld.coordinateSystem.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1494
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].lengthDirection[2] = (planarWorld.coordinateSystem.z_label.R_lines[1,2] - planarWorld.coordinateSystem.z_label.R_lines[2,2]) * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  (data->localData[0]->realVars[645] /* planarWorld.coordinateSystem.z_label.cylinders[3].lengthDirection[2] variable */) = ((data->localData[0]->realVars[624] /* planarWorld.coordinateSystem.z_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[627] /* planarWorld.coordinateSystem.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1495
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].r[3] = planarWorld.coordinateSystem.labelStart + planarWorld.coordinateSystem.z_label.R_lines[2,3] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  (data->localData[0]->realVars[649] /* planarWorld.coordinateSystem.z_label.cylinders[3].r[3] variable */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */) + ((data->localData[0]->realVars[628] /* planarWorld.coordinateSystem.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1496
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].lengthDirection[1] = planarWorld.coordinateSystem.z_label.R_lines[1,1] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  (data->localData[0]->realVars[641] /* planarWorld.coordinateSystem.z_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[623] /* planarWorld.coordinateSystem.z_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1497
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].lengthDirection[1] = (planarWorld.coordinateSystem.z_label.R_lines[1,1] - planarWorld.coordinateSystem.z_label.R_lines[2,1]) * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  (data->localData[0]->realVars[644] /* planarWorld.coordinateSystem.z_label.cylinders[3].lengthDirection[1] variable */) = ((data->localData[0]->realVars[623] /* planarWorld.coordinateSystem.z_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[626] /* planarWorld.coordinateSystem.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1498
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].lengthDirection[3] = planarWorld.coordinateSystem.z_label.R_lines[1,3] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1498};
  (data->localData[0]->realVars[643] /* planarWorld.coordinateSystem.z_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[625] /* planarWorld.coordinateSystem.z_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1499
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].lengthDirection[3] = (planarWorld.coordinateSystem.z_label.R_lines[1,3] - planarWorld.coordinateSystem.z_label.R_lines[2,3]) * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  (data->localData[0]->realVars[646] /* planarWorld.coordinateSystem.z_label.cylinders[3].lengthDirection[3] variable */) = ((data->localData[0]->realVars[625] /* planarWorld.coordinateSystem.z_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[628] /* planarWorld.coordinateSystem.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1500
type: ARRAY_CALL_ASSIGN

planarWorld.coordinateSystem.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void ThreeWheelVehicle3FMU_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1500};
  real_array tmp23;
  real_array_create(&tmp23, ((modelica_real*)&((&(data->localData[0]->realVars[535] /* planarWorld.coordinateSystem.y_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT2, _OMC_LIT4), tmp23);
  TRACE_POP
}
/*
equation index: 1501
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].r[3] = planarWorld.coordinateSystem.y_label.R_lines[2,3] * planarWorld.coordinateSystem.y_label.lines[2,1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  (data->localData[0]->realVars[559] /* planarWorld.coordinateSystem.y_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[540] /* planarWorld.coordinateSystem.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1502
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].r[1] = planarWorld.coordinateSystem.y_label.R_lines[2,1] * planarWorld.coordinateSystem.y_label.lines[2,1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1502};
  (data->localData[0]->realVars[557] /* planarWorld.coordinateSystem.y_label.cylinders[2].r[1] variable */) = ((data->localData[0]->realVars[538] /* planarWorld.coordinateSystem.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1503
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].lengthDirection[1] = planarWorld.coordinateSystem.y_label.R_lines[1,1] * planarWorld.coordinateSystem.scaledLabel + planarWorld.coordinateSystem.y_label.R_lines[2,1] * planarWorld.coordinateSystem.y_label.lines[1,2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1503};
  (data->localData[0]->realVars[551] /* planarWorld.coordinateSystem.y_label.cylinders[1].lengthDirection[1] variable */) = ((data->localData[0]->realVars[535] /* planarWorld.coordinateSystem.y_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) + ((data->localData[0]->realVars[538] /* planarWorld.coordinateSystem.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[574] /* planarWorld.coordinateSystem.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1504
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].lengthDirection[1] = planarWorld.coordinateSystem.y_label.R_lines[1,1] * planarWorld.coordinateSystem.y_label.lines[2,2,1] + planarWorld.coordinateSystem.y_label.R_lines[2,1] * (planarWorld.coordinateSystem.y_label.lines[2,2,2] - planarWorld.coordinateSystem.y_label.lines[2,1,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1504};
  (data->localData[0]->realVars[554] /* planarWorld.coordinateSystem.y_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[535] /* planarWorld.coordinateSystem.y_label.R_lines[1,1] variable */)) * ((data->localData[0]->realVars[577] /* planarWorld.coordinateSystem.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[538] /* planarWorld.coordinateSystem.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[578] /* planarWorld.coordinateSystem.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1505
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].lengthDirection[2] = planarWorld.coordinateSystem.y_label.R_lines[1,2] * planarWorld.coordinateSystem.scaledLabel + planarWorld.coordinateSystem.y_label.R_lines[2,2] * planarWorld.coordinateSystem.y_label.lines[1,2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  (data->localData[0]->realVars[552] /* planarWorld.coordinateSystem.y_label.cylinders[1].lengthDirection[2] variable */) = ((data->localData[0]->realVars[536] /* planarWorld.coordinateSystem.y_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) + ((data->localData[0]->realVars[539] /* planarWorld.coordinateSystem.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[574] /* planarWorld.coordinateSystem.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1506
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].r[2] = planarWorld.coordinateSystem.labelStart + planarWorld.coordinateSystem.y_label.R_lines[2,2] * planarWorld.coordinateSystem.y_label.lines[2,1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1506};
  (data->localData[0]->realVars[558] /* planarWorld.coordinateSystem.y_label.cylinders[2].r[2] variable */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */) + ((data->localData[0]->realVars[539] /* planarWorld.coordinateSystem.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1507
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].lengthDirection[2] = planarWorld.coordinateSystem.y_label.R_lines[1,2] * planarWorld.coordinateSystem.y_label.lines[2,2,1] + planarWorld.coordinateSystem.y_label.R_lines[2,2] * (planarWorld.coordinateSystem.y_label.lines[2,2,2] - planarWorld.coordinateSystem.y_label.lines[2,1,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  (data->localData[0]->realVars[555] /* planarWorld.coordinateSystem.y_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[536] /* planarWorld.coordinateSystem.y_label.R_lines[1,2] variable */)) * ((data->localData[0]->realVars[577] /* planarWorld.coordinateSystem.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[539] /* planarWorld.coordinateSystem.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[578] /* planarWorld.coordinateSystem.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1508
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].lengthDirection[3] = planarWorld.coordinateSystem.y_label.R_lines[1,3] * planarWorld.coordinateSystem.scaledLabel + planarWorld.coordinateSystem.y_label.R_lines[2,3] * planarWorld.coordinateSystem.y_label.lines[1,2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  (data->localData[0]->realVars[553] /* planarWorld.coordinateSystem.y_label.cylinders[1].lengthDirection[3] variable */) = ((data->localData[0]->realVars[537] /* planarWorld.coordinateSystem.y_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) + ((data->localData[0]->realVars[540] /* planarWorld.coordinateSystem.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[574] /* planarWorld.coordinateSystem.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1509
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].lengthDirection[3] = planarWorld.coordinateSystem.y_label.R_lines[1,3] * planarWorld.coordinateSystem.y_label.lines[2,2,1] + planarWorld.coordinateSystem.y_label.R_lines[2,3] * (planarWorld.coordinateSystem.y_label.lines[2,2,2] - planarWorld.coordinateSystem.y_label.lines[2,1,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  (data->localData[0]->realVars[556] /* planarWorld.coordinateSystem.y_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[537] /* planarWorld.coordinateSystem.y_label.R_lines[1,3] variable */)) * ((data->localData[0]->realVars[577] /* planarWorld.coordinateSystem.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[540] /* planarWorld.coordinateSystem.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[578] /* planarWorld.coordinateSystem.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1510
type: ARRAY_CALL_ASSIGN

planarWorld.coordinateSystem.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void ThreeWheelVehicle3FMU_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  real_array tmp24;
  real_array_create(&tmp24, ((modelica_real*)&((&(data->localData[0]->realVars[450] /* planarWorld.coordinateSystem.x_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT1, _OMC_LIT2), tmp24);
  TRACE_POP
}
/*
equation index: 1511
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].r[3] = planarWorld.coordinateSystem.x_label.R_lines[2,3] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  (data->localData[0]->realVars[474] /* planarWorld.coordinateSystem.x_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[455] /* planarWorld.coordinateSystem.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1512
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].lengthDirection[3] = planarWorld.coordinateSystem.scaledLabel * (planarWorld.coordinateSystem.x_label.R_lines[1,3] + planarWorld.coordinateSystem.x_label.R_lines[2,3])
*/
void ThreeWheelVehicle3FMU_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  (data->localData[0]->realVars[468] /* planarWorld.coordinateSystem.x_label.cylinders[1].lengthDirection[3] variable */) = ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) * ((data->localData[0]->realVars[452] /* planarWorld.coordinateSystem.x_label.R_lines[1,3] variable */) + (data->localData[0]->realVars[455] /* planarWorld.coordinateSystem.x_label.R_lines[2,3] variable */));
  TRACE_POP
}
/*
equation index: 1513
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].lengthDirection[3] = (planarWorld.coordinateSystem.x_label.R_lines[1,3] - planarWorld.coordinateSystem.x_label.R_lines[2,3]) * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  (data->localData[0]->realVars[471] /* planarWorld.coordinateSystem.x_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[452] /* planarWorld.coordinateSystem.x_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[455] /* planarWorld.coordinateSystem.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1514
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].lengthDirection[1] = planarWorld.coordinateSystem.scaledLabel * (planarWorld.coordinateSystem.x_label.R_lines[1,1] + planarWorld.coordinateSystem.x_label.R_lines[2,1])
*/
void ThreeWheelVehicle3FMU_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  (data->localData[0]->realVars[466] /* planarWorld.coordinateSystem.x_label.cylinders[1].lengthDirection[1] variable */) = ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) * ((data->localData[0]->realVars[450] /* planarWorld.coordinateSystem.x_label.R_lines[1,1] variable */) + (data->localData[0]->realVars[453] /* planarWorld.coordinateSystem.x_label.R_lines[2,1] variable */));
  TRACE_POP
}
/*
equation index: 1515
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].r[1] = planarWorld.coordinateSystem.labelStart + planarWorld.coordinateSystem.x_label.R_lines[2,1] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  (data->localData[0]->realVars[472] /* planarWorld.coordinateSystem.x_label.cylinders[2].r[1] variable */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */) + ((data->localData[0]->realVars[453] /* planarWorld.coordinateSystem.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1516
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].lengthDirection[1] = (planarWorld.coordinateSystem.x_label.R_lines[1,1] - planarWorld.coordinateSystem.x_label.R_lines[2,1]) * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  (data->localData[0]->realVars[469] /* planarWorld.coordinateSystem.x_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[450] /* planarWorld.coordinateSystem.x_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[453] /* planarWorld.coordinateSystem.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1517
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].r[2] = planarWorld.coordinateSystem.x_label.R_lines[2,2] * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  (data->localData[0]->realVars[473] /* planarWorld.coordinateSystem.x_label.cylinders[2].r[2] variable */) = ((data->localData[0]->realVars[454] /* planarWorld.coordinateSystem.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1518
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].lengthDirection[2] = planarWorld.coordinateSystem.scaledLabel * (planarWorld.coordinateSystem.x_label.R_lines[1,2] + planarWorld.coordinateSystem.x_label.R_lines[2,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  (data->localData[0]->realVars[467] /* planarWorld.coordinateSystem.x_label.cylinders[1].lengthDirection[2] variable */) = ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) * ((data->localData[0]->realVars[451] /* planarWorld.coordinateSystem.x_label.R_lines[1,2] variable */) + (data->localData[0]->realVars[454] /* planarWorld.coordinateSystem.x_label.R_lines[2,2] variable */));
  TRACE_POP
}
/*
equation index: 1519
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].lengthDirection[2] = (planarWorld.coordinateSystem.x_label.R_lines[1,2] - planarWorld.coordinateSystem.x_label.R_lines[2,2]) * planarWorld.coordinateSystem.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  (data->localData[0]->realVars[470] /* planarWorld.coordinateSystem.x_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[451] /* planarWorld.coordinateSystem.x_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[454] /* planarWorld.coordinateSystem.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1520
type: SIMPLE_ASSIGN
outCarPosition[1] = body.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  (data->localData[0]->realVars[356] /* outCarPosition[1] variable */) = (data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */);
  TRACE_POP
}
/*
equation index: 1521
type: SIMPLE_ASSIGN
outCarPosition[2] = body.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  (data->localData[0]->realVars[357] /* outCarPosition[2] variable */) = (data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */);
  TRACE_POP
}
/*
equation index: 1522
type: SIMPLE_ASSIGN
outCarAngle = -body.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  (data->localData[0]->realVars[352] /* outCarAngle variable */) = (-(data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}
/*
equation index: 1523
type: SIMPLE_ASSIGN
outCarAngularVelocity = -body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  (data->localData[0]->realVars[354] /* outCarAngularVelocity variable */) = (-(data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1524
type: SIMPLE_ASSIGN
revolute.phi = neg.k * inputSteering
*/
void ThreeWheelVehicle3FMU_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  (data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */) = ((data->simulationInfo->realParameter[112] /* neg.k PARAM */)) * ((data->localData[0]->realVars[348] /* inputSteering variable */));
  TRACE_POP
}
/*
equation index: 1525
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[2,1] = -sin(revolute.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  (data->localData[0]->realVars[980] /* revolute.cylinder.R.T[2,1] variable */) = (-sin((data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 1526
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[1,2] = -revolute.cylinder.R.T[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  (data->localData[0]->realVars[978] /* revolute.cylinder.R.T[1,2] variable */) = (-(data->localData[0]->realVars[980] /* revolute.cylinder.R.T[2,1] variable */));
  TRACE_POP
}
/*
equation index: 1527
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[2,2] = cos(revolute.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  (data->localData[0]->realVars[981] /* revolute.cylinder.R.T[2,2] variable */) = cos((data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1528
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[1,1] = revolute.cylinder.R.T[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  (data->localData[0]->realVars[977] /* revolute.cylinder.R.T[1,1] variable */) = (data->localData[0]->realVars[981] /* revolute.cylinder.R.T[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1529
type: SIMPLE_ASSIGN
outTurnRadOptimal = min(sqrt(backLength ^ 2.0 + (backLength + frontLength) ^ 2.0 / (tan(revolute.phi) ^ 2.0 + 1e-09)), turnRadiusMAX)
*/
void ThreeWheelVehicle3FMU_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  tmp25 = (data->simulationInfo->realParameter[11] /* backLength PARAM */);
  tmp26 = (data->simulationInfo->realParameter[11] /* backLength PARAM */) + (data->simulationInfo->realParameter[55] /* frontLength PARAM */);
  tmp27 = tan((data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */));
  (data->localData[0]->realVars[388] /* outTurnRadOptimal variable */) = fmin(sqrt((tmp25 * tmp25) + DIVISION_SIM((tmp26 * tmp26),(tmp27 * tmp27) + 1e-09,"tan(revolute.phi) ^ 2.0 + 1e-09",equationIndexes)),(data->simulationInfo->realParameter[317] /* turnRadiusMAX PARAM */));
  TRACE_POP
}
/*
equation index: 1530
type: SIMPLE_ASSIGN
body2.phi = body.phi + revolute.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  (data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */) = (data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */) + (data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1531
type: SIMPLE_ASSIGN
frontWheel.R[2,1] = sin(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  (data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */) = sin((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1532
type: SIMPLE_ASSIGN
$DER.frontTrail.R[2,2] = (-frontWheel.R[2,1]) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  (data->localData[0]->realVars[57] /* der(frontTrail.R[2,2]) DUMMY_DER */) = ((-(data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1533
type: SIMPLE_ASSIGN
body2.sphere.R.T[1,2] = frontWheel.R[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  (data->localData[0]->realVars[153] /* body2.sphere.R.T[1,2] variable */) = (data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1534
type: SIMPLE_ASSIGN
frontTrail.R[2,1] = frontWheel.R[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  (data->localData[0]->realVars[233] /* frontTrail.R[2,1] DUMMY_STATE */) = (data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1535
type: SIMPLE_ASSIGN
body2.sphere.R.T[2,1] = -frontWheel.R[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  (data->localData[0]->realVars[155] /* body2.sphere.R.T[2,1] variable */) = (-(data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */));
  TRACE_POP
}
/*
equation index: 1536
type: SIMPLE_ASSIGN
frontWheel.R[2,2] = cos(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  (data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */) = cos((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1537
type: SIMPLE_ASSIGN
frontTrail.r0[1] = frontWheel.R[2,2] * frontTrail.r[1] - frontWheel.R[2,1] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  (data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) - (((data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1538
type: SIMPLE_ASSIGN
frontTrail.cylinder.lengthDirection[1] = frontTrail.r0[1] / frontTrail.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  (data->localData[0]->realVars[239] /* frontTrail.cylinder.lengthDirection[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */),(data->simulationInfo->realParameter[60] /* frontTrail.l PARAM */),"frontTrail.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1539
type: SIMPLE_ASSIGN
frontTrail.r0[2] = frontWheel.R[2,1] * frontTrail.r[1] + frontWheel.R[2,2] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  (data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) + ((data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1540
type: SIMPLE_ASSIGN
frontTrail.cylinder.lengthDirection[2] = frontTrail.r0[2] / frontTrail.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  (data->localData[0]->realVars[240] /* frontTrail.cylinder.lengthDirection[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */),(data->simulationInfo->realParameter[60] /* frontTrail.l PARAM */),"frontTrail.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1541
type: SIMPLE_ASSIGN
$DER.frontTrail.R[2,1] = frontWheel.R[2,2] * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  (data->localData[0]->realVars[56] /* der(frontTrail.R[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1542
type: SIMPLE_ASSIGN
$DER.frontTrail.r0[1] = $DER.frontTrail.R[2,2] * frontTrail.r[1] - $DER.frontTrail.R[2,1] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  (data->localData[0]->realVars[58] /* der(frontTrail.r0[1]) DUMMY_DER */) = ((data->localData[0]->realVars[57] /* der(frontTrail.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) - (((data->localData[0]->realVars[56] /* der(frontTrail.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1543
type: SIMPLE_ASSIGN
$DER.frontTrail.r0[2] = $DER.frontTrail.R[2,1] * frontTrail.r[1] + $DER.frontTrail.R[2,2] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1543};
  (data->localData[0]->realVars[59] /* der(frontTrail.r0[2]) DUMMY_DER */) = ((data->localData[0]->realVars[56] /* der(frontTrail.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) + ((data->localData[0]->realVars[57] /* der(frontTrail.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1544
type: SIMPLE_ASSIGN
frontWheel.e0[1] = frontWheel.R[2,2] * frontWheel.e[1] - frontWheel.R[2,1] * frontWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1544};
  (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */) = ((data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[71] /* frontWheel.e[1] PARAM */)) - (((data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[72] /* frontWheel.e[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1545
type: SIMPLE_ASSIGN
frontWheel.cylinder.r_shape[2] = (-0.03) * frontWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1545};
  (data->localData[0]->realVars[265] /* frontWheel.cylinder.r_shape[2] variable */) = (-0.03) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1546
type: SIMPLE_ASSIGN
frontWheel.e0[2] = frontWheel.R[2,1] * frontWheel.e[1] + frontWheel.R[2,2] * frontWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1546};
  (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */) = ((data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[71] /* frontWheel.e[1] PARAM */)) + ((data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[72] /* frontWheel.e[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1547
type: SIMPLE_ASSIGN
frontWheel.cylinder.r_shape[1] = 0.03 * frontWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1547};
  (data->localData[0]->realVars[264] /* frontWheel.cylinder.r_shape[1] variable */) = (0.03) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1548
type: SIMPLE_ASSIGN
frontTrail.R[2,2] = frontWheel.R[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1548};
  (data->localData[0]->realVars[234] /* frontTrail.R[2,2] DUMMY_STATE */) = (data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1549
type: SIMPLE_ASSIGN
body2.sphere.R.T[1,1] = frontWheel.R[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1549};
  (data->localData[0]->realVars[152] /* body2.sphere.R.T[1,1] variable */) = (data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1550
type: SIMPLE_ASSIGN
body2.sphere.R.T[2,2] = frontWheel.R[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1550};
  (data->localData[0]->realVars[156] /* body2.sphere.R.T[2,2] variable */) = (data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1551
type: SIMPLE_ASSIGN
outActualSteeringAngle = neg2.k * revolute.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1551};
  (data->localData[0]->realVars[349] /* outActualSteeringAngle variable */) = ((data->simulationInfo->realParameter[113] /* neg2.k PARAM */)) * ((data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1552
type: SIMPLE_ASSIGN
$cse16 = sin(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1552};
  (data->localData[0]->realVars[89] /* $cse16 variable */) = sin((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */));
  TRACE_POP
}
/*
equation index: 1553
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[3,3] = cos(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1553};
  (data->localData[0]->realVars[923] /* rearRightWheel.rim1.R.T[3,3] variable */) = cos((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */));
  TRACE_POP
}
/*
equation index: 1554
type: SIMPLE_ASSIGN
$cse15 = sin(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1554};
  (data->localData[0]->realVars[88] /* $cse15 variable */) = sin(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */));
  TRACE_POP
}
/*
equation index: 1555
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[3,3] = cos(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1555};
  (data->localData[0]->realVars[951] /* rearRightWheel.rim2.R.T[3,3] variable */) = cos(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */));
  TRACE_POP
}
/*
equation index: 1556
type: SIMPLE_ASSIGN
rearRightWheel.vAdhesion = max(rearRightWheel.sAdhesion * abs(rearRightWheel.radius * rearRightInertia.w), rearRightWheel.vAdhesion_min)
*/
void ThreeWheelVehicle3FMU_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1556};
  (data->localData[0]->realVars[973] /* rearRightWheel.vAdhesion variable */) = fmax(((data->simulationInfo->realParameter[291] /* rearRightWheel.sAdhesion PARAM */)) * (fabs(((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */)) * ((data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */)))),(data->simulationInfo->realParameter[295] /* rearRightWheel.vAdhesion_min PARAM */));
  TRACE_POP
}
/*
equation index: 1557
type: SIMPLE_ASSIGN
rearRightWheel.vSlide = max(rearRightWheel.sSlide * abs(rearRightWheel.radius * rearRightInertia.w), rearRightWheel.vSlide_min)
*/
void ThreeWheelVehicle3FMU_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1557};
  (data->localData[0]->realVars[974] /* rearRightWheel.vSlide variable */) = fmax(((data->simulationInfo->realParameter[292] /* rearRightWheel.sSlide PARAM */)) * (fabs(((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */)) * ((data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */)))),(data->simulationInfo->realParameter[296] /* rearRightWheel.vSlide_min PARAM */));
  TRACE_POP
}
/*
equation index: 1558
type: SIMPLE_ASSIGN
$cse12 = sin(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1558};
  (data->localData[0]->realVars[85] /* $cse12 variable */) = sin((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */));
  TRACE_POP
}
/*
equation index: 1559
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[3,3] = cos(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1559};
  (data->localData[0]->realVars[807] /* rearLeftWheel.rim1.R.T[3,3] variable */) = cos((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */));
  TRACE_POP
}
/*
equation index: 1560
type: SIMPLE_ASSIGN
$cse11 = sin(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1560};
  (data->localData[0]->realVars[84] /* $cse11 variable */) = sin(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */));
  TRACE_POP
}
/*
equation index: 1561
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[3,3] = cos(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1561};
  (data->localData[0]->realVars[835] /* rearLeftWheel.rim2.R.T[3,3] variable */) = cos(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */));
  TRACE_POP
}
/*
equation index: 1562
type: SIMPLE_ASSIGN
rearLeftWheel.vAdhesion = max(rearLeftWheel.sAdhesion * abs(rearLeftWheel.radius * rearLeftInertia.w), rearLeftWheel.vAdhesion_min)
*/
void ThreeWheelVehicle3FMU_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1562};
  (data->localData[0]->realVars[857] /* rearLeftWheel.vAdhesion variable */) = fmax(((data->simulationInfo->realParameter[251] /* rearLeftWheel.sAdhesion PARAM */)) * (fabs(((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */)) * ((data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */)))),(data->simulationInfo->realParameter[255] /* rearLeftWheel.vAdhesion_min PARAM */));
  TRACE_POP
}
/*
equation index: 1563
type: SIMPLE_ASSIGN
rearLeftWheel.vSlide = max(rearLeftWheel.sSlide * abs(rearLeftWheel.radius * rearLeftInertia.w), rearLeftWheel.vSlide_min)
*/
void ThreeWheelVehicle3FMU_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1563};
  (data->localData[0]->realVars[858] /* rearLeftWheel.vSlide variable */) = fmax(((data->simulationInfo->realParameter[252] /* rearLeftWheel.sSlide PARAM */)) * (fabs(((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */)) * ((data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */)))),(data->simulationInfo->realParameter[256] /* rearLeftWheel.vSlide_min PARAM */));
  TRACE_POP
}
/*
equation index: 1564
type: SIMPLE_ASSIGN
$cse8 = sin(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1564};
  (data->localData[0]->realVars[93] /* $cse8 variable */) = sin((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */));
  TRACE_POP
}
/*
equation index: 1565
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[3,1] = frontWheel.e0[1] * $cse8
*/
void ThreeWheelVehicle3FMU_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1565};
  (data->localData[0]->realVars[286] /* frontWheel.rim1.R.T[3,1] variable */) = ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[93] /* $cse8 variable */));
  TRACE_POP
}
/*
equation index: 1566
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[1,3] = (-frontWheel.e0[1]) * $cse8
*/
void ThreeWheelVehicle3FMU_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1566};
  (data->localData[0]->realVars[282] /* frontWheel.rim1.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */))) * ((data->localData[0]->realVars[93] /* $cse8 variable */));
  TRACE_POP
}
/*
equation index: 1567
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[3,2] = frontWheel.e0[2] * $cse8
*/
void ThreeWheelVehicle3FMU_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1567};
  (data->localData[0]->realVars[287] /* frontWheel.rim1.R.T[3,2] variable */) = ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[93] /* $cse8 variable */));
  TRACE_POP
}
/*
equation index: 1568
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[2,3] = (-frontWheel.e0[2]) * $cse8
*/
void ThreeWheelVehicle3FMU_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1568};
  (data->localData[0]->realVars[285] /* frontWheel.rim1.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */))) * ((data->localData[0]->realVars[93] /* $cse8 variable */));
  TRACE_POP
}
/*
equation index: 1569
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[3,3] = cos(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1569};
  (data->localData[0]->realVars[288] /* frontWheel.rim1.R.T[3,3] variable */) = cos((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */));
  TRACE_POP
}
/*
equation index: 1570
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[2,2] = frontWheel.e0[1] ^ 2.0 + (1.0 - frontWheel.e0[1] ^ 2.0) * frontWheel.rim1.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1570};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  tmp29 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  (data->localData[0]->realVars[284] /* frontWheel.rim1.R.T[2,2] variable */) = (tmp28 * tmp28) + (1.0 - ((tmp29 * tmp29))) * ((data->localData[0]->realVars[288] /* frontWheel.rim1.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1571
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[2,1] = (frontWheel.e0[1] * frontWheel.rim1.R.T[3,3] - frontWheel.e0[1]) * frontWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1571};
  (data->localData[0]->realVars[283] /* frontWheel.rim1.R.T[2,1] variable */) = (((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[288] /* frontWheel.rim1.R.T[3,3] variable */)) - (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1572
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[1,2] = (frontWheel.e0[2] * frontWheel.rim1.R.T[3,3] - frontWheel.e0[2]) * frontWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1572};
  (data->localData[0]->realVars[281] /* frontWheel.rim1.R.T[1,2] variable */) = (((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[288] /* frontWheel.rim1.R.T[3,3] variable */)) - (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1573
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[1,1] = frontWheel.e0[2] ^ 2.0 + (1.0 - frontWheel.e0[2] ^ 2.0) * frontWheel.rim1.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1573};
  modelica_real tmp30;
  modelica_real tmp31;
  tmp30 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  tmp31 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  (data->localData[0]->realVars[280] /* frontWheel.rim1.R.T[1,1] variable */) = (tmp30 * tmp30) + (1.0 - ((tmp31 * tmp31))) * ((data->localData[0]->realVars[288] /* frontWheel.rim1.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1574
type: SIMPLE_ASSIGN
$cse7 = sin(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1574};
  (data->localData[0]->realVars[92] /* $cse7 variable */) = sin(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */));
  TRACE_POP
}
/*
equation index: 1575
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[3,1] = frontWheel.e0[1] * $cse7
*/
void ThreeWheelVehicle3FMU_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1575};
  (data->localData[0]->realVars[314] /* frontWheel.rim2.R.T[3,1] variable */) = ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[92] /* $cse7 variable */));
  TRACE_POP
}
/*
equation index: 1576
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[1,3] = (-frontWheel.e0[1]) * $cse7
*/
void ThreeWheelVehicle3FMU_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1576};
  (data->localData[0]->realVars[310] /* frontWheel.rim2.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */))) * ((data->localData[0]->realVars[92] /* $cse7 variable */));
  TRACE_POP
}
/*
equation index: 1577
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[3,2] = frontWheel.e0[2] * $cse7
*/
void ThreeWheelVehicle3FMU_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1577};
  (data->localData[0]->realVars[315] /* frontWheel.rim2.R.T[3,2] variable */) = ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[92] /* $cse7 variable */));
  TRACE_POP
}
/*
equation index: 1578
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[2,3] = (-frontWheel.e0[2]) * $cse7
*/
void ThreeWheelVehicle3FMU_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1578};
  (data->localData[0]->realVars[313] /* frontWheel.rim2.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */))) * ((data->localData[0]->realVars[92] /* $cse7 variable */));
  TRACE_POP
}
/*
equation index: 1579
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[3,3] = cos(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1579};
  (data->localData[0]->realVars[316] /* frontWheel.rim2.R.T[3,3] variable */) = cos(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */));
  TRACE_POP
}
/*
equation index: 1580
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[2,2] = frontWheel.e0[1] ^ 2.0 + (1.0 - frontWheel.e0[1] ^ 2.0) * frontWheel.rim2.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1580};
  modelica_real tmp32;
  modelica_real tmp33;
  tmp32 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  tmp33 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  (data->localData[0]->realVars[312] /* frontWheel.rim2.R.T[2,2] variable */) = (tmp32 * tmp32) + (1.0 - ((tmp33 * tmp33))) * ((data->localData[0]->realVars[316] /* frontWheel.rim2.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1581
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[2,1] = (frontWheel.e0[1] * frontWheel.rim2.R.T[3,3] - frontWheel.e0[1]) * frontWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1581};
  (data->localData[0]->realVars[311] /* frontWheel.rim2.R.T[2,1] variable */) = (((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[316] /* frontWheel.rim2.R.T[3,3] variable */)) - (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1582
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[1,2] = (frontWheel.e0[2] * frontWheel.rim2.R.T[3,3] - frontWheel.e0[2]) * frontWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1582};
  (data->localData[0]->realVars[309] /* frontWheel.rim2.R.T[1,2] variable */) = (((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[316] /* frontWheel.rim2.R.T[3,3] variable */)) - (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1583
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[1,1] = frontWheel.e0[2] ^ 2.0 + (1.0 - frontWheel.e0[2] ^ 2.0) * frontWheel.rim2.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1583};
  modelica_real tmp34;
  modelica_real tmp35;
  tmp34 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  tmp35 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  (data->localData[0]->realVars[308] /* frontWheel.rim2.R.T[1,1] variable */) = (tmp34 * tmp34) + (1.0 - ((tmp35 * tmp35))) * ((data->localData[0]->realVars[316] /* frontWheel.rim2.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1584
type: SIMPLE_ASSIGN
frontWheel.vAdhesion = max(frontWheel.sAdhesion * abs(frontWheel.radius * frontInertia.w), frontWheel.vAdhesion_min)
*/
void ThreeWheelVehicle3FMU_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1584};
  (data->localData[0]->realVars[336] /* frontWheel.vAdhesion variable */) = fmax(((data->simulationInfo->realParameter[87] /* frontWheel.sAdhesion PARAM */)) * (fabs(((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */)) * ((data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */)))),(data->simulationInfo->realParameter[91] /* frontWheel.vAdhesion_min PARAM */));
  TRACE_POP
}
/*
equation index: 1585
type: SIMPLE_ASSIGN
frontWheel.vSlide = max(frontWheel.sSlide * abs(frontWheel.radius * frontInertia.w), frontWheel.vSlide_min)
*/
void ThreeWheelVehicle3FMU_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1585};
  (data->localData[0]->realVars[337] /* frontWheel.vSlide variable */) = fmax(((data->simulationInfo->realParameter[88] /* frontWheel.sSlide PARAM */)) * (fabs(((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */)) * ((data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */)))),(data->simulationInfo->realParameter[92] /* frontWheel.vSlide_min PARAM */));
  TRACE_POP
}
/*
equation index: 1586
type: SIMPLE_ASSIGN
Trot[2,2] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1586};
  (data->localData[0]->realVars[98] /* Trot[2,2] variable */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}
/*
equation index: 1587
type: SIMPLE_ASSIGN
$DER.front2.R[2,2] = (-Trot[2,2]) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1587};
  (data->localData[0]->realVars[53] /* der(front2.R[2,2]) DUMMY_DER */) = ((-(data->localData[0]->realVars[98] /* Trot[2,2] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1588
type: SIMPLE_ASSIGN
$DER.front.R[2,2] = (-Trot[2,2]) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1588};
  (data->localData[0]->realVars[47] /* der(front.R[2,2]) DUMMY_DER */) = ((-(data->localData[0]->realVars[98] /* Trot[2,2] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1589
type: SIMPLE_ASSIGN
$DER.rearLeft.R[2,2] = (-Trot[2,2]) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1589};
  (data->localData[0]->realVars[67] /* der(rearLeft.R[2,2]) DUMMY_DER */) = ((-(data->localData[0]->realVars[98] /* Trot[2,2] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1590
type: SIMPLE_ASSIGN
$DER.rearRight.R[2,2] = (-Trot[2,2]) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1590};
  (data->localData[0]->realVars[73] /* der(rearRight.R[2,2]) DUMMY_DER */) = ((-(data->localData[0]->realVars[98] /* Trot[2,2] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1591
type: SIMPLE_ASSIGN
$DER.rear.R[2,2] = (-Trot[2,2]) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1591};
  (data->localData[0]->realVars[61] /* der(rear.R[2,2]) DUMMY_DER */) = ((-(data->localData[0]->realVars[98] /* Trot[2,2] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1592
type: SIMPLE_ASSIGN
body.sphere.R.T[1,2] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  (data->localData[0]->realVars[120] /* body.sphere.R.T[1,2] variable */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1593
type: SIMPLE_ASSIGN
front2.R[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1593};
  (data->localData[0]->realVars[206] /* front2.R[2,1] DUMMY_STATE */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1594
type: SIMPLE_ASSIGN
front.R[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  (data->localData[0]->realVars[183] /* front.R[2,1] DUMMY_STATE */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1595
type: SIMPLE_ASSIGN
rear.R[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  (data->localData[0]->realVars[719] /* rear.R[2,1] DUMMY_STATE */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1596
type: SIMPLE_ASSIGN
rearRight.R[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  (data->localData[0]->realVars[861] /* rearRight.R[2,1] DUMMY_STATE */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1597
type: SIMPLE_ASSIGN
rearLeft.R[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1597};
  (data->localData[0]->realVars[745] /* rearLeft.R[2,1] DUMMY_STATE */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1598
type: SIMPLE_ASSIGN
rearRightWheel.R[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  (data->localData[0]->realVars[888] /* rearRightWheel.R[2,1] variable */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1599
type: SIMPLE_ASSIGN
body.sphere.R.T[2,1] = -Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  (data->localData[0]->realVars[122] /* body.sphere.R.T[2,1] variable */) = (-(data->localData[0]->realVars[98] /* Trot[2,2] variable */));
  TRACE_POP
}
/*
equation index: 1600
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R0a[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1600};
  (data->localData[0]->realVars[102] /* airResistanceLongitudinal.R0a[2,1] variable */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1601
type: SIMPLE_ASSIGN
rearLeftWheel.R[2,1] = Trot[2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1601};
  (data->localData[0]->realVars[772] /* rearLeftWheel.R[2,1] variable */) = (data->localData[0]->realVars[98] /* Trot[2,2] variable */);
  TRACE_POP
}
/*
equation index: 1602
type: SIMPLE_ASSIGN
Trot[2,1] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1602};
  (data->localData[0]->realVars[97] /* Trot[2,1] variable */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}
/*
equation index: 1603
type: SIMPLE_ASSIGN
front2.r0[1] = Trot[2,1] * front2.r[1] - Trot[2,2] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1603};
  (data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1604
type: SIMPLE_ASSIGN
front2.cylinder.lengthDirection[1] = front2.r0[1] / front2.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1604};
  (data->localData[0]->realVars[212] /* front2.cylinder.lengthDirection[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */),(data->simulationInfo->realParameter[48] /* front2.l PARAM */),"front2.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1605
type: SIMPLE_ASSIGN
front2.r0[2] = Trot[2,2] * front2.r[1] + Trot[2,1] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1605};
  (data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1606
type: SIMPLE_ASSIGN
front2.cylinder.lengthDirection[2] = front2.r0[2] / front2.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1606};
  (data->localData[0]->realVars[213] /* front2.cylinder.lengthDirection[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */),(data->simulationInfo->realParameter[48] /* front2.l PARAM */),"front2.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1607
type: SIMPLE_ASSIGN
front.r0[1] = Trot[2,1] * front.r[1] - Trot[2,2] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  (data->localData[0]->realVars[204] /* front.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1608
type: SIMPLE_ASSIGN
front.frame_b.x = body.r[1] + front.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1608};
  (data->localData[0]->realVars[202] /* front.frame_b.x DUMMY_STATE */) = (data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */) + (data->localData[0]->realVars[204] /* front.r0[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1609
type: SIMPLE_ASSIGN
front2.cylinder.r[1] = front.frame_b.x - front2.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1609};
  (data->localData[0]->realVars[215] /* front2.cylinder.r[1] variable */) = (data->localData[0]->realVars[202] /* front.frame_b.x DUMMY_STATE */) - (data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1610
type: SIMPLE_ASSIGN
body2.r[1] = front2.cylinder.r[1] + frontTrail.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1610};
  (data->localData[0]->realVars[150] /* body2.r[1] DUMMY_STATE */) = (data->localData[0]->realVars[215] /* front2.cylinder.r[1] variable */) + (data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1611
type: SIMPLE_ASSIGN
frontWheel.cylinder.r[1] = body2.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1611};
  (data->localData[0]->realVars[261] /* frontWheel.cylinder.r[1] variable */) = (data->localData[0]->realVars[150] /* body2.r[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1612
type: SIMPLE_ASSIGN
frontWheel.rim1.r[1] = body2.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1612};
  (data->localData[0]->realVars[300] /* frontWheel.rim1.r[1] variable */) = (data->localData[0]->realVars[150] /* body2.r[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1613
type: SIMPLE_ASSIGN
frontWheel.rim2.r[1] = body2.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1613};
  (data->localData[0]->realVars[328] /* frontWheel.rim2.r[1] variable */) = (data->localData[0]->realVars[150] /* body2.r[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1614
type: SIMPLE_ASSIGN
body2.sphere.r[1] = body2.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1614};
  (data->localData[0]->realVars[168] /* body2.sphere.r[1] variable */) = (data->localData[0]->realVars[150] /* body2.r[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1615
type: SIMPLE_ASSIGN
revolute.frame_a.x = front2.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1615};
  (data->localData[0]->realVars[1002] /* revolute.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[215] /* front2.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1616
type: SIMPLE_ASSIGN
frontTrail.cylinder.r[1] = front2.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1616};
  (data->localData[0]->realVars[242] /* frontTrail.cylinder.r[1] variable */) = (data->localData[0]->realVars[215] /* front2.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1617
type: SIMPLE_ASSIGN
revolute.cylinder.r[1] = front2.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1617};
  (data->localData[0]->realVars[992] /* revolute.cylinder.r[1] variable */) = (data->localData[0]->realVars[215] /* front2.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1618
type: SIMPLE_ASSIGN
front.cylinder.lengthDirection[1] = front.r0[1] / front.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1618};
  (data->localData[0]->realVars[189] /* front.cylinder.lengthDirection[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[204] /* front.r0[1] DUMMY_STATE */),(data->simulationInfo->realParameter[38] /* front.l PARAM */),"front.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1619
type: SIMPLE_ASSIGN
front.r0[2] = Trot[2,2] * front.r[1] + Trot[2,1] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  (data->localData[0]->realVars[205] /* front.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1620
type: SIMPLE_ASSIGN
front.frame_b.y = body.r[2] + front.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  (data->localData[0]->realVars[203] /* front.frame_b.y DUMMY_STATE */) = (data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */) + (data->localData[0]->realVars[205] /* front.r0[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1621
type: SIMPLE_ASSIGN
front2.cylinder.r[2] = front.frame_b.y - front2.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  (data->localData[0]->realVars[216] /* front2.cylinder.r[2] variable */) = (data->localData[0]->realVars[203] /* front.frame_b.y DUMMY_STATE */) - (data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1622
type: SIMPLE_ASSIGN
body2.r[2] = front2.cylinder.r[2] + frontTrail.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  (data->localData[0]->realVars[151] /* body2.r[2] DUMMY_STATE */) = (data->localData[0]->realVars[216] /* front2.cylinder.r[2] variable */) + (data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1623
type: SIMPLE_ASSIGN
frontWheel.cylinder.r[2] = body2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  (data->localData[0]->realVars[262] /* frontWheel.cylinder.r[2] variable */) = (data->localData[0]->realVars[151] /* body2.r[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1624
type: SIMPLE_ASSIGN
frontWheel.rim1.r[2] = body2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  (data->localData[0]->realVars[301] /* frontWheel.rim1.r[2] variable */) = (data->localData[0]->realVars[151] /* body2.r[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1625
type: SIMPLE_ASSIGN
frontWheel.rim2.r[2] = body2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  (data->localData[0]->realVars[329] /* frontWheel.rim2.r[2] variable */) = (data->localData[0]->realVars[151] /* body2.r[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1626
type: SIMPLE_ASSIGN
body2.sphere.r[2] = body2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  (data->localData[0]->realVars[169] /* body2.sphere.r[2] variable */) = (data->localData[0]->realVars[151] /* body2.r[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1627
type: SIMPLE_ASSIGN
revolute.frame_a.y = front2.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  (data->localData[0]->realVars[1003] /* revolute.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[216] /* front2.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1628
type: SIMPLE_ASSIGN
frontTrail.cylinder.r[2] = front2.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  (data->localData[0]->realVars[243] /* frontTrail.cylinder.r[2] variable */) = (data->localData[0]->realVars[216] /* front2.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1629
type: SIMPLE_ASSIGN
revolute.cylinder.r[2] = front2.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  (data->localData[0]->realVars[993] /* revolute.cylinder.r[2] variable */) = (data->localData[0]->realVars[216] /* front2.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1630
type: SIMPLE_ASSIGN
front.cylinder.lengthDirection[2] = front.r0[2] / front.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  (data->localData[0]->realVars[190] /* front.cylinder.lengthDirection[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[205] /* front.r0[2] DUMMY_STATE */),(data->simulationInfo->realParameter[38] /* front.l PARAM */),"front.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1631
type: SIMPLE_ASSIGN
$DER.front2.R[2,1] = Trot[2,1] * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  (data->localData[0]->realVars[52] /* der(front2.R[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1632
type: SIMPLE_ASSIGN
$DER.front2.r0[1] = $DER.front2.R[2,2] * front2.r[1] - $DER.front2.R[2,1] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  (data->localData[0]->realVars[54] /* der(front2.r0[1]) DUMMY_DER */) = ((data->localData[0]->realVars[53] /* der(front2.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) - (((data->localData[0]->realVars[52] /* der(front2.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1633
type: SIMPLE_ASSIGN
$DER.front2.r0[2] = $DER.front2.R[2,1] * front2.r[1] + $DER.front2.R[2,2] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  (data->localData[0]->realVars[55] /* der(front2.r0[2]) DUMMY_DER */) = ((data->localData[0]->realVars[52] /* der(front2.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) + ((data->localData[0]->realVars[53] /* der(front2.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1634
type: SIMPLE_ASSIGN
$DER.front.R[2,1] = Trot[2,1] * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  (data->localData[0]->realVars[46] /* der(front.R[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1635
type: SIMPLE_ASSIGN
$DER.front.r0[1] = $DER.front.R[2,2] * front.r[1] - $DER.front.R[2,1] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  (data->localData[0]->realVars[50] /* der(front.r0[1]) DUMMY_DER */) = ((data->localData[0]->realVars[47] /* der(front.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) - (((data->localData[0]->realVars[46] /* der(front.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1636
type: SIMPLE_ASSIGN
$DER.front.frame_b.x = body.v[1] + $DER.front.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  (data->localData[0]->realVars[48] /* der(front.frame_b.x) DUMMY_DER */) = (data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */) + (data->localData[0]->realVars[50] /* der(front.r0[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1637
type: SIMPLE_ASSIGN
$DER.revolute.frame_a.x = $DER.front.frame_b.x - $DER.front2.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  (data->localData[0]->realVars[78] /* der(revolute.frame_a.x) DUMMY_DER */) = (data->localData[0]->realVars[48] /* der(front.frame_b.x) DUMMY_DER */) - (data->localData[0]->realVars[54] /* der(front2.r0[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1638
type: SIMPLE_ASSIGN
body2.v[1] = $DER.revolute.frame_a.x + $DER.frontTrail.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  (data->localData[0]->realVars[177] /* body2.v[1] DUMMY_STATE */) = (data->localData[0]->realVars[78] /* der(revolute.frame_a.x) DUMMY_DER */) + (data->localData[0]->realVars[58] /* der(frontTrail.r0[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1639
type: SIMPLE_ASSIGN
$DER.body2.r[1] = body2.v[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  (data->localData[0]->realVars[41] /* der(body2.r[1]) DUMMY_DER */) = (data->localData[0]->realVars[177] /* body2.v[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1640
type: SIMPLE_ASSIGN
$DER.front.r0[2] = $DER.front.R[2,1] * front.r[1] + $DER.front.R[2,2] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  (data->localData[0]->realVars[51] /* der(front.r0[2]) DUMMY_DER */) = ((data->localData[0]->realVars[46] /* der(front.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) + ((data->localData[0]->realVars[47] /* der(front.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1641
type: SIMPLE_ASSIGN
$DER.front.frame_b.y = body.v[2] + $DER.front.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  (data->localData[0]->realVars[49] /* der(front.frame_b.y) DUMMY_DER */) = (data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */) + (data->localData[0]->realVars[51] /* der(front.r0[2]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1642
type: SIMPLE_ASSIGN
$DER.revolute.frame_a.y = $DER.front.frame_b.y - $DER.front2.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  (data->localData[0]->realVars[79] /* der(revolute.frame_a.y) DUMMY_DER */) = (data->localData[0]->realVars[49] /* der(front.frame_b.y) DUMMY_DER */) - (data->localData[0]->realVars[55] /* der(front2.r0[2]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1643
type: SIMPLE_ASSIGN
body2.v[2] = $DER.revolute.frame_a.y + $DER.frontTrail.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  (data->localData[0]->realVars[178] /* body2.v[2] DUMMY_STATE */) = (data->localData[0]->realVars[79] /* der(revolute.frame_a.y) DUMMY_DER */) + (data->localData[0]->realVars[59] /* der(frontTrail.r0[2]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1644
type: SIMPLE_ASSIGN
frontWheel.v_long = body2.v[1] * frontWheel.e0[1] + body2.v[2] * frontWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  (data->localData[0]->realVars[338] /* frontWheel.v_long variable */) = ((data->localData[0]->realVars[177] /* body2.v[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) + ((data->localData[0]->realVars[178] /* body2.v[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1645
type: SIMPLE_ASSIGN
$cse5 = exp((-100.0) * frontWheel.v_long / frontWheel.v0_roll)
*/
void ThreeWheelVehicle3FMU_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  (data->localData[0]->realVars[90] /* $cse5 variable */) = exp(DIVISION_SIM((-100.0) * ((data->localData[0]->realVars[338] /* frontWheel.v_long variable */)),(data->simulationInfo->realParameter[90] /* frontWheel.v0_roll PARAM */),"frontWheel.v0_roll",equationIndexes));
  TRACE_POP
}
/*
equation index: 1646
type: SIMPLE_ASSIGN
outSlipFrontWheel[1] = frontWheel.v_long - frontWheel.radius * frontInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  (data->localData[0]->realVars[376] /* outSlipFrontWheel[1] variable */) = (data->localData[0]->realVars[338] /* frontWheel.v_long variable */) - (((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */)) * ((data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */)));
  TRACE_POP
}
/*
equation index: 1647
type: SIMPLE_ASSIGN
outEffRadiusFrontWheel = frontWheel.v_long / frontInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  (data->localData[0]->realVars[361] /* outEffRadiusFrontWheel variable */) = DIVISION_SIM((data->localData[0]->realVars[338] /* frontWheel.v_long variable */),(data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */),"frontInertia.w",equationIndexes);
  TRACE_POP
}
/*
equation index: 1648
type: SIMPLE_ASSIGN
outSlipRatioFront = (-outSlipFrontWheel[1]) / frontWheel.v_long
*/
void ThreeWheelVehicle3FMU_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  (data->localData[0]->realVars[380] /* outSlipRatioFront variable */) = DIVISION_SIM((-(data->localData[0]->realVars[376] /* outSlipFrontWheel[1] variable */)),(data->localData[0]->realVars[338] /* frontWheel.v_long variable */),"frontWheel.v_long",equationIndexes);
  TRACE_POP
}
/*
equation index: 1649
type: SIMPLE_ASSIGN
outSlipFrontWheel[2] = body2.v[2] * frontWheel.e0[1] - body2.v[1] * frontWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  (data->localData[0]->realVars[377] /* outSlipFrontWheel[2] variable */) = ((data->localData[0]->realVars[178] /* body2.v[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) - (((data->localData[0]->realVars[177] /* body2.v[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)));
  TRACE_POP
}
/*
equation index: 1650
type: SIMPLE_ASSIGN
outSlipAngleFront = atan(outSlipFrontWheel[2] / frontWheel.v_long)
*/
void ThreeWheelVehicle3FMU_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  (data->localData[0]->realVars[373] /* outSlipAngleFront variable */) = atan(DIVISION_SIM((data->localData[0]->realVars[377] /* outSlipFrontWheel[2] variable */),(data->localData[0]->realVars[338] /* frontWheel.v_long variable */),"frontWheel.v_long",equationIndexes));
  TRACE_POP
}
/*
equation index: 1651
type: SIMPLE_ASSIGN
frontWheel.v_slip = sqrt(outSlipFrontWheel[1] ^ 2.0 + outSlipFrontWheel[2] ^ 2.0 + 1e-10)
*/
void ThreeWheelVehicle3FMU_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  modelica_real tmp36;
  modelica_real tmp37;
  tmp36 = (data->localData[0]->realVars[376] /* outSlipFrontWheel[1] variable */);
  tmp37 = (data->localData[0]->realVars[377] /* outSlipFrontWheel[2] variable */);
  (data->localData[0]->realVars[339] /* frontWheel.v_slip variable */) = sqrt((tmp36 * tmp36) + (tmp37 * tmp37) + 1e-10);
  TRACE_POP
}
/*
equation index: 1652
type: SIMPLE_ASSIGN
$cse6 = PlanarMechanics.Utilities.Functions.limitByStriple(frontWheel.vAdhesion, frontWheel.vSlide, frontWheel.mu_A, frontWheel.mu_S, frontWheel.v_slip)
*/
void ThreeWheelVehicle3FMU_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  (data->localData[0]->realVars[91] /* $cse6 variable */) = omc_PlanarMechanics_Utilities_Functions_limitByStriple(threadData, (data->localData[0]->realVars[336] /* frontWheel.vAdhesion variable */), (data->localData[0]->realVars[337] /* frontWheel.vSlide variable */), (data->simulationInfo->realParameter[74] /* frontWheel.mu_A PARAM */), (data->simulationInfo->realParameter[75] /* frontWheel.mu_S PARAM */), (data->localData[0]->realVars[339] /* frontWheel.v_slip variable */));
  TRACE_POP
}
/*
equation index: 1653
type: SIMPLE_ASSIGN
$DER.body2.r[2] = body2.v[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  (data->localData[0]->realVars[42] /* der(body2.r[2]) DUMMY_DER */) = (data->localData[0]->realVars[178] /* body2.v[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1654
type: SIMPLE_ASSIGN
rear.r0[1] = Trot[2,1] * rear.r[1] - Trot[2,2] * rear.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  (data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[215] /* rear.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1655
type: SIMPLE_ASSIGN
rear.cylinder.r[1] = body.r[1] - rear.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1655};
  (data->localData[0]->realVars[728] /* rear.cylinder.r[1] variable */) = (data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */) - (data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1656
type: SIMPLE_ASSIGN
rear.frame_a.x = rear.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1656};
  (data->localData[0]->realVars[740] /* rear.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[728] /* rear.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1657
type: SIMPLE_ASSIGN
rearRight.cylinder.r[1] = rear.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1657};
  (data->localData[0]->realVars[870] /* rearRight.cylinder.r[1] variable */) = (data->localData[0]->realVars[728] /* rear.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1658
type: SIMPLE_ASSIGN
rear.cylinder.lengthDirection[1] = rear.r0[1] / rear.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1658};
  (data->localData[0]->realVars[725] /* rear.cylinder.lengthDirection[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */),(data->simulationInfo->realParameter[213] /* rear.l PARAM */),"rear.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1659
type: SIMPLE_ASSIGN
rear.r0[2] = Trot[2,2] * rear.r[1] + Trot[2,1] * rear.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1659};
  (data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[215] /* rear.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1660
type: SIMPLE_ASSIGN
rear.cylinder.r[2] = body.r[2] - rear.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1660};
  (data->localData[0]->realVars[729] /* rear.cylinder.r[2] variable */) = (data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */) - (data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1661
type: SIMPLE_ASSIGN
rear.frame_a.y = rear.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1661};
  (data->localData[0]->realVars[741] /* rear.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[729] /* rear.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1662
type: SIMPLE_ASSIGN
rearRight.cylinder.r[2] = rear.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1662};
  (data->localData[0]->realVars[871] /* rearRight.cylinder.r[2] variable */) = (data->localData[0]->realVars[729] /* rear.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1663
type: SIMPLE_ASSIGN
rear.cylinder.lengthDirection[2] = rear.r0[2] / rear.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1663};
  (data->localData[0]->realVars[726] /* rear.cylinder.lengthDirection[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */),(data->simulationInfo->realParameter[213] /* rear.l PARAM */),"rear.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1664
type: SIMPLE_ASSIGN
rearRight.r0[1] = Trot[2,1] * rearRight.r[1] - Trot[2,2] * rearRight.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1664};
  (data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[265] /* rearRight.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1665
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r[1] = rear.cylinder.r[1] + rearRight.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  (data->localData[0]->realVars[963] /* rearRightWheel.rim2.r[1] variable */) = (data->localData[0]->realVars[728] /* rear.cylinder.r[1] variable */) + (data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1666
type: SIMPLE_ASSIGN
rearRightWheel.frame_a.x = rearRightWheel.rim2.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  (data->localData[0]->realVars[912] /* rearRightWheel.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[963] /* rearRightWheel.rim2.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1667
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r[1] = rearRightWheel.rim2.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  (data->localData[0]->realVars[896] /* rearRightWheel.cylinder.r[1] variable */) = (data->localData[0]->realVars[963] /* rearRightWheel.rim2.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1668
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r[1] = rearRightWheel.rim2.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  (data->localData[0]->realVars[935] /* rearRightWheel.rim1.r[1] variable */) = (data->localData[0]->realVars[963] /* rearRightWheel.rim2.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1669
type: SIMPLE_ASSIGN
rearRight.cylinder.lengthDirection[1] = rearRight.r0[1] / rearRight.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  (data->localData[0]->realVars[867] /* rearRight.cylinder.lengthDirection[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */),(data->simulationInfo->realParameter[263] /* rearRight.l PARAM */),"rearRight.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1670
type: SIMPLE_ASSIGN
rearRight.r0[2] = Trot[2,2] * rearRight.r[1] + Trot[2,1] * rearRight.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  (data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[265] /* rearRight.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1671
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r[2] = rear.cylinder.r[2] + rearRight.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  (data->localData[0]->realVars[964] /* rearRightWheel.rim2.r[2] variable */) = (data->localData[0]->realVars[729] /* rear.cylinder.r[2] variable */) + (data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1672
type: SIMPLE_ASSIGN
rearRightWheel.frame_a.y = rearRightWheel.rim2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  (data->localData[0]->realVars[913] /* rearRightWheel.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[964] /* rearRightWheel.rim2.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1673
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r[2] = rearRightWheel.rim2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  (data->localData[0]->realVars[897] /* rearRightWheel.cylinder.r[2] variable */) = (data->localData[0]->realVars[964] /* rearRightWheel.rim2.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1674
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r[2] = rearRightWheel.rim2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  (data->localData[0]->realVars[936] /* rearRightWheel.rim1.r[2] variable */) = (data->localData[0]->realVars[964] /* rearRightWheel.rim2.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1675
type: SIMPLE_ASSIGN
rearRight.cylinder.lengthDirection[2] = rearRight.r0[2] / rearRight.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  (data->localData[0]->realVars[868] /* rearRight.cylinder.lengthDirection[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */),(data->simulationInfo->realParameter[263] /* rearRight.l PARAM */),"rearRight.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1676
type: SIMPLE_ASSIGN
rearLeft.r0[1] = Trot[2,1] * rearLeft.r[1] - Trot[2,2] * rearLeft.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  (data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[225] /* rearLeft.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1677
type: SIMPLE_ASSIGN
rearLeft.cylinder.r[1] = rear.cylinder.r[1] - rearLeft.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1677};
  (data->localData[0]->realVars[754] /* rearLeft.cylinder.r[1] variable */) = (data->localData[0]->realVars[728] /* rear.cylinder.r[1] variable */) - (data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1678
type: SIMPLE_ASSIGN
rearLeftWheel.frame_a.x = rearLeft.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1678};
  (data->localData[0]->realVars[796] /* rearLeftWheel.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[754] /* rearLeft.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1679
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r[1] = rearLeft.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1679};
  (data->localData[0]->realVars[780] /* rearLeftWheel.cylinder.r[1] variable */) = (data->localData[0]->realVars[754] /* rearLeft.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1680
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r[1] = rearLeft.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1680};
  (data->localData[0]->realVars[819] /* rearLeftWheel.rim1.r[1] variable */) = (data->localData[0]->realVars[754] /* rearLeft.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1681
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r[1] = rearLeft.cylinder.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1681};
  (data->localData[0]->realVars[847] /* rearLeftWheel.rim2.r[1] variable */) = (data->localData[0]->realVars[754] /* rearLeft.cylinder.r[1] variable */);
  TRACE_POP
}
/*
equation index: 1682
type: SIMPLE_ASSIGN
rearLeft.cylinder.lengthDirection[1] = rearLeft.r0[1] / rearLeft.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1682};
  (data->localData[0]->realVars[751] /* rearLeft.cylinder.lengthDirection[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */),(data->simulationInfo->realParameter[223] /* rearLeft.l PARAM */),"rearLeft.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1683
type: SIMPLE_ASSIGN
rearLeft.r0[2] = Trot[2,2] * rearLeft.r[1] + Trot[2,1] * rearLeft.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1683};
  (data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[225] /* rearLeft.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1684
type: SIMPLE_ASSIGN
rearLeft.cylinder.r[2] = rear.cylinder.r[2] - rearLeft.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1684};
  (data->localData[0]->realVars[755] /* rearLeft.cylinder.r[2] variable */) = (data->localData[0]->realVars[729] /* rear.cylinder.r[2] variable */) - (data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1685
type: SIMPLE_ASSIGN
rearLeftWheel.frame_a.y = rearLeft.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1685};
  (data->localData[0]->realVars[797] /* rearLeftWheel.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[755] /* rearLeft.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1686
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r[2] = rearLeft.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1686};
  (data->localData[0]->realVars[781] /* rearLeftWheel.cylinder.r[2] variable */) = (data->localData[0]->realVars[755] /* rearLeft.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1687
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r[2] = rearLeft.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1687};
  (data->localData[0]->realVars[820] /* rearLeftWheel.rim1.r[2] variable */) = (data->localData[0]->realVars[755] /* rearLeft.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1688
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r[2] = rearLeft.cylinder.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1688};
  (data->localData[0]->realVars[848] /* rearLeftWheel.rim2.r[2] variable */) = (data->localData[0]->realVars[755] /* rearLeft.cylinder.r[2] variable */);
  TRACE_POP
}
/*
equation index: 1689
type: SIMPLE_ASSIGN
rearLeft.cylinder.lengthDirection[2] = rearLeft.r0[2] / rearLeft.l
*/
void ThreeWheelVehicle3FMU_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1689};
  (data->localData[0]->realVars[752] /* rearLeft.cylinder.lengthDirection[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */),(data->simulationInfo->realParameter[223] /* rearLeft.l PARAM */),"rearLeft.l",equationIndexes);
  TRACE_POP
}
/*
equation index: 1690
type: SIMPLE_ASSIGN
rearRightWheel.e0[1] = Trot[2,1] * rearRightWheel.e[1] - Trot[2,2] * rearRightWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1690};
  (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[275] /* rearRightWheel.e[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[276] /* rearRightWheel.e[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1691
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[3,1] = rearRightWheel.e0[1] * $cse15
*/
void ThreeWheelVehicle3FMU_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1691};
  (data->localData[0]->realVars[949] /* rearRightWheel.rim2.R.T[3,1] variable */) = ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[88] /* $cse15 variable */));
  TRACE_POP
}
/*
equation index: 1692
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[2,2] = rearRightWheel.e0[1] ^ 2.0 + (1.0 - rearRightWheel.e0[1] ^ 2.0) * rearRightWheel.rim2.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1692};
  modelica_real tmp38;
  modelica_real tmp39;
  tmp38 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  tmp39 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  (data->localData[0]->realVars[947] /* rearRightWheel.rim2.R.T[2,2] variable */) = (tmp38 * tmp38) + (1.0 - ((tmp39 * tmp39))) * ((data->localData[0]->realVars[951] /* rearRightWheel.rim2.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1693
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[1,3] = (-rearRightWheel.e0[1]) * $cse15
*/
void ThreeWheelVehicle3FMU_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1693};
  (data->localData[0]->realVars[945] /* rearRightWheel.rim2.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */))) * ((data->localData[0]->realVars[88] /* $cse15 variable */));
  TRACE_POP
}
/*
equation index: 1694
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[3,1] = rearRightWheel.e0[1] * $cse16
*/
void ThreeWheelVehicle3FMU_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1694};
  (data->localData[0]->realVars[921] /* rearRightWheel.rim1.R.T[3,1] variable */) = ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[89] /* $cse16 variable */));
  TRACE_POP
}
/*
equation index: 1695
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[2,2] = rearRightWheel.e0[1] ^ 2.0 + (1.0 - rearRightWheel.e0[1] ^ 2.0) * rearRightWheel.rim1.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1695};
  modelica_real tmp40;
  modelica_real tmp41;
  tmp40 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  tmp41 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  (data->localData[0]->realVars[919] /* rearRightWheel.rim1.R.T[2,2] variable */) = (tmp40 * tmp40) + (1.0 - ((tmp41 * tmp41))) * ((data->localData[0]->realVars[923] /* rearRightWheel.rim1.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1696
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[1,3] = (-rearRightWheel.e0[1]) * $cse16
*/
void ThreeWheelVehicle3FMU_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1696};
  (data->localData[0]->realVars[917] /* rearRightWheel.rim1.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */))) * ((data->localData[0]->realVars[89] /* $cse16 variable */));
  TRACE_POP
}
/*
equation index: 1697
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r_shape[2] = (-0.03) * rearRightWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1697};
  (data->localData[0]->realVars[900] /* rearRightWheel.cylinder.r_shape[2] variable */) = (-0.03) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1698
type: SIMPLE_ASSIGN
rearRightWheel.e0[2] = Trot[2,2] * rearRightWheel.e[1] + Trot[2,1] * rearRightWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1698};
  (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[275] /* rearRightWheel.e[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[276] /* rearRightWheel.e[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1699
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[3,2] = rearRightWheel.e0[2] * $cse15
*/
void ThreeWheelVehicle3FMU_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1699};
  (data->localData[0]->realVars[950] /* rearRightWheel.rim2.R.T[3,2] variable */) = ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[88] /* $cse15 variable */));
  TRACE_POP
}
/*
equation index: 1700
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[2,3] = (-rearRightWheel.e0[2]) * $cse15
*/
void ThreeWheelVehicle3FMU_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1700};
  (data->localData[0]->realVars[948] /* rearRightWheel.rim2.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */))) * ((data->localData[0]->realVars[88] /* $cse15 variable */));
  TRACE_POP
}
/*
equation index: 1701
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[2,1] = (rearRightWheel.e0[1] * rearRightWheel.rim2.R.T[3,3] - rearRightWheel.e0[1]) * rearRightWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1701};
  (data->localData[0]->realVars[946] /* rearRightWheel.rim2.R.T[2,1] variable */) = (((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[951] /* rearRightWheel.rim2.R.T[3,3] variable */)) - (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1702
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[1,2] = (rearRightWheel.e0[2] * rearRightWheel.rim2.R.T[3,3] - rearRightWheel.e0[2]) * rearRightWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1702};
  (data->localData[0]->realVars[944] /* rearRightWheel.rim2.R.T[1,2] variable */) = (((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[951] /* rearRightWheel.rim2.R.T[3,3] variable */)) - (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1703
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[1,1] = rearRightWheel.e0[2] ^ 2.0 + (1.0 - rearRightWheel.e0[2] ^ 2.0) * rearRightWheel.rim2.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1703};
  modelica_real tmp42;
  modelica_real tmp43;
  tmp42 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  tmp43 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  (data->localData[0]->realVars[943] /* rearRightWheel.rim2.R.T[1,1] variable */) = (tmp42 * tmp42) + (1.0 - ((tmp43 * tmp43))) * ((data->localData[0]->realVars[951] /* rearRightWheel.rim2.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1704
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[3,2] = rearRightWheel.e0[2] * $cse16
*/
void ThreeWheelVehicle3FMU_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1704};
  (data->localData[0]->realVars[922] /* rearRightWheel.rim1.R.T[3,2] variable */) = ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[89] /* $cse16 variable */));
  TRACE_POP
}
/*
equation index: 1705
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[2,3] = (-rearRightWheel.e0[2]) * $cse16
*/
void ThreeWheelVehicle3FMU_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1705};
  (data->localData[0]->realVars[920] /* rearRightWheel.rim1.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */))) * ((data->localData[0]->realVars[89] /* $cse16 variable */));
  TRACE_POP
}
/*
equation index: 1706
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[2,1] = (rearRightWheel.e0[1] * rearRightWheel.rim1.R.T[3,3] - rearRightWheel.e0[1]) * rearRightWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1706};
  (data->localData[0]->realVars[918] /* rearRightWheel.rim1.R.T[2,1] variable */) = (((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[923] /* rearRightWheel.rim1.R.T[3,3] variable */)) - (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1707
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[1,2] = (rearRightWheel.e0[2] * rearRightWheel.rim1.R.T[3,3] - rearRightWheel.e0[2]) * rearRightWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1707};
  (data->localData[0]->realVars[916] /* rearRightWheel.rim1.R.T[1,2] variable */) = (((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[923] /* rearRightWheel.rim1.R.T[3,3] variable */)) - (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1708
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[1,1] = rearRightWheel.e0[2] ^ 2.0 + (1.0 - rearRightWheel.e0[2] ^ 2.0) * rearRightWheel.rim1.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1708};
  modelica_real tmp44;
  modelica_real tmp45;
  tmp44 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  tmp45 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  (data->localData[0]->realVars[915] /* rearRightWheel.rim1.R.T[1,1] variable */) = (tmp44 * tmp44) + (1.0 - ((tmp45 * tmp45))) * ((data->localData[0]->realVars[923] /* rearRightWheel.rim1.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1709
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r_shape[1] = 0.03 * rearRightWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1709};
  (data->localData[0]->realVars[899] /* rearRightWheel.cylinder.r_shape[1] variable */) = (0.03) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1710
type: SIMPLE_ASSIGN
rearLeftWheel.e0[1] = Trot[2,1] * rearLeftWheel.e[1] - Trot[2,2] * rearLeftWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1710};
  (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[235] /* rearLeftWheel.e[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[236] /* rearLeftWheel.e[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1711
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[3,1] = rearLeftWheel.e0[1] * $cse11
*/
void ThreeWheelVehicle3FMU_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1711};
  (data->localData[0]->realVars[833] /* rearLeftWheel.rim2.R.T[3,1] variable */) = ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[84] /* $cse11 variable */));
  TRACE_POP
}
/*
equation index: 1712
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[2,2] = rearLeftWheel.e0[1] ^ 2.0 + (1.0 - rearLeftWheel.e0[1] ^ 2.0) * rearLeftWheel.rim2.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1712};
  modelica_real tmp46;
  modelica_real tmp47;
  tmp46 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  tmp47 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  (data->localData[0]->realVars[831] /* rearLeftWheel.rim2.R.T[2,2] variable */) = (tmp46 * tmp46) + (1.0 - ((tmp47 * tmp47))) * ((data->localData[0]->realVars[835] /* rearLeftWheel.rim2.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1713
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[1,3] = (-rearLeftWheel.e0[1]) * $cse11
*/
void ThreeWheelVehicle3FMU_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1713};
  (data->localData[0]->realVars[829] /* rearLeftWheel.rim2.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */))) * ((data->localData[0]->realVars[84] /* $cse11 variable */));
  TRACE_POP
}
/*
equation index: 1714
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[3,1] = rearLeftWheel.e0[1] * $cse12
*/
void ThreeWheelVehicle3FMU_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1714};
  (data->localData[0]->realVars[805] /* rearLeftWheel.rim1.R.T[3,1] variable */) = ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[85] /* $cse12 variable */));
  TRACE_POP
}
/*
equation index: 1715
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[2,2] = rearLeftWheel.e0[1] ^ 2.0 + (1.0 - rearLeftWheel.e0[1] ^ 2.0) * rearLeftWheel.rim1.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1715};
  modelica_real tmp48;
  modelica_real tmp49;
  tmp48 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  tmp49 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  (data->localData[0]->realVars[803] /* rearLeftWheel.rim1.R.T[2,2] variable */) = (tmp48 * tmp48) + (1.0 - ((tmp49 * tmp49))) * ((data->localData[0]->realVars[807] /* rearLeftWheel.rim1.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1716
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[1,3] = (-rearLeftWheel.e0[1]) * $cse12
*/
void ThreeWheelVehicle3FMU_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1716};
  (data->localData[0]->realVars[801] /* rearLeftWheel.rim1.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */))) * ((data->localData[0]->realVars[85] /* $cse12 variable */));
  TRACE_POP
}
/*
equation index: 1717
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r_shape[2] = (-0.03) * rearLeftWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1717};
  (data->localData[0]->realVars[784] /* rearLeftWheel.cylinder.r_shape[2] variable */) = (-0.03) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1718
type: SIMPLE_ASSIGN
rearLeftWheel.e0[2] = Trot[2,2] * rearLeftWheel.e[1] + Trot[2,1] * rearLeftWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1718};
  (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[235] /* rearLeftWheel.e[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[236] /* rearLeftWheel.e[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1719
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[3,2] = rearLeftWheel.e0[2] * $cse11
*/
void ThreeWheelVehicle3FMU_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1719};
  (data->localData[0]->realVars[834] /* rearLeftWheel.rim2.R.T[3,2] variable */) = ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[84] /* $cse11 variable */));
  TRACE_POP
}
/*
equation index: 1720
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[2,3] = (-rearLeftWheel.e0[2]) * $cse11
*/
void ThreeWheelVehicle3FMU_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  (data->localData[0]->realVars[832] /* rearLeftWheel.rim2.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */))) * ((data->localData[0]->realVars[84] /* $cse11 variable */));
  TRACE_POP
}
/*
equation index: 1721
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[2,1] = (rearLeftWheel.e0[1] * rearLeftWheel.rim2.R.T[3,3] - rearLeftWheel.e0[1]) * rearLeftWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1721};
  (data->localData[0]->realVars[830] /* rearLeftWheel.rim2.R.T[2,1] variable */) = (((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[835] /* rearLeftWheel.rim2.R.T[3,3] variable */)) - (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1722
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[1,2] = (rearLeftWheel.e0[2] * rearLeftWheel.rim2.R.T[3,3] - rearLeftWheel.e0[2]) * rearLeftWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1722};
  (data->localData[0]->realVars[828] /* rearLeftWheel.rim2.R.T[1,2] variable */) = (((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[835] /* rearLeftWheel.rim2.R.T[3,3] variable */)) - (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1723
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[1,1] = rearLeftWheel.e0[2] ^ 2.0 + (1.0 - rearLeftWheel.e0[2] ^ 2.0) * rearLeftWheel.rim2.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1723};
  modelica_real tmp50;
  modelica_real tmp51;
  tmp50 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  tmp51 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  (data->localData[0]->realVars[827] /* rearLeftWheel.rim2.R.T[1,1] variable */) = (tmp50 * tmp50) + (1.0 - ((tmp51 * tmp51))) * ((data->localData[0]->realVars[835] /* rearLeftWheel.rim2.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1724
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[3,2] = rearLeftWheel.e0[2] * $cse12
*/
void ThreeWheelVehicle3FMU_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1724};
  (data->localData[0]->realVars[806] /* rearLeftWheel.rim1.R.T[3,2] variable */) = ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[85] /* $cse12 variable */));
  TRACE_POP
}
/*
equation index: 1725
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[2,3] = (-rearLeftWheel.e0[2]) * $cse12
*/
void ThreeWheelVehicle3FMU_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1725};
  (data->localData[0]->realVars[804] /* rearLeftWheel.rim1.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */))) * ((data->localData[0]->realVars[85] /* $cse12 variable */));
  TRACE_POP
}
/*
equation index: 1726
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[2,1] = (rearLeftWheel.e0[1] * rearLeftWheel.rim1.R.T[3,3] - rearLeftWheel.e0[1]) * rearLeftWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1726};
  (data->localData[0]->realVars[802] /* rearLeftWheel.rim1.R.T[2,1] variable */) = (((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[807] /* rearLeftWheel.rim1.R.T[3,3] variable */)) - (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1727
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[1,2] = (rearLeftWheel.e0[2] * rearLeftWheel.rim1.R.T[3,3] - rearLeftWheel.e0[2]) * rearLeftWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1727};
  (data->localData[0]->realVars[800] /* rearLeftWheel.rim1.R.T[1,2] variable */) = (((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[807] /* rearLeftWheel.rim1.R.T[3,3] variable */)) - (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */));
  TRACE_POP
}
/*
equation index: 1728
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[1,1] = rearLeftWheel.e0[2] ^ 2.0 + (1.0 - rearLeftWheel.e0[2] ^ 2.0) * rearLeftWheel.rim1.R.T[3,3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1728};
  modelica_real tmp52;
  modelica_real tmp53;
  tmp52 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  tmp53 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  (data->localData[0]->realVars[799] /* rearLeftWheel.rim1.R.T[1,1] variable */) = (tmp52 * tmp52) + (1.0 - ((tmp53 * tmp53))) * ((data->localData[0]->realVars[807] /* rearLeftWheel.rim1.R.T[3,3] variable */));
  TRACE_POP
}
/*
equation index: 1729
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r_shape[1] = 0.03 * rearLeftWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[783] /* rearLeftWheel.cylinder.r_shape[1] variable */) = (0.03) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1730
type: SIMPLE_ASSIGN
$DER.rearLeft.R[2,1] = Trot[2,1] * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1730};
  (data->localData[0]->realVars[66] /* der(rearLeft.R[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1731
type: SIMPLE_ASSIGN
$DER.rearLeft.r0[1] = $DER.rearLeft.R[2,2] * rearLeft.r[1] - $DER.rearLeft.R[2,1] * rearLeft.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1731};
  (data->localData[0]->realVars[68] /* der(rearLeft.r0[1]) DUMMY_DER */) = ((data->localData[0]->realVars[67] /* der(rearLeft.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)) - (((data->localData[0]->realVars[66] /* der(rearLeft.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[225] /* rearLeft.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1732
type: SIMPLE_ASSIGN
$DER.rearLeft.r0[2] = $DER.rearLeft.R[2,1] * rearLeft.r[1] + $DER.rearLeft.R[2,2] * rearLeft.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1732};
  (data->localData[0]->realVars[69] /* der(rearLeft.r0[2]) DUMMY_DER */) = ((data->localData[0]->realVars[66] /* der(rearLeft.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)) + ((data->localData[0]->realVars[67] /* der(rearLeft.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[225] /* rearLeft.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1733
type: SIMPLE_ASSIGN
$DER.rearRight.R[2,1] = Trot[2,1] * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->realVars[72] /* der(rearRight.R[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1734
type: SIMPLE_ASSIGN
$DER.rearRight.r0[1] = $DER.rearRight.R[2,2] * rearRight.r[1] - $DER.rearRight.R[2,1] * rearRight.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1734};
  (data->localData[0]->realVars[74] /* der(rearRight.r0[1]) DUMMY_DER */) = ((data->localData[0]->realVars[73] /* der(rearRight.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)) - (((data->localData[0]->realVars[72] /* der(rearRight.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[265] /* rearRight.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1735
type: SIMPLE_ASSIGN
$DER.rearRight.r0[2] = $DER.rearRight.R[2,1] * rearRight.r[1] + $DER.rearRight.R[2,2] * rearRight.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1735};
  (data->localData[0]->realVars[75] /* der(rearRight.r0[2]) DUMMY_DER */) = ((data->localData[0]->realVars[72] /* der(rearRight.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)) + ((data->localData[0]->realVars[73] /* der(rearRight.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[265] /* rearRight.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1736
type: SIMPLE_ASSIGN
$DER.rear.R[2,1] = Trot[2,1] * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1736};
  (data->localData[0]->realVars[60] /* der(rear.R[2,1]) DUMMY_DER */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
/*
equation index: 1737
type: SIMPLE_ASSIGN
$DER.rear.r0[1] = $DER.rear.R[2,2] * rear.r[1] - $DER.rear.R[2,1] * rear.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1737};
  (data->localData[0]->realVars[64] /* der(rear.r0[1]) DUMMY_DER */) = ((data->localData[0]->realVars[61] /* der(rear.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)) - (((data->localData[0]->realVars[60] /* der(rear.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[215] /* rear.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1738
type: SIMPLE_ASSIGN
$DER.rear.frame_a.x = body.v[1] - $DER.rear.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1738};
  (data->localData[0]->realVars[62] /* der(rear.frame_a.x) DUMMY_DER */) = (data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */) - (data->localData[0]->realVars[64] /* der(rear.r0[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1739
type: SIMPLE_ASSIGN
rearRightWheel.v[1] = $DER.rear.frame_a.x + $DER.rearRight.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1739};
  (data->localData[0]->realVars[971] /* rearRightWheel.v[1] variable */) = (data->localData[0]->realVars[62] /* der(rear.frame_a.x) DUMMY_DER */) + (data->localData[0]->realVars[74] /* der(rearRight.r0[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1740
type: SIMPLE_ASSIGN
$DER.rearRightWheel.frame_a.x = rearRightWheel.v[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1740};
  (data->localData[0]->realVars[76] /* der(rearRightWheel.frame_a.x) DUMMY_DER */) = (data->localData[0]->realVars[971] /* rearRightWheel.v[1] variable */);
  TRACE_POP
}
/*
equation index: 1741
type: SIMPLE_ASSIGN
rearLeftWheel.v[1] = $DER.rear.frame_a.x - $DER.rearLeft.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  (data->localData[0]->realVars[855] /* rearLeftWheel.v[1] variable */) = (data->localData[0]->realVars[62] /* der(rear.frame_a.x) DUMMY_DER */) - (data->localData[0]->realVars[68] /* der(rearLeft.r0[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1742
type: SIMPLE_ASSIGN
$DER.rearLeftWheel.frame_a.x = rearLeftWheel.v[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1742};
  (data->localData[0]->realVars[70] /* der(rearLeftWheel.frame_a.x) DUMMY_DER */) = (data->localData[0]->realVars[855] /* rearLeftWheel.v[1] variable */);
  TRACE_POP
}
/*
equation index: 1743
type: SIMPLE_ASSIGN
$DER.rear.r0[2] = $DER.rear.R[2,1] * rear.r[1] + $DER.rear.R[2,2] * rear.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  (data->localData[0]->realVars[65] /* der(rear.r0[2]) DUMMY_DER */) = ((data->localData[0]->realVars[60] /* der(rear.R[2,1]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)) + ((data->localData[0]->realVars[61] /* der(rear.R[2,2]) DUMMY_DER */)) * ((data->simulationInfo->realParameter[215] /* rear.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1744
type: SIMPLE_ASSIGN
$DER.rear.frame_a.y = body.v[2] - $DER.rear.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1744};
  (data->localData[0]->realVars[63] /* der(rear.frame_a.y) DUMMY_DER */) = (data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */) - (data->localData[0]->realVars[65] /* der(rear.r0[2]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1745
type: SIMPLE_ASSIGN
rearRightWheel.v[2] = $DER.rear.frame_a.y + $DER.rearRight.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[972] /* rearRightWheel.v[2] variable */) = (data->localData[0]->realVars[63] /* der(rear.frame_a.y) DUMMY_DER */) + (data->localData[0]->realVars[75] /* der(rearRight.r0[2]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1746
type: SIMPLE_ASSIGN
outSlipRightWheel[2] = rearRightWheel.v[2] * rearRightWheel.e0[1] - rearRightWheel.v[1] * rearRightWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1746};
  (data->localData[0]->realVars[384] /* outSlipRightWheel[2] variable */) = ((data->localData[0]->realVars[972] /* rearRightWheel.v[2] variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) - (((data->localData[0]->realVars[971] /* rearRightWheel.v[1] variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)));
  TRACE_POP
}
/*
equation index: 1747
type: SIMPLE_ASSIGN
rearRightWheel.v_long = rearRightWheel.v[1] * rearRightWheel.e0[1] + rearRightWheel.v[2] * rearRightWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  (data->localData[0]->realVars[975] /* rearRightWheel.v_long variable */) = ((data->localData[0]->realVars[971] /* rearRightWheel.v[1] variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) + ((data->localData[0]->realVars[972] /* rearRightWheel.v[2] variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1748
type: SIMPLE_ASSIGN
outSlipRightWheel[1] = rearRightWheel.v_long - rearRightWheel.radius * rearRightInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  (data->localData[0]->realVars[383] /* outSlipRightWheel[1] variable */) = (data->localData[0]->realVars[975] /* rearRightWheel.v_long variable */) - (((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */)) * ((data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */)));
  TRACE_POP
}
/*
equation index: 1749
type: SIMPLE_ASSIGN
rearRightWheel.v_slip = sqrt(outSlipRightWheel[1] ^ 2.0 + outSlipRightWheel[2] ^ 2.0 + 1e-10)
*/
void ThreeWheelVehicle3FMU_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1749};
  modelica_real tmp54;
  modelica_real tmp55;
  tmp54 = (data->localData[0]->realVars[383] /* outSlipRightWheel[1] variable */);
  tmp55 = (data->localData[0]->realVars[384] /* outSlipRightWheel[2] variable */);
  (data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */) = sqrt((tmp54 * tmp54) + (tmp55 * tmp55) + 1e-10);
  TRACE_POP
}
/*
equation index: 1750
type: SIMPLE_ASSIGN
$cse14 = PlanarMechanics.Utilities.Functions.limitByStriple(rearRightWheel.vAdhesion, rearRightWheel.vSlide, rearRightWheel.mu_A, rearRightWheel.mu_S, rearRightWheel.v_slip)
*/
void ThreeWheelVehicle3FMU_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1750};
  (data->localData[0]->realVars[87] /* $cse14 variable */) = omc_PlanarMechanics_Utilities_Functions_limitByStriple(threadData, (data->localData[0]->realVars[973] /* rearRightWheel.vAdhesion variable */), (data->localData[0]->realVars[974] /* rearRightWheel.vSlide variable */), (data->simulationInfo->realParameter[278] /* rearRightWheel.mu_A PARAM */), (data->simulationInfo->realParameter[279] /* rearRightWheel.mu_S PARAM */), (data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */));
  TRACE_POP
}
/*
equation index: 1751
type: SIMPLE_ASSIGN
$cse13 = exp((-100.0) * rearRightWheel.v_long / rearRightWheel.v0_roll)
*/
void ThreeWheelVehicle3FMU_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[86] /* $cse13 variable */) = exp(DIVISION_SIM((-100.0) * ((data->localData[0]->realVars[975] /* rearRightWheel.v_long variable */)),(data->simulationInfo->realParameter[294] /* rearRightWheel.v0_roll PARAM */),"rearRightWheel.v0_roll",equationIndexes));
  TRACE_POP
}
/*
equation index: 1752
type: SIMPLE_ASSIGN
outSlipAngleRight = atan(outSlipRightWheel[2] / rearRightWheel.v_long)
*/
void ThreeWheelVehicle3FMU_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1752};
  (data->localData[0]->realVars[375] /* outSlipAngleRight variable */) = atan(DIVISION_SIM((data->localData[0]->realVars[384] /* outSlipRightWheel[2] variable */),(data->localData[0]->realVars[975] /* rearRightWheel.v_long variable */),"rearRightWheel.v_long",equationIndexes));
  TRACE_POP
}
/*
equation index: 1753
type: SIMPLE_ASSIGN
outEffRadiusRightWheel = rearRightWheel.v_long / rearRightInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  (data->localData[0]->realVars[363] /* outEffRadiusRightWheel variable */) = DIVISION_SIM((data->localData[0]->realVars[975] /* rearRightWheel.v_long variable */),(data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */),"rearRightInertia.w",equationIndexes);
  TRACE_POP
}
/*
equation index: 1754
type: SIMPLE_ASSIGN
outSlipRatioRight = (-outSlipRightWheel[1]) / rearRightWheel.v_long
*/
void ThreeWheelVehicle3FMU_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  (data->localData[0]->realVars[382] /* outSlipRatioRight variable */) = DIVISION_SIM((-(data->localData[0]->realVars[383] /* outSlipRightWheel[1] variable */)),(data->localData[0]->realVars[975] /* rearRightWheel.v_long variable */),"rearRightWheel.v_long",equationIndexes);
  TRACE_POP
}
/*
equation index: 1755
type: SIMPLE_ASSIGN
$DER.rearRightWheel.frame_a.y = rearRightWheel.v[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[77] /* der(rearRightWheel.frame_a.y) DUMMY_DER */) = (data->localData[0]->realVars[972] /* rearRightWheel.v[2] variable */);
  TRACE_POP
}
/*
equation index: 1756
type: SIMPLE_ASSIGN
rearLeftWheel.v[2] = $DER.rear.frame_a.y - $DER.rearLeft.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  (data->localData[0]->realVars[856] /* rearLeftWheel.v[2] variable */) = (data->localData[0]->realVars[63] /* der(rear.frame_a.y) DUMMY_DER */) - (data->localData[0]->realVars[69] /* der(rearLeft.r0[2]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1757
type: SIMPLE_ASSIGN
outSlipLeftWheel[2] = rearLeftWheel.v[2] * rearLeftWheel.e0[1] - rearLeftWheel.v[1] * rearLeftWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1757};
  (data->localData[0]->realVars[379] /* outSlipLeftWheel[2] variable */) = ((data->localData[0]->realVars[856] /* rearLeftWheel.v[2] variable */)) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) - (((data->localData[0]->realVars[855] /* rearLeftWheel.v[1] variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)));
  TRACE_POP
}
/*
equation index: 1758
type: SIMPLE_ASSIGN
rearLeftWheel.v_long = rearLeftWheel.v[1] * rearLeftWheel.e0[1] + rearLeftWheel.v[2] * rearLeftWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1758};
  (data->localData[0]->realVars[859] /* rearLeftWheel.v_long variable */) = ((data->localData[0]->realVars[855] /* rearLeftWheel.v[1] variable */)) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) + ((data->localData[0]->realVars[856] /* rearLeftWheel.v[2] variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */));
  TRACE_POP
}
/*
equation index: 1759
type: SIMPLE_ASSIGN
outSlipLeftWheel[1] = rearLeftWheel.v_long - rearLeftWheel.radius * rearLeftInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  (data->localData[0]->realVars[378] /* outSlipLeftWheel[1] variable */) = (data->localData[0]->realVars[859] /* rearLeftWheel.v_long variable */) - (((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */)) * ((data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */)));
  TRACE_POP
}
/*
equation index: 1760
type: SIMPLE_ASSIGN
rearLeftWheel.v_slip = sqrt(outSlipLeftWheel[1] ^ 2.0 + outSlipLeftWheel[2] ^ 2.0 + 1e-10)
*/
void ThreeWheelVehicle3FMU_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1760};
  modelica_real tmp56;
  modelica_real tmp57;
  tmp56 = (data->localData[0]->realVars[378] /* outSlipLeftWheel[1] variable */);
  tmp57 = (data->localData[0]->realVars[379] /* outSlipLeftWheel[2] variable */);
  (data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */) = sqrt((tmp56 * tmp56) + (tmp57 * tmp57) + 1e-10);
  TRACE_POP
}
/*
equation index: 1761
type: SIMPLE_ASSIGN
$cse10 = PlanarMechanics.Utilities.Functions.limitByStriple(rearLeftWheel.vAdhesion, rearLeftWheel.vSlide, rearLeftWheel.mu_A, rearLeftWheel.mu_S, rearLeftWheel.v_slip)
*/
void ThreeWheelVehicle3FMU_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1761};
  (data->localData[0]->realVars[83] /* $cse10 variable */) = omc_PlanarMechanics_Utilities_Functions_limitByStriple(threadData, (data->localData[0]->realVars[857] /* rearLeftWheel.vAdhesion variable */), (data->localData[0]->realVars[858] /* rearLeftWheel.vSlide variable */), (data->simulationInfo->realParameter[238] /* rearLeftWheel.mu_A PARAM */), (data->simulationInfo->realParameter[239] /* rearLeftWheel.mu_S PARAM */), (data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */));
  TRACE_POP
}
/*
equation index: 1762
type: SIMPLE_ASSIGN
$cse9 = exp((-100.0) * rearLeftWheel.v_long / rearLeftWheel.v0_roll)
*/
void ThreeWheelVehicle3FMU_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1762};
  (data->localData[0]->realVars[94] /* $cse9 variable */) = exp(DIVISION_SIM((-100.0) * ((data->localData[0]->realVars[859] /* rearLeftWheel.v_long variable */)),(data->simulationInfo->realParameter[254] /* rearLeftWheel.v0_roll PARAM */),"rearLeftWheel.v0_roll",equationIndexes));
  TRACE_POP
}
/*
equation index: 1763
type: SIMPLE_ASSIGN
outSlipAngleLeft = atan(outSlipLeftWheel[2] / rearLeftWheel.v_long)
*/
void ThreeWheelVehicle3FMU_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  (data->localData[0]->realVars[374] /* outSlipAngleLeft variable */) = atan(DIVISION_SIM((data->localData[0]->realVars[379] /* outSlipLeftWheel[2] variable */),(data->localData[0]->realVars[859] /* rearLeftWheel.v_long variable */),"rearLeftWheel.v_long",equationIndexes));
  TRACE_POP
}
/*
equation index: 1764
type: SIMPLE_ASSIGN
outEffRadiusLeftWheel = rearLeftWheel.v_long / rearLeftInertia.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  (data->localData[0]->realVars[362] /* outEffRadiusLeftWheel variable */) = DIVISION_SIM((data->localData[0]->realVars[859] /* rearLeftWheel.v_long variable */),(data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */),"rearLeftInertia.w",equationIndexes);
  TRACE_POP
}
/*
equation index: 1765
type: SIMPLE_ASSIGN
outSlipRatioLeft = (-outSlipLeftWheel[1]) / rearLeftWheel.v_long
*/
void ThreeWheelVehicle3FMU_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  (data->localData[0]->realVars[381] /* outSlipRatioLeft variable */) = DIVISION_SIM((-(data->localData[0]->realVars[378] /* outSlipLeftWheel[1] variable */)),(data->localData[0]->realVars[859] /* rearLeftWheel.v_long variable */),"rearLeftWheel.v_long",equationIndexes);
  TRACE_POP
}
/*
equation index: 1766
type: SIMPLE_ASSIGN
$DER.rearLeftWheel.frame_a.y = rearLeftWheel.v[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  (data->localData[0]->realVars[71] /* der(rearLeftWheel.frame_a.y) DUMMY_DER */) = (data->localData[0]->realVars[856] /* rearLeftWheel.v[2] variable */);
  TRACE_POP
}
/*
equation index: 1767
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R[1,1] = Trot[2,1] * airResistanceLongitudinal.e[1] - Trot[2,2] * airResistanceLongitudinal.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  (data->localData[0]->realVars[99] /* airResistanceLongitudinal.R[1,1] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1768
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R[1,2] = (-Trot[2,1]) * airResistanceLongitudinal.e[2] - Trot[2,2] * airResistanceLongitudinal.e[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  (data->localData[0]->realVars[100] /* airResistanceLongitudinal.R[1,2] variable */) = ((-(data->localData[0]->realVars[97] /* Trot[2,1] variable */))) * ((data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */)));
  TRACE_POP
}
/*
equation index: 1769
type: SIMPLE_ASSIGN
airResistanceLongitudinal.vAir[2] = (-airResistanceLongitudinal.R[1,2]) * body.v[1] - airResistanceLongitudinal.R[1,1] * body.v[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  (data->localData[0]->realVars[110] /* airResistanceLongitudinal.vAir[2] variable */) = ((-(data->localData[0]->realVars[100] /* airResistanceLongitudinal.R[1,2] variable */))) * ((data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */)) - (((data->localData[0]->realVars[99] /* airResistanceLongitudinal.R[1,1] variable */)) * ((data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */)));
  TRACE_POP
}
/*
equation index: 1770
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R[2,1] = Trot[2,2] * airResistanceLongitudinal.e[1] + Trot[2,1] * airResistanceLongitudinal.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  (data->localData[0]->realVars[101] /* airResistanceLongitudinal.R[2,1] variable */) = ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */)) + ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1771
type: SIMPLE_ASSIGN
airResistanceLongitudinal.vAir[1] = (-airResistanceLongitudinal.R[1,1]) * body.v[1] - airResistanceLongitudinal.R[2,1] * body.v[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1771};
  (data->localData[0]->realVars[109] /* airResistanceLongitudinal.vAir[1] variable */) = ((-(data->localData[0]->realVars[99] /* airResistanceLongitudinal.R[1,1] variable */))) * ((data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */)) - (((data->localData[0]->realVars[101] /* airResistanceLongitudinal.R[2,1] variable */)) * ((data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */)));
  TRACE_POP
}
/*
equation index: 1772
type: SIMPLE_ASSIGN
airResistanceLongitudinal.fDrag = 0.5 * airResistanceLongitudinal.area * airResistanceLongitudinal.rho * airResistanceLongitudinal.vAir[1] ^ 2.0 * airResistanceLongitudinal.c_W
*/
void ThreeWheelVehicle3FMU_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1772};
  modelica_real tmp58;
  tmp58 = (data->localData[0]->realVars[109] /* airResistanceLongitudinal.vAir[1] variable */);
  (data->localData[0]->realVars[104] /* airResistanceLongitudinal.fDrag variable */) = (0.5) * (((data->simulationInfo->realParameter[4] /* airResistanceLongitudinal.area PARAM */)) * (((data->simulationInfo->realParameter[10] /* airResistanceLongitudinal.rho PARAM */)) * (((tmp58 * tmp58)) * ((data->simulationInfo->realParameter[5] /* airResistanceLongitudinal.c_W PARAM */)))));
  TRACE_POP
}
/*
equation index: 1773
type: SIMPLE_ASSIGN
airResistanceLongitudinal.f_long = if noEvent(airResistanceLongitudinal.vAir[1] > -0.001) then 0.0 else airResistanceLongitudinal.fDrag
*/
void ThreeWheelVehicle3FMU_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1773};
  modelica_boolean tmp59;
  tmp59 = Greater((data->localData[0]->realVars[109] /* airResistanceLongitudinal.vAir[1] variable */),-0.001);
  (data->localData[0]->realVars[105] /* airResistanceLongitudinal.f_long variable */) = (tmp59?0.0:(data->localData[0]->realVars[104] /* airResistanceLongitudinal.fDrag variable */));
  TRACE_POP
}
/*
equation index: 1774
type: SIMPLE_ASSIGN
airResistanceLongitudinal.frame_a.fx = airResistanceLongitudinal.R[1,1] * airResistanceLongitudinal.f_long
*/
void ThreeWheelVehicle3FMU_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  (data->localData[0]->realVars[106] /* airResistanceLongitudinal.frame_a.fx variable */) = ((data->localData[0]->realVars[99] /* airResistanceLongitudinal.R[1,1] variable */)) * ((data->localData[0]->realVars[105] /* airResistanceLongitudinal.f_long variable */));
  TRACE_POP
}
/*
equation index: 1775
type: SIMPLE_ASSIGN
airResistanceLongitudinal.frame_a.fy = airResistanceLongitudinal.R[2,1] * airResistanceLongitudinal.f_long
*/
void ThreeWheelVehicle3FMU_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1775};
  (data->localData[0]->realVars[107] /* airResistanceLongitudinal.frame_a.fy variable */) = ((data->localData[0]->realVars[101] /* airResistanceLongitudinal.R[2,1] variable */)) * ((data->localData[0]->realVars[105] /* airResistanceLongitudinal.f_long variable */));
  TRACE_POP
}
/*
equation index: 1776
type: SIMPLE_ASSIGN
outCarVelocity[1] = Trot[2,1] * body.v[2] - Trot[2,2] * body.v[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1776};
  (data->localData[0]->realVars[359] /* outCarVelocity[1] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */)));
  TRACE_POP
}
/*
equation index: 1777
type: SIMPLE_ASSIGN
outCarVelocity[2] = Trot[2,1] * body.v[1] + Trot[2,2] * body.v[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  (data->localData[0]->realVars[360] /* outCarVelocity[2] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */)) + ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */));
  TRACE_POP
}
void ThreeWheelVehicle3FMU_eqFunction_1778(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1779(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1780(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1781(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1782(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1783(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1784(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1785(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1786(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1787(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1788(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1789(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1790(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1791(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1792(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1793(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1794(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1795(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1796(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1797(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1798(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1799(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1800(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1801(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1802(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1803(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1804(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1805(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1806(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1807(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1808(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1809(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1810(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1811(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1812(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1813(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1814(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1815(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1816(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1817(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1818(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1819(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1820(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1821(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1822(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1823(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1824(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1825(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1826(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1827(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1828(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1829(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1830(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1831(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1832(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1833(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1840(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1839(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1838(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1837(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1836(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1835(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1834(DATA*, threadData_t*);
/*
equation index: 1902
indexNonlinear: 1
type: NONLINEAR

vars: {rearLeft.frame_a.fx, rearLeft.frame_a.fy, front2.frame_a.fy, front2.frame_a.fx, body.a[1], body.a[2], $DER.body.w}
eqns: {1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1840, 1839, 1838, 1837, 1836, 1835, 1834}
*/
void ThreeWheelVehicle3FMU_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1902};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1902 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = (data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = (data->localData[0]->realVars[114] /* body.a[1] variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = (data->localData[0]->realVars[115] /* body.a[2] variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1902};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1902 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  (data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  (data->localData[0]->realVars[114] /* body.a[1] variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  (data->localData[0]->realVars[115] /* body.a[2] variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */) = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  TRACE_POP
}
/*
equation index: 1903
type: SIMPLE_ASSIGN
$DER.body2.w = body2.z
*/
void ThreeWheelVehicle3FMU_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1903};
  (data->localData[0]->realVars[45] /* der(body2.w) DUMMY_DER */) = (data->localData[0]->realVars[180] /* body2.z variable */);
  TRACE_POP
}
/*
equation index: 1904
type: SIMPLE_ASSIGN
rearLeftWheel.flange_a.tau = (-outForceLeftWheel[1,1]) * rearLeftWheel.radius
*/
void ThreeWheelVehicle3FMU_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1904};
  (data->localData[0]->realVars[794] /* rearLeftWheel.flange_a.tau variable */) = ((-(data->localData[0]->realVars[367] /* outForceLeftWheel[1,1] variable */))) * ((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */));
  TRACE_POP
}
/*
equation index: 1905
type: SIMPLE_ASSIGN
rearRightWheel.f_roll = (-rearRightWheel.cr) * outForceRightWheel[1,3] * (-1.0 + 2.0 / (1.0 + $cse13))
*/
void ThreeWheelVehicle3FMU_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1905};
  (data->localData[0]->realVars[909] /* rearRightWheel.f_roll variable */) = ((-(data->simulationInfo->realParameter[271] /* rearRightWheel.cr PARAM */))) * (((data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */)) * (-1.0 + DIVISION_SIM(2.0,1.0 + (data->localData[0]->realVars[86] /* $cse13 variable */),"1.0 + $cse13",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1906
type: SIMPLE_ASSIGN
outTrollRight = rearRightWheel.f_roll * rearRightWheel.radius
*/
void ThreeWheelVehicle3FMU_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1906};
  (data->localData[0]->realVars[387] /* outTrollRight variable */) = ((data->localData[0]->realVars[909] /* rearRightWheel.f_roll variable */)) * ((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */));
  TRACE_POP
}
/*
equation index: 1907
type: SIMPLE_ASSIGN
rearRightWheel.flange_a.tau = (-outForceRightWheel[1,1]) * rearRightWheel.radius
*/
void ThreeWheelVehicle3FMU_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1907};
  (data->localData[0]->realVars[910] /* rearRightWheel.flange_a.tau variable */) = ((-(data->localData[0]->realVars[370] /* outForceRightWheel[1,1] variable */))) * ((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */));
  TRACE_POP
}
/*
equation index: 1908
type: SIMPLE_ASSIGN
rearRightInertia.flange_b.tau = outTrollRight - rearRightWheel.flange_a.tau
*/
void ThreeWheelVehicle3FMU_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1908};
  (data->localData[0]->realVars[886] /* rearRightInertia.flange_b.tau variable */) = (data->localData[0]->realVars[387] /* outTrollRight variable */) - (data->localData[0]->realVars[910] /* rearRightWheel.flange_a.tau variable */);
  TRACE_POP
}
/*
equation index: 1909
type: SIMPLE_ASSIGN
rearRightInertia.a = (rearRightInertia.flange_b.tau - gearRight.flange_b.tau) / rearRightInertia.J
*/
void ThreeWheelVehicle3FMU_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1909};
  (data->localData[0]->realVars[885] /* rearRightInertia.a variable */) = DIVISION_SIM((data->localData[0]->realVars[886] /* rearRightInertia.flange_b.tau variable */) - (data->localData[0]->realVars[343] /* gearRight.flange_b.tau variable */),(data->simulationInfo->realParameter[269] /* rearRightInertia.J PARAM */),"rearRightInertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 1910
type: SIMPLE_ASSIGN
$DER.rearRightInertia.w = rearRightInertia.a
*/
void ThreeWheelVehicle3FMU_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1910};
  (data->localData[0]->realVars[23] /* der(rearRightInertia.w) STATE_DER */) = (data->localData[0]->realVars[885] /* rearRightInertia.a variable */);
  TRACE_POP
}
/*
equation index: 1911
type: SIMPLE_ASSIGN
rearRightWheel.lossPower = rearRightWheel.f * rearRightWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1911};
  (data->localData[0]->realVars[914] /* rearRightWheel.lossPower variable */) = ((data->localData[0]->realVars[908] /* rearRightWheel.f variable */)) * ((data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */));
  TRACE_POP
}
/*
equation index: 1912
type: SIMPLE_ASSIGN
rearLeftWheel.lossPower = rearLeftWheel.f * rearLeftWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1912};
  (data->localData[0]->realVars[798] /* rearLeftWheel.lossPower variable */) = ((data->localData[0]->realVars[792] /* rearLeftWheel.f variable */)) * ((data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */));
  TRACE_POP
}
/*
equation index: 1913
type: SIMPLE_ASSIGN
rearLeftWheel.f_roll = (-rearLeftWheel.cr) * outForceLeftWheel[1,3] * (-1.0 + 2.0 / (1.0 + $cse9))
*/
void ThreeWheelVehicle3FMU_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1913};
  (data->localData[0]->realVars[793] /* rearLeftWheel.f_roll variable */) = ((-(data->simulationInfo->realParameter[231] /* rearLeftWheel.cr PARAM */))) * (((data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */)) * (-1.0 + DIVISION_SIM(2.0,1.0 + (data->localData[0]->realVars[94] /* $cse9 variable */),"1.0 + $cse9",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1914
type: SIMPLE_ASSIGN
outTrollLeft = rearLeftWheel.f_roll * rearLeftWheel.radius
*/
void ThreeWheelVehicle3FMU_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1914};
  (data->localData[0]->realVars[386] /* outTrollLeft variable */) = ((data->localData[0]->realVars[793] /* rearLeftWheel.f_roll variable */)) * ((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */));
  TRACE_POP
}
/*
equation index: 1915
type: SIMPLE_ASSIGN
rearLeftInertia.flange_b.tau = outTrollLeft - rearLeftWheel.flange_a.tau
*/
void ThreeWheelVehicle3FMU_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1915};
  (data->localData[0]->realVars[770] /* rearLeftInertia.flange_b.tau variable */) = (data->localData[0]->realVars[386] /* outTrollLeft variable */) - (data->localData[0]->realVars[794] /* rearLeftWheel.flange_a.tau variable */);
  TRACE_POP
}
/*
equation index: 1916
type: SIMPLE_ASSIGN
rearLeftInertia.a = (rearLeftInertia.flange_b.tau - gearLeft.flange_b.tau) / rearLeftInertia.J
*/
void ThreeWheelVehicle3FMU_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1916};
  (data->localData[0]->realVars[769] /* rearLeftInertia.a variable */) = DIVISION_SIM((data->localData[0]->realVars[770] /* rearLeftInertia.flange_b.tau variable */) - (data->localData[0]->realVars[340] /* gearLeft.flange_b.tau variable */),(data->simulationInfo->realParameter[229] /* rearLeftInertia.J PARAM */),"rearLeftInertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 1917
type: SIMPLE_ASSIGN
$DER.rearLeftInertia.w = rearLeftInertia.a
*/
void ThreeWheelVehicle3FMU_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1917};
  (data->localData[0]->realVars[21] /* der(rearLeftInertia.w) STATE_DER */) = (data->localData[0]->realVars[769] /* rearLeftInertia.a variable */);
  TRACE_POP
}
/*
equation index: 1918
type: SIMPLE_ASSIGN
frontWheel.flange_a.tau = (-outForceFrontWheel[1,1]) * frontWheel.radius
*/
void ThreeWheelVehicle3FMU_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1918};
  (data->localData[0]->realVars[275] /* frontWheel.flange_a.tau variable */) = ((-(data->localData[0]->realVars[364] /* outForceFrontWheel[1,1] variable */))) * ((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */));
  TRACE_POP
}
/*
equation index: 1919
type: SIMPLE_ASSIGN
$DER.body2.v[2] = body2.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1919};
  (data->localData[0]->realVars[44] /* der(body2.v[2]) DUMMY_DER */) = (data->localData[0]->realVars[145] /* body2.a[2] variable */);
  TRACE_POP
}
/*
equation index: 1920
type: SIMPLE_ASSIGN
frontWheel.lossPower = frontWheel.f * frontWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1920};
  (data->localData[0]->realVars[279] /* frontWheel.lossPower variable */) = ((data->localData[0]->realVars[273] /* frontWheel.f variable */)) * ((data->localData[0]->realVars[339] /* frontWheel.v_slip variable */));
  TRACE_POP
}
/*
equation index: 1921
type: SIMPLE_ASSIGN
frontWheel.f_roll = (-frontWheel.cr) * outForceFrontWheel[1,3] * (-1.0 + 2.0 / (1.0 + $cse5))
*/
void ThreeWheelVehicle3FMU_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1921};
  (data->localData[0]->realVars[274] /* frontWheel.f_roll variable */) = ((-(data->simulationInfo->realParameter[67] /* frontWheel.cr PARAM */))) * (((data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */)) * (-1.0 + DIVISION_SIM(2.0,1.0 + (data->localData[0]->realVars[90] /* $cse5 variable */),"1.0 + $cse5",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1922
type: SIMPLE_ASSIGN
outTrollFront = frontWheel.f_roll * frontWheel.radius
*/
void ThreeWheelVehicle3FMU_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1922};
  (data->localData[0]->realVars[385] /* outTrollFront variable */) = ((data->localData[0]->realVars[274] /* frontWheel.f_roll variable */)) * ((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */));
  TRACE_POP
}
/*
equation index: 1923
type: SIMPLE_ASSIGN
frontInertia.flange_b.tau = outTrollFront - frontWheel.flange_a.tau
*/
void ThreeWheelVehicle3FMU_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1923};
  (data->localData[0]->realVars[231] /* frontInertia.flange_b.tau variable */) = (data->localData[0]->realVars[385] /* outTrollFront variable */) - (data->localData[0]->realVars[275] /* frontWheel.flange_a.tau variable */);
  TRACE_POP
}
/*
equation index: 1924
type: SIMPLE_ASSIGN
frontInertia.a = frontInertia.flange_b.tau / frontInertia.J
*/
void ThreeWheelVehicle3FMU_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1924};
  (data->localData[0]->realVars[229] /* frontInertia.a variable */) = DIVISION_SIM((data->localData[0]->realVars[231] /* frontInertia.flange_b.tau variable */),(data->simulationInfo->realParameter[54] /* frontInertia.J PARAM */),"frontInertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 1925
type: SIMPLE_ASSIGN
$DER.frontInertia.w = frontInertia.a
*/
void ThreeWheelVehicle3FMU_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1925};
  (data->localData[0]->realVars[19] /* der(frontInertia.w) STATE_DER */) = (data->localData[0]->realVars[229] /* frontInertia.a variable */);
  TRACE_POP
}
/*
equation index: 1926
type: SIMPLE_ASSIGN
debugWheelInTheAir = outForceFrontWheel[1,3] + outForceLeftWheel[1,3] + outForceRightWheel[1,3] - mass * g
*/
void ThreeWheelVehicle3FMU_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1926};
  (data->localData[0]->realVars[182] /* debugWheelInTheAir variable */) = (data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */) + (data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */) + (data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */) - (((data->simulationInfo->realParameter[103] /* mass PARAM */)) * ((data->simulationInfo->realParameter[95] /* g PARAM */)));
  TRACE_POP
}
/*
equation index: 1927
type: SIMPLE_ASSIGN
debugWeghtTransfer = outWeightTransfer[1] + outWeightTransfer[2] + outWeightTransfer[3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1927};
  (data->localData[0]->realVars[181] /* debugWeghtTransfer variable */) = (data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */) + (data->localData[0]->realVars[391] /* outWeightTransfer[2] variable */) + (data->localData[0]->realVars[392] /* outWeightTransfer[3] variable */);
  TRACE_POP
}
/*
equation index: 1928
type: SIMPLE_ASSIGN
$DER.body.v[1] = body.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1928};
  (data->localData[0]->realVars[15] /* der(body.v[1]) STATE_DER */) = (data->localData[0]->realVars[114] /* body.a[1] variable */);
  TRACE_POP
}
/*
equation index: 1929
type: SIMPLE_ASSIGN
$DER.body2.v[1] = body2.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1929};
  (data->localData[0]->realVars[43] /* der(body2.v[1]) DUMMY_DER */) = (data->localData[0]->realVars[144] /* body2.a[1] variable */);
  TRACE_POP
}
/*
equation index: 1930
type: SIMPLE_ASSIGN
$DER.body.v[2] = body.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1930};
  (data->localData[0]->realVars[16] /* der(body.v[2]) STATE_DER */) = (data->localData[0]->realVars[115] /* body.a[2] variable */);
  TRACE_POP
}
/*
equation index: 1931
type: SIMPLE_ASSIGN
front2.R[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1931};
  (data->localData[0]->realVars[207] /* front2.R[2,2] DUMMY_STATE */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1932
type: SIMPLE_ASSIGN
front.R[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1932};
  (data->localData[0]->realVars[184] /* front.R[2,2] DUMMY_STATE */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1933
type: SIMPLE_ASSIGN
rear.R[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1933};
  (data->localData[0]->realVars[720] /* rear.R[2,2] DUMMY_STATE */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1934
type: SIMPLE_ASSIGN
rearRight.R[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1934};
  (data->localData[0]->realVars[862] /* rearRight.R[2,2] DUMMY_STATE */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1935
type: SIMPLE_ASSIGN
rearLeft.R[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1935};
  (data->localData[0]->realVars[746] /* rearLeft.R[2,2] DUMMY_STATE */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1936
type: SIMPLE_ASSIGN
rearRightWheel.R[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1936};
  (data->localData[0]->realVars[889] /* rearRightWheel.R[2,2] variable */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1937
type: SIMPLE_ASSIGN
body.sphere.R.T[1,1] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1937};
  (data->localData[0]->realVars[119] /* body.sphere.R.T[1,1] variable */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1938
type: SIMPLE_ASSIGN
body.sphere.R.T[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1938};
  (data->localData[0]->realVars[123] /* body.sphere.R.T[2,2] variable */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1939
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R0a[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1939};
  (data->localData[0]->realVars[103] /* airResistanceLongitudinal.R0a[2,2] variable */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1940
type: SIMPLE_ASSIGN
rearLeftWheel.R[2,2] = Trot[2,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1940};
  (data->localData[0]->realVars[773] /* rearLeftWheel.R[2,2] variable */) = (data->localData[0]->realVars[97] /* Trot[2,1] variable */);
  TRACE_POP
}
/*
equation index: 1941
type: ARRAY_CALL_ASSIGN

world.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void ThreeWheelVehicle3FMU_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1941};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&(data->localData[0]->realVars[1393] /* world.z_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT3, _OMC_LIT2), tmp0);
  TRACE_POP
}
/*
equation index: 1942
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[2] = world.z_label.R_lines[2,2] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1942};
  (data->localData[0]->realVars[1418] /* world.z_label.cylinders[3].r[2] variable */) = ((data->localData[0]->realVars[1397] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1943
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[1] = world.z_label.R_lines[1,1] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1943};
  (data->localData[0]->realVars[1411] /* world.z_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[1393] /* world.z_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1944
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[1] = world.z_label.R_lines[2,1] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1944};
  (data->localData[0]->realVars[1417] /* world.z_label.cylinders[3].r[1] variable */) = ((data->localData[0]->realVars[1396] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1945
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[1] = (world.z_label.R_lines[1,1] - world.z_label.R_lines[2,1]) * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1945};
  (data->localData[0]->realVars[1414] /* world.z_label.cylinders[3].lengthDirection[1] variable */) = ((data->localData[0]->realVars[1393] /* world.z_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[1396] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1946
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[2] = world.z_label.R_lines[1,2] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1946};
  (data->localData[0]->realVars[1412] /* world.z_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[1394] /* world.z_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1947
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[2] = (world.z_label.R_lines[1,2] - world.z_label.R_lines[2,2]) * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1947};
  (data->localData[0]->realVars[1415] /* world.z_label.cylinders[3].lengthDirection[2] variable */) = ((data->localData[0]->realVars[1394] /* world.z_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[1397] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1948
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[3] = world.labelStart + world.z_label.R_lines[2,3] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1948};
  (data->localData[0]->realVars[1419] /* world.z_label.cylinders[3].r[3] variable */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[1398] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1949
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[3] = world.z_label.R_lines[1,3] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1949};
  (data->localData[0]->realVars[1413] /* world.z_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[1395] /* world.z_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1950
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[3] = (world.z_label.R_lines[1,3] - world.z_label.R_lines[2,3]) * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1950};
  (data->localData[0]->realVars[1416] /* world.z_label.cylinders[3].lengthDirection[3] variable */) = ((data->localData[0]->realVars[1395] /* world.z_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[1398] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1951
type: ARRAY_CALL_ASSIGN

world.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void ThreeWheelVehicle3FMU_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1951};
  real_array tmp1;
  real_array_create(&tmp1, ((modelica_real*)&((&(data->localData[0]->realVars[1269] /* world.y_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT2, _OMC_LIT4), tmp1);
  TRACE_POP
}
/*
equation index: 1952
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[2] = world.labelStart + world.y_label.R_lines[2,2] * world.y_label.lines[2,1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1952};
  (data->localData[0]->realVars[1292] /* world.y_label.cylinders[2].r[2] variable */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[1273] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1953
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[1] = world.y_label.R_lines[1,1] * world.scaledLabel + world.y_label.R_lines[2,1] * world.y_label.lines[1,2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1953};
  (data->localData[0]->realVars[1285] /* world.y_label.cylinders[1].lengthDirection[1] variable */) = ((data->localData[0]->realVars[1269] /* world.y_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[1272] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[1308] /* world.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1954
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[1] = world.y_label.R_lines[2,1] * world.y_label.lines[2,1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1954};
  (data->localData[0]->realVars[1291] /* world.y_label.cylinders[2].r[1] variable */) = ((data->localData[0]->realVars[1272] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1955
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[1] = world.y_label.R_lines[1,1] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,1] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1955};
  (data->localData[0]->realVars[1288] /* world.y_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[1269] /* world.y_label.R_lines[1,1] variable */)) * ((data->localData[0]->realVars[1311] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[1272] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[1312] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1956
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[2] = world.y_label.R_lines[1,2] * world.scaledLabel + world.y_label.R_lines[2,2] * world.y_label.lines[1,2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1956};
  (data->localData[0]->realVars[1286] /* world.y_label.cylinders[1].lengthDirection[2] variable */) = ((data->localData[0]->realVars[1270] /* world.y_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[1273] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[1308] /* world.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1957
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[2] = world.y_label.R_lines[1,2] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,2] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1957};
  (data->localData[0]->realVars[1289] /* world.y_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[1270] /* world.y_label.R_lines[1,2] variable */)) * ((data->localData[0]->realVars[1311] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[1273] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[1312] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1958
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[3] = world.y_label.R_lines[2,3] * world.y_label.lines[2,1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1958};
  (data->localData[0]->realVars[1293] /* world.y_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[1274] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1959
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[3] = world.y_label.R_lines[1,3] * world.scaledLabel + world.y_label.R_lines[2,3] * world.y_label.lines[1,2,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1959};
  (data->localData[0]->realVars[1287] /* world.y_label.cylinders[1].lengthDirection[3] variable */) = ((data->localData[0]->realVars[1271] /* world.y_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[1274] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[1308] /* world.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1960
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[3] = world.y_label.R_lines[1,3] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,3] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1960};
  (data->localData[0]->realVars[1290] /* world.y_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[1271] /* world.y_label.R_lines[1,3] variable */)) * ((data->localData[0]->realVars[1311] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[1274] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[1312] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1961
type: ARRAY_CALL_ASSIGN

world.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void ThreeWheelVehicle3FMU_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1961};
  real_array tmp2;
  real_array_create(&tmp2, ((modelica_real*)&((&(data->localData[0]->realVars[1148] /* world.x_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT1, _OMC_LIT2), tmp2);
  TRACE_POP
}
/*
equation index: 1962
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[2] = world.x_label.R_lines[2,2] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1962};
  (data->localData[0]->realVars[1171] /* world.x_label.cylinders[2].r[2] variable */) = ((data->localData[0]->realVars[1152] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1963
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[1] = world.scaledLabel * (world.x_label.R_lines[1,1] + world.x_label.R_lines[2,1])
*/
void ThreeWheelVehicle3FMU_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1963};
  (data->localData[0]->realVars[1164] /* world.x_label.cylinders[1].lengthDirection[1] variable */) = ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[1148] /* world.x_label.R_lines[1,1] variable */) + (data->localData[0]->realVars[1151] /* world.x_label.R_lines[2,1] variable */));
  TRACE_POP
}
/*
equation index: 1964
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[1] = world.labelStart + world.x_label.R_lines[2,1] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1964};
  (data->localData[0]->realVars[1170] /* world.x_label.cylinders[2].r[1] variable */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[1151] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1965
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[1] = (world.x_label.R_lines[1,1] - world.x_label.R_lines[2,1]) * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1965};
  (data->localData[0]->realVars[1167] /* world.x_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[1148] /* world.x_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[1151] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1966
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[2] = world.scaledLabel * (world.x_label.R_lines[1,2] + world.x_label.R_lines[2,2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1966};
  (data->localData[0]->realVars[1165] /* world.x_label.cylinders[1].lengthDirection[2] variable */) = ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[1149] /* world.x_label.R_lines[1,2] variable */) + (data->localData[0]->realVars[1152] /* world.x_label.R_lines[2,2] variable */));
  TRACE_POP
}
/*
equation index: 1967
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[2] = (world.x_label.R_lines[1,2] - world.x_label.R_lines[2,2]) * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1967};
  (data->localData[0]->realVars[1168] /* world.x_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[1149] /* world.x_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[1152] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1968
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[3] = world.x_label.R_lines[2,3] * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1968};
  (data->localData[0]->realVars[1172] /* world.x_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[1153] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1969
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[3] = world.scaledLabel * (world.x_label.R_lines[1,3] + world.x_label.R_lines[2,3])
*/
void ThreeWheelVehicle3FMU_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1969};
  (data->localData[0]->realVars[1166] /* world.x_label.cylinders[1].lengthDirection[3] variable */) = ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[1150] /* world.x_label.R_lines[1,3] variable */) + (data->localData[0]->realVars[1153] /* world.x_label.R_lines[2,3] variable */));
  TRACE_POP
}
/*
equation index: 1970
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[3] = (world.x_label.R_lines[1,3] - world.x_label.R_lines[2,3]) * world.scaledLabel
*/
void ThreeWheelVehicle3FMU_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1970};
  (data->localData[0]->realVars[1169] /* world.x_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[1150] /* world.x_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[1153] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}

OMC_DISABLE_OPT
int ThreeWheelVehicle3FMU_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  ThreeWheelVehicle3FMU_functionLocalKnownVars(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1433(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1434(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1435(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1436(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1437(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1438(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1439(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1440(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1441(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1442(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1443(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1444(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1445(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1446(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1447(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1448(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1449(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1450(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1451(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1452(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1453(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1454(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1455(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1456(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1457(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1458(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1459(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1460(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1461(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1462(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1463(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1464(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1465(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1466(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1467(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1468(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1469(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1470(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1471(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1472(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1473(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1474(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1475(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1476(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1477(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1478(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1479(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1480(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1481(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1482(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1483(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1484(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1485(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1486(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1487(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1488(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1489(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1490(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1491(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1492(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1493(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1494(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1495(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1496(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1497(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1498(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1499(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1500(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1501(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1502(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1503(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1504(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1505(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1506(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1507(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1508(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1509(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1510(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1511(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1512(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1513(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1514(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1515(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1516(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1517(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1518(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1519(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1520(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1521(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1522(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1523(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1524(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1525(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1526(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1527(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1528(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1529(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1530(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1531(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1532(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1533(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1534(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1535(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1536(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1537(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1538(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1539(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1540(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1541(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1542(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1543(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1544(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1545(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1546(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1547(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1548(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1549(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1550(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1551(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1552(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1553(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1554(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1555(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1556(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1557(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1558(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1559(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1560(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1561(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1562(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1563(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1564(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1565(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1566(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1567(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1568(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1569(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1570(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1571(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1572(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1573(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1574(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1575(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1576(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1577(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1578(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1579(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1580(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1581(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1582(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1583(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1584(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1585(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1586(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1587(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1588(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1589(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1590(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1591(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1592(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1593(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1594(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1595(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1596(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1597(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1598(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1599(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1600(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1601(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1602(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1603(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1604(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1605(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1606(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1607(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1608(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1609(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1610(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1611(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1612(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1613(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1614(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1615(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1616(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1617(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1618(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1619(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1620(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1621(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1622(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1623(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1624(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1625(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1626(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1627(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1628(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1629(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1630(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1631(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1632(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1633(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1634(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1635(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1636(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1637(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1638(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1639(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1640(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1641(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1642(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1643(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1644(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1645(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1646(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1647(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1648(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1649(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1650(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1651(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1652(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1653(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1654(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1655(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1656(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1657(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1658(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1659(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1660(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1661(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1662(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1663(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1664(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1665(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1666(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1667(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1668(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1669(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1670(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1671(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1672(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1673(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1674(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1675(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1676(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1677(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1678(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1679(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1680(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1681(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1682(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1683(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1684(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1685(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1686(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1687(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1688(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1689(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1690(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1691(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1692(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1693(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1694(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1695(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1696(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1697(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1698(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1699(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1700(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1701(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1702(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1703(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1704(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1705(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1706(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1707(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1708(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1709(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1710(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1711(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1712(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1713(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1714(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1715(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1716(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1717(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1718(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1719(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1720(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1721(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1722(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1723(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1724(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1725(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1726(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1727(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1728(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1729(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1730(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1731(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1732(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1733(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1734(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1735(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1736(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1737(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1738(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1739(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1740(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1741(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1742(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1743(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1744(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1745(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1746(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1747(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1748(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1749(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1750(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1751(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1752(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1753(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1754(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1755(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1756(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1757(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1758(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1759(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1760(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1761(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1762(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1763(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1764(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1765(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1766(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1767(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1768(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1769(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1770(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1771(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1772(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1773(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1774(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1775(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1776(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1777(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1902(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1903(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1904(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1905(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1906(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1907(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1908(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1909(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1910(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1911(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1912(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1913(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1914(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1915(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1916(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1917(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1918(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1919(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1920(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1921(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1922(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1923(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1924(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1925(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1926(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1927(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1928(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1929(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1930(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1931(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1932(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1933(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1934(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1935(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1936(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1937(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1938(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1939(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1940(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1941(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1942(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1943(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1944(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1945(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1946(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1947(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1948(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1949(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1950(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1951(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1952(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1953(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1954(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1955(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1956(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1957(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1958(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1959(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1960(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1961(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1962(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1963(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1964(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1965(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1966(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1967(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1968(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1969(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1970(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int ThreeWheelVehicle3FMU_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void ThreeWheelVehicle3FMU_eqFunction_1469(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1470(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1471(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1472(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1474(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1476(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1477(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1478(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1524(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1530(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1531(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1532(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1536(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1537(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1539(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1541(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1542(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1543(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1544(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1546(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1556(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1557(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1562(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1563(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1584(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1585(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1586(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1587(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1588(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1589(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1590(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1591(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1602(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1603(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1605(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1607(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1619(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1631(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1632(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1633(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1634(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1635(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1636(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1637(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1638(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1640(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1641(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1642(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1643(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1644(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1645(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1646(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1649(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1651(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1652(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1654(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1659(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1664(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1670(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1676(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1683(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1690(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1698(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1710(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1718(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1730(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1731(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1732(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1733(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1734(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1735(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1736(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1737(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1738(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1739(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1741(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1743(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1744(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1745(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1746(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1747(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1748(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1749(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1750(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1751(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1756(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1757(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1758(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1759(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1760(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1761(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1762(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1767(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1770(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1771(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1772(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1773(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1774(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1775(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1776(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1777(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1902(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1904(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1905(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1906(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1907(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1908(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1909(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1910(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1913(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1914(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1915(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1916(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1917(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1918(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1921(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1922(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1923(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1924(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1925(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1928(DATA* data, threadData_t *threadData);
extern void ThreeWheelVehicle3FMU_eqFunction_1930(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    ThreeWheelVehicle3FMU_eqFunction_1469(data, threadData);
    threadData->lastEquationSolved = 1469;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1470(data, threadData);
    threadData->lastEquationSolved = 1470;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1471(data, threadData);
    threadData->lastEquationSolved = 1471;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1472(data, threadData);
    threadData->lastEquationSolved = 1472;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1474(data, threadData);
    threadData->lastEquationSolved = 1474;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1476(data, threadData);
    threadData->lastEquationSolved = 1476;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1477(data, threadData);
    threadData->lastEquationSolved = 1477;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1478(data, threadData);
    threadData->lastEquationSolved = 1478;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1524(data, threadData);
    threadData->lastEquationSolved = 1524;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1530(data, threadData);
    threadData->lastEquationSolved = 1530;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1531(data, threadData);
    threadData->lastEquationSolved = 1531;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1532(data, threadData);
    threadData->lastEquationSolved = 1532;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1536(data, threadData);
    threadData->lastEquationSolved = 1536;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1537(data, threadData);
    threadData->lastEquationSolved = 1537;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1539(data, threadData);
    threadData->lastEquationSolved = 1539;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1541(data, threadData);
    threadData->lastEquationSolved = 1541;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1542(data, threadData);
    threadData->lastEquationSolved = 1542;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1543(data, threadData);
    threadData->lastEquationSolved = 1543;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1544(data, threadData);
    threadData->lastEquationSolved = 1544;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1546(data, threadData);
    threadData->lastEquationSolved = 1546;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1556(data, threadData);
    threadData->lastEquationSolved = 1556;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1557(data, threadData);
    threadData->lastEquationSolved = 1557;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1562(data, threadData);
    threadData->lastEquationSolved = 1562;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1563(data, threadData);
    threadData->lastEquationSolved = 1563;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1584(data, threadData);
    threadData->lastEquationSolved = 1584;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1585(data, threadData);
    threadData->lastEquationSolved = 1585;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1586(data, threadData);
    threadData->lastEquationSolved = 1586;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1587(data, threadData);
    threadData->lastEquationSolved = 1587;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1588(data, threadData);
    threadData->lastEquationSolved = 1588;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1589(data, threadData);
    threadData->lastEquationSolved = 1589;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1590(data, threadData);
    threadData->lastEquationSolved = 1590;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1591(data, threadData);
    threadData->lastEquationSolved = 1591;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1602(data, threadData);
    threadData->lastEquationSolved = 1602;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1603(data, threadData);
    threadData->lastEquationSolved = 1603;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1605(data, threadData);
    threadData->lastEquationSolved = 1605;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1607(data, threadData);
    threadData->lastEquationSolved = 1607;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1619(data, threadData);
    threadData->lastEquationSolved = 1619;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1631(data, threadData);
    threadData->lastEquationSolved = 1631;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1632(data, threadData);
    threadData->lastEquationSolved = 1632;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1633(data, threadData);
    threadData->lastEquationSolved = 1633;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1634(data, threadData);
    threadData->lastEquationSolved = 1634;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1635(data, threadData);
    threadData->lastEquationSolved = 1635;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1636(data, threadData);
    threadData->lastEquationSolved = 1636;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1637(data, threadData);
    threadData->lastEquationSolved = 1637;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1638(data, threadData);
    threadData->lastEquationSolved = 1638;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1640(data, threadData);
    threadData->lastEquationSolved = 1640;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1641(data, threadData);
    threadData->lastEquationSolved = 1641;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1642(data, threadData);
    threadData->lastEquationSolved = 1642;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1643(data, threadData);
    threadData->lastEquationSolved = 1643;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1644(data, threadData);
    threadData->lastEquationSolved = 1644;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1645(data, threadData);
    threadData->lastEquationSolved = 1645;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1646(data, threadData);
    threadData->lastEquationSolved = 1646;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1649(data, threadData);
    threadData->lastEquationSolved = 1649;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1651(data, threadData);
    threadData->lastEquationSolved = 1651;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1652(data, threadData);
    threadData->lastEquationSolved = 1652;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1654(data, threadData);
    threadData->lastEquationSolved = 1654;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1659(data, threadData);
    threadData->lastEquationSolved = 1659;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1664(data, threadData);
    threadData->lastEquationSolved = 1664;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1670(data, threadData);
    threadData->lastEquationSolved = 1670;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1676(data, threadData);
    threadData->lastEquationSolved = 1676;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1683(data, threadData);
    threadData->lastEquationSolved = 1683;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1690(data, threadData);
    threadData->lastEquationSolved = 1690;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1698(data, threadData);
    threadData->lastEquationSolved = 1698;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1710(data, threadData);
    threadData->lastEquationSolved = 1710;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1718(data, threadData);
    threadData->lastEquationSolved = 1718;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1730(data, threadData);
    threadData->lastEquationSolved = 1730;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1731(data, threadData);
    threadData->lastEquationSolved = 1731;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1732(data, threadData);
    threadData->lastEquationSolved = 1732;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1733(data, threadData);
    threadData->lastEquationSolved = 1733;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1734(data, threadData);
    threadData->lastEquationSolved = 1734;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1735(data, threadData);
    threadData->lastEquationSolved = 1735;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1736(data, threadData);
    threadData->lastEquationSolved = 1736;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1737(data, threadData);
    threadData->lastEquationSolved = 1737;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1738(data, threadData);
    threadData->lastEquationSolved = 1738;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1739(data, threadData);
    threadData->lastEquationSolved = 1739;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1741(data, threadData);
    threadData->lastEquationSolved = 1741;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1743(data, threadData);
    threadData->lastEquationSolved = 1743;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1744(data, threadData);
    threadData->lastEquationSolved = 1744;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1745(data, threadData);
    threadData->lastEquationSolved = 1745;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1746(data, threadData);
    threadData->lastEquationSolved = 1746;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1747(data, threadData);
    threadData->lastEquationSolved = 1747;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1748(data, threadData);
    threadData->lastEquationSolved = 1748;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1749(data, threadData);
    threadData->lastEquationSolved = 1749;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1750(data, threadData);
    threadData->lastEquationSolved = 1750;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1751(data, threadData);
    threadData->lastEquationSolved = 1751;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1756(data, threadData);
    threadData->lastEquationSolved = 1756;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1757(data, threadData);
    threadData->lastEquationSolved = 1757;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1758(data, threadData);
    threadData->lastEquationSolved = 1758;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1759(data, threadData);
    threadData->lastEquationSolved = 1759;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1760(data, threadData);
    threadData->lastEquationSolved = 1760;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1761(data, threadData);
    threadData->lastEquationSolved = 1761;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1762(data, threadData);
    threadData->lastEquationSolved = 1762;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1767(data, threadData);
    threadData->lastEquationSolved = 1767;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1770(data, threadData);
    threadData->lastEquationSolved = 1770;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1771(data, threadData);
    threadData->lastEquationSolved = 1771;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1772(data, threadData);
    threadData->lastEquationSolved = 1772;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1773(data, threadData);
    threadData->lastEquationSolved = 1773;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1774(data, threadData);
    threadData->lastEquationSolved = 1774;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1775(data, threadData);
    threadData->lastEquationSolved = 1775;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1776(data, threadData);
    threadData->lastEquationSolved = 1776;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1777(data, threadData);
    threadData->lastEquationSolved = 1777;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1902(data, threadData);
    threadData->lastEquationSolved = 1902;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1904(data, threadData);
    threadData->lastEquationSolved = 1904;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1905(data, threadData);
    threadData->lastEquationSolved = 1905;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1906(data, threadData);
    threadData->lastEquationSolved = 1906;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1907(data, threadData);
    threadData->lastEquationSolved = 1907;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1908(data, threadData);
    threadData->lastEquationSolved = 1908;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1909(data, threadData);
    threadData->lastEquationSolved = 1909;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1910(data, threadData);
    threadData->lastEquationSolved = 1910;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1913(data, threadData);
    threadData->lastEquationSolved = 1913;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1914(data, threadData);
    threadData->lastEquationSolved = 1914;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1915(data, threadData);
    threadData->lastEquationSolved = 1915;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1916(data, threadData);
    threadData->lastEquationSolved = 1916;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1917(data, threadData);
    threadData->lastEquationSolved = 1917;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1918(data, threadData);
    threadData->lastEquationSolved = 1918;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1921(data, threadData);
    threadData->lastEquationSolved = 1921;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1922(data, threadData);
    threadData->lastEquationSolved = 1922;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1923(data, threadData);
    threadData->lastEquationSolved = 1923;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1924(data, threadData);
    threadData->lastEquationSolved = 1924;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1925(data, threadData);
    threadData->lastEquationSolved = 1925;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1928(data, threadData);
    threadData->lastEquationSolved = 1928;
  }
  {
    ThreeWheelVehicle3FMU_eqFunction_1930(data, threadData);
    threadData->lastEquationSolved = 1930;
  }
}

int ThreeWheelVehicle3FMU_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  ThreeWheelVehicle3FMU_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "ThreeWheelVehicle3FMU_12jac.h"
#include "ThreeWheelVehicle3FMU_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks ThreeWheelVehicle3FMU_callback = {
   NULL,    /* performSimulation */
   NULL,    /* performQSSSimulation */
   NULL,    /* updateContinuousSystem */
   ThreeWheelVehicle3FMU_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   ThreeWheelVehicle3FMU_initialNonLinearSystem,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   ThreeWheelVehicle3FMU_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   ThreeWheelVehicle3FMU_initializeDAEmodeData,
   ThreeWheelVehicle3FMU_functionODE,
   ThreeWheelVehicle3FMU_functionAlgebraics,
   ThreeWheelVehicle3FMU_functionDAE,
   ThreeWheelVehicle3FMU_functionLocalKnownVars,
   ThreeWheelVehicle3FMU_input_function,
   ThreeWheelVehicle3FMU_input_function_init,
   ThreeWheelVehicle3FMU_input_function_updateStartValues,
   ThreeWheelVehicle3FMU_data_function,
   ThreeWheelVehicle3FMU_output_function,
   ThreeWheelVehicle3FMU_setc_function,
   ThreeWheelVehicle3FMU_setb_function,
   ThreeWheelVehicle3FMU_function_storeDelayed,
   ThreeWheelVehicle3FMU_function_storeSpatialDistribution,
   ThreeWheelVehicle3FMU_function_initSpatialDistribution,
   ThreeWheelVehicle3FMU_updateBoundVariableAttributes,
   ThreeWheelVehicle3FMU_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   ThreeWheelVehicle3FMU_functionRemovedInitialEquations,
   ThreeWheelVehicle3FMU_updateBoundParameters,
   ThreeWheelVehicle3FMU_checkForAsserts,
   ThreeWheelVehicle3FMU_function_ZeroCrossingsEquations,
   ThreeWheelVehicle3FMU_function_ZeroCrossings,
   ThreeWheelVehicle3FMU_function_updateRelations,
   ThreeWheelVehicle3FMU_zeroCrossingDescription,
   ThreeWheelVehicle3FMU_relationDescription,
   ThreeWheelVehicle3FMU_function_initSample,
   ThreeWheelVehicle3FMU_INDEX_JAC_A,
   ThreeWheelVehicle3FMU_INDEX_JAC_B,
   ThreeWheelVehicle3FMU_INDEX_JAC_C,
   ThreeWheelVehicle3FMU_INDEX_JAC_D,
   ThreeWheelVehicle3FMU_INDEX_JAC_F,
   ThreeWheelVehicle3FMU_INDEX_JAC_H,
   ThreeWheelVehicle3FMU_initialAnalyticJacobianA,
   ThreeWheelVehicle3FMU_initialAnalyticJacobianB,
   ThreeWheelVehicle3FMU_initialAnalyticJacobianC,
   ThreeWheelVehicle3FMU_initialAnalyticJacobianD,
   ThreeWheelVehicle3FMU_initialAnalyticJacobianF,
   ThreeWheelVehicle3FMU_initialAnalyticJacobianH,
   ThreeWheelVehicle3FMU_functionJacA_column,
   ThreeWheelVehicle3FMU_functionJacB_column,
   ThreeWheelVehicle3FMU_functionJacC_column,
   ThreeWheelVehicle3FMU_functionJacD_column,
   ThreeWheelVehicle3FMU_functionJacF_column,
   ThreeWheelVehicle3FMU_functionJacH_column,
   ThreeWheelVehicle3FMU_linear_model_frame,
   ThreeWheelVehicle3FMU_linear_model_datarecovery_frame,
   ThreeWheelVehicle3FMU_mayer,
   ThreeWheelVehicle3FMU_lagrange,
   ThreeWheelVehicle3FMU_pickUpBoundsForInputsInOptimization,
   ThreeWheelVehicle3FMU_setInputData,
   ThreeWheelVehicle3FMU_getTimeGrid,
   ThreeWheelVehicle3FMU_symbolicInlineSystem,
   ThreeWheelVehicle3FMU_function_initSynchronous,
   ThreeWheelVehicle3FMU_function_updateSynchronous,
   ThreeWheelVehicle3FMU_function_equationsSynchronous,
   ThreeWheelVehicle3FMU_inputNames,
   ThreeWheelVehicle3FMU_dataReconciliationInputNames,
   ThreeWheelVehicle3FMU_dataReconciliationUnmeasuredVariables,
   ThreeWheelVehicle3FMU_read_input_fmu,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,77,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,78,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,86,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "PlanarMechanics"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,15,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,76,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "ThreeWheelVehicle3FMU"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,21,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,65,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "WeightTransfer"
#define _OMC_LIT_RESOURCE_5_dir_data "C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,14,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,65,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "WheelWithSlip"
#define _OMC_LIT_RESOURCE_6_dir_data "C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,13,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,65,_OMC_LIT_RESOURCE_6_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,14,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir)}};
void ThreeWheelVehicle3FMU_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &ThreeWheelVehicle3FMU_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "ThreeWheelVehicle3FMU";
  data->modelData->modelFilePrefix = "ThreeWheelVehicle3FMU";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller";
  data->modelData->modelGUID = "{e5f9905b-25b5-4458-8170-9fe7930bd8ce}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/ThreeWheelVehicle3FMU_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStates = 12;
  data->modelData->nVariablesReal = 1458;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 39;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 442;
  data->modelData->nParametersInteger = 64;
  data->modelData->nParametersBoolean = 41;
  data->modelData->nParametersString = 52;
  data->modelData->nInputVars = 3;
  data->modelData->nOutputVars = 44;
  data->modelData->nAliasReal = 1013;
  data->modelData->nAliasInteger = 15;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 3570;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 2;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 7;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

