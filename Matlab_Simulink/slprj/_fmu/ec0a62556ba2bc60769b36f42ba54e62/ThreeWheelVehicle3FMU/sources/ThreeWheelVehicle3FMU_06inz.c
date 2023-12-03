/* Initialization */
#include "ThreeWheelVehicle3FMU_model.h"
#include "ThreeWheelVehicle3FMU_11mix.h"
#include "ThreeWheelVehicle3FMU_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void ThreeWheelVehicle3FMU_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
planarWorld.MBFrame.f[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[405] /* planarWorld.MBFrame.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
planarWorld.MBFrame.f[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[406] /* planarWorld.MBFrame.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
planarWorld.MBFrame.f[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[407] /* planarWorld.MBFrame.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
planarWorld.MBFrame.t[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[411] /* planarWorld.MBFrame.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
planarWorld.MBFrame.t[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[412] /* planarWorld.MBFrame.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
planarWorld.MBFrame.t[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[413] /* planarWorld.MBFrame.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
revolute.support.tau = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[1005] /* revolute.support.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
world.frame_b.f[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[1023] /* world.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
world.frame_b.f[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[1024] /* world.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
world.frame_b.f[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[1025] /* world.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
world.frame_b.t[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[1029] /* world.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
world.frame_b.t[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[1030] /* world.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
world.frame_b.t[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[1031] /* world.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[414] /* planarWorld.coordinateSystem.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[415] /* planarWorld.coordinateSystem.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[416] /* planarWorld.coordinateSystem.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[432] /* planarWorld.coordinateSystem.x_arrow.arrowLine.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[433] /* planarWorld.coordinateSystem.x_arrow.arrowLine.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[434] /* planarWorld.coordinateSystem.x_arrow.arrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[424] /* planarWorld.coordinateSystem.x_arrow.arrowHead.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[425] /* planarWorld.coordinateSystem.x_arrow.arrowHead.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[426] /* planarWorld.coordinateSystem.x_arrow.arrowHead.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[427] /* planarWorld.coordinateSystem.x_arrow.arrowHead.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[428] /* planarWorld.coordinateSystem.x_arrow.arrowHead.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[429] /* planarWorld.coordinateSystem.x_arrow.arrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.color[3] = (*Real*)(planarWorld.coordinateSystem.color_x[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[419] /* planarWorld.coordinateSystem.x_arrow.arrowHead.color[3] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */));
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.color[2] = (*Real*)(planarWorld.coordinateSystem.color_x[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[418] /* planarWorld.coordinateSystem.x_arrow.arrowHead.color[2] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */));
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.color[1] = (*Real*)(planarWorld.coordinateSystem.color_x[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[417] /* planarWorld.coordinateSystem.x_arrow.arrowHead.color[1] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */));
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[475] /* planarWorld.coordinateSystem.x_label.cylinders[1].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[476] /* planarWorld.coordinateSystem.x_label.cylinders[1].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[477] /* planarWorld.coordinateSystem.x_label.cylinders[1].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[481] /* planarWorld.coordinateSystem.x_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[482] /* planarWorld.coordinateSystem.x_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[483] /* planarWorld.coordinateSystem.x_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[478] /* planarWorld.coordinateSystem.x_label.cylinders[2].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[479] /* planarWorld.coordinateSystem.x_label.cylinders[2].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[480] /* planarWorld.coordinateSystem.x_label.cylinders[2].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[484] /* planarWorld.coordinateSystem.x_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[485] /* planarWorld.coordinateSystem.x_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[486] /* planarWorld.coordinateSystem.x_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].color[3] = (*Real*)(planarWorld.coordinateSystem.color_x[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[461] /* planarWorld.coordinateSystem.x_label.cylinders[2].color[3] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */));
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].color[2] = (*Real*)(planarWorld.coordinateSystem.color_x[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[460] /* planarWorld.coordinateSystem.x_label.cylinders[2].color[2] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */));
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].color[1] = (*Real*)(planarWorld.coordinateSystem.color_x[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[459] /* planarWorld.coordinateSystem.x_label.cylinders[2].color[1] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */));
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[517] /* planarWorld.coordinateSystem.y_arrow.arrowLine.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[518] /* planarWorld.coordinateSystem.y_arrow.arrowLine.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[519] /* planarWorld.coordinateSystem.y_arrow.arrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[509] /* planarWorld.coordinateSystem.y_arrow.arrowHead.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[510] /* planarWorld.coordinateSystem.y_arrow.arrowHead.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[511] /* planarWorld.coordinateSystem.y_arrow.arrowHead.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[512] /* planarWorld.coordinateSystem.y_arrow.arrowHead.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[513] /* planarWorld.coordinateSystem.y_arrow.arrowHead.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[514] /* planarWorld.coordinateSystem.y_arrow.arrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.color[3] = (*Real*)(planarWorld.coordinateSystem.color_y[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[504] /* planarWorld.coordinateSystem.y_arrow.arrowHead.color[3] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */));
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.color[2] = (*Real*)(planarWorld.coordinateSystem.color_y[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[503] /* planarWorld.coordinateSystem.y_arrow.arrowHead.color[2] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */));
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.color[1] = (*Real*)(planarWorld.coordinateSystem.color_y[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[502] /* planarWorld.coordinateSystem.y_arrow.arrowHead.color[1] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */));
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[560] /* planarWorld.coordinateSystem.y_label.cylinders[1].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[561] /* planarWorld.coordinateSystem.y_label.cylinders[1].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[562] /* planarWorld.coordinateSystem.y_label.cylinders[1].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[566] /* planarWorld.coordinateSystem.y_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[567] /* planarWorld.coordinateSystem.y_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[568] /* planarWorld.coordinateSystem.y_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[563] /* planarWorld.coordinateSystem.y_label.cylinders[2].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  (data->localData[0]->realVars[564] /* planarWorld.coordinateSystem.y_label.cylinders[2].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[565] /* planarWorld.coordinateSystem.y_label.cylinders[2].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[569] /* planarWorld.coordinateSystem.y_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[570] /* planarWorld.coordinateSystem.y_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[571] /* planarWorld.coordinateSystem.y_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].color[3] = (*Real*)(planarWorld.coordinateSystem.color_y[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[546] /* planarWorld.coordinateSystem.y_label.cylinders[2].color[3] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */));
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].color[2] = (*Real*)(planarWorld.coordinateSystem.color_y[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[545] /* planarWorld.coordinateSystem.y_label.cylinders[2].color[2] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */));
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].color[1] = (*Real*)(planarWorld.coordinateSystem.color_y[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[544] /* planarWorld.coordinateSystem.y_label.cylinders[2].color[1] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */));
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[605] /* planarWorld.coordinateSystem.z_arrow.arrowLine.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[606] /* planarWorld.coordinateSystem.z_arrow.arrowLine.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[607] /* planarWorld.coordinateSystem.z_arrow.arrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[597] /* planarWorld.coordinateSystem.z_arrow.arrowHead.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[598] /* planarWorld.coordinateSystem.z_arrow.arrowHead.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[599] /* planarWorld.coordinateSystem.z_arrow.arrowHead.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[600] /* planarWorld.coordinateSystem.z_arrow.arrowHead.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[601] /* planarWorld.coordinateSystem.z_arrow.arrowHead.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[602] /* planarWorld.coordinateSystem.z_arrow.arrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.color[3] = (*Real*)(planarWorld.coordinateSystem.color_z[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->realVars[592] /* planarWorld.coordinateSystem.z_arrow.arrowHead.color[3] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */));
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.color[2] = (*Real*)(planarWorld.coordinateSystem.color_z[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[591] /* planarWorld.coordinateSystem.z_arrow.arrowHead.color[2] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */));
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.color[1] = (*Real*)(planarWorld.coordinateSystem.color_z[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[590] /* planarWorld.coordinateSystem.z_arrow.arrowHead.color[1] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */));
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[650] /* planarWorld.coordinateSystem.z_label.cylinders[1].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[651] /* planarWorld.coordinateSystem.z_label.cylinders[1].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[652] /* planarWorld.coordinateSystem.z_label.cylinders[1].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[659] /* planarWorld.coordinateSystem.z_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[660] /* planarWorld.coordinateSystem.z_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[661] /* planarWorld.coordinateSystem.z_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[653] /* planarWorld.coordinateSystem.z_label.cylinders[2].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[654] /* planarWorld.coordinateSystem.z_label.cylinders[2].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[655] /* planarWorld.coordinateSystem.z_label.cylinders[2].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[662] /* planarWorld.coordinateSystem.z_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[663] /* planarWorld.coordinateSystem.z_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[664] /* planarWorld.coordinateSystem.z_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[656] /* planarWorld.coordinateSystem.z_label.cylinders[3].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[657] /* planarWorld.coordinateSystem.z_label.cylinders[3].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[658] /* planarWorld.coordinateSystem.z_label.cylinders[3].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[665] /* planarWorld.coordinateSystem.z_label.cylinders[3].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[666] /* planarWorld.coordinateSystem.z_label.cylinders[3].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[667] /* planarWorld.coordinateSystem.z_label.cylinders[3].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].color[3] = (*Real*)(planarWorld.coordinateSystem.color_z[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[634] /* planarWorld.coordinateSystem.z_label.cylinders[3].color[3] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */));
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].color[2] = (*Real*)(planarWorld.coordinateSystem.color_z[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[633] /* planarWorld.coordinateSystem.z_label.cylinders[3].color[2] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */));
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].color[1] = (*Real*)(planarWorld.coordinateSystem.color_z[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[632] /* planarWorld.coordinateSystem.z_label.cylinders[3].color[1] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */));
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[700] /* planarWorld.gravityArrow.arrowLine.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[701] /* planarWorld.gravityArrow.arrowLine.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[702] /* planarWorld.gravityArrow.arrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[692] /* planarWorld.gravityArrow.arrowHead.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[693] /* planarWorld.gravityArrow.arrowHead.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[694] /* planarWorld.gravityArrow.arrowHead.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[695] /* planarWorld.gravityArrow.arrowHead.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[696] /* planarWorld.gravityArrow.arrowHead.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[697] /* planarWorld.gravityArrow.arrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.color[3] = (*Real*)(planarWorld.gravityArrowColor[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[687] /* planarWorld.gravityArrow.arrowHead.color[3] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[48] /* planarWorld.gravityArrowColor[3] PARAM */));
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.color[2] = (*Real*)(planarWorld.gravityArrowColor[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[686] /* planarWorld.gravityArrow.arrowHead.color[2] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[47] /* planarWorld.gravityArrowColor[2] PARAM */));
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.color[1] = (*Real*)(planarWorld.gravityArrowColor[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[685] /* planarWorld.gravityArrow.arrowHead.color[1] variable */) = ((modelica_real)(data->simulationInfo->integerParameter[46] /* planarWorld.gravityArrowColor[1] PARAM */));
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
planarWorld.gz = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[715] /* planarWorld.gz variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[903] /* rearRightWheel.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[904] /* rearRightWheel.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[905] /* rearRightWheel.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.color[1] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[890] /* rearRightWheel.cylinder.color[1] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.color[2] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[891] /* rearRightWheel.cylinder.color[2] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.color[3] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[892] /* rearRightWheel.cylinder.color[3] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[938] /* rearRightWheel.rim1.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[939] /* rearRightWheel.rim1.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
rearRightWheel.rim1.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[932] /* rearRightWheel.rim1.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
rearRightWheel.rim1.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[933] /* rearRightWheel.rim1.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
rearRightWheel.rim1.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[934] /* rearRightWheel.rim1.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
rearRightWheel.rim1.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[940] /* rearRightWheel.rim1.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
rearRightWheel.rim1.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[941] /* rearRightWheel.rim1.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
rearRightWheel.rim1.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[942] /* rearRightWheel.rim1.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
rearRightWheel.rim1.color[1] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[927] /* rearRightWheel.rim1.color[1] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
rearRightWheel.rim1.color[2] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[928] /* rearRightWheel.rim1.color[2] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
rearRightWheel.rim1.color[3] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[929] /* rearRightWheel.rim1.color[3] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[966] /* rearRightWheel.rim2.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[967] /* rearRightWheel.rim2.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
rearRightWheel.rim2.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[960] /* rearRightWheel.rim2.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
rearRightWheel.rim2.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[961] /* rearRightWheel.rim2.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
rearRightWheel.rim2.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[962] /* rearRightWheel.rim2.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
rearRightWheel.rim2.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[968] /* rearRightWheel.rim2.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
rearRightWheel.rim2.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[969] /* rearRightWheel.rim2.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
rearRightWheel.rim2.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[970] /* rearRightWheel.rim2.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
rearRightWheel.rim2.color[1] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[955] /* rearRightWheel.rim2.color[1] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
rearRightWheel.rim2.color[2] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[956] /* rearRightWheel.rim2.color[2] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
rearRightWheel.rim2.color[3] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[957] /* rearRightWheel.rim2.color[3] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[787] /* rearLeftWheel.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[788] /* rearLeftWheel.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[789] /* rearLeftWheel.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.color[1] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[774] /* rearLeftWheel.cylinder.color[1] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.color[2] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[775] /* rearLeftWheel.cylinder.color[2] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.color[3] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[776] /* rearLeftWheel.cylinder.color[3] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[822] /* rearLeftWheel.rim1.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[823] /* rearLeftWheel.rim1.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[816] /* rearLeftWheel.rim1.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->realVars[817] /* rearLeftWheel.rim1.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->realVars[818] /* rearLeftWheel.rim1.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[824] /* rearLeftWheel.rim1.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[825] /* rearLeftWheel.rim1.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[826] /* rearLeftWheel.rim1.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.color[1] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[811] /* rearLeftWheel.rim1.color[1] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.color[2] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[812] /* rearLeftWheel.rim1.color[2] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.color[3] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[813] /* rearLeftWheel.rim1.color[3] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[850] /* rearLeftWheel.rim2.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[851] /* rearLeftWheel.rim2.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[844] /* rearLeftWheel.rim2.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[845] /* rearLeftWheel.rim2.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[846] /* rearLeftWheel.rim2.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[852] /* rearLeftWheel.rim2.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[853] /* rearLeftWheel.rim2.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[854] /* rearLeftWheel.rim2.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.color[1] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[839] /* rearLeftWheel.rim2.color[1] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.color[2] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[840] /* rearLeftWheel.rim2.color[2] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.color[3] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[841] /* rearLeftWheel.rim2.color[3] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
frontWheel.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[268] /* frontWheel.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
frontWheel.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->realVars[269] /* frontWheel.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
frontWheel.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[270] /* frontWheel.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
frontWheel.cylinder.color[1] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  (data->localData[0]->realVars[255] /* frontWheel.cylinder.color[1] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
frontWheel.cylinder.color[2] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[256] /* frontWheel.cylinder.color[2] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
frontWheel.cylinder.color[3] = 63.0
*/
void ThreeWheelVehicle3FMU_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[257] /* frontWheel.cylinder.color[3] variable */) = 63.0;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
frontWheel.rim1.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[303] /* frontWheel.rim1.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
frontWheel.rim1.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  (data->localData[0]->realVars[304] /* frontWheel.rim1.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
frontWheel.rim1.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[297] /* frontWheel.rim1.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
frontWheel.rim1.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[298] /* frontWheel.rim1.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
frontWheel.rim1.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[299] /* frontWheel.rim1.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
frontWheel.rim1.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->realVars[305] /* frontWheel.rim1.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
frontWheel.rim1.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[306] /* frontWheel.rim1.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
frontWheel.rim1.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->realVars[307] /* frontWheel.rim1.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
frontWheel.rim1.color[1] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[292] /* frontWheel.rim1.color[1] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
frontWheel.rim1.color[2] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  (data->localData[0]->realVars[293] /* frontWheel.rim1.color[2] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
frontWheel.rim1.color[3] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[294] /* frontWheel.rim1.color[3] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
frontWheel.rim2.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[331] /* frontWheel.rim2.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
frontWheel.rim2.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->realVars[332] /* frontWheel.rim2.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
frontWheel.rim2.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[325] /* frontWheel.rim2.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
frontWheel.rim2.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->realVars[326] /* frontWheel.rim2.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
frontWheel.rim2.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->realVars[327] /* frontWheel.rim2.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
frontWheel.rim2.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[333] /* frontWheel.rim2.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
frontWheel.rim2.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  (data->localData[0]->realVars[334] /* frontWheel.rim2.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
frontWheel.rim2.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->realVars[335] /* frontWheel.rim2.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
frontWheel.rim2.color[1] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->realVars[320] /* frontWheel.rim2.color[1] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
frontWheel.rim2.color[2] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[321] /* frontWheel.rim2.color[2] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
frontWheel.rim2.color[3] = 195.0
*/
void ThreeWheelVehicle3FMU_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->realVars[322] /* frontWheel.rim2.color[3] variable */) = 195.0;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
torqueRearLeft.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[1009] /* torqueRearLeft.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
torqueRearRight.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[1010] /* torqueRearRight.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
rearLeft.cylinder.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[757] /* rearLeft.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
rearLeft.cylinder.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[758] /* rearLeft.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
rearLeft.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[759] /* rearLeft.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
rearLeft.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[760] /* rearLeft.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
rearLeft.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[761] /* rearLeft.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
rearLeft.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->realVars[762] /* rearLeft.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
rearLeft.cylinder.color[3] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[749] /* rearLeft.cylinder.color[3] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
rearLeft.cylinder.color[2] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->realVars[748] /* rearLeft.cylinder.color[2] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
rearLeft.cylinder.color[1] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[747] /* rearLeft.cylinder.color[1] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
rearLeft.color[1] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  (data->localData[0]->integerVars[18] /* rearLeft.color[1] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
rearLeft.color[2] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->integerVars[19] /* rearLeft.color[2] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
rearLeft.color[3] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  (data->localData[0]->integerVars[20] /* rearLeft.color[3] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
rearRight.cylinder.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->realVars[873] /* rearRight.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
rearRight.cylinder.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[874] /* rearRight.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
rearRight.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->realVars[875] /* rearRight.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
rearRight.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  (data->localData[0]->realVars[876] /* rearRight.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
rearRight.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  (data->localData[0]->realVars[877] /* rearRight.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
rearRight.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[878] /* rearRight.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
rearRight.cylinder.color[3] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  (data->localData[0]->realVars[865] /* rearRight.cylinder.color[3] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
rearRight.cylinder.color[2] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->realVars[864] /* rearRight.cylinder.color[2] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
rearRight.cylinder.color[1] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->realVars[863] /* rearRight.cylinder.color[1] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
rearRight.color[1] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->integerVars[21] /* rearRight.color[1] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
rearRight.color[2] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  (data->localData[0]->integerVars[22] /* rearRight.color[2] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
rearRight.color[3] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  (data->localData[0]->integerVars[23] /* rearRight.color[3] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
rear.cylinder.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[731] /* rear.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
rear.cylinder.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  (data->localData[0]->realVars[732] /* rear.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
rear.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  (data->localData[0]->realVars[733] /* rear.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
rear.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->realVars[734] /* rear.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
rear.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[735] /* rear.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
rear.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  (data->localData[0]->realVars[736] /* rear.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
rear.cylinder.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->realVars[723] /* rear.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
rear.cylinder.color[2] = 255.0
*/
void ThreeWheelVehicle3FMU_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  (data->localData[0]->realVars[722] /* rear.cylinder.color[2] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
rear.cylinder.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  (data->localData[0]->realVars[721] /* rear.cylinder.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
rear.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->integerVars[15] /* rear.color[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
rear.color[2] = 255
*/
void ThreeWheelVehicle3FMU_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->integerVars[16] /* rear.color[2] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
rear.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  (data->localData[0]->integerVars[17] /* rear.color[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
front.cylinder.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[195] /* front.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
front.cylinder.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[196] /* front.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
front.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[197] /* front.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
front.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[198] /* front.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
front.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  (data->localData[0]->realVars[199] /* front.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
front.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->realVars[200] /* front.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
front.cylinder.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->realVars[187] /* front.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
front.cylinder.color[2] = 255.0
*/
void ThreeWheelVehicle3FMU_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[186] /* front.cylinder.color[2] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
front.cylinder.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  (data->localData[0]->realVars[185] /* front.cylinder.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
front.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->integerVars[6] /* front.color[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
front.color[2] = 255
*/
void ThreeWheelVehicle3FMU_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->integerVars[7] /* front.color[2] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
front.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->integerVars[8] /* front.color[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
body.sphere.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[138] /* body.sphere.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
body.sphere.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[139] /* body.sphere.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
body.sphere.r_shape[3] = (-0.5) * body.sphereDiameter
*/
void ThreeWheelVehicle3FMU_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[140] /* body.sphere.r_shape[3] variable */) = (-0.5) * ((data->simulationInfo->realParameter[19] /* body.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
body.sphere.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[132] /* body.sphere.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
body.sphere.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[133] /* body.sphere.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
body.sphere.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[134] /* body.sphere.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
body.sphere.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[141] /* body.sphere.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
body.sphere.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[142] /* body.sphere.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
body.sphere.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[143] /* body.sphere.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
body.sphere.color[3] = 200.0
*/
void ThreeWheelVehicle3FMU_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[130] /* body.sphere.color[3] variable */) = 200.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
body.sphere.color[2] = 103.0
*/
void ThreeWheelVehicle3FMU_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[129] /* body.sphere.color[2] variable */) = 103.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
body.sphere.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[128] /* body.sphere.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
body.sphereColor[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->integerVars[0] /* body.sphereColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
body.sphereColor[2] = 103
*/
void ThreeWheelVehicle3FMU_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->integerVars[1] /* body.sphereColor[2] DISCRETE */) = ((modelica_integer) 103);
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
body.sphereColor[3] = 200
*/
void ThreeWheelVehicle3FMU_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->integerVars[2] /* body.sphereColor[3] DISCRETE */) = ((modelica_integer) 200);
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
frontTrail.cylinder.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[245] /* frontTrail.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
frontTrail.cylinder.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[246] /* frontTrail.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
frontTrail.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[247] /* frontTrail.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
frontTrail.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[248] /* frontTrail.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
frontTrail.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[249] /* frontTrail.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
frontTrail.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[250] /* frontTrail.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
frontTrail.cylinder.color[3] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[237] /* frontTrail.cylinder.color[3] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
frontTrail.cylinder.color[2] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[236] /* frontTrail.cylinder.color[2] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
frontTrail.cylinder.color[1] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[235] /* frontTrail.cylinder.color[1] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
frontTrail.color[1] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->integerVars[12] /* frontTrail.color[1] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
frontTrail.color[2] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->integerVars[13] /* frontTrail.color[2] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
frontTrail.color[3] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->integerVars[14] /* frontTrail.color[3] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
body2.sphere.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[171] /* body2.sphere.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
body2.sphere.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[172] /* body2.sphere.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
body2.sphere.r_shape[3] = (-0.5) * body2.sphereDiameter
*/
void ThreeWheelVehicle3FMU_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[173] /* body2.sphere.r_shape[3] variable */) = (-0.5) * ((data->simulationInfo->realParameter[28] /* body2.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
body2.sphere.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[165] /* body2.sphere.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
body2.sphere.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[166] /* body2.sphere.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
body2.sphere.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[167] /* body2.sphere.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
body2.sphere.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[174] /* body2.sphere.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
body2.sphere.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[175] /* body2.sphere.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
body2.sphere.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[176] /* body2.sphere.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
body2.sphere.color[3] = 200.0
*/
void ThreeWheelVehicle3FMU_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[163] /* body2.sphere.color[3] variable */) = 200.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
body2.sphere.color[2] = 103.0
*/
void ThreeWheelVehicle3FMU_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[162] /* body2.sphere.color[2] variable */) = 103.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
body2.sphere.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[161] /* body2.sphere.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
body2.sphereColor[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->integerVars[3] /* body2.sphereColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
body2.sphereColor[2] = 103
*/
void ThreeWheelVehicle3FMU_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->integerVars[4] /* body2.sphereColor[2] DISCRETE */) = ((modelica_integer) 103);
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
body2.sphereColor[3] = 200
*/
void ThreeWheelVehicle3FMU_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->integerVars[5] /* body2.sphereColor[3] DISCRETE */) = ((modelica_integer) 200);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
revolute.cylinder.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[995] /* revolute.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
revolute.cylinder.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[996] /* revolute.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
revolute.cylinder.r_shape[3] = (-0.5) * revolute.cylinderLength
*/
void ThreeWheelVehicle3FMU_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[997] /* revolute.cylinder.r_shape[3] variable */) = (-0.5) * ((data->simulationInfo->realParameter[304] /* revolute.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
revolute.cylinder.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[989] /* revolute.cylinder.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
revolute.cylinder.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->localData[0]->realVars[990] /* revolute.cylinder.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
revolute.cylinder.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[991] /* revolute.cylinder.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
revolute.cylinder.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[998] /* revolute.cylinder.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
revolute.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[999] /* revolute.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
revolute.cylinder.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[1000] /* revolute.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
revolute.cylinder.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[988] /* revolute.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
revolute.cylinder.color[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[987] /* revolute.cylinder.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
revolute.cylinder.color[1] = 200.0
*/
void ThreeWheelVehicle3FMU_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[986] /* revolute.cylinder.color[1] variable */) = 200.0;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
revolute.cylinderColor[1] = 200
*/
void ThreeWheelVehicle3FMU_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->integerVars[24] /* revolute.cylinderColor[1] DISCRETE */) = ((modelica_integer) 200);
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
revolute.cylinderColor[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->integerVars[25] /* revolute.cylinderColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
revolute.cylinderColor[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->integerVars[26] /* revolute.cylinderColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
front2.cylinder.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[218] /* front2.cylinder.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
front2.cylinder.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[219] /* front2.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
front2.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[220] /* front2.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
front2.cylinder.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[221] /* front2.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
front2.cylinder.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->realVars[222] /* front2.cylinder.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
front2.cylinder.widthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[223] /* front2.cylinder.widthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
front2.cylinder.color[3] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[210] /* front2.cylinder.color[3] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
front2.cylinder.color[2] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[209] /* front2.cylinder.color[2] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
front2.cylinder.color[1] = 115.0
*/
void ThreeWheelVehicle3FMU_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[208] /* front2.cylinder.color[1] variable */) = 115.0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
front2.color[1] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->integerVars[9] /* front2.color[1] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
front2.color[2] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->integerVars[10] /* front2.color[2] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
front2.color[3] = 115
*/
void ThreeWheelVehicle3FMU_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->integerVars[11] /* front2.color[3] DISCRETE */) = ((modelica_integer) 115);
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
positionPhi.w = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[718] /* positionPhi.w variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
positionPhi.a = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[716] /* positionPhi.a variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
frontRollingResistance.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[232] /* frontRollingResistance.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
rearRightRollingResistance.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[887] /* rearRightRollingResistance.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
rearLeftRollResistance.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[771] /* rearLeftRollResistance.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
world.gravitySphereColor[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->integerVars[33] /* world.gravitySphereColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
world.gravitySphereColor[2] = 230
*/
void ThreeWheelVehicle3FMU_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->integerVars[34] /* world.gravitySphereColor[2] DISCRETE */) = ((modelica_integer) 230);
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
world.gravitySphereColor[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->integerVars[35] /* world.gravitySphereColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
world.groundColor[1] = 200
*/
void ThreeWheelVehicle3FMU_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->integerVars[36] /* world.groundColor[1] DISCRETE */) = ((modelica_integer) 200);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
world.groundColor[2] = 200
*/
void ThreeWheelVehicle3FMU_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->integerVars[37] /* world.groundColor[2] DISCRETE */) = ((modelica_integer) 200);
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
world.groundColor[3] = 200
*/
void ThreeWheelVehicle3FMU_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->integerVars[38] /* world.groundColor[3] DISCRETE */) = ((modelica_integer) 200);
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[1110] /* world.x_arrowLine.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[1111] /* world.x_arrowLine.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[1112] /* world.x_arrowLine.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[1113] /* world.x_arrowLine.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[1114] /* world.x_arrowLine.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  (data->localData[0]->realVars[1115] /* world.x_arrowLine.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[1116] /* world.x_arrowLine.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[1117] /* world.x_arrowLine.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[1118] /* world.x_arrowLine.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
world.x_arrowLine.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  (data->localData[0]->realVars[1119] /* world.x_arrowLine.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
world.x_arrowLine.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->realVars[1120] /* world.x_arrowLine.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
world.x_arrowLine.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  (data->localData[0]->realVars[1121] /* world.x_arrowLine.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
world.x_arrowLine.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[1126] /* world.x_arrowLine.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
world.x_arrowLine.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[1127] /* world.x_arrowLine.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
world.x_arrowLine.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[1128] /* world.x_arrowLine.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
world.x_arrowLine.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[1129] /* world.x_arrowLine.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
world.x_arrowLine.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[1130] /* world.x_arrowLine.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
world.x_arrowLine.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[1131] /* world.x_arrowLine.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
world.x_arrowLine.lengthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->realVars[1123] /* world.x_arrowLine.lengthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
world.x_arrowLine.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[1124] /* world.x_arrowLine.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
world.x_arrowLine.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  (data->localData[0]->realVars[1125] /* world.x_arrowLine.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
world.x_arrowLine.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  (data->localData[0]->realVars[1133] /* world.x_arrowLine.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
world.x_arrowLine.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  (data->localData[0]->realVars[1134] /* world.x_arrowLine.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
world.x_arrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->localData[0]->realVars[1135] /* world.x_arrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  (data->localData[0]->realVars[1082] /* world.x_arrowHead.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  (data->localData[0]->realVars[1083] /* world.x_arrowHead.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  (data->localData[0]->realVars[1084] /* world.x_arrowHead.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[1085] /* world.x_arrowHead.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[1086] /* world.x_arrowHead.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[1087] /* world.x_arrowHead.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[1088] /* world.x_arrowHead.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[1089] /* world.x_arrowHead.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[1090] /* world.x_arrowHead.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
world.x_arrowHead.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[1091] /* world.x_arrowHead.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
world.x_arrowHead.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[1092] /* world.x_arrowHead.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
world.x_arrowHead.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  (data->localData[0]->realVars[1093] /* world.x_arrowHead.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
world.x_arrowHead.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[1101] /* world.x_arrowHead.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
world.x_arrowHead.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[1102] /* world.x_arrowHead.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
world.x_arrowHead.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[1103] /* world.x_arrowHead.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
world.x_arrowHead.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  (data->localData[0]->realVars[1104] /* world.x_arrowHead.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
world.x_arrowHead.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[1105] /* world.x_arrowHead.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
world.x_arrowHead.lengthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->realVars[1098] /* world.x_arrowHead.lengthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
world.x_arrowHead.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[1099] /* world.x_arrowHead.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
world.x_arrowHead.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[1100] /* world.x_arrowHead.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
world.x_arrowHead.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[1107] /* world.x_arrowHead.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
world.x_arrowHead.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[1108] /* world.x_arrowHead.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
world.x_arrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[1109] /* world.x_arrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->realVars[1173] /* world.x_label.cylinders[1].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[1174] /* world.x_label.cylinders[1].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  (data->localData[0]->realVars[1175] /* world.x_label.cylinders[1].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  (data->localData[0]->realVars[1179] /* world.x_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  (data->localData[0]->realVars[1180] /* world.x_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[1181] /* world.x_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
world.x_label.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  (data->localData[0]->realVars[1145] /* world.x_label.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
world.x_label.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  (data->localData[0]->realVars[1146] /* world.x_label.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
world.x_label.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  (data->localData[0]->realVars[1147] /* world.x_label.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  (data->localData[0]->realVars[1176] /* world.x_label.cylinders[2].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  (data->localData[0]->realVars[1177] /* world.x_label.cylinders[2].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->realVars[1178] /* world.x_label.cylinders[2].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->realVars[1182] /* world.x_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[1183] /* world.x_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[1184] /* world.x_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->realVars[1231] /* world.y_arrowLine.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[1232] /* world.y_arrowLine.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->realVars[1233] /* world.y_arrowLine.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[1234] /* world.y_arrowLine.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[1235] /* world.y_arrowLine.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->realVars[1236] /* world.y_arrowLine.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->realVars[1237] /* world.y_arrowLine.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->realVars[1238] /* world.y_arrowLine.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->realVars[1239] /* world.y_arrowLine.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
world.y_arrowLine.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[1240] /* world.y_arrowLine.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
world.y_arrowLine.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->realVars[1241] /* world.y_arrowLine.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
world.y_arrowLine.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[1242] /* world.y_arrowLine.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
world.y_arrowLine.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  (data->localData[0]->realVars[1247] /* world.y_arrowLine.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
world.y_arrowLine.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->realVars[1248] /* world.y_arrowLine.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
world.y_arrowLine.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->realVars[1249] /* world.y_arrowLine.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
world.y_arrowLine.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->realVars[1250] /* world.y_arrowLine.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
world.y_arrowLine.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->realVars[1251] /* world.y_arrowLine.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
world.y_arrowLine.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->realVars[1252] /* world.y_arrowLine.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
world.y_arrowLine.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->realVars[1244] /* world.y_arrowLine.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
world.y_arrowLine.lengthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->realVars[1245] /* world.y_arrowLine.lengthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
world.y_arrowLine.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->realVars[1246] /* world.y_arrowLine.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
world.y_arrowLine.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[1254] /* world.y_arrowLine.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
world.y_arrowLine.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->realVars[1255] /* world.y_arrowLine.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
world.y_arrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->realVars[1256] /* world.y_arrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[1203] /* world.y_arrowHead.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[1204] /* world.y_arrowHead.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[1205] /* world.y_arrowHead.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  (data->localData[0]->realVars[1206] /* world.y_arrowHead.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[1207] /* world.y_arrowHead.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->realVars[1208] /* world.y_arrowHead.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[1209] /* world.y_arrowHead.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[1210] /* world.y_arrowHead.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[1211] /* world.y_arrowHead.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
world.y_arrowHead.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->realVars[1212] /* world.y_arrowHead.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
world.y_arrowHead.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[1213] /* world.y_arrowHead.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
world.y_arrowHead.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[1214] /* world.y_arrowHead.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
world.y_arrowHead.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[1222] /* world.y_arrowHead.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
world.y_arrowHead.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->realVars[1223] /* world.y_arrowHead.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
world.y_arrowHead.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->realVars[1224] /* world.y_arrowHead.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
world.y_arrowHead.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->realVars[1225] /* world.y_arrowHead.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
world.y_arrowHead.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[1226] /* world.y_arrowHead.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
world.y_arrowHead.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[1219] /* world.y_arrowHead.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
world.y_arrowHead.lengthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->realVars[1220] /* world.y_arrowHead.lengthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
world.y_arrowHead.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->realVars[1221] /* world.y_arrowHead.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
world.y_arrowHead.widthDirection[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  (data->localData[0]->realVars[1228] /* world.y_arrowHead.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
world.y_arrowHead.widthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->realVars[1229] /* world.y_arrowHead.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
world.y_arrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  (data->localData[0]->realVars[1230] /* world.y_arrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->realVars[1294] /* world.y_label.cylinders[1].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  (data->localData[0]->realVars[1295] /* world.y_label.cylinders[1].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[1296] /* world.y_label.cylinders[1].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->realVars[1300] /* world.y_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[1301] /* world.y_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[1302] /* world.y_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
world.y_label.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[1266] /* world.y_label.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
world.y_label.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->realVars[1267] /* world.y_label.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
world.y_label.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[1268] /* world.y_label.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->realVars[1297] /* world.y_label.cylinders[2].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[1298] /* world.y_label.cylinders[2].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->realVars[1299] /* world.y_label.cylinders[2].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[1303] /* world.y_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  (data->localData[0]->realVars[1304] /* world.y_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  (data->localData[0]->realVars[1305] /* world.y_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  (data->localData[0]->realVars[1355] /* world.z_arrowLine.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->realVars[1356] /* world.z_arrowLine.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->realVars[1357] /* world.z_arrowLine.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[1358] /* world.z_arrowLine.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  (data->localData[0]->realVars[1359] /* world.z_arrowLine.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[1360] /* world.z_arrowLine.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  (data->localData[0]->realVars[1361] /* world.z_arrowLine.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[1362] /* world.z_arrowLine.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[1363] /* world.z_arrowLine.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
world.z_arrowLine.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->realVars[1364] /* world.z_arrowLine.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
world.z_arrowLine.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  (data->localData[0]->realVars[1365] /* world.z_arrowLine.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
world.z_arrowLine.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  (data->localData[0]->realVars[1366] /* world.z_arrowLine.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
world.z_arrowLine.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  (data->localData[0]->realVars[1371] /* world.z_arrowLine.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
world.z_arrowLine.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  (data->localData[0]->realVars[1372] /* world.z_arrowLine.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
world.z_arrowLine.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  (data->localData[0]->realVars[1373] /* world.z_arrowLine.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
world.z_arrowLine.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->realVars[1374] /* world.z_arrowLine.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
world.z_arrowLine.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  (data->localData[0]->realVars[1375] /* world.z_arrowLine.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
world.z_arrowLine.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->localData[0]->realVars[1376] /* world.z_arrowLine.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
world.z_arrowLine.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  (data->localData[0]->realVars[1368] /* world.z_arrowLine.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
world.z_arrowLine.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[1369] /* world.z_arrowLine.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
world.z_arrowLine.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  (data->localData[0]->realVars[1370] /* world.z_arrowLine.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
world.z_arrowLine.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  (data->localData[0]->realVars[1378] /* world.z_arrowLine.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
world.z_arrowLine.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[1379] /* world.z_arrowLine.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
world.z_arrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  (data->localData[0]->realVars[1380] /* world.z_arrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  (data->localData[0]->realVars[1327] /* world.z_arrowHead.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->realVars[1328] /* world.z_arrowHead.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->realVars[1329] /* world.z_arrowHead.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[1330] /* world.z_arrowHead.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[1331] /* world.z_arrowHead.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[1332] /* world.z_arrowHead.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[1333] /* world.z_arrowHead.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[1334] /* world.z_arrowHead.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[1335] /* world.z_arrowHead.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
world.z_arrowHead.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[1336] /* world.z_arrowHead.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
world.z_arrowHead.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  (data->localData[0]->realVars[1337] /* world.z_arrowHead.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
world.z_arrowHead.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->realVars[1338] /* world.z_arrowHead.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
world.z_arrowHead.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[1346] /* world.z_arrowHead.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
world.z_arrowHead.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  (data->localData[0]->realVars[1347] /* world.z_arrowHead.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
world.z_arrowHead.r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  (data->localData[0]->realVars[1348] /* world.z_arrowHead.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
world.z_arrowHead.r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  (data->localData[0]->realVars[1349] /* world.z_arrowHead.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
world.z_arrowHead.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  (data->localData[0]->realVars[1350] /* world.z_arrowHead.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
world.z_arrowHead.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  (data->localData[0]->realVars[1343] /* world.z_arrowHead.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
world.z_arrowHead.lengthDirection[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  (data->localData[0]->realVars[1344] /* world.z_arrowHead.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
world.z_arrowHead.lengthDirection[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  (data->localData[0]->realVars[1345] /* world.z_arrowHead.lengthDirection[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
world.z_arrowHead.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  (data->localData[0]->realVars[1352] /* world.z_arrowHead.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
world.z_arrowHead.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->realVars[1353] /* world.z_arrowHead.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
world.z_arrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[1354] /* world.z_arrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[1420] /* world.z_label.cylinders[1].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[1421] /* world.z_label.cylinders[1].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  (data->localData[0]->realVars[1422] /* world.z_label.cylinders[1].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  (data->localData[0]->realVars[1429] /* world.z_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  (data->localData[0]->realVars[1430] /* world.z_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  (data->localData[0]->realVars[1431] /* world.z_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  (data->localData[0]->realVars[1423] /* world.z_label.cylinders[2].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  (data->localData[0]->realVars[1424] /* world.z_label.cylinders[2].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  (data->localData[0]->realVars[1425] /* world.z_label.cylinders[2].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->realVars[1432] /* world.z_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  (data->localData[0]->realVars[1433] /* world.z_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  (data->localData[0]->realVars[1434] /* world.z_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
world.z_label.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  (data->localData[0]->realVars[1390] /* world.z_label.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
world.z_label.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  (data->localData[0]->realVars[1391] /* world.z_label.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
world.z_label.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  (data->localData[0]->realVars[1392] /* world.z_label.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r_shape[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[1426] /* world.z_label.cylinders[3].r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r_shape[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  (data->localData[0]->realVars[1427] /* world.z_label.cylinders[3].r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  (data->localData[0]->realVars[1428] /* world.z_label.cylinders[3].r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  (data->localData[0]->realVars[1435] /* world.z_label.cylinders[3].widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[1436] /* world.z_label.cylinders[3].widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  (data->localData[0]->realVars[1437] /* world.z_label.cylinders[3].widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[1404] /* world.z_label.cylinders[3].color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].color[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  (data->localData[0]->realVars[1403] /* world.z_label.cylinders[3].color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  (data->localData[0]->realVars[1402] /* world.z_label.cylinders[3].color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
world.z_arrowHead.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  (data->localData[0]->realVars[1341] /* world.z_arrowHead.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
world.z_arrowHead.color[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[1340] /* world.z_arrowHead.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
world.z_arrowHead.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  (data->localData[0]->realVars[1339] /* world.z_arrowHead.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[1280] /* world.y_label.cylinders[2].color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].color[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  (data->localData[0]->realVars[1279] /* world.y_label.cylinders[2].color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->realVars[1278] /* world.y_label.cylinders[2].color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
world.y_arrowHead.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  (data->localData[0]->realVars[1217] /* world.y_arrowHead.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
world.y_arrowHead.color[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[1216] /* world.y_arrowHead.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
world.y_arrowHead.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  (data->localData[0]->realVars[1215] /* world.y_arrowHead.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  (data->localData[0]->realVars[1159] /* world.x_label.cylinders[2].color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].color[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  (data->localData[0]->realVars[1158] /* world.x_label.cylinders[2].color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  (data->localData[0]->realVars[1157] /* world.x_label.cylinders[2].color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
world.x_arrowHead.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  (data->localData[0]->realVars[1096] /* world.x_arrowHead.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
world.x_arrowHead.color[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  (data->localData[0]->realVars[1095] /* world.x_arrowHead.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
world.x_arrowHead.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  (data->localData[0]->realVars[1094] /* world.x_arrowHead.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
world.axisColor_x[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  (data->localData[0]->integerVars[27] /* world.axisColor_x[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
world.axisColor_x[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  (data->localData[0]->integerVars[28] /* world.axisColor_x[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
world.axisColor_x[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  (data->localData[0]->integerVars[29] /* world.axisColor_x[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  (data->localData[0]->realVars[1059] /* world.gravityArrowLine.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  (data->localData[0]->realVars[1060] /* world.gravityArrowLine.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  (data->localData[0]->realVars[1061] /* world.gravityArrowLine.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  (data->localData[0]->realVars[1062] /* world.gravityArrowLine.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  (data->localData[0]->realVars[1063] /* world.gravityArrowLine.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  (data->localData[0]->realVars[1064] /* world.gravityArrowLine.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  (data->localData[0]->realVars[1065] /* world.gravityArrowLine.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  (data->localData[0]->realVars[1066] /* world.gravityArrowLine.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  (data->localData[0]->realVars[1067] /* world.gravityArrowLine.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  (data->localData[0]->realVars[1068] /* world.gravityArrowLine.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  (data->localData[0]->realVars[1069] /* world.gravityArrowLine.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
world.gravityArrowLine.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[1070] /* world.gravityArrowLine.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
world.gravityArrowLine.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  (data->localData[0]->realVars[1075] /* world.gravityArrowLine.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
world.gravityArrowLine.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  (data->localData[0]->realVars[1076] /* world.gravityArrowLine.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
world.gravityArrowLine.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  (data->localData[0]->realVars[1077] /* world.gravityArrowLine.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
world.gravityArrowLine.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  (data->localData[0]->realVars[1072] /* world.gravityArrowLine.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
world.gravityArrowLine.lengthDirection[2] = -1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  (data->localData[0]->realVars[1073] /* world.gravityArrowLine.lengthDirection[2] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
world.gravityArrowLine.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  (data->localData[0]->realVars[1074] /* world.gravityArrowLine.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
world.gravityArrowLine.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  (data->localData[0]->realVars[1079] /* world.gravityArrowLine.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
world.gravityArrowLine.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  (data->localData[0]->realVars[1080] /* world.gravityArrowLine.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
world.gravityArrowLine.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  (data->localData[0]->realVars[1081] /* world.gravityArrowLine.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[1032] /* world.gravityArrowHead.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  (data->localData[0]->realVars[1033] /* world.gravityArrowHead.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[1034] /* world.gravityArrowHead.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[1035] /* world.gravityArrowHead.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[1036] /* world.gravityArrowHead.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[1037] /* world.gravityArrowHead.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[1038] /* world.gravityArrowHead.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  (data->localData[0]->realVars[1039] /* world.gravityArrowHead.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  (data->localData[0]->realVars[1040] /* world.gravityArrowHead.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->realVars[1041] /* world.gravityArrowHead.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[1042] /* world.gravityArrowHead.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
world.gravityArrowHead.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[1043] /* world.gravityArrowHead.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
world.gravityArrowHead.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[1051] /* world.gravityArrowHead.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
world.gravityArrowHead.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[1052] /* world.gravityArrowHead.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
world.gravityArrowHead.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->realVars[1053] /* world.gravityArrowHead.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
world.gravityArrowHead.r_shape[2] = world.gravityArrowTail[2] - world.gravityLineLength
*/
void ThreeWheelVehicle3FMU_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  (data->localData[0]->realVars[1054] /* world.gravityArrowHead.r_shape[2] variable */) = (data->simulationInfo->realParameter[362] /* world.gravityArrowTail[2] PARAM */) - (data->simulationInfo->realParameter[366] /* world.gravityLineLength PARAM */);
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
world.gravityArrowHead.lengthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[1048] /* world.gravityArrowHead.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
world.gravityArrowHead.lengthDirection[2] = -1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[1049] /* world.gravityArrowHead.lengthDirection[2] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
world.gravityArrowHead.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[1050] /* world.gravityArrowHead.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
world.gravityArrowHead.widthDirection[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[1056] /* world.gravityArrowHead.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
world.gravityArrowHead.widthDirection[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  (data->localData[0]->realVars[1057] /* world.gravityArrowHead.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
world.gravityArrowHead.widthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  (data->localData[0]->realVars[1058] /* world.gravityArrowHead.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
world.gravityArrowHead.color[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  (data->localData[0]->realVars[1046] /* world.gravityArrowHead.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
world.gravityArrowHead.color[2] = 230.0
*/
void ThreeWheelVehicle3FMU_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  (data->localData[0]->realVars[1045] /* world.gravityArrowHead.color[2] variable */) = 230.0;
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
world.gravityArrowHead.color[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  (data->localData[0]->realVars[1044] /* world.gravityArrowHead.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
world.gravityArrowColor[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  (data->localData[0]->integerVars[30] /* world.gravityArrowColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
world.gravityArrowColor[2] = 230
*/
void ThreeWheelVehicle3FMU_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  (data->localData[0]->integerVars[31] /* world.gravityArrowColor[2] DISCRETE */) = ((modelica_integer) 230);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
world.gravityArrowColor[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  (data->localData[0]->integerVars[32] /* world.gravityArrowColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
world.frame_b.r_0[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[1026] /* world.frame_b.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
world.frame_b.r_0[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[1027] /* world.frame_b.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
world.frame_b.r_0[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[1028] /* world.frame_b.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
world.frame_b.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->realVars[1020] /* world.frame_b.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
world.frame_b.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  (data->localData[0]->realVars[1021] /* world.frame_b.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
world.frame_b.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  (data->localData[0]->realVars[1022] /* world.frame_b.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->realVars[1011] /* world.frame_b.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  (data->localData[0]->realVars[1012] /* world.frame_b.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->realVars[1013] /* world.frame_b.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  (data->localData[0]->realVars[1014] /* world.frame_b.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->realVars[1015] /* world.frame_b.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  (data->localData[0]->realVars[1016] /* world.frame_b.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  (data->localData[0]->realVars[1017] /* world.frame_b.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[1018] /* world.frame_b.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  (data->localData[0]->realVars[1019] /* world.frame_b.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[431] /* planarWorld.coordinateSystem.x_arrow.arrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  (data->localData[0]->realVars[420] /* planarWorld.coordinateSystem.x_arrow.arrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  (data->localData[0]->realVars[449] /* planarWorld.coordinateSystem.x_arrow.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  (data->localData[0]->realVars[462] /* planarWorld.coordinateSystem.x_label.cylinders[1].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  (data->localData[0]->realVars[463] /* planarWorld.coordinateSystem.x_label.cylinders[2].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  (data->localData[0]->realVars[501] /* planarWorld.coordinateSystem.x_label.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  (data->localData[0]->realVars[516] /* planarWorld.coordinateSystem.y_arrow.arrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  (data->localData[0]->realVars[505] /* planarWorld.coordinateSystem.y_arrow.arrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  (data->localData[0]->realVars[534] /* planarWorld.coordinateSystem.y_arrow.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->realVars[547] /* planarWorld.coordinateSystem.y_label.cylinders[1].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[548] /* planarWorld.coordinateSystem.y_label.cylinders[2].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  (data->localData[0]->realVars[589] /* planarWorld.coordinateSystem.y_label.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[604] /* planarWorld.coordinateSystem.z_arrow.arrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  (data->localData[0]->realVars[593] /* planarWorld.coordinateSystem.z_arrow.arrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  (data->localData[0]->realVars[622] /* planarWorld.coordinateSystem.z_arrow.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  (data->localData[0]->realVars[635] /* planarWorld.coordinateSystem.z_label.cylinders[1].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  (data->localData[0]->realVars[636] /* planarWorld.coordinateSystem.z_label.cylinders[2].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  (data->localData[0]->realVars[637] /* planarWorld.coordinateSystem.z_label.cylinders[3].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  (data->localData[0]->realVars[684] /* planarWorld.coordinateSystem.z_label.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  (data->localData[0]->realVars[699] /* planarWorld.gravityArrow.arrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  (data->localData[0]->realVars[688] /* planarWorld.gravityArrow.arrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  (data->localData[0]->realVars[714] /* planarWorld.gravityArrow.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.width = rearRightWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  (data->localData[0]->realVars[902] /* rearRightWheel.cylinder.width variable */) = ((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.height = rearRightWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  (data->localData[0]->realVars[894] /* rearRightWheel.cylinder.height variable */) = ((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  (data->localData[0]->realVars[893] /* rearRightWheel.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
rearRightWheel.rim1.length = rearRightWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->realVars[931] /* rearRightWheel.rim1.length variable */) = ((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
rearRightWheel.rim1.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  (data->localData[0]->realVars[930] /* rearRightWheel.rim1.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
rearRightWheel.rim2.length = rearRightWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  (data->localData[0]->realVars[959] /* rearRightWheel.rim2.length variable */) = ((data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
rearRightWheel.rim2.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  (data->localData[0]->realVars[958] /* rearRightWheel.rim2.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.width = rearLeftWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  (data->localData[0]->realVars[786] /* rearLeftWheel.cylinder.width variable */) = ((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.height = rearLeftWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  (data->localData[0]->realVars[778] /* rearLeftWheel.cylinder.height variable */) = ((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  (data->localData[0]->realVars[777] /* rearLeftWheel.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.length = rearLeftWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  (data->localData[0]->realVars[815] /* rearLeftWheel.rim1.length variable */) = ((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  (data->localData[0]->realVars[814] /* rearLeftWheel.rim1.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.length = rearLeftWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  (data->localData[0]->realVars[843] /* rearLeftWheel.rim2.length variable */) = ((data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  (data->localData[0]->realVars[842] /* rearLeftWheel.rim2.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
frontWheel.cylinder.width = frontWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  (data->localData[0]->realVars[267] /* frontWheel.cylinder.width variable */) = ((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
frontWheel.cylinder.height = frontWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  (data->localData[0]->realVars[259] /* frontWheel.cylinder.height variable */) = ((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
frontWheel.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  (data->localData[0]->realVars[258] /* frontWheel.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
frontWheel.rim1.length = frontWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  (data->localData[0]->realVars[296] /* frontWheel.rim1.length variable */) = ((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
frontWheel.rim1.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  (data->localData[0]->realVars[295] /* frontWheel.rim1.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
frontWheel.rim2.length = frontWheel.radius * 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  (data->localData[0]->realVars[324] /* frontWheel.rim2.length variable */) = ((data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
frontWheel.rim2.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  (data->localData[0]->realVars[323] /* frontWheel.rim2.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
rearLeft.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  (data->localData[0]->realVars[750] /* rearLeft.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
rearRight.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  (data->localData[0]->realVars[866] /* rearRight.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
rear.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  (data->localData[0]->realVars[724] /* rear.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
front.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[188] /* front.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
body.sphere.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  (data->localData[0]->realVars[131] /* body.sphere.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
frontTrail.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  (data->localData[0]->realVars[238] /* frontTrail.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
body2.sphere.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[164] /* body2.sphere.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
revolute.extra = if revolute.extraLine then 1.0 else 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  (data->localData[0]->realVars[1001] /* revolute.extra variable */) = ((data->simulationInfo->booleanParameter[31] /* revolute.extraLine PARAM */)?1.0:0.0);
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
front2.cylinder.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  (data->localData[0]->realVars[211] /* front2.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
world.x_arrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  (data->localData[0]->realVars[1122] /* world.x_arrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
world.x_arrowLine.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  (data->localData[0]->realVars[1132] /* world.x_arrowLine.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
world.x_arrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[1097] /* world.x_arrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
world.x_arrowHead.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[1106] /* world.x_arrowHead.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  (data->localData[0]->realVars[1160] /* world.x_label.cylinders[1].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].length = 1.414213562373095 * abs(world.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  (data->localData[0]->realVars[1163] /* world.x_label.cylinders[2].length variable */) = (1.414213562373095) * (fabs((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)));
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].length = 1.414213562373095 * abs(world.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  (data->localData[0]->realVars[1162] /* world.x_label.cylinders[1].length variable */) = (1.414213562373095) * (fabs((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)));
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
world.x_label.r_abs[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  (data->localData[0]->realVars[1199] /* world.x_label.r_abs[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
world.x_label.r_abs[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  (data->localData[0]->realVars[1198] /* world.x_label.r_abs[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
world.x_label.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[1195] /* world.x_label.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
world.x_label.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  (data->localData[0]->realVars[1196] /* world.x_label.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
world.x_label.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  (data->localData[0]->realVars[1197] /* world.x_label.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
world.x_label.r_lines[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  (data->localData[0]->realVars[1200] /* world.x_label.r_lines[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
world.x_label.r_lines[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  (data->localData[0]->realVars[1201] /* world.x_label.r_lines[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
world.x_label.n_x[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  (data->localData[0]->realVars[1189] /* world.x_label.n_x[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
world.x_label.n_x[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  (data->localData[0]->realVars[1190] /* world.x_label.n_x[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
world.x_label.n_x[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  (data->localData[0]->realVars[1191] /* world.x_label.n_x[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
world.x_label.n_y[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  (data->localData[0]->realVars[1192] /* world.x_label.n_y[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
world.x_label.n_y[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  (data->localData[0]->realVars[1193] /* world.x_label.n_y[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
world.x_label.n_y[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  (data->localData[0]->realVars[1194] /* world.x_label.n_y[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
world.x_label.lines[1,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[1185] /* world.x_label.lines[1,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
world.x_label.lines[1,1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  (data->localData[0]->realVars[1186] /* world.x_label.lines[1,1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
world.x_label.lines[2,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  (data->localData[0]->realVars[1187] /* world.x_label.lines[2,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
world.x_label.lines[2,2,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  (data->localData[0]->realVars[1188] /* world.x_label.lines[2,2,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
world.x_label.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->realVars[1136] /* world.x_label.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
world.x_label.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  (data->localData[0]->realVars[1137] /* world.x_label.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
world.x_label.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  (data->localData[0]->realVars[1138] /* world.x_label.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
world.x_label.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  (data->localData[0]->realVars[1139] /* world.x_label.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
world.x_label.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  (data->localData[0]->realVars[1140] /* world.x_label.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
world.x_label.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  (data->localData[0]->realVars[1141] /* world.x_label.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
world.x_label.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[1142] /* world.x_label.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
world.x_label.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  (data->localData[0]->realVars[1143] /* world.x_label.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
world.x_label.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[1144] /* world.x_label.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  (data->localData[0]->realVars[1161] /* world.x_label.cylinders[2].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
world.x_label.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  (data->localData[0]->realVars[1202] /* world.x_label.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
world.y_arrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  (data->localData[0]->realVars[1243] /* world.y_arrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
world.y_arrowLine.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[1253] /* world.y_arrowLine.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
world.y_arrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[1218] /* world.y_arrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
world.y_arrowHead.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->realVars[1227] /* world.y_arrowHead.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  (data->localData[0]->realVars[1281] /* world.y_label.cylinders[1].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
world.y_label.lines[1,2,2] = world.scaledLabel * 1.5
*/
void ThreeWheelVehicle3FMU_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  (data->localData[0]->realVars[1308] /* world.y_label.lines[1,2,2] variable */) = ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) * (1.5);
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].length = sqrt(world.scaledLabel ^ 2.0 + world.y_label.lines[1,2,2] ^ 2.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  tmp1 = (data->localData[0]->realVars[1308] /* world.y_label.lines[1,2,2] variable */);
  (data->localData[0]->realVars[1283] /* world.y_label.cylinders[1].length variable */) = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
world.y_label.lines[2,1,2] = world.scaledLabel * 1.5
*/
void ThreeWheelVehicle3FMU_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  (data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */) = ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) * (1.5);
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
world.y_label.lines[2,2,1] = world.scaledLabel * 0.5
*/
void ThreeWheelVehicle3FMU_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  (data->localData[0]->realVars[1311] /* world.y_label.lines[2,2,1] variable */) = ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) * (0.5);
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
world.y_label.lines[2,2,2] = world.scaledLabel * 0.75
*/
void ThreeWheelVehicle3FMU_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  (data->localData[0]->realVars[1312] /* world.y_label.lines[2,2,2] variable */) = ((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)) * (0.75);
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].length = sqrt(world.y_label.lines[2,2,1] ^ 2.0 + (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2]) ^ 2.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = (data->localData[0]->realVars[1311] /* world.y_label.lines[2,2,1] variable */);
  tmp3 = (data->localData[0]->realVars[1312] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[1310] /* world.y_label.lines[2,1,2] variable */);
  (data->localData[0]->realVars[1284] /* world.y_label.cylinders[2].length variable */) = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1951(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1953(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1956(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1959(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1954(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1952(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1958(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1955(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1957(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1960(DATA *data, threadData_t *threadData);


/*
equation index: 716
type: SIMPLE_ASSIGN
world.y_label.r_abs[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  (data->localData[0]->realVars[1323] /* world.y_label.r_abs[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
world.y_label.r_abs[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  (data->localData[0]->realVars[1322] /* world.y_label.r_abs[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
world.y_label.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[1319] /* world.y_label.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
world.y_label.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  (data->localData[0]->realVars[1320] /* world.y_label.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
world.y_label.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  (data->localData[0]->realVars[1321] /* world.y_label.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
world.y_label.r_lines[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  (data->localData[0]->realVars[1324] /* world.y_label.r_lines[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
world.y_label.r_lines[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  (data->localData[0]->realVars[1325] /* world.y_label.r_lines[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
world.y_label.n_x[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  (data->localData[0]->realVars[1313] /* world.y_label.n_x[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
world.y_label.n_x[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  (data->localData[0]->realVars[1314] /* world.y_label.n_x[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
world.y_label.n_x[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  (data->localData[0]->realVars[1315] /* world.y_label.n_x[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
world.y_label.n_y[1] = -1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  (data->localData[0]->realVars[1316] /* world.y_label.n_y[1] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
world.y_label.n_y[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  (data->localData[0]->realVars[1317] /* world.y_label.n_y[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
world.y_label.n_y[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  (data->localData[0]->realVars[1318] /* world.y_label.n_y[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
world.y_label.lines[1,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  (data->localData[0]->realVars[1306] /* world.y_label.lines[1,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
world.y_label.lines[1,1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  (data->localData[0]->realVars[1307] /* world.y_label.lines[1,1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
world.y_label.lines[2,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  (data->localData[0]->realVars[1309] /* world.y_label.lines[2,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
world.y_label.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  (data->localData[0]->realVars[1257] /* world.y_label.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
world.y_label.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  (data->localData[0]->realVars[1258] /* world.y_label.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
world.y_label.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  (data->localData[0]->realVars[1259] /* world.y_label.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
world.y_label.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  (data->localData[0]->realVars[1260] /* world.y_label.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
world.y_label.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  (data->localData[0]->realVars[1261] /* world.y_label.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
world.y_label.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  (data->localData[0]->realVars[1262] /* world.y_label.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
world.y_label.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  (data->localData[0]->realVars[1263] /* world.y_label.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
world.y_label.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  (data->localData[0]->realVars[1264] /* world.y_label.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
world.y_label.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  (data->localData[0]->realVars[1265] /* world.y_label.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  (data->localData[0]->realVars[1282] /* world.y_label.cylinders[2].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
world.y_label.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  (data->localData[0]->realVars[1326] /* world.y_label.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
world.z_arrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  (data->localData[0]->realVars[1367] /* world.z_arrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
world.z_arrowLine.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  (data->localData[0]->realVars[1377] /* world.z_arrowLine.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
world.z_arrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  (data->localData[0]->realVars[1342] /* world.z_arrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
world.z_arrowHead.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  (data->localData[0]->realVars[1351] /* world.z_arrowHead.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  (data->localData[0]->realVars[1405] /* world.z_label.cylinders[1].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  (data->localData[0]->realVars[1406] /* world.z_label.cylinders[2].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].length = 1.414213562373095 * abs(world.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  (data->localData[0]->realVars[1410] /* world.z_label.cylinders[3].length variable */) = (1.414213562373095) * (fabs((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */)));
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].length = abs(world.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  (data->localData[0]->realVars[1409] /* world.z_label.cylinders[2].length variable */) = fabs((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].length = abs(world.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  (data->localData[0]->realVars[1408] /* world.z_label.cylinders[1].length variable */) = fabs((data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */));
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
world.z_label.r_abs[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  (data->localData[0]->realVars[1454] /* world.z_label.r_abs[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
world.z_label.r_abs[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[1453] /* world.z_label.r_abs[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
world.z_label.r[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[1450] /* world.z_label.r[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
world.z_label.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  (data->localData[0]->realVars[1451] /* world.z_label.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
world.z_label.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  (data->localData[0]->realVars[1452] /* world.z_label.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
world.z_label.r_lines[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  (data->localData[0]->realVars[1455] /* world.z_label.r_lines[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
world.z_label.r_lines[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  (data->localData[0]->realVars[1456] /* world.z_label.r_lines[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
world.z_label.n_x[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  (data->localData[0]->realVars[1444] /* world.z_label.n_x[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
world.z_label.n_x[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[1445] /* world.z_label.n_x[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
world.z_label.n_x[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  (data->localData[0]->realVars[1446] /* world.z_label.n_x[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
world.z_label.n_y[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  (data->localData[0]->realVars[1447] /* world.z_label.n_y[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
world.z_label.n_y[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[1448] /* world.z_label.n_y[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
world.z_label.n_y[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[1449] /* world.z_label.n_y[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
world.z_label.lines[1,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  (data->localData[0]->realVars[1438] /* world.z_label.lines[1,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
world.z_label.lines[1,1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[1439] /* world.z_label.lines[1,1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
world.z_label.lines[1,2,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  (data->localData[0]->realVars[1440] /* world.z_label.lines[1,2,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
world.z_label.lines[2,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  (data->localData[0]->realVars[1441] /* world.z_label.lines[2,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
world.z_label.lines[3,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[1442] /* world.z_label.lines[3,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
world.z_label.lines[3,2,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[1443] /* world.z_label.lines[3,2,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
world.z_label.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[1381] /* world.z_label.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
world.z_label.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  (data->localData[0]->realVars[1382] /* world.z_label.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
world.z_label.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  (data->localData[0]->realVars[1383] /* world.z_label.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
world.z_label.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  (data->localData[0]->realVars[1384] /* world.z_label.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
world.z_label.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  (data->localData[0]->realVars[1385] /* world.z_label.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
world.z_label.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  (data->localData[0]->realVars[1386] /* world.z_label.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
world.z_label.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  (data->localData[0]->realVars[1387] /* world.z_label.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
world.z_label.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[1388] /* world.z_label.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
world.z_label.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  (data->localData[0]->realVars[1389] /* world.z_label.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  (data->localData[0]->realVars[1407] /* world.z_label.cylinders[3].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
world.z_label.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[1457] /* world.z_label.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
world.gravityArrowLine.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  (data->localData[0]->realVars[1071] /* world.gravityArrowLine.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
world.gravityArrowLine.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  (data->localData[0]->realVars[1078] /* world.gravityArrowLine.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
world.gravityArrowHead.extra = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  (data->localData[0]->realVars[1047] /* world.gravityArrowHead.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
world.gravityArrowHead.specularCoefficient = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  (data->localData[0]->realVars[1055] /* world.gravityArrowHead.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  (data->localData[0]->realVars[422] /* planarWorld.coordinateSystem.x_arrow.arrowHead.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  (data->localData[0]->realVars[423] /* planarWorld.coordinateSystem.x_arrow.arrowHead.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.r[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  (data->localData[0]->realVars[508] /* planarWorld.coordinateSystem.y_arrow.arrowHead.r[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.r[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  (data->localData[0]->realVars[595] /* planarWorld.coordinateSystem.z_arrow.arrowHead.r[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.headWidth = max(0.0, planarWorld.gravityArrowDiameter * 3.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  (data->localData[0]->realVars[704] /* planarWorld.gravityArrow.headWidth variable */) = fmax(0.0,((data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */)) * (3.0));
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].length = 1.414213562373095 * abs(planarWorld.coordinateSystem.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  (data->localData[0]->realVars[640] /* planarWorld.coordinateSystem.z_label.cylinders[3].length variable */) = (1.414213562373095) * (fabs((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)));
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].length = abs(planarWorld.coordinateSystem.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  (data->localData[0]->realVars[639] /* planarWorld.coordinateSystem.z_label.cylinders[2].length variable */) = fabs((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].length = abs(planarWorld.coordinateSystem.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  (data->localData[0]->realVars[638] /* planarWorld.coordinateSystem.z_label.cylinders[1].length variable */) = fabs((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */));
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.headWidth = max(0.0, planarWorld.coordinateSystem.axisDiameter * 3.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[610] /* planarWorld.coordinateSystem.z_arrow.headWidth variable */) = fmax(0.0,((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */)) * (3.0));
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[1,2,2] = planarWorld.coordinateSystem.scaledLabel * 1.5
*/
void ThreeWheelVehicle3FMU_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  (data->localData[0]->realVars[574] /* planarWorld.coordinateSystem.y_label.lines[1,2,2] variable */) = ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) * (1.5);
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].length = sqrt(planarWorld.coordinateSystem.scaledLabel ^ 2.0 + planarWorld.coordinateSystem.y_label.lines[1,2,2] ^ 2.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  tmp5 = (data->localData[0]->realVars[574] /* planarWorld.coordinateSystem.y_label.lines[1,2,2] variable */);
  (data->localData[0]->realVars[549] /* planarWorld.coordinateSystem.y_label.cylinders[1].length variable */) = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[2,1,2] = planarWorld.coordinateSystem.scaledLabel * 1.5
*/
void ThreeWheelVehicle3FMU_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  (data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */) = ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) * (1.5);
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[2,2,1] = planarWorld.coordinateSystem.scaledLabel * 0.5
*/
void ThreeWheelVehicle3FMU_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  (data->localData[0]->realVars[577] /* planarWorld.coordinateSystem.y_label.lines[2,2,1] variable */) = ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) * (0.5);
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[2,2,2] = planarWorld.coordinateSystem.scaledLabel * 0.75
*/
void ThreeWheelVehicle3FMU_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  (data->localData[0]->realVars[578] /* planarWorld.coordinateSystem.y_label.lines[2,2,2] variable */) = ((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)) * (0.75);
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].length = sqrt(planarWorld.coordinateSystem.y_label.lines[2,2,1] ^ 2.0 + (planarWorld.coordinateSystem.y_label.lines[2,2,2] - planarWorld.coordinateSystem.y_label.lines[2,1,2]) ^ 2.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = (data->localData[0]->realVars[577] /* planarWorld.coordinateSystem.y_label.lines[2,2,1] variable */);
  tmp7 = (data->localData[0]->realVars[578] /* planarWorld.coordinateSystem.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[576] /* planarWorld.coordinateSystem.y_label.lines[2,1,2] variable */);
  (data->localData[0]->realVars[550] /* planarWorld.coordinateSystem.y_label.cylinders[2].length variable */) = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1500(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1506(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1501(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1508(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1509(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1505(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1507(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1503(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1502(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1504(DATA *data, threadData_t *threadData);


/*
equation index: 811
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.headWidth = max(0.0, planarWorld.coordinateSystem.axisDiameter * 3.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[522] /* planarWorld.coordinateSystem.y_arrow.headWidth variable */) = fmax(0.0,((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */)) * (3.0));
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].length = 1.414213562373095 * abs(planarWorld.coordinateSystem.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[465] /* planarWorld.coordinateSystem.x_label.cylinders[2].length variable */) = (1.414213562373095) * (fabs((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)));
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].length = 1.414213562373095 * abs(planarWorld.coordinateSystem.scaledLabel)
*/
void ThreeWheelVehicle3FMU_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  (data->localData[0]->realVars[464] /* planarWorld.coordinateSystem.x_label.cylinders[1].length variable */) = (1.414213562373095) * (fabs((data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */)));
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.headWidth = max(0.0, planarWorld.coordinateSystem.axisDiameter * 3.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[438] /* planarWorld.coordinateSystem.x_arrow.headWidth variable */) = fmax(0.0,((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */)) * (3.0));
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  (data->localData[0]->realVars[982] /* revolute.cylinder.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  (data->localData[0]->realVars[979] /* revolute.cylinder.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
body2.sphere.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  (data->localData[0]->realVars[157] /* body2.sphere.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
body2.sphere.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  (data->localData[0]->realVars[154] /* body2.sphere.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
body.sphere.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  (data->localData[0]->realVars[124] /* body.sphere.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
body.sphere.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  (data->localData[0]->realVars[121] /* body.sphere.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.rvisobj[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  (data->localData[0]->realVars[710] /* planarWorld.gravityArrow.rvisobj[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.r_abs[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  (data->localData[0]->realVars[681] /* planarWorld.coordinateSystem.z_label.r_abs[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.r_abs[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  (data->localData[0]->realVars[680] /* planarWorld.coordinateSystem.z_label.r_abs[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.rvisobj[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  (data->localData[0]->realVars[619] /* planarWorld.coordinateSystem.z_arrow.rvisobj[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.rvisobj[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  (data->localData[0]->realVars[618] /* planarWorld.coordinateSystem.z_arrow.rvisobj[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.rvisobj[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  (data->localData[0]->realVars[617] /* planarWorld.coordinateSystem.z_arrow.rvisobj[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.e_x[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  (data->localData[0]->realVars[608] /* planarWorld.coordinateSystem.z_arrow.e_x[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.r_abs[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  (data->localData[0]->realVars[586] /* planarWorld.coordinateSystem.y_label.r_abs[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.r_abs[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[585] /* planarWorld.coordinateSystem.y_label.r_abs[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.rvisobj[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  (data->localData[0]->realVars[531] /* planarWorld.coordinateSystem.y_arrow.rvisobj[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.rvisobj[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[530] /* planarWorld.coordinateSystem.y_arrow.rvisobj[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.rvisobj[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  (data->localData[0]->realVars[529] /* planarWorld.coordinateSystem.y_arrow.rvisobj[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.e_x[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  (data->localData[0]->realVars[520] /* planarWorld.coordinateSystem.y_arrow.e_x[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.r_abs[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  (data->localData[0]->realVars[498] /* planarWorld.coordinateSystem.x_label.r_abs[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.r_abs[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  (data->localData[0]->realVars[497] /* planarWorld.coordinateSystem.x_label.r_abs[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.rvisobj[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  (data->localData[0]->realVars[447] /* planarWorld.coordinateSystem.x_arrow.rvisobj[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.rvisobj[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  (data->localData[0]->realVars[446] /* planarWorld.coordinateSystem.x_arrow.rvisobj[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.rvisobj[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  (data->localData[0]->realVars[445] /* planarWorld.coordinateSystem.x_arrow.rvisobj[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.e_x[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  (data->localData[0]->realVars[436] /* planarWorld.coordinateSystem.x_arrow.e_x[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.e_x[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  (data->localData[0]->realVars[435] /* planarWorld.coordinateSystem.x_arrow.e_x[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
frontInertia.flange_a.tau = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  (data->localData[0]->realVars[230] /* frontInertia.flange_a.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.r_tail[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  (data->localData[0]->realVars[442] /* planarWorld.coordinateSystem.x_arrow.r_tail[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.r_tail[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  (data->localData[0]->realVars[443] /* planarWorld.coordinateSystem.x_arrow.r_tail[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.r_tail[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  (data->localData[0]->realVars[444] /* planarWorld.coordinateSystem.x_arrow.r_tail[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.r_head[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  (data->localData[0]->realVars[440] /* planarWorld.coordinateSystem.x_arrow.r_head[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.r_head[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  (data->localData[0]->realVars[441] /* planarWorld.coordinateSystem.x_arrow.r_head[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.r_lines[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  (data->localData[0]->realVars[499] /* planarWorld.coordinateSystem.x_label.r_lines[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.r_lines[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  (data->localData[0]->realVars[500] /* planarWorld.coordinateSystem.x_label.r_lines[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.n_x[1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  (data->localData[0]->realVars[491] /* planarWorld.coordinateSystem.x_label.n_x[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.n_x[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  (data->localData[0]->realVars[492] /* planarWorld.coordinateSystem.x_label.n_x[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.n_x[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  (data->localData[0]->realVars[493] /* planarWorld.coordinateSystem.x_label.n_x[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.n_y[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  (data->localData[0]->realVars[494] /* planarWorld.coordinateSystem.x_label.n_y[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.n_y[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  (data->localData[0]->realVars[495] /* planarWorld.coordinateSystem.x_label.n_y[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.n_y[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  (data->localData[0]->realVars[496] /* planarWorld.coordinateSystem.x_label.n_y[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[1,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[487] /* planarWorld.coordinateSystem.x_label.lines[1,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[1,1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  (data->localData[0]->realVars[488] /* planarWorld.coordinateSystem.x_label.lines[1,1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[2,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  (data->localData[0]->realVars[489] /* planarWorld.coordinateSystem.x_label.lines[2,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[2,2,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  (data->localData[0]->realVars[490] /* planarWorld.coordinateSystem.x_label.lines[2,2,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.r_tail[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  (data->localData[0]->realVars[526] /* planarWorld.coordinateSystem.y_arrow.r_tail[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.r_tail[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  (data->localData[0]->realVars[527] /* planarWorld.coordinateSystem.y_arrow.r_tail[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.r_tail[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  (data->localData[0]->realVars[528] /* planarWorld.coordinateSystem.y_arrow.r_tail[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.r_head[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[524] /* planarWorld.coordinateSystem.y_arrow.r_head[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.r_head[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  (data->localData[0]->realVars[525] /* planarWorld.coordinateSystem.y_arrow.r_head[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.r_lines[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  (data->localData[0]->realVars[587] /* planarWorld.coordinateSystem.y_label.r_lines[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.r_lines[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  (data->localData[0]->realVars[588] /* planarWorld.coordinateSystem.y_label.r_lines[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.n_x[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  (data->localData[0]->realVars[579] /* planarWorld.coordinateSystem.y_label.n_x[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.n_x[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  (data->localData[0]->realVars[580] /* planarWorld.coordinateSystem.y_label.n_x[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.n_x[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  (data->localData[0]->realVars[581] /* planarWorld.coordinateSystem.y_label.n_x[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.n_y[1] = -1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  (data->localData[0]->realVars[582] /* planarWorld.coordinateSystem.y_label.n_y[1] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.n_y[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  (data->localData[0]->realVars[583] /* planarWorld.coordinateSystem.y_label.n_y[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.n_y[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  (data->localData[0]->realVars[584] /* planarWorld.coordinateSystem.y_label.n_y[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[1,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  (data->localData[0]->realVars[572] /* planarWorld.coordinateSystem.y_label.lines[1,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[1,1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  (data->localData[0]->realVars[573] /* planarWorld.coordinateSystem.y_label.lines[1,1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[2,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  (data->localData[0]->realVars[575] /* planarWorld.coordinateSystem.y_label.lines[2,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.r_tail[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  (data->localData[0]->realVars[614] /* planarWorld.coordinateSystem.z_arrow.r_tail[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.r_tail[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  (data->localData[0]->realVars[615] /* planarWorld.coordinateSystem.z_arrow.r_tail[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.r_tail[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  (data->localData[0]->realVars[616] /* planarWorld.coordinateSystem.z_arrow.r_tail[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.r_head[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  (data->localData[0]->realVars[612] /* planarWorld.coordinateSystem.z_arrow.r_head[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.r_head[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  (data->localData[0]->realVars[613] /* planarWorld.coordinateSystem.z_arrow.r_head[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.r_lines[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  (data->localData[0]->realVars[682] /* planarWorld.coordinateSystem.z_label.r_lines[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.r_lines[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  (data->localData[0]->realVars[683] /* planarWorld.coordinateSystem.z_label.r_lines[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.n_x[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  (data->localData[0]->realVars[674] /* planarWorld.coordinateSystem.z_label.n_x[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.n_x[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  (data->localData[0]->realVars[675] /* planarWorld.coordinateSystem.z_label.n_x[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.n_x[3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  (data->localData[0]->realVars[676] /* planarWorld.coordinateSystem.z_label.n_x[3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.n_y[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  (data->localData[0]->realVars[677] /* planarWorld.coordinateSystem.z_label.n_y[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 886
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.n_y[2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[678] /* planarWorld.coordinateSystem.z_label.n_y[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 887
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.n_y[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  (data->localData[0]->realVars[679] /* planarWorld.coordinateSystem.z_label.n_y[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 888
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[1,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  (data->localData[0]->realVars[668] /* planarWorld.coordinateSystem.z_label.lines[1,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 889
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[1,1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  (data->localData[0]->realVars[669] /* planarWorld.coordinateSystem.z_label.lines[1,1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[1,2,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  (data->localData[0]->realVars[670] /* planarWorld.coordinateSystem.z_label.lines[1,2,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[2,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  (data->localData[0]->realVars[671] /* planarWorld.coordinateSystem.z_label.lines[2,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[3,1,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  (data->localData[0]->realVars[672] /* planarWorld.coordinateSystem.z_label.lines[3,1,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[3,2,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  (data->localData[0]->realVars[673] /* planarWorld.coordinateSystem.z_label.lines[3,2,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.r_tail[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  (data->localData[0]->realVars[709] /* planarWorld.gravityArrow.r_tail[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 895
type: SIMPLE_ASSIGN
planarWorld.MBFrame.r_0[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  (data->localData[0]->realVars[408] /* planarWorld.MBFrame.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
planarWorld.MBFrame.r_0[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  (data->localData[0]->realVars[409] /* planarWorld.MBFrame.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 897
type: SIMPLE_ASSIGN
planarWorld.MBFrame.r_0[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  (data->localData[0]->realVars[410] /* planarWorld.MBFrame.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  (data->localData[0]->realVars[901] /* rearRightWheel.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 899
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[895] /* rearRightWheel.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 900
type: SIMPLE_ASSIGN
rearRightWheel.frame_a.t = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  (data->localData[0]->realVars[911] /* rearRightWheel.frame_a.t variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 901
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  (data->localData[0]->realVars[785] /* rearLeftWheel.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 902
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[779] /* rearLeftWheel.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 903
type: SIMPLE_ASSIGN
rearLeftWheel.frame_a.t = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  (data->localData[0]->realVars[795] /* rearLeftWheel.frame_a.t variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 904
type: SIMPLE_ASSIGN
frontWheel.cylinder.r_shape[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  (data->localData[0]->realVars[266] /* frontWheel.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 905
type: SIMPLE_ASSIGN
frontWheel.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[260] /* frontWheel.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 906
type: SIMPLE_ASSIGN
frontWheel.frame_a.t = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  (data->localData[0]->realVars[278] /* frontWheel.frame_a.t variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
gearLeft.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[342] /* gearLeft.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
gearRight.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[345] /* gearRight.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 909
type: SIMPLE_ASSIGN
rearLeft.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  (data->localData[0]->realVars[753] /* rearLeft.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 910
type: SIMPLE_ASSIGN
rearRight.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  (data->localData[0]->realVars[869] /* rearRight.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
rear.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  (data->localData[0]->realVars[727] /* rear.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 912
type: SIMPLE_ASSIGN
front.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  (data->localData[0]->realVars[191] /* front.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 913
type: SIMPLE_ASSIGN
frontTrail.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  (data->localData[0]->realVars[241] /* frontTrail.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 914
type: SIMPLE_ASSIGN
angleSensor.flange.tau = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  (data->localData[0]->realVars[113] /* angleSensor.flange.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 915
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[1,1] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  (data->localData[0]->realVars[393] /* planarWorld.MBFrame.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 916
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[1,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  (data->localData[0]->realVars[394] /* planarWorld.MBFrame.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 917
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[1,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  (data->localData[0]->realVars[395] /* planarWorld.MBFrame.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 918
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[2,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  (data->localData[0]->realVars[396] /* planarWorld.MBFrame.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 919
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[2,2] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  (data->localData[0]->realVars[397] /* planarWorld.MBFrame.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 920
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[2,3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  (data->localData[0]->realVars[398] /* planarWorld.MBFrame.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 921
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[3,1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  (data->localData[0]->realVars[399] /* planarWorld.MBFrame.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 922
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[3,2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  (data->localData[0]->realVars[400] /* planarWorld.MBFrame.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 923
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.T[3,3] = 1.0
*/
void ThreeWheelVehicle3FMU_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  (data->localData[0]->realVars[401] /* planarWorld.MBFrame.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 924
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  (data->localData[0]->realVars[402] /* planarWorld.MBFrame.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 925
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  (data->localData[0]->realVars[403] /* planarWorld.MBFrame.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 926
type: SIMPLE_ASSIGN
planarWorld.MBFrame.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  (data->localData[0]->realVars[404] /* planarWorld.MBFrame.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 927
type: SIMPLE_ASSIGN
front2.cylinder.lengthDirection[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  (data->localData[0]->realVars[214] /* front2.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 928
type: SIMPLE_ASSIGN
airResistanceLongitudinal.v_wind_0[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  (data->localData[0]->realVars[111] /* airResistanceLongitudinal.v_wind_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 929
type: SIMPLE_ASSIGN
airResistanceLongitudinal.v_wind_0[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->realVars[112] /* airResistanceLongitudinal.v_wind_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 930
type: SIMPLE_ASSIGN
airResistanceLongitudinal.frame_a.t = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  (data->localData[0]->realVars[108] /* airResistanceLongitudinal.frame_a.t variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 931
type: SIMPLE_ASSIGN
positionPhi.phi_support = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  (data->localData[0]->realVars[717] /* positionPhi.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 932
type: SIMPLE_ASSIGN
rearLeft.frame_a.t = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  (data->localData[0]->realVars[765] /* rearLeft.frame_a.t variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 933
type: SIMPLE_ASSIGN
rearRight.frame_b.t = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  (data->localData[0]->realVars[882] /* rearRight.frame_b.t variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 934
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.length = abs(planarWorld.coordinateSystem.axisLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  (data->localData[0]->realVars[611] /* planarWorld.coordinateSystem.z_arrow.length variable */) = fabs((data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 935
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.rxvisobj[1] = if noEvent(planarWorld.coordinateSystem.z_arrow.length < 1e-10) then 1.0 else 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp8;
  tmp8 = Less((data->localData[0]->realVars[611] /* planarWorld.coordinateSystem.z_arrow.length variable */),1e-10);
  (data->localData[0]->realVars[620] /* planarWorld.coordinateSystem.z_arrow.rxvisobj[1] variable */) = (tmp8?1.0:0.0);
  TRACE_POP
}

/*
equation index: 936
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLength = max(0.0, planarWorld.coordinateSystem.z_arrow.length - planarWorld.coordinateSystem.axisDiameter * 4.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  (data->localData[0]->realVars[603] /* planarWorld.coordinateSystem.z_arrow.arrowLength variable */) = fmax(0.0,(data->localData[0]->realVars[611] /* planarWorld.coordinateSystem.z_arrow.length variable */) - (((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */)) * (4.0)));
  TRACE_POP
}

/*
equation index: 937
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.r[1] = planarWorld.coordinateSystem.z_arrow.rxvisobj[1] * planarWorld.coordinateSystem.z_arrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  (data->localData[0]->realVars[594] /* planarWorld.coordinateSystem.z_arrow.arrowHead.r[1] variable */) = ((data->localData[0]->realVars[620] /* planarWorld.coordinateSystem.z_arrow.rxvisobj[1] variable */)) * ((data->localData[0]->realVars[603] /* planarWorld.coordinateSystem.z_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 938
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.rxvisobj[3] = if noEvent(planarWorld.coordinateSystem.z_arrow.length < 1e-10) then 0.0 else planarWorld.coordinateSystem.axisLength / planarWorld.coordinateSystem.z_arrow.length
*/
void ThreeWheelVehicle3FMU_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  modelica_boolean tmp9;
  tmp9 = Less((data->localData[0]->realVars[611] /* planarWorld.coordinateSystem.z_arrow.length variable */),1e-10);
  (data->localData[0]->realVars[621] /* planarWorld.coordinateSystem.z_arrow.rxvisobj[3] variable */) = (tmp9?0.0:DIVISION_SIM((data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */),(data->localData[0]->realVars[611] /* planarWorld.coordinateSystem.z_arrow.length variable */),"planarWorld.coordinateSystem.z_arrow.length",equationIndexes));
  TRACE_POP
}

/*
equation index: 939
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.r[3] = planarWorld.coordinateSystem.z_arrow.rxvisobj[3] * planarWorld.coordinateSystem.z_arrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  (data->localData[0]->realVars[596] /* planarWorld.coordinateSystem.z_arrow.arrowHead.r[3] variable */) = ((data->localData[0]->realVars[621] /* planarWorld.coordinateSystem.z_arrow.rxvisobj[3] variable */)) * ((data->localData[0]->realVars[603] /* planarWorld.coordinateSystem.z_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 940
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.headLength = max(0.0, planarWorld.coordinateSystem.z_arrow.length - planarWorld.coordinateSystem.z_arrow.arrowLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  (data->localData[0]->realVars[609] /* planarWorld.coordinateSystem.z_arrow.headLength variable */) = fmax(0.0,(data->localData[0]->realVars[611] /* planarWorld.coordinateSystem.z_arrow.length variable */) - (data->localData[0]->realVars[603] /* planarWorld.coordinateSystem.z_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 941
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.length = abs(planarWorld.coordinateSystem.axisLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  (data->localData[0]->realVars[523] /* planarWorld.coordinateSystem.y_arrow.length variable */) = fabs((data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 942
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.rxvisobj[1] = if noEvent(planarWorld.coordinateSystem.y_arrow.length < 1e-10) then 1.0 else 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_boolean tmp10;
  tmp10 = Less((data->localData[0]->realVars[523] /* planarWorld.coordinateSystem.y_arrow.length variable */),1e-10);
  (data->localData[0]->realVars[532] /* planarWorld.coordinateSystem.y_arrow.rxvisobj[1] variable */) = (tmp10?1.0:0.0);
  TRACE_POP
}

/*
equation index: 943
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLength = max(0.0, planarWorld.coordinateSystem.y_arrow.length - planarWorld.coordinateSystem.axisDiameter * 4.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->realVars[515] /* planarWorld.coordinateSystem.y_arrow.arrowLength variable */) = fmax(0.0,(data->localData[0]->realVars[523] /* planarWorld.coordinateSystem.y_arrow.length variable */) - (((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */)) * (4.0)));
  TRACE_POP
}

/*
equation index: 944
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.r[1] = planarWorld.coordinateSystem.y_arrow.rxvisobj[1] * planarWorld.coordinateSystem.y_arrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  (data->localData[0]->realVars[506] /* planarWorld.coordinateSystem.y_arrow.arrowHead.r[1] variable */) = ((data->localData[0]->realVars[532] /* planarWorld.coordinateSystem.y_arrow.rxvisobj[1] variable */)) * ((data->localData[0]->realVars[515] /* planarWorld.coordinateSystem.y_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 945
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.rxvisobj[2] = if noEvent(planarWorld.coordinateSystem.y_arrow.length < 1e-10) then 0.0 else planarWorld.coordinateSystem.axisLength / planarWorld.coordinateSystem.y_arrow.length
*/
void ThreeWheelVehicle3FMU_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  modelica_boolean tmp11;
  tmp11 = Less((data->localData[0]->realVars[523] /* planarWorld.coordinateSystem.y_arrow.length variable */),1e-10);
  (data->localData[0]->realVars[533] /* planarWorld.coordinateSystem.y_arrow.rxvisobj[2] variable */) = (tmp11?0.0:DIVISION_SIM((data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */),(data->localData[0]->realVars[523] /* planarWorld.coordinateSystem.y_arrow.length variable */),"planarWorld.coordinateSystem.y_arrow.length",equationIndexes));
  TRACE_POP
}

/*
equation index: 946
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.r[2] = planarWorld.coordinateSystem.y_arrow.rxvisobj[2] * planarWorld.coordinateSystem.y_arrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  (data->localData[0]->realVars[507] /* planarWorld.coordinateSystem.y_arrow.arrowHead.r[2] variable */) = ((data->localData[0]->realVars[533] /* planarWorld.coordinateSystem.y_arrow.rxvisobj[2] variable */)) * ((data->localData[0]->realVars[515] /* planarWorld.coordinateSystem.y_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 947
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.headLength = max(0.0, planarWorld.coordinateSystem.y_arrow.length - planarWorld.coordinateSystem.y_arrow.arrowLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->realVars[521] /* planarWorld.coordinateSystem.y_arrow.headLength variable */) = fmax(0.0,(data->localData[0]->realVars[523] /* planarWorld.coordinateSystem.y_arrow.length variable */) - (data->localData[0]->realVars[515] /* planarWorld.coordinateSystem.y_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 948
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.length = abs(planarWorld.coordinateSystem.axisLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  (data->localData[0]->realVars[439] /* planarWorld.coordinateSystem.x_arrow.length variable */) = fabs((data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 949
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.rxvisobj[1] = if noEvent(planarWorld.coordinateSystem.x_arrow.length < 1e-10) then 1.0 else planarWorld.coordinateSystem.axisLength / planarWorld.coordinateSystem.x_arrow.length
*/
void ThreeWheelVehicle3FMU_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  modelica_boolean tmp12;
  tmp12 = Less((data->localData[0]->realVars[439] /* planarWorld.coordinateSystem.x_arrow.length variable */),1e-10);
  (data->localData[0]->realVars[448] /* planarWorld.coordinateSystem.x_arrow.rxvisobj[1] variable */) = (tmp12?1.0:DIVISION_SIM((data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */),(data->localData[0]->realVars[439] /* planarWorld.coordinateSystem.x_arrow.length variable */),"planarWorld.coordinateSystem.x_arrow.length",equationIndexes));
  TRACE_POP
}

/*
equation index: 950
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLength = max(0.0, planarWorld.coordinateSystem.x_arrow.length - planarWorld.coordinateSystem.axisDiameter * 4.0)
*/
void ThreeWheelVehicle3FMU_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  (data->localData[0]->realVars[430] /* planarWorld.coordinateSystem.x_arrow.arrowLength variable */) = fmax(0.0,(data->localData[0]->realVars[439] /* planarWorld.coordinateSystem.x_arrow.length variable */) - (((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */)) * (4.0)));
  TRACE_POP
}

/*
equation index: 951
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.r[1] = planarWorld.coordinateSystem.x_arrow.rxvisobj[1] * planarWorld.coordinateSystem.x_arrow.arrowLength
*/
void ThreeWheelVehicle3FMU_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  (data->localData[0]->realVars[421] /* planarWorld.coordinateSystem.x_arrow.arrowHead.r[1] variable */) = ((data->localData[0]->realVars[448] /* planarWorld.coordinateSystem.x_arrow.rxvisobj[1] variable */)) * ((data->localData[0]->realVars[430] /* planarWorld.coordinateSystem.x_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 952
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.headLength = max(0.0, planarWorld.coordinateSystem.x_arrow.length - planarWorld.coordinateSystem.x_arrow.arrowLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  (data->localData[0]->realVars[437] /* planarWorld.coordinateSystem.x_arrow.headLength variable */) = fmax(0.0,(data->localData[0]->realVars[439] /* planarWorld.coordinateSystem.x_arrow.length variable */) - (data->localData[0]->realVars[430] /* planarWorld.coordinateSystem.x_arrow.arrowLength variable */));
  TRACE_POP
}

/*
equation index: 953
type: SIMPLE_ASSIGN
revolute.cylinder.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  (data->localData[0]->realVars[984] /* revolute.cylinder.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 954
type: SIMPLE_ASSIGN
revolute.cylinder.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  (data->localData[0]->realVars[983] /* revolute.cylinder.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 955
type: SIMPLE_ASSIGN
body2.sphere.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  (data->localData[0]->realVars[159] /* body2.sphere.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 956
type: SIMPLE_ASSIGN
body2.sphere.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  (data->localData[0]->realVars[158] /* body2.sphere.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 957
type: SIMPLE_ASSIGN
body.sphere.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  (data->localData[0]->realVars[126] /* body.sphere.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 958
type: SIMPLE_ASSIGN
body.sphere.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  (data->localData[0]->realVars[125] /* body.sphere.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 959
type: SIMPLE_ASSIGN
frontWheel.rim2.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  (data->localData[0]->realVars[319] /* frontWheel.rim2.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 960
type: SIMPLE_ASSIGN
frontWheel.rim2.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  (data->localData[0]->realVars[318] /* frontWheel.rim2.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 961
type: SIMPLE_ASSIGN
frontWheel.rim2.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  (data->localData[0]->realVars[317] /* frontWheel.rim2.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 962
type: SIMPLE_ASSIGN
frontWheel.rim1.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  (data->localData[0]->realVars[291] /* frontWheel.rim1.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 963
type: SIMPLE_ASSIGN
frontWheel.rim1.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  (data->localData[0]->realVars[290] /* frontWheel.rim1.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 964
type: SIMPLE_ASSIGN
frontWheel.rim1.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[289] /* frontWheel.rim1.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 965
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->realVars[838] /* rearLeftWheel.rim2.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 966
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  (data->localData[0]->realVars[837] /* rearLeftWheel.rim2.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 967
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  (data->localData[0]->realVars[836] /* rearLeftWheel.rim2.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 968
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->realVars[810] /* rearLeftWheel.rim1.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 969
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->realVars[809] /* rearLeftWheel.rim1.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 970
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[808] /* rearLeftWheel.rim1.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 971
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[954] /* rearRightWheel.rim2.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 972
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[953] /* rearRightWheel.rim2.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->realVars[952] /* rearRightWheel.rim2.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 974
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.w[3] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[926] /* rearRightWheel.rim1.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 975
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.w[2] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->realVars[925] /* rearRightWheel.rim1.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 976
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.w[1] = 0.0
*/
void ThreeWheelVehicle3FMU_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  (data->localData[0]->realVars[924] /* rearRightWheel.rim1.R.w[1] variable */) = 0.0;
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1961(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1963(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1966(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1969(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1964(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1962(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1968(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1965(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1967(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1970(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1941(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1943(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1946(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1949(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1944(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1942(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1948(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1945(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1947(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1950(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1479(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1480(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1488(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1482(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1481(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1483(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1489(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1485(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1484(DATA *data, threadData_t *threadData);


/*
equation index: 1006
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.headLength = max(0.0, planarWorld.gravityArrow.length - planarWorld.gravityArrow.arrowLength)
*/
void ThreeWheelVehicle3FMU_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  (data->localData[0]->realVars[703] /* planarWorld.gravityArrow.headLength variable */) = fmax(0.0,(data->localData[0]->realVars[705] /* planarWorld.gravityArrow.length variable */) - (data->localData[0]->realVars[698] /* planarWorld.gravityArrow.arrowLength variable */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1436(DATA *data, threadData_t *threadData);


/*
equation index: 1008
type: SIMPLE_ASSIGN
$DER.revolute.w = revolute.z
*/
void ThreeWheelVehicle3FMU_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->realVars[81] /* der(revolute.w) DUMMY_DER */) = (data->localData[0]->realVars[1008] /* revolute.z variable */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1472(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1474(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1433(DATA *data, threadData_t *threadData);


/*
equation index: 1012
type: SIMPLE_ASSIGN
revolute.cylinder.R.w[3] = revolute.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->realVars[985] /* revolute.cylinder.R.w[3] variable */) = (data->localData[0]->realVars[1007] /* revolute.w DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
$DER.revolute.phi = revolute.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  (data->localData[0]->realVars[80] /* der(revolute.phi) DUMMY_DER */) = (data->localData[0]->realVars[1007] /* revolute.w DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1524(DATA *data, threadData_t *threadData);


/*
equation index: 1015
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[1,1] = cos(revolute.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[977] /* revolute.cylinder.R.T[1,1] variable */) = cos((data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
revolute.cylinder.R.T[1,2] = sin(revolute.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  (data->localData[0]->realVars[978] /* revolute.cylinder.R.T[1,2] variable */) = sin((data->localData[0]->realVars[1004] /* revolute.phi DUMMY_STATE */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1525(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1527(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1551(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1529(DATA *data, threadData_t *threadData);


/*
equation index: 1021
type: SIMPLE_ASSIGN
rearLeftInertia.phi = $START.rearLeftInertia.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */) = (data->modelData->realVarsData[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */).attribute .start;
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1559(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1561(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1475(DATA *data, threadData_t *threadData);


/*
equation index: 1025
type: SIMPLE_ASSIGN
rearLeftInertia.w = speedStart / wheelRadiusL
*/
void ThreeWheelVehicle3FMU_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */) = DIVISION_SIM((data->simulationInfo->realParameter[316] /* speedStart PARAM */),(data->simulationInfo->realParameter[331] /* wheelRadiusL PARAM */),"wheelRadiusL",equationIndexes);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1562(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1563(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1478(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1465(DATA *data, threadData_t *threadData);


/*
equation index: 1030
type: SIMPLE_ASSIGN
rearRightInertia.phi = $START.rearRightInertia.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */) = (data->modelData->realVarsData[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */).attribute .start;
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1553(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1555(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1473(DATA *data, threadData_t *threadData);


/*
equation index: 1034
type: SIMPLE_ASSIGN
rearRightInertia.w = speedStart / wheelRadiusR
*/
void ThreeWheelVehicle3FMU_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  (data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */) = DIVISION_SIM((data->simulationInfo->realParameter[316] /* speedStart PARAM */),(data->simulationInfo->realParameter[332] /* wheelRadiusR PARAM */),"wheelRadiusR",equationIndexes);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1556(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1557(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1477(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1464(DATA *data, threadData_t *threadData);


/*
equation index: 1039
type: SIMPLE_ASSIGN
frontInertia.phi = $START.frontInertia.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1039};
  (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */) = (data->modelData->realVarsData[6] /* frontInertia.phi STATE(1,frontInertia.w) */).attribute .start;
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1569(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1579(DATA *data, threadData_t *threadData);


/*
equation index: 1042
type: SIMPLE_ASSIGN
frontInertia.w = speedStart / wheelRadiusF
*/
void ThreeWheelVehicle3FMU_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  (data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */) = DIVISION_SIM((data->simulationInfo->realParameter[316] /* speedStart PARAM */),(data->simulationInfo->realParameter[330] /* wheelRadiusF PARAM */),"wheelRadiusF",equationIndexes);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1584(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1585(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1476(DATA *data, threadData_t *threadData);


/*
equation index: 1046
type: SIMPLE_ASSIGN
body.r[1] = $START.body.r[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1046};
  (data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */) = (data->modelData->realVarsData[1] /* body.r[1] STATE(1,body.v[1]) */).attribute .start;
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1520(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1450(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1446(DATA *data, threadData_t *threadData);


/*
equation index: 1050
type: SIMPLE_ASSIGN
body.r[2] = $START.body.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  (data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */) = (data->modelData->realVarsData[2] /* body.r[2] STATE(1,body.v[2]) */).attribute .start;
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1521(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1449(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1445(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1466(DATA *data, threadData_t *threadData);


/*
equation index: 1055
type: SIMPLE_ASSIGN
body.v[1] = $START.body.v[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1055};
  (data->localData[0]->realVars[3] /* body.v[1] STATE(1,body.a[1]) */) = (data->modelData->realVarsData[3] /* body.v[1] STATE(1,body.a[1]) */).attribute .start;
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1471(DATA *data, threadData_t *threadData);


/*
equation index: 1057
type: SIMPLE_ASSIGN
body.v[2] = speedStart
*/
void ThreeWheelVehicle3FMU_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1057};
  (data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */) = (data->simulationInfo->realParameter[316] /* speedStart PARAM */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1470(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1467(DATA *data, threadData_t *threadData);


/*
equation index: 1060
type: SIMPLE_ASSIGN
body.phi = $START.body.phi
*/
void ThreeWheelVehicle3FMU_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1060};
  (data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */) = (data->modelData->realVarsData[0] /* body.phi STATE(1,body.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
front2.R[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[206] /* front2.R[2,1] DUMMY_STATE */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
front2.R[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->realVars[207] /* front2.R[2,2] DUMMY_STATE */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
front2.r0[2] = front2.R[2,1] * front2.r[1] + front2.R[2,2] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[206] /* front2.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) + ((data->localData[0]->realVars[207] /* front2.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1606(DATA *data, threadData_t *threadData);


/*
equation index: 1065
type: SIMPLE_ASSIGN
front2.r0[1] = front2.R[2,2] * front2.r[1] - front2.R[2,1] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1065};
  (data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[207] /* front2.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) - (((data->localData[0]->realVars[206] /* front2.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1604(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1530(DATA *data, threadData_t *threadData);


/*
equation index: 1068
type: SIMPLE_ASSIGN
frontTrail.R[2,1] = sin(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1068};
  (data->localData[0]->realVars[233] /* frontTrail.R[2,1] DUMMY_STATE */) = sin((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
frontTrail.R[2,2] = cos(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1069};
  (data->localData[0]->realVars[234] /* frontTrail.R[2,2] DUMMY_STATE */) = cos((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
frontTrail.r0[2] = frontTrail.R[2,1] * frontTrail.r[1] + frontTrail.R[2,2] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1070};
  (data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[233] /* frontTrail.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) + ((data->localData[0]->realVars[234] /* frontTrail.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1540(DATA *data, threadData_t *threadData);


/*
equation index: 1072
type: SIMPLE_ASSIGN
frontTrail.r0[1] = frontTrail.R[2,2] * frontTrail.r[1] - frontTrail.R[2,1] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1072};
  (data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[234] /* frontTrail.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) - (((data->localData[0]->realVars[233] /* frontTrail.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1538(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1536(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1531(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1544(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1545(DATA *data, threadData_t *threadData);


/*
equation index: 1078
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[1,3] = (-frontWheel.e0[1]) * sin(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->realVars[282] /* frontWheel.rim1.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */))) * (sin((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[2,2] = frontWheel.e0[1] ^ 2.0 + (1.0 - frontWheel.e0[1] ^ 2.0) * cos(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  modelica_real tmp13;
  modelica_real tmp14;
  tmp13 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  tmp14 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  (data->localData[0]->realVars[284] /* frontWheel.rim1.R.T[2,2] variable */) = (tmp13 * tmp13) + (1.0 - ((tmp14 * tmp14))) * (cos((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[3,1] = frontWheel.e0[1] * sin(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  (data->localData[0]->realVars[286] /* frontWheel.rim1.R.T[3,1] variable */) = ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * (sin((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[1,3] = (-frontWheel.e0[1]) * sin(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  (data->localData[0]->realVars[310] /* frontWheel.rim2.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */))) * (sin(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[2,2] = frontWheel.e0[1] ^ 2.0 + (1.0 - frontWheel.e0[1] ^ 2.0) * cos(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  tmp16 = (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */);
  (data->localData[0]->realVars[312] /* frontWheel.rim2.R.T[2,2] variable */) = (tmp15 * tmp15) + (1.0 - ((tmp16 * tmp16))) * (cos(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[3,1] = frontWheel.e0[1] * sin(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->realVars[314] /* frontWheel.rim2.R.T[3,1] variable */) = ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * (sin(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1546(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1547(DATA *data, threadData_t *threadData);


/*
equation index: 1086
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[1,1] = frontWheel.e0[2] ^ 2.0 + (1.0 - frontWheel.e0[2] ^ 2.0) * cos(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  modelica_real tmp17;
  modelica_real tmp18;
  tmp17 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  tmp18 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  (data->localData[0]->realVars[280] /* frontWheel.rim1.R.T[1,1] variable */) = (tmp17 * tmp17) + (1.0 - ((tmp18 * tmp18))) * (cos((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[1,2] = (frontWheel.e0[2] * cos(frontInertia.phi) - frontWheel.e0[2]) * frontWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[281] /* frontWheel.rim1.R.T[1,2] variable */) = (((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * (cos((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */))) - (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */));
  TRACE_POP
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[2,1] = (frontWheel.e0[1] * cos(frontInertia.phi) - frontWheel.e0[1]) * frontWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[283] /* frontWheel.rim1.R.T[2,1] variable */) = (((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * (cos((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */))) - (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */));
  TRACE_POP
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[2,3] = (-frontWheel.e0[2]) * sin(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  (data->localData[0]->realVars[285] /* frontWheel.rim1.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */))) * (sin((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
frontWheel.rim1.R.T[3,2] = frontWheel.e0[2] * sin(frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1090};
  (data->localData[0]->realVars[287] /* frontWheel.rim1.R.T[3,2] variable */) = ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * (sin((data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[1,1] = frontWheel.e0[2] ^ 2.0 + (1.0 - frontWheel.e0[2] ^ 2.0) * cos(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1091};
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  tmp20 = (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */);
  (data->localData[0]->realVars[308] /* frontWheel.rim2.R.T[1,1] variable */) = (tmp19 * tmp19) + (1.0 - ((tmp20 * tmp20))) * (cos(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[1,2] = (frontWheel.e0[2] * cos(1.570796326794897 + frontInertia.phi) - frontWheel.e0[2]) * frontWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1092};
  (data->localData[0]->realVars[309] /* frontWheel.rim2.R.T[1,2] variable */) = (((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * (cos(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */))) - (data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */));
  TRACE_POP
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[2,1] = (frontWheel.e0[1] * cos(1.570796326794897 + frontInertia.phi) - frontWheel.e0[1]) * frontWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->realVars[311] /* frontWheel.rim2.R.T[2,1] variable */) = (((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * (cos(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */))) - (data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */));
  TRACE_POP
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[2,3] = (-frontWheel.e0[2]) * sin(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[313] /* frontWheel.rim2.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */))) * (sin(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
frontWheel.rim2.R.T[3,2] = frontWheel.e0[2] * sin(1.570796326794897 + frontInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->realVars[315] /* frontWheel.rim2.R.T[3,2] variable */) = ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) * (sin(1.570796326794897 + (data->localData[0]->realVars[6] /* frontInertia.phi STATE(1,frontInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
body2.sphere.R.T[1,1] = cos(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1096};
  (data->localData[0]->realVars[152] /* body2.sphere.R.T[1,1] variable */) = cos((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
body2.sphere.R.T[1,2] = sin(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[153] /* body2.sphere.R.T[1,2] variable */) = sin((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
body2.sphere.R.T[2,1] = -sin(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[155] /* body2.sphere.R.T[2,1] variable */) = (-sin((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
body2.sphere.R.T[2,2] = cos(body2.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[156] /* body2.sphere.R.T[2,2] variable */) = cos((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
front.R[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->realVars[183] /* front.R[2,1] DUMMY_STATE */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
front.R[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[184] /* front.R[2,2] DUMMY_STATE */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
front.r0[2] = front.R[2,1] * front.r[1] + front.R[2,2] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[205] /* front.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[183] /* front.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) + ((data->localData[0]->realVars[184] /* front.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1620(DATA *data, threadData_t *threadData);


/*
equation index: 1104
type: SIMPLE_ASSIGN
revolute.frame_a.y = front.frame_b.y - front2.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[1003] /* revolute.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[203] /* front.frame_b.y DUMMY_STATE */) - (data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
body2.r[2] = revolute.frame_a.y + frontTrail.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[151] /* body2.r[2] DUMMY_STATE */) = (data->localData[0]->realVars[1003] /* revolute.frame_a.y DUMMY_STATE */) + (data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1623(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1624(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1625(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1626(DATA *data, threadData_t *threadData);


/*
equation index: 1110
type: SIMPLE_ASSIGN
frontTrail.cylinder.r[2] = revolute.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[243] /* frontTrail.cylinder.r[2] variable */) = (data->localData[0]->realVars[1003] /* revolute.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
revolute.cylinder.r[2] = revolute.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[993] /* revolute.cylinder.r[2] variable */) = (data->localData[0]->realVars[1003] /* revolute.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
front2.cylinder.r[2] = revolute.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[216] /* front2.cylinder.r[2] variable */) = (data->localData[0]->realVars[1003] /* revolute.frame_a.y DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1630(DATA *data, threadData_t *threadData);


/*
equation index: 1114
type: SIMPLE_ASSIGN
front.r0[1] = front.R[2,2] * front.r[1] - front.R[2,1] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1114};
  (data->localData[0]->realVars[204] /* front.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[184] /* front.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) - (((data->localData[0]->realVars[183] /* front.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1608(DATA *data, threadData_t *threadData);


/*
equation index: 1116
type: SIMPLE_ASSIGN
revolute.frame_a.x = front.frame_b.x - front2.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1116};
  (data->localData[0]->realVars[1002] /* revolute.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[202] /* front.frame_b.x DUMMY_STATE */) - (data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
body2.r[1] = revolute.frame_a.x + frontTrail.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[150] /* body2.r[1] DUMMY_STATE */) = (data->localData[0]->realVars[1002] /* revolute.frame_a.x DUMMY_STATE */) + (data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1611(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1612(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1613(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1614(DATA *data, threadData_t *threadData);


/*
equation index: 1122
type: SIMPLE_ASSIGN
frontTrail.cylinder.r[1] = revolute.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->realVars[242] /* frontTrail.cylinder.r[1] variable */) = (data->localData[0]->realVars[1002] /* revolute.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
revolute.cylinder.r[1] = revolute.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[992] /* revolute.cylinder.r[1] variable */) = (data->localData[0]->realVars[1002] /* revolute.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
front2.cylinder.r[1] = revolute.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[215] /* front2.cylinder.r[1] variable */) = (data->localData[0]->realVars[1002] /* revolute.frame_a.x DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1618(DATA *data, threadData_t *threadData);


/*
equation index: 1126
type: SIMPLE_ASSIGN
rear.R[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  (data->localData[0]->realVars[719] /* rear.R[2,1] DUMMY_STATE */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
rear.R[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  (data->localData[0]->realVars[720] /* rear.R[2,2] DUMMY_STATE */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
rear.r0[2] = rear.R[2,1] * rear.r[1] + rear.R[2,2] * rear.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  (data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[719] /* rear.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)) + ((data->localData[0]->realVars[720] /* rear.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[215] /* rear.r[2] PARAM */));
  TRACE_POP
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
rear.frame_a.y = body.r[2] - rear.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->realVars[741] /* rear.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[2] /* body.r[2] STATE(1,body.v[2]) */) - (data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
rearRight.cylinder.r[2] = rear.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->realVars[871] /* rearRight.cylinder.r[2] variable */) = (data->localData[0]->realVars[741] /* rear.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
rear.cylinder.r[2] = rear.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  (data->localData[0]->realVars[729] /* rear.cylinder.r[2] variable */) = (data->localData[0]->realVars[741] /* rear.frame_a.y DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1663(DATA *data, threadData_t *threadData);


/*
equation index: 1133
type: SIMPLE_ASSIGN
rear.r0[1] = rear.R[2,2] * rear.r[1] - rear.R[2,1] * rear.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[720] /* rear.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)) - (((data->localData[0]->realVars[719] /* rear.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[215] /* rear.r[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
rear.frame_a.x = body.r[1] - rear.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->realVars[740] /* rear.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[1] /* body.r[1] STATE(1,body.v[1]) */) - (data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
rearRight.cylinder.r[1] = rear.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->realVars[870] /* rearRight.cylinder.r[1] variable */) = (data->localData[0]->realVars[740] /* rear.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
rear.cylinder.r[1] = rear.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1136};
  (data->localData[0]->realVars[728] /* rear.cylinder.r[1] variable */) = (data->localData[0]->realVars[740] /* rear.frame_a.x DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1658(DATA *data, threadData_t *threadData);


/*
equation index: 1138
type: SIMPLE_ASSIGN
rearRight.R[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->realVars[861] /* rearRight.R[2,1] DUMMY_STATE */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
rearRight.R[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[862] /* rearRight.R[2,2] DUMMY_STATE */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
rearRight.r0[2] = rearRight.R[2,1] * rearRight.r[1] + rearRight.R[2,2] * rearRight.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  (data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[861] /* rearRight.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)) + ((data->localData[0]->realVars[862] /* rearRight.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[265] /* rearRight.r[2] PARAM */));
  TRACE_POP
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
rearRightWheel.frame_a.y = rear.frame_a.y + rearRight.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[913] /* rearRightWheel.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[741] /* rear.frame_a.y DUMMY_STATE */) + (data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r[2] = rearRightWheel.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->realVars[897] /* rearRightWheel.cylinder.r[2] variable */) = (data->localData[0]->realVars[913] /* rearRightWheel.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r[2] = rearRightWheel.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[936] /* rearRightWheel.rim1.r[2] variable */) = (data->localData[0]->realVars[913] /* rearRightWheel.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r[2] = rearRightWheel.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  (data->localData[0]->realVars[964] /* rearRightWheel.rim2.r[2] variable */) = (data->localData[0]->realVars[913] /* rearRightWheel.frame_a.y DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1675(DATA *data, threadData_t *threadData);


/*
equation index: 1146
type: SIMPLE_ASSIGN
rearRight.r0[1] = rearRight.R[2,2] * rearRight.r[1] - rearRight.R[2,1] * rearRight.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  (data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[862] /* rearRight.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)) - (((data->localData[0]->realVars[861] /* rearRight.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[265] /* rearRight.r[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
rearRightWheel.frame_a.x = rear.frame_a.x + rearRight.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->realVars[912] /* rearRightWheel.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[740] /* rear.frame_a.x DUMMY_STATE */) + (data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.r[1] = rearRightWheel.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  (data->localData[0]->realVars[896] /* rearRightWheel.cylinder.r[1] variable */) = (data->localData[0]->realVars[912] /* rearRightWheel.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r[1] = rearRightWheel.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[935] /* rearRightWheel.rim1.r[1] variable */) = (data->localData[0]->realVars[912] /* rearRightWheel.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r[1] = rearRightWheel.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[963] /* rearRightWheel.rim2.r[1] variable */) = (data->localData[0]->realVars[912] /* rearRightWheel.frame_a.x DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1669(DATA *data, threadData_t *threadData);


/*
equation index: 1152
type: SIMPLE_ASSIGN
rearLeft.R[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->realVars[745] /* rearLeft.R[2,1] DUMMY_STATE */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
rearLeft.R[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[746] /* rearLeft.R[2,2] DUMMY_STATE */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
rearLeft.r0[2] = rearLeft.R[2,1] * rearLeft.r[1] + rearLeft.R[2,2] * rearLeft.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */) = ((data->localData[0]->realVars[745] /* rearLeft.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)) + ((data->localData[0]->realVars[746] /* rearLeft.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[225] /* rearLeft.r[2] PARAM */));
  TRACE_POP
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
rearLeftWheel.frame_a.y = rear.frame_a.y - rearLeft.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1155};
  (data->localData[0]->realVars[797] /* rearLeftWheel.frame_a.y DUMMY_STATE */) = (data->localData[0]->realVars[741] /* rear.frame_a.y DUMMY_STATE */) - (data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r[2] = rearLeftWheel.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1156};
  (data->localData[0]->realVars[781] /* rearLeftWheel.cylinder.r[2] variable */) = (data->localData[0]->realVars[797] /* rearLeftWheel.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r[2] = rearLeftWheel.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1157};
  (data->localData[0]->realVars[820] /* rearLeftWheel.rim1.r[2] variable */) = (data->localData[0]->realVars[797] /* rearLeftWheel.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r[2] = rearLeftWheel.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1158};
  (data->localData[0]->realVars[848] /* rearLeftWheel.rim2.r[2] variable */) = (data->localData[0]->realVars[797] /* rearLeftWheel.frame_a.y DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
rearLeft.cylinder.r[2] = rearLeftWheel.frame_a.y
*/
void ThreeWheelVehicle3FMU_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[755] /* rearLeft.cylinder.r[2] variable */) = (data->localData[0]->realVars[797] /* rearLeftWheel.frame_a.y DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1689(DATA *data, threadData_t *threadData);


/*
equation index: 1161
type: SIMPLE_ASSIGN
rearLeft.r0[1] = rearLeft.R[2,2] * rearLeft.r[1] - rearLeft.R[2,1] * rearLeft.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1161};
  (data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */) = ((data->localData[0]->realVars[746] /* rearLeft.R[2,2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)) - (((data->localData[0]->realVars[745] /* rearLeft.R[2,1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[225] /* rearLeft.r[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
rearLeftWheel.frame_a.x = rear.frame_a.x - rearLeft.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  (data->localData[0]->realVars[796] /* rearLeftWheel.frame_a.x DUMMY_STATE */) = (data->localData[0]->realVars[740] /* rear.frame_a.x DUMMY_STATE */) - (data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.r[1] = rearLeftWheel.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[780] /* rearLeftWheel.cylinder.r[1] variable */) = (data->localData[0]->realVars[796] /* rearLeftWheel.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r[1] = rearLeftWheel.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  (data->localData[0]->realVars[819] /* rearLeftWheel.rim1.r[1] variable */) = (data->localData[0]->realVars[796] /* rearLeftWheel.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r[1] = rearLeftWheel.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  (data->localData[0]->realVars[847] /* rearLeftWheel.rim2.r[1] variable */) = (data->localData[0]->realVars[796] /* rearLeftWheel.frame_a.x DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
rearLeft.cylinder.r[1] = rearLeftWheel.frame_a.x
*/
void ThreeWheelVehicle3FMU_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  (data->localData[0]->realVars[754] /* rearLeft.cylinder.r[1] variable */) = (data->localData[0]->realVars[796] /* rearLeftWheel.frame_a.x DUMMY_STATE */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1682(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1522(DATA *data, threadData_t *threadData);


/*
equation index: 1169
type: SIMPLE_ASSIGN
rearRightWheel.R[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[889] /* rearRightWheel.R[2,2] variable */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
rearRightWheel.R[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[888] /* rearRightWheel.R[2,1] variable */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
rearRightWheel.e0[1] = rearRightWheel.R[2,2] * rearRightWheel.e[1] - rearRightWheel.R[2,1] * rearRightWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */) = ((data->localData[0]->realVars[889] /* rearRightWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[275] /* rearRightWheel.e[1] PARAM */)) - (((data->localData[0]->realVars[888] /* rearRightWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[276] /* rearRightWheel.e[2] PARAM */)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1697(DATA *data, threadData_t *threadData);


/*
equation index: 1173
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[1,3] = (-rearRightWheel.e0[1]) * sin(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[917] /* rearRightWheel.rim1.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */))) * (sin((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[2,2] = rearRightWheel.e0[1] ^ 2.0 + (1.0 - rearRightWheel.e0[1] ^ 2.0) * cos(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  modelica_real tmp21;
  modelica_real tmp22;
  tmp21 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  tmp22 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  (data->localData[0]->realVars[919] /* rearRightWheel.rim1.R.T[2,2] variable */) = (tmp21 * tmp21) + (1.0 - ((tmp22 * tmp22))) * (cos((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[3,1] = rearRightWheel.e0[1] * sin(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[921] /* rearRightWheel.rim1.R.T[3,1] variable */) = ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * (sin((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[1,3] = (-rearRightWheel.e0[1]) * sin(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  (data->localData[0]->realVars[945] /* rearRightWheel.rim2.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */))) * (sin(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[2,2] = rearRightWheel.e0[1] ^ 2.0 + (1.0 - rearRightWheel.e0[1] ^ 2.0) * cos(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  modelica_real tmp23;
  modelica_real tmp24;
  tmp23 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  tmp24 = (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */);
  (data->localData[0]->realVars[947] /* rearRightWheel.rim2.R.T[2,2] variable */) = (tmp23 * tmp23) + (1.0 - ((tmp24 * tmp24))) * (cos(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[3,1] = rearRightWheel.e0[1] * sin(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[949] /* rearRightWheel.rim2.R.T[3,1] variable */) = ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * (sin(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
rearRightWheel.e0[2] = rearRightWheel.R[2,1] * rearRightWheel.e[1] + rearRightWheel.R[2,2] * rearRightWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */) = ((data->localData[0]->realVars[888] /* rearRightWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[275] /* rearRightWheel.e[1] PARAM */)) + ((data->localData[0]->realVars[889] /* rearRightWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[276] /* rearRightWheel.e[2] PARAM */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1709(DATA *data, threadData_t *threadData);


/*
equation index: 1181
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[1,1] = rearRightWheel.e0[2] ^ 2.0 + (1.0 - rearRightWheel.e0[2] ^ 2.0) * cos(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  tmp26 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  (data->localData[0]->realVars[915] /* rearRightWheel.rim1.R.T[1,1] variable */) = (tmp25 * tmp25) + (1.0 - ((tmp26 * tmp26))) * (cos((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[1,2] = (rearRightWheel.e0[2] * cos(rearRightInertia.phi) - rearRightWheel.e0[2]) * rearRightWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  (data->localData[0]->realVars[916] /* rearRightWheel.rim1.R.T[1,2] variable */) = (((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * (cos((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */))) - (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */));
  TRACE_POP
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[2,1] = (rearRightWheel.e0[1] * cos(rearRightInertia.phi) - rearRightWheel.e0[1]) * rearRightWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[918] /* rearRightWheel.rim1.R.T[2,1] variable */) = (((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * (cos((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */))) - (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */));
  TRACE_POP
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[2,3] = (-rearRightWheel.e0[2]) * sin(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->realVars[920] /* rearRightWheel.rim1.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */))) * (sin((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
rearRightWheel.rim1.R.T[3,2] = rearRightWheel.e0[2] * sin(rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->realVars[922] /* rearRightWheel.rim1.R.T[3,2] variable */) = ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * (sin((data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[1,1] = rearRightWheel.e0[2] ^ 2.0 + (1.0 - rearRightWheel.e0[2] ^ 2.0) * cos(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  tmp28 = (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */);
  (data->localData[0]->realVars[943] /* rearRightWheel.rim2.R.T[1,1] variable */) = (tmp27 * tmp27) + (1.0 - ((tmp28 * tmp28))) * (cos(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[1,2] = (rearRightWheel.e0[2] * cos(1.570796326794897 + rearRightInertia.phi) - rearRightWheel.e0[2]) * rearRightWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[944] /* rearRightWheel.rim2.R.T[1,2] variable */) = (((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * (cos(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */))) - (data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */));
  TRACE_POP
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[2,1] = (rearRightWheel.e0[1] * cos(1.570796326794897 + rearRightInertia.phi) - rearRightWheel.e0[1]) * rearRightWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->realVars[946] /* rearRightWheel.rim2.R.T[2,1] variable */) = (((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * (cos(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */))) - (data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */));
  TRACE_POP
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[2,3] = (-rearRightWheel.e0[2]) * sin(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[948] /* rearRightWheel.rim2.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */))) * (sin(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
rearRightWheel.rim2.R.T[3,2] = rearRightWheel.e0[2] * sin(1.570796326794897 + rearRightInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  (data->localData[0]->realVars[950] /* rearRightWheel.rim2.R.T[3,2] variable */) = ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) * (sin(1.570796326794897 + (data->localData[0]->realVars[10] /* rearRightInertia.phi STATE(1,rearRightInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
rearLeftWheel.R[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[773] /* rearLeftWheel.R[2,2] variable */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
rearLeftWheel.R[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->realVars[772] /* rearLeftWheel.R[2,1] variable */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
rearLeftWheel.e0[1] = rearLeftWheel.R[2,2] * rearLeftWheel.e[1] - rearLeftWheel.R[2,1] * rearLeftWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */) = ((data->localData[0]->realVars[773] /* rearLeftWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[235] /* rearLeftWheel.e[1] PARAM */)) - (((data->localData[0]->realVars[772] /* rearLeftWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[236] /* rearLeftWheel.e[2] PARAM */)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1717(DATA *data, threadData_t *threadData);


/*
equation index: 1195
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[1,3] = (-rearLeftWheel.e0[1]) * sin(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->realVars[801] /* rearLeftWheel.rim1.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */))) * (sin((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[2,2] = rearLeftWheel.e0[1] ^ 2.0 + (1.0 - rearLeftWheel.e0[1] ^ 2.0) * cos(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  tmp30 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  (data->localData[0]->realVars[803] /* rearLeftWheel.rim1.R.T[2,2] variable */) = (tmp29 * tmp29) + (1.0 - ((tmp30 * tmp30))) * (cos((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[3,1] = rearLeftWheel.e0[1] * sin(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  (data->localData[0]->realVars[805] /* rearLeftWheel.rim1.R.T[3,1] variable */) = ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * (sin((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[1,3] = (-rearLeftWheel.e0[1]) * sin(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  (data->localData[0]->realVars[829] /* rearLeftWheel.rim2.R.T[1,3] variable */) = ((-(data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */))) * (sin(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[2,2] = rearLeftWheel.e0[1] ^ 2.0 + (1.0 - rearLeftWheel.e0[1] ^ 2.0) * cos(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  tmp32 = (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */);
  (data->localData[0]->realVars[831] /* rearLeftWheel.rim2.R.T[2,2] variable */) = (tmp31 * tmp31) + (1.0 - ((tmp32 * tmp32))) * (cos(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[3,1] = rearLeftWheel.e0[1] * sin(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  (data->localData[0]->realVars[833] /* rearLeftWheel.rim2.R.T[3,1] variable */) = ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * (sin(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
rearLeftWheel.e0[2] = rearLeftWheel.R[2,1] * rearLeftWheel.e[1] + rearLeftWheel.R[2,2] * rearLeftWheel.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */) = ((data->localData[0]->realVars[772] /* rearLeftWheel.R[2,1] variable */)) * ((data->simulationInfo->realParameter[235] /* rearLeftWheel.e[1] PARAM */)) + ((data->localData[0]->realVars[773] /* rearLeftWheel.R[2,2] variable */)) * ((data->simulationInfo->realParameter[236] /* rearLeftWheel.e[2] PARAM */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1729(DATA *data, threadData_t *threadData);


/*
equation index: 1203
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[1,1] = rearLeftWheel.e0[2] ^ 2.0 + (1.0 - rearLeftWheel.e0[2] ^ 2.0) * cos(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  modelica_real tmp33;
  modelica_real tmp34;
  tmp33 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  tmp34 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  (data->localData[0]->realVars[799] /* rearLeftWheel.rim1.R.T[1,1] variable */) = (tmp33 * tmp33) + (1.0 - ((tmp34 * tmp34))) * (cos((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[1,2] = (rearLeftWheel.e0[2] * cos(rearLeftInertia.phi) - rearLeftWheel.e0[2]) * rearLeftWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->realVars[800] /* rearLeftWheel.rim1.R.T[1,2] variable */) = (((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * (cos((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */))) - (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */));
  TRACE_POP
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[2,1] = (rearLeftWheel.e0[1] * cos(rearLeftInertia.phi) - rearLeftWheel.e0[1]) * rearLeftWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[802] /* rearLeftWheel.rim1.R.T[2,1] variable */) = (((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * (cos((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */))) - (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */));
  TRACE_POP
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[2,3] = (-rearLeftWheel.e0[2]) * sin(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[804] /* rearLeftWheel.rim1.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */))) * (sin((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.R.T[3,2] = rearLeftWheel.e0[2] * sin(rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->realVars[806] /* rearLeftWheel.rim1.R.T[3,2] variable */) = ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * (sin((data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[1,1] = rearLeftWheel.e0[2] ^ 2.0 + (1.0 - rearLeftWheel.e0[2] ^ 2.0) * cos(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  modelica_real tmp35;
  modelica_real tmp36;
  tmp35 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  tmp36 = (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */);
  (data->localData[0]->realVars[827] /* rearLeftWheel.rim2.R.T[1,1] variable */) = (tmp35 * tmp35) + (1.0 - ((tmp36 * tmp36))) * (cos(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[1,2] = (rearLeftWheel.e0[2] * cos(1.570796326794897 + rearLeftInertia.phi) - rearLeftWheel.e0[2]) * rearLeftWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[828] /* rearLeftWheel.rim2.R.T[1,2] variable */) = (((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * (cos(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */))) - (data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */));
  TRACE_POP
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[2,1] = (rearLeftWheel.e0[1] * cos(1.570796326794897 + rearLeftInertia.phi) - rearLeftWheel.e0[1]) * rearLeftWheel.e0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[830] /* rearLeftWheel.rim2.R.T[2,1] variable */) = (((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * (cos(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */))) - (data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */));
  TRACE_POP
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[2,3] = (-rearLeftWheel.e0[2]) * sin(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[832] /* rearLeftWheel.rim2.R.T[2,3] variable */) = ((-(data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */))) * (sin(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.R.T[3,2] = rearLeftWheel.e0[2] * sin(1.570796326794897 + rearLeftInertia.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->realVars[834] /* rearLeftWheel.rim2.R.T[3,2] variable */) = ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) * (sin(1.570796326794897 + (data->localData[0]->realVars[8] /* rearLeftInertia.phi STATE(1,rearLeftInertia.w) */)));
  TRACE_POP
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
body.sphere.R.T[1,1] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->realVars[119] /* body.sphere.R.T[1,1] variable */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
body.sphere.R.T[1,2] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  (data->localData[0]->realVars[120] /* body.sphere.R.T[1,2] variable */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
body.sphere.R.T[2,1] = -sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  (data->localData[0]->realVars[122] /* body.sphere.R.T[2,1] variable */) = (-sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)));
  TRACE_POP
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
body.sphere.R.T[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  (data->localData[0]->realVars[123] /* body.sphere.R.T[2,2] variable */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R0a[2,2] = cos(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[103] /* airResistanceLongitudinal.R0a[2,2] variable */) = cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R0a[2,1] = sin(body.phi)
*/
void ThreeWheelVehicle3FMU_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  (data->localData[0]->realVars[102] /* airResistanceLongitudinal.R0a[2,1] variable */) = sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */));
  TRACE_POP
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R[1,1] = airResistanceLongitudinal.R0a[2,2] * airResistanceLongitudinal.e[1] - airResistanceLongitudinal.R0a[2,1] * airResistanceLongitudinal.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[99] /* airResistanceLongitudinal.R[1,1] variable */) = ((data->localData[0]->realVars[103] /* airResistanceLongitudinal.R0a[2,2] variable */)) * ((data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */)) - (((data->localData[0]->realVars[102] /* airResistanceLongitudinal.R0a[2,1] variable */)) * ((data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R[1,2] = (-airResistanceLongitudinal.R0a[2,2]) * airResistanceLongitudinal.e[2] - airResistanceLongitudinal.R0a[2,1] * airResistanceLongitudinal.e[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  (data->localData[0]->realVars[100] /* airResistanceLongitudinal.R[1,2] variable */) = ((-(data->localData[0]->realVars[103] /* airResistanceLongitudinal.R0a[2,2] variable */))) * ((data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */)) - (((data->localData[0]->realVars[102] /* airResistanceLongitudinal.R0a[2,1] variable */)) * ((data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1769(DATA *data, threadData_t *threadData);


/*
equation index: 1222
type: SIMPLE_ASSIGN
airResistanceLongitudinal.R[2,1] = airResistanceLongitudinal.R0a[2,1] * airResistanceLongitudinal.e[1] + airResistanceLongitudinal.R0a[2,2] * airResistanceLongitudinal.e[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->realVars[101] /* airResistanceLongitudinal.R[2,1] variable */) = ((data->localData[0]->realVars[102] /* airResistanceLongitudinal.R0a[2,1] variable */)) * ((data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */)) + ((data->localData[0]->realVars[103] /* airResistanceLongitudinal.R0a[2,2] variable */)) * ((data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1771(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1772(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1773(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1774(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1775(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1586(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1602(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1776(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1777(DATA *data, threadData_t *threadData);


/*
equation index: 1232
type: SIMPLE_ASSIGN
body.w = $START.body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[5] /* body.w STATE(1) */) = (data->modelData->realVarsData[5] /* body.w STATE(1) */).attribute .start;
  TRACE_POP
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
$DER.front2.R[2,1] = cos(body.phi) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[52] /* der(front2.R[2,1]) DUMMY_DER */) = (cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
$DER.front2.R[2,2] = (-sin(body.phi)) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[53] /* der(front2.R[2,2]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1633(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1632(DATA *data, threadData_t *threadData);


/*
equation index: 1237
type: SIMPLE_ASSIGN
body2.w = body.w + revolute.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */) = (data->localData[0]->realVars[5] /* body.w STATE(1) */) + (data->localData[0]->realVars[1007] /* revolute.w DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
$DER.frontTrail.R[2,1] = cos(body2.phi) * body2.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[56] /* der(frontTrail.R[2,1]) DUMMY_DER */) = (cos((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */))) * ((data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
$DER.frontTrail.R[2,2] = (-sin(body2.phi)) * body2.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[57] /* der(frontTrail.R[2,2]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */)))) * ((data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1543(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1542(DATA *data, threadData_t *threadData);


/*
equation index: 1242
type: SIMPLE_ASSIGN
body2.sphere.R.w[3] = body2.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  (data->localData[0]->realVars[160] /* body2.sphere.R.w[3] variable */) = (data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
$DER.body2.phi = body2.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[40] /* der(body2.phi) DUMMY_DER */) = (data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
$DER.front.R[2,1] = cos(body.phi) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[46] /* der(front.R[2,1]) DUMMY_DER */) = (cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
$DER.front.R[2,2] = (-sin(body.phi)) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[47] /* der(front.R[2,2]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1640(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1641(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1642(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1643(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1653(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1635(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1636(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1637(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1638(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1644(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1646(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1647(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1648(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1649(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1651(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1650(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1639(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1523(DATA *data, threadData_t *threadData);


/*
equation index: 1264
type: SIMPLE_ASSIGN
$DER.rearLeft.R[2,2] = (-sin(body.phi)) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  (data->localData[0]->realVars[67] /* der(rearLeft.R[2,2]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
$DER.rearLeft.R[2,1] = cos(body.phi) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  (data->localData[0]->realVars[66] /* der(rearLeft.R[2,1]) DUMMY_DER */) = (cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1731(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1732(DATA *data, threadData_t *threadData);


/*
equation index: 1268
type: SIMPLE_ASSIGN
$DER.rearRight.R[2,2] = (-sin(body.phi)) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  (data->localData[0]->realVars[73] /* der(rearRight.R[2,2]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
$DER.rearRight.R[2,1] = cos(body.phi) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->realVars[72] /* der(rearRight.R[2,1]) DUMMY_DER */) = (cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1734(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1735(DATA *data, threadData_t *threadData);


/*
equation index: 1272
type: SIMPLE_ASSIGN
$DER.rear.R[2,2] = (-sin(body.phi)) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->realVars[61] /* der(rear.R[2,2]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
$DER.rear.R[2,1] = cos(body.phi) * body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  (data->localData[0]->realVars[60] /* der(rear.R[2,1]) DUMMY_DER */) = (cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1737(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1738(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1741(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1742(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1739(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1740(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1743(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1744(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1756(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1766(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1758(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1759(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1764(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1765(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1757(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1760(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1763(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1745(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1755(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1747(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1748(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1753(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1754(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1746(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1749(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1752(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1447(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1469(DATA *data, threadData_t *threadData);


void ThreeWheelVehicle3FMU_eqFunction_1302(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1303(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1304(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1305(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1306(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1307(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1308(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1309(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1310(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1311(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1312(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1313(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1314(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1315(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1316(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1317(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1318(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1319(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1320(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1321(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1322(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1323(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1324(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1325(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1326(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1327(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1328(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1329(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1330(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1331(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1332(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1333(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1334(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1335(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1336(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1337(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1338(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1339(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1340(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1341(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1342(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1343(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1344(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1345(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1346(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1347(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1348(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1349(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1350(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1351(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1352(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1353(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1354(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1355(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1356(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1357(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1364(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1363(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1362(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1361(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1360(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1359(DATA*, threadData_t*);
void ThreeWheelVehicle3FMU_eqFunction_1358(DATA*, threadData_t*);
/*
equation index: 1365
indexNonlinear: 0
type: NONLINEAR

vars: {rearRight.frame_a.fx, rearRight.frame_a.fy, front2.frame_a.fx, front2.frame_a.fy, body.a[2], body.a[1], $DER.body.w}
eqns: {1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1364, 1363, 1362, 1361, 1360, 1359, 1358}
*/
void ThreeWheelVehicle3FMU_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1365 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = (data->localData[0]->realVars[115] /* body.a[2] variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = (data->localData[0]->realVars[114] /* body.a[1] variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1365};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1365 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  (data->localData[0]->realVars[115] /* body.a[2] variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  (data->localData[0]->realVars[114] /* body.a[1] variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */) = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1928(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1930(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1903(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1919(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1904(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1912(DATA *data, threadData_t *threadData);


/*
equation index: 1372
type: SIMPLE_ASSIGN
rearLeftWheel.f_roll = (-rearLeftWheel.cr) * outForceLeftWheel[1,3] * (-1.0 + 2.0 / (1.0 + exp((-100.0) * rearLeftWheel.v_long / rearLeftWheel.v0_roll)))
*/
void ThreeWheelVehicle3FMU_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  (data->localData[0]->realVars[793] /* rearLeftWheel.f_roll variable */) = ((-(data->simulationInfo->realParameter[231] /* rearLeftWheel.cr PARAM */))) * (((data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */)) * (-1.0 + DIVISION_SIM(2.0,1.0 + exp(DIVISION_SIM((-100.0) * ((data->localData[0]->realVars[859] /* rearLeftWheel.v_long variable */)),(data->simulationInfo->realParameter[254] /* rearLeftWheel.v0_roll PARAM */),"rearLeftWheel.v0_roll",equationIndexes)),"1.0 + exp((-100.0) * rearLeftWheel.v_long / rearLeftWheel.v0_roll)",equationIndexes)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1914(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1915(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1916(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1917(DATA *data, threadData_t *threadData);


/*
equation index: 1377
type: SIMPLE_ASSIGN
frontWheel.f_roll = (-frontWheel.cr) * outForceFrontWheel[1,3] * (-1.0 + 2.0 / (1.0 + exp((-100.0) * frontWheel.v_long / frontWheel.v0_roll)))
*/
void ThreeWheelVehicle3FMU_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  (data->localData[0]->realVars[274] /* frontWheel.f_roll variable */) = ((-(data->simulationInfo->realParameter[67] /* frontWheel.cr PARAM */))) * (((data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */)) * (-1.0 + DIVISION_SIM(2.0,1.0 + exp(DIVISION_SIM((-100.0) * ((data->localData[0]->realVars[338] /* frontWheel.v_long variable */)),(data->simulationInfo->realParameter[90] /* frontWheel.v0_roll PARAM */),"frontWheel.v0_roll",equationIndexes)),"1.0 + exp((-100.0) * frontWheel.v_long / frontWheel.v0_roll)",equationIndexes)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1922(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1918(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1923(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1924(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1925(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1920(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1929(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1907(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1927(DATA *data, threadData_t *threadData);


/*
equation index: 1387
type: SIMPLE_ASSIGN
rearRightWheel.f_roll = (-rearRightWheel.cr) * outForceRightWheel[1,3] * (-1.0 + 2.0 / (1.0 + exp((-100.0) * rearRightWheel.v_long / rearRightWheel.v0_roll)))
*/
void ThreeWheelVehicle3FMU_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  (data->localData[0]->realVars[909] /* rearRightWheel.f_roll variable */) = ((-(data->simulationInfo->realParameter[271] /* rearRightWheel.cr PARAM */))) * (((data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */)) * (-1.0 + DIVISION_SIM(2.0,1.0 + exp(DIVISION_SIM((-100.0) * ((data->localData[0]->realVars[975] /* rearRightWheel.v_long variable */)),(data->simulationInfo->realParameter[294] /* rearRightWheel.v0_roll PARAM */),"rearRightWheel.v0_roll",equationIndexes)),"1.0 + exp((-100.0) * rearRightWheel.v_long / rearRightWheel.v0_roll)",equationIndexes)));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_1906(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1908(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1909(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1910(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1926(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1911(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1468(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1438(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1439(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1441(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1443(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1444(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1448(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1451(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1452(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1453(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1454(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1455(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1456(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1457(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1458(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1459(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1460(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1461(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1462(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1490(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1496(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1493(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1495(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1498(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1499(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1491(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1494(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1492(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1497(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1510(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1517(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1511(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1512(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1513(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1518(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1519(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1514(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1515(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1516(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void ThreeWheelVehicle3FMU_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  ThreeWheelVehicle3FMU_eqFunction_1(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_4(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_5(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_6(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_7(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_8(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_9(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_10(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_11(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_12(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_13(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_14(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_15(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_16(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_17(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_18(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_19(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_20(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_21(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_22(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_23(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_24(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_25(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_26(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_27(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_28(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_29(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_30(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_31(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_32(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_33(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_34(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_35(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_36(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_37(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_38(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_39(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_40(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_41(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_42(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_43(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_44(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_45(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_46(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_47(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_48(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_49(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_50(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_51(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_52(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_53(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_54(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_55(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_56(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_57(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_58(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_59(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_60(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_61(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_62(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_63(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_64(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_65(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_66(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_67(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_68(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_69(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_70(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_71(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_72(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_73(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_74(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_75(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_76(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_77(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_78(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_79(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_80(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_81(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_82(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_83(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_84(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_85(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_86(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_87(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_88(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_89(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_90(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_91(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_92(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_93(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_94(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_95(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_96(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_97(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_98(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_99(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_100(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_101(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_102(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_103(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_104(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_105(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_106(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_107(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_108(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_109(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_110(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_111(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_112(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_113(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_114(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_115(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_116(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_117(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_118(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_119(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_120(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_121(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_122(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_123(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_124(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_125(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_126(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_127(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_128(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_129(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_130(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_131(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_132(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_133(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_134(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_135(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_136(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_137(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_138(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_139(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_140(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_141(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_142(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_143(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_144(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_145(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_146(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_147(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_148(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_149(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_150(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_151(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_152(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_153(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_154(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_155(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_156(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_157(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_158(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_159(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_160(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_161(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_162(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_163(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_164(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_165(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_166(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_167(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_168(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_169(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_170(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_171(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_172(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_173(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_174(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_175(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_176(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_177(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_178(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_179(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_180(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_181(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_182(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_183(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_184(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_185(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_186(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_187(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_188(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_189(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_190(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_191(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_192(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_193(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_194(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_195(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_196(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_197(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_198(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_199(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_200(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_201(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_202(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_203(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_204(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_205(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_206(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_207(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_208(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_209(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_210(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_211(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_212(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_213(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_214(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_215(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_216(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_217(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_218(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_219(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_220(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_221(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_222(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_223(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_224(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_225(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_226(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_227(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_228(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_229(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_230(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_231(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_232(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_233(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_234(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_235(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_236(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_237(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_238(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_239(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_240(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_241(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_242(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_243(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_244(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_245(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_246(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_247(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_248(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_249(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_250(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_251(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_252(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_253(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_254(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_255(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_256(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_257(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_258(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_259(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_260(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_261(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_262(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_263(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_264(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_265(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_266(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_267(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_268(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_269(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_270(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_271(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_272(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_273(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_274(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_275(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_276(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_277(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_278(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_279(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_280(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_281(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_282(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_283(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_284(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_285(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_286(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_287(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_288(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_289(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_290(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_291(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_292(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_293(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_294(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_295(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_296(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_297(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_298(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_299(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_300(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_301(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_302(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_303(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_304(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_305(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_306(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_307(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_308(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_309(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_310(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_311(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_312(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_313(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_314(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_315(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_316(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_317(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_318(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_319(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_320(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_321(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_322(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_323(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_324(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_325(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_326(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_327(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_328(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_329(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_330(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_331(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_332(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_333(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_334(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_335(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_336(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_337(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_338(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_339(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_340(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_341(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_342(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_343(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_344(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_345(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_346(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_347(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_348(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_349(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_350(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_351(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_352(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_353(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_354(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_355(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_356(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_357(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_358(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_359(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_360(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_361(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_362(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_363(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_364(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_365(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_366(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_367(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_368(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_369(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_370(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_371(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_372(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_373(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_374(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_375(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_376(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_377(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_378(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_379(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_380(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_381(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_382(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_383(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_384(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_385(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_386(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_387(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_388(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_389(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_390(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_391(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_392(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_393(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_394(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_395(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_396(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_397(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_398(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_399(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_400(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_401(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_402(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_403(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_404(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_405(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_406(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_407(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_408(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_409(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_410(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_411(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_412(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_413(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_414(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_415(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_416(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_417(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_418(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_419(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_420(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_421(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_422(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_423(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_424(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_425(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_426(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_427(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_428(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_429(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_430(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_431(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_432(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_433(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_434(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_435(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_436(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_437(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_438(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_439(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_440(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_441(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_442(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_443(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_444(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_445(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_446(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_447(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_448(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_449(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_450(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_451(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_452(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_453(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_454(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_455(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_456(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_457(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_458(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_459(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_460(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_461(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_462(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_463(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_464(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_465(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_466(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_467(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_468(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_469(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_470(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_471(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_472(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_473(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_474(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_475(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_476(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_477(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_478(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_479(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_480(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_481(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_482(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_483(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_484(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_485(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_486(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_487(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_488(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_489(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_490(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_491(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_492(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_493(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_494(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_495(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_496(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_497(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_498(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_499(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_500(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_501(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_502(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_503(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_504(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_505(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_506(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_507(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_508(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_509(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_510(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_511(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_512(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_513(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_514(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_515(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_516(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_517(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_518(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_519(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_520(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_521(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_522(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_523(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_524(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_525(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_526(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_527(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_528(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_529(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_530(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_531(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_532(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_533(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_534(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_535(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_536(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_537(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_538(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_539(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_540(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_541(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_542(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_543(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_544(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_545(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_546(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_547(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_548(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_549(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_550(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_551(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_552(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_553(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_554(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_555(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_556(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_557(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_558(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_559(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_560(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_561(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_562(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_563(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_564(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_565(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_566(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_567(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_568(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_569(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_570(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_571(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_572(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_573(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_574(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_575(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_576(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_577(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_578(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_579(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_580(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_581(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_582(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_583(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_584(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_585(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_586(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_587(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_588(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_589(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_590(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_591(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_592(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_593(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_594(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_595(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_596(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_597(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_598(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_599(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_600(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_601(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_602(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_603(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_604(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_605(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_606(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_607(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_608(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_609(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_610(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_611(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_612(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_613(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_614(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_615(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_616(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_617(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_618(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_619(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_620(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_621(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_622(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_623(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_624(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_625(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_626(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_627(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_628(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_629(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_630(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_631(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_632(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_633(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_634(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_635(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_636(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_637(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_638(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_639(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_640(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_641(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_642(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_643(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_644(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_645(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_646(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_647(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_648(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_649(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_650(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_651(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_652(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_653(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_654(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_655(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_656(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_657(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_658(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_659(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_660(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_661(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_662(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_663(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_664(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_665(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_666(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_667(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_668(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_669(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_670(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_671(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_672(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_673(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_674(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_675(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_676(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_677(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_678(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_679(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_680(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_681(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_682(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_683(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_684(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_685(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_686(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_687(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_688(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_689(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_690(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_691(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_692(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_693(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_694(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_695(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_696(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_697(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_698(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_699(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_700(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_701(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_702(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_703(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_704(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_705(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1951(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1953(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1956(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1959(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1954(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1952(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1958(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1955(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1957(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1960(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_716(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_717(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_718(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_719(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_720(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_721(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_722(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_723(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_724(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_725(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_726(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_727(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_728(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_729(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_730(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_731(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_732(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_733(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_734(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_735(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_736(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_737(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_738(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_739(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_740(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_741(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_742(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_743(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_744(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_745(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_746(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_747(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_748(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_749(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_750(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_751(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_752(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_753(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_754(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_755(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_756(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_757(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_758(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_759(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_760(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_761(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_762(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_763(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_764(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_765(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_766(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_767(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_768(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_769(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_770(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_771(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_772(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_773(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_774(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_775(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_776(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_777(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_778(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_779(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_780(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_781(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_782(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_783(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_784(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_785(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_786(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_787(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_788(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_789(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_790(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_791(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_792(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_793(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_794(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_795(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_796(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_797(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_798(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_799(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_800(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1500(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1506(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1501(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1508(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1509(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1505(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1507(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1503(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1502(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1504(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_811(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_812(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_813(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_814(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_815(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_816(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_817(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_818(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_819(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_820(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_821(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_822(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_823(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_824(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_825(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_826(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_827(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_828(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_829(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_830(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_831(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_832(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_833(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_834(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_835(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_836(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_837(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_838(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_839(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_840(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_841(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_842(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_843(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_844(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_845(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_846(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_847(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_848(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_849(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_850(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_851(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_852(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_853(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_854(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_855(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_856(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_857(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_858(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_859(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_860(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_861(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_862(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_863(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_864(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_865(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_866(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_867(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_868(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_869(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_870(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_871(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_872(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_873(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_874(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_875(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_876(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_877(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_878(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_879(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_880(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_881(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_882(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_883(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_884(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_885(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_886(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_887(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_888(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_889(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_890(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_891(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_892(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_893(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_894(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_895(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_896(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_897(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_898(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_899(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_900(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_901(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_902(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_903(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_904(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_905(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_906(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_907(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_908(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_909(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_910(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_911(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_912(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_913(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_914(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_915(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_916(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_917(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_918(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_919(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_920(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_921(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_922(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_923(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_924(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_925(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_926(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_927(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_928(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_929(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_930(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_931(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_932(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_933(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_934(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_935(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_936(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_937(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_938(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_939(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_940(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_941(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_942(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_943(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_944(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_945(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_946(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_947(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_948(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_949(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_950(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_951(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_952(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_953(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_954(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_955(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_956(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_957(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_958(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_959(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_960(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_961(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_962(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_963(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_964(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_965(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_966(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_967(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_968(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_969(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_970(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_971(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_972(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_973(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_974(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_975(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_976(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1961(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1963(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1966(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1969(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1964(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1962(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1968(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1965(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1967(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1970(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1941(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1943(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1946(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1949(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1944(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1942(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1948(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1945(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1947(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1950(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1479(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1480(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1488(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1482(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1481(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1483(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1489(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1485(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1484(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1006(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1436(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1008(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1472(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1474(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1433(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1012(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1013(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1524(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1015(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1016(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1525(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1527(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1551(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1529(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1021(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1559(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1561(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1475(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1025(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1562(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1563(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1478(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1465(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1030(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1553(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1555(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1473(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1034(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1556(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1557(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1477(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1464(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1039(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1569(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1579(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1042(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1584(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1585(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1476(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1046(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1520(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1450(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1446(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1050(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1521(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1449(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1445(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1466(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1055(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1471(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1057(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1470(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1467(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1060(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1061(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1062(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1063(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1606(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1065(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1604(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1530(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1068(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1069(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1070(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1540(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1072(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1538(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1536(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1531(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1544(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1545(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1078(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1079(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1080(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1081(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1082(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1083(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1546(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1547(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1086(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1087(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1088(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1089(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1090(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1091(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1092(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1093(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1094(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1095(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1096(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1097(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1098(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1099(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1100(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1101(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1102(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1620(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1104(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1105(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1623(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1624(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1625(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1626(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1110(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1111(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1112(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1630(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1114(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1608(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1116(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1117(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1611(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1612(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1613(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1614(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1122(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1123(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1124(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1618(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1126(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1127(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1128(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1129(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1130(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1131(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1663(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1133(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1134(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1135(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1136(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1658(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1138(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1139(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1140(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1141(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1142(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1143(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1144(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1675(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1146(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1147(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1148(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1149(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1150(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1669(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1152(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1153(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1154(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1155(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1156(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1157(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1158(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1159(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1689(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1161(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1162(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1163(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1164(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1165(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1166(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1682(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1522(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1169(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1170(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1171(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1697(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1173(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1174(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1175(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1176(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1177(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1178(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1179(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1709(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1181(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1182(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1183(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1184(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1185(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1186(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1187(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1188(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1189(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1190(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1191(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1192(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1193(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1717(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1195(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1196(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1197(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1198(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1199(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1200(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1201(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1729(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1203(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1204(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1205(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1206(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1207(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1208(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1209(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1210(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1211(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1212(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1213(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1214(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1215(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1216(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1217(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1218(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1219(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1220(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1769(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1222(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1771(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1772(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1773(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1774(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1775(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1586(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1602(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1776(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1777(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1232(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1233(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1234(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1633(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1632(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1237(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1238(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1239(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1543(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1542(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1242(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1243(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1244(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1245(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1640(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1641(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1642(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1643(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1653(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1635(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1636(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1637(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1638(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1644(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1646(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1647(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1648(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1649(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1651(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1650(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1639(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1523(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1264(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1265(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1731(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1732(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1268(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1269(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1734(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1735(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1272(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1273(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1737(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1738(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1741(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1742(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1739(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1740(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1743(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1744(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1756(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1766(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1758(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1759(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1764(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1765(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1757(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1760(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1763(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1745(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1755(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1747(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1748(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1753(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1754(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1746(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1749(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1752(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1447(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1469(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1365(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1928(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1930(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1903(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1919(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1904(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1912(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1372(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1914(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1915(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1916(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1917(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1377(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1922(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1918(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1923(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1924(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1925(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1920(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1929(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1907(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1927(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1387(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1906(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1908(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1909(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1910(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1926(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1911(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1468(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1438(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1439(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1441(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1443(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1444(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1448(data, threadData);
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
  ThreeWheelVehicle3FMU_eqFunction_1490(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1496(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1493(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1495(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1498(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1499(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1491(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1494(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1492(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1497(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1510(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1517(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1511(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1512(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1513(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1518(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1519(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1514(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1515(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1516(data, threadData);
  TRACE_POP
}

int ThreeWheelVehicle3FMU_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  ThreeWheelVehicle3FMU_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No ThreeWheelVehicle3FMU_functionInitialEquations_lambda0 function */

int ThreeWheelVehicle3FMU_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

