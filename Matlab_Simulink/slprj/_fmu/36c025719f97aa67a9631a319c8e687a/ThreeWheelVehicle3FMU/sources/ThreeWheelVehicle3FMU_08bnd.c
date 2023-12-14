/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "ThreeWheelVehicle3FMU_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1971
type: SIMPLE_ASSIGN
$START.outEffRadiusRightWheel = wheelRadiusR
*/
static void ThreeWheelVehicle3FMU_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1971};
  (data->modelData->realVarsData[363] /* outEffRadiusRightWheel variable */).attribute .start = (data->simulationInfo->realParameter[332] /* wheelRadiusR PARAM */);
    (data->localData[0]->realVars[363] /* outEffRadiusRightWheel variable */) = (data->modelData->realVarsData[363] /* outEffRadiusRightWheel variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[363].info /* outEffRadiusRightWheel */.name, (modelica_real) (data->localData[0]->realVars[363] /* outEffRadiusRightWheel variable */));
  TRACE_POP
}

/*
equation index: 1972
type: SIMPLE_ASSIGN
$START.outEffRadiusLeftWheel = wheelRadiusL
*/
static void ThreeWheelVehicle3FMU_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1972};
  (data->modelData->realVarsData[362] /* outEffRadiusLeftWheel variable */).attribute .start = (data->simulationInfo->realParameter[331] /* wheelRadiusL PARAM */);
    (data->localData[0]->realVars[362] /* outEffRadiusLeftWheel variable */) = (data->modelData->realVarsData[362] /* outEffRadiusLeftWheel variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[362].info /* outEffRadiusLeftWheel */.name, (modelica_real) (data->localData[0]->realVars[362] /* outEffRadiusLeftWheel variable */));
  TRACE_POP
}

/*
equation index: 1973
type: SIMPLE_ASSIGN
$START.outEffRadiusFrontWheel = wheelRadiusF
*/
static void ThreeWheelVehicle3FMU_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1973};
  (data->modelData->realVarsData[361] /* outEffRadiusFrontWheel variable */).attribute .start = (data->simulationInfo->realParameter[330] /* wheelRadiusF PARAM */);
    (data->localData[0]->realVars[361] /* outEffRadiusFrontWheel variable */) = (data->modelData->realVarsData[361] /* outEffRadiusFrontWheel variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[361].info /* outEffRadiusFrontWheel */.name, (modelica_real) (data->localData[0]->realVars[361] /* outEffRadiusFrontWheel variable */));
  TRACE_POP
}

/*
equation index: 1974
type: SIMPLE_ASSIGN
$START.outCarAcc[1] = speedStart
*/
static void ThreeWheelVehicle3FMU_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1974};
  (data->modelData->realVarsData[350] /* outCarAcc[1] variable */).attribute .start = (data->simulationInfo->realParameter[316] /* speedStart PARAM */);
    (data->localData[0]->realVars[350] /* outCarAcc[1] variable */) = (data->modelData->realVarsData[350] /* outCarAcc[1] variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[350].info /* outCarAcc[1] */.name, (modelica_real) (data->localData[0]->realVars[350] /* outCarAcc[1] variable */));
  TRACE_POP
}

/*
equation index: 1975
type: SIMPLE_ASSIGN
$START.outCarVelocity[1] = speedStart
*/
static void ThreeWheelVehicle3FMU_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1975};
  (data->modelData->realVarsData[359] /* outCarVelocity[1] variable */).attribute .start = (data->simulationInfo->realParameter[316] /* speedStart PARAM */);
    (data->localData[0]->realVars[359] /* outCarVelocity[1] variable */) = (data->modelData->realVarsData[359] /* outCarVelocity[1] variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[359].info /* outCarVelocity[1] */.name, (modelica_real) (data->localData[0]->realVars[359] /* outCarVelocity[1] variable */));
  TRACE_POP
}

/*
equation index: 1976
type: SIMPLE_ASSIGN
$START.outCarSpeed = speedStart
*/
static void ThreeWheelVehicle3FMU_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1976};
  (data->modelData->realVarsData[358] /* outCarSpeed variable */).attribute .start = (data->simulationInfo->realParameter[316] /* speedStart PARAM */);
    (data->localData[0]->realVars[358] /* outCarSpeed variable */) = (data->modelData->realVarsData[358] /* outCarSpeed variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[358].info /* outCarSpeed */.name, (modelica_real) (data->localData[0]->realVars[358] /* outCarSpeed variable */));
  TRACE_POP
}

/*
equation index: 1977
type: SIMPLE_ASSIGN
$START.outTurnRadReal = turnRadiusMAX
*/
static void ThreeWheelVehicle3FMU_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1977};
  (data->modelData->realVarsData[389] /* outTurnRadReal variable */).attribute .start = (data->simulationInfo->realParameter[317] /* turnRadiusMAX PARAM */);
    (data->localData[0]->realVars[389] /* outTurnRadReal variable */) = (data->modelData->realVarsData[389] /* outTurnRadReal variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[389].info /* outTurnRadReal */.name, (modelica_real) (data->localData[0]->realVars[389] /* outTurnRadReal variable */));
  TRACE_POP
}

/*
equation index: 1978
type: SIMPLE_ASSIGN
$START.outTurnRadOptimal = turnRadiusMAX
*/
static void ThreeWheelVehicle3FMU_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1978};
  (data->modelData->realVarsData[388] /* outTurnRadOptimal variable */).attribute .start = (data->simulationInfo->realParameter[317] /* turnRadiusMAX PARAM */);
    (data->localData[0]->realVars[388] /* outTurnRadOptimal variable */) = (data->modelData->realVarsData[388] /* outTurnRadOptimal variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[388].info /* outTurnRadOptimal */.name, (modelica_real) (data->localData[0]->realVars[388] /* outTurnRadOptimal variable */));
  TRACE_POP
}

/*
equation index: 1979
type: SIMPLE_ASSIGN
$START.body.v[2] = speedStart
*/
static void ThreeWheelVehicle3FMU_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1979};
  (data->modelData->realVarsData[4] /* body.v[2] STATE(1,body.a[2]) */).attribute .start = (data->simulationInfo->realParameter[316] /* speedStart PARAM */);
    (data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */) = (data->modelData->realVarsData[4] /* body.v[2] STATE(1,body.a[2]) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* body.v[2] */.name, (modelica_real) (data->localData[0]->realVars[4] /* body.v[2] STATE(1,body.a[2]) */));
  TRACE_POP
}

/*
equation index: 1980
type: SIMPLE_ASSIGN
$START.frontInertia.w = speedStart / wheelRadiusF
*/
static void ThreeWheelVehicle3FMU_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1980};
  (data->modelData->realVarsData[7] /* frontInertia.w STATE(1,frontInertia.a) */).attribute .start = DIVISION((data->simulationInfo->realParameter[316] /* speedStart PARAM */),(data->simulationInfo->realParameter[330] /* wheelRadiusF PARAM */),"wheelRadiusF");
    (data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */) = (data->modelData->realVarsData[7] /* frontInertia.w STATE(1,frontInertia.a) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* frontInertia.w */.name, (modelica_real) (data->localData[0]->realVars[7] /* frontInertia.w STATE(1,frontInertia.a) */));
  TRACE_POP
}

/*
equation index: 1981
type: SIMPLE_ASSIGN
$START.rearRightInertia.w = speedStart / wheelRadiusR
*/
static void ThreeWheelVehicle3FMU_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1981};
  (data->modelData->realVarsData[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */).attribute .start = DIVISION((data->simulationInfo->realParameter[316] /* speedStart PARAM */),(data->simulationInfo->realParameter[332] /* wheelRadiusR PARAM */),"wheelRadiusR");
    (data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */) = (data->modelData->realVarsData[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* rearRightInertia.w */.name, (modelica_real) (data->localData[0]->realVars[11] /* rearRightInertia.w STATE(1,rearRightInertia.a) */));
  TRACE_POP
}

/*
equation index: 1982
type: SIMPLE_ASSIGN
$START.rearLeftInertia.w = speedStart / wheelRadiusL
*/
static void ThreeWheelVehicle3FMU_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1982};
  (data->modelData->realVarsData[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */).attribute .start = DIVISION((data->simulationInfo->realParameter[316] /* speedStart PARAM */),(data->simulationInfo->realParameter[331] /* wheelRadiusL PARAM */),"wheelRadiusL");
    (data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */) = (data->modelData->realVarsData[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* rearLeftInertia.w */.name, (modelica_real) (data->localData[0]->realVars[9] /* rearLeftInertia.w STATE(1,rearLeftInertia.a) */));
  TRACE_POP
}
OMC_DISABLE_OPT
int ThreeWheelVehicle3FMU_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  ThreeWheelVehicle3FMU_eqFunction_1971(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1972(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1973(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1974(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1975(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1976(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1977(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1978(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1979(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1980(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1981(data, threadData);

  ThreeWheelVehicle3FMU_eqFunction_1982(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void ThreeWheelVehicle3FMU_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1983
type: SIMPLE_ASSIGN
planarWorld.axisLength = 0.5 * planarWorld.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1983};
  (data->simulationInfo->realParameter[115] /* planarWorld.axisLength PARAM */) = (0.5) * ((data->simulationInfo->realParameter[205] /* planarWorld.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 1984
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.axisLength = planarWorld.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1984};
  (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */) = (data->simulationInfo->realParameter[115] /* planarWorld.axisLength PARAM */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_948(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_949(DATA *data, threadData_t *threadData);


/*
equation index: 1987
type: SIMPLE_ASSIGN
planarWorld.axisDiameter = planarWorld.axisLength / planarWorld.defaultFrameDiameterFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1987};
  (data->simulationInfo->realParameter[114] /* planarWorld.axisDiameter PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[115] /* planarWorld.axisLength PARAM */),(data->simulationInfo->realParameter[181] /* planarWorld.defaultFrameDiameterFraction PARAM */),"planarWorld.defaultFrameDiameterFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 1988
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.axisDiameter = planarWorld.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1988};
  (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */) = (data->simulationInfo->realParameter[114] /* planarWorld.axisDiameter PARAM */);
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_950(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_951(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_941(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_942(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_943(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_944(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_945(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_946(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_934(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_935(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_936(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_937(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_938(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_939(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_976(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_975(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_974(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_973(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_972(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_971(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_970(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_969(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_968(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_967(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_966(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_965(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_964(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_963(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_962(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_961(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_960(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_959(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_958(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_957(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_956(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_955(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_954(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_953(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_952(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_947(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_940(DATA *data, threadData_t *threadData);


/*
equation index: 2031
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_x[1] = planarWorld.axisColor_x[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2031};
  (data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */) = (data->simulationInfo->integerParameter[4] /* planarWorld.axisColor_x[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2032
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.color[1] = planarWorld.coordinateSystem.color_x[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2032};
  (data->simulationInfo->integerParameter[22] /* planarWorld.coordinateSystem.x_arrow.color[1] PARAM */) = (data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2034
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_x[2] = planarWorld.axisColor_x[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2034};
  (data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */) = (data->simulationInfo->integerParameter[5] /* planarWorld.axisColor_x[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2035
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.color[2] = planarWorld.coordinateSystem.color_x[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2035};
  (data->simulationInfo->integerParameter[23] /* planarWorld.coordinateSystem.x_arrow.color[2] PARAM */) = (data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2037
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_x[3] = planarWorld.axisColor_x[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2037};
  (data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */) = (data->simulationInfo->integerParameter[6] /* planarWorld.axisColor_x[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2038
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.color[3] = planarWorld.coordinateSystem.color_x[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2038};
  (data->simulationInfo->integerParameter[24] /* planarWorld.coordinateSystem.x_arrow.color[3] PARAM */) = (data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2039
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.color[1] = planarWorld.coordinateSystem.color_x[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2039};
  (data->simulationInfo->integerParameter[25] /* planarWorld.coordinateSystem.x_label.color[1] PARAM */) = (data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2040
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.color[2] = planarWorld.coordinateSystem.color_x[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2040};
  (data->simulationInfo->integerParameter[26] /* planarWorld.coordinateSystem.x_label.color[2] PARAM */) = (data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2041
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.color[3] = planarWorld.coordinateSystem.color_x[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2041};
  (data->simulationInfo->integerParameter[27] /* planarWorld.coordinateSystem.x_label.color[3] PARAM */) = (data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2042
type: SIMPLE_ASSIGN
planarWorld.axisColor_y[1] = planarWorld.axisColor_x[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2042};
  (data->simulationInfo->integerParameter[7] /* planarWorld.axisColor_y[1] PARAM */) = (data->simulationInfo->integerParameter[4] /* planarWorld.axisColor_x[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2043
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_y[1] = planarWorld.axisColor_y[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2043};
  (data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */) = (data->simulationInfo->integerParameter[7] /* planarWorld.axisColor_y[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2044
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.color[1] = planarWorld.coordinateSystem.color_y[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2044};
  (data->simulationInfo->integerParameter[29] /* planarWorld.coordinateSystem.y_arrow.color[1] PARAM */) = (data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2045
type: SIMPLE_ASSIGN
planarWorld.axisColor_y[2] = planarWorld.axisColor_x[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2045};
  (data->simulationInfo->integerParameter[8] /* planarWorld.axisColor_y[2] PARAM */) = (data->simulationInfo->integerParameter[5] /* planarWorld.axisColor_x[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2046
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_y[2] = planarWorld.axisColor_y[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2046};
  (data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */) = (data->simulationInfo->integerParameter[8] /* planarWorld.axisColor_y[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2047
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.color[2] = planarWorld.coordinateSystem.color_y[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2047};
  (data->simulationInfo->integerParameter[30] /* planarWorld.coordinateSystem.y_arrow.color[2] PARAM */) = (data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
planarWorld.axisColor_y[3] = planarWorld.axisColor_x[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2048};
  (data->simulationInfo->integerParameter[9] /* planarWorld.axisColor_y[3] PARAM */) = (data->simulationInfo->integerParameter[6] /* planarWorld.axisColor_x[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2049
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_y[3] = planarWorld.axisColor_y[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2049};
  (data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */) = (data->simulationInfo->integerParameter[9] /* planarWorld.axisColor_y[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2050
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.color[3] = planarWorld.coordinateSystem.color_y[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2050};
  (data->simulationInfo->integerParameter[31] /* planarWorld.coordinateSystem.y_arrow.color[3] PARAM */) = (data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2051
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.color[1] = planarWorld.coordinateSystem.color_y[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2051};
  (data->simulationInfo->integerParameter[32] /* planarWorld.coordinateSystem.y_label.color[1] PARAM */) = (data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2052
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.color[2] = planarWorld.coordinateSystem.color_y[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2052};
  (data->simulationInfo->integerParameter[33] /* planarWorld.coordinateSystem.y_label.color[2] PARAM */) = (data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2053
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.color[3] = planarWorld.coordinateSystem.color_y[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2053};
  (data->simulationInfo->integerParameter[34] /* planarWorld.coordinateSystem.y_label.color[3] PARAM */) = (data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2054
type: SIMPLE_ASSIGN
planarWorld.axisColor_z[1] = planarWorld.axisColor_x[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2054};
  (data->simulationInfo->integerParameter[10] /* planarWorld.axisColor_z[1] PARAM */) = (data->simulationInfo->integerParameter[4] /* planarWorld.axisColor_x[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2055
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_z[1] = planarWorld.axisColor_z[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2055};
  (data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */) = (data->simulationInfo->integerParameter[10] /* planarWorld.axisColor_z[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2056
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.color[1] = planarWorld.coordinateSystem.color_z[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2056};
  (data->simulationInfo->integerParameter[36] /* planarWorld.coordinateSystem.z_arrow.color[1] PARAM */) = (data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2057
type: SIMPLE_ASSIGN
planarWorld.axisColor_z[2] = planarWorld.axisColor_x[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2057};
  (data->simulationInfo->integerParameter[11] /* planarWorld.axisColor_z[2] PARAM */) = (data->simulationInfo->integerParameter[5] /* planarWorld.axisColor_x[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2058
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_z[2] = planarWorld.axisColor_z[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2058};
  (data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */) = (data->simulationInfo->integerParameter[11] /* planarWorld.axisColor_z[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2059
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.color[2] = planarWorld.coordinateSystem.color_z[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2059};
  (data->simulationInfo->integerParameter[37] /* planarWorld.coordinateSystem.z_arrow.color[2] PARAM */) = (data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2060
type: SIMPLE_ASSIGN
planarWorld.axisColor_z[3] = planarWorld.axisColor_x[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2060};
  (data->simulationInfo->integerParameter[12] /* planarWorld.axisColor_z[3] PARAM */) = (data->simulationInfo->integerParameter[6] /* planarWorld.axisColor_x[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2061
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.color_z[3] = planarWorld.axisColor_z[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2061};
  (data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */) = (data->simulationInfo->integerParameter[12] /* planarWorld.axisColor_z[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2062
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.color[3] = planarWorld.coordinateSystem.color_z[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2062};
  (data->simulationInfo->integerParameter[38] /* planarWorld.coordinateSystem.z_arrow.color[3] PARAM */) = (data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2063
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.color[1] = planarWorld.coordinateSystem.color_z[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2063};
  (data->simulationInfo->integerParameter[39] /* planarWorld.coordinateSystem.z_label.color[1] PARAM */) = (data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2064
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.color[2] = planarWorld.coordinateSystem.color_z[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2064};
  (data->simulationInfo->integerParameter[40] /* planarWorld.coordinateSystem.z_label.color[2] PARAM */) = (data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2065
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.color[3] = planarWorld.coordinateSystem.color_z[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2065};
  (data->simulationInfo->integerParameter[41] /* planarWorld.coordinateSystem.z_label.color[3] PARAM */) = (data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2067
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.color[1] = planarWorld.gravityArrowColor[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2067};
  (data->simulationInfo->integerParameter[43] /* planarWorld.gravityArrow.color[1] PARAM */) = (data->simulationInfo->integerParameter[46] /* planarWorld.gravityArrowColor[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2069
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.color[2] = planarWorld.gravityArrowColor[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2069};
  (data->simulationInfo->integerParameter[44] /* planarWorld.gravityArrow.color[2] PARAM */) = (data->simulationInfo->integerParameter[47] /* planarWorld.gravityArrowColor[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2071
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.color[3] = planarWorld.gravityArrowColor[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2071};
  (data->simulationInfo->integerParameter[45] /* planarWorld.gravityArrow.color[3] PARAM */) = (data->simulationInfo->integerParameter[48] /* planarWorld.gravityArrowColor[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2072
type: SIMPLE_ASSIGN
rearRightWheel.radius = wheelRadiusR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2072};
  (data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */) = (data->simulationInfo->realParameter[332] /* wheelRadiusR PARAM */);
  TRACE_POP
}

/*
equation index: 2073
type: SIMPLE_ASSIGN
rearRightWheel.rim1.r_shape[3] = -rearRightWheel.radius
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2073};
  (data->simulationInfo->realParameter[284] /* rearRightWheel.rim1.r_shape[3] PARAM */) = (-(data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */));
  TRACE_POP
}

/*
equation index: 2074
type: SIMPLE_ASSIGN
rearRightWheel.rim2.r_shape[3] = -rearRightWheel.radius
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2074};
  (data->simulationInfo->realParameter[288] /* rearRightWheel.rim2.r_shape[3] PARAM */) = (-(data->simulationInfo->realParameter[282] /* rearRightWheel.radius PARAM */));
  TRACE_POP
}

/*
equation index: 2075
type: SIMPLE_ASSIGN
rearLeftWheel.radius = wheelRadiusL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2075};
  (data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */) = (data->simulationInfo->realParameter[331] /* wheelRadiusL PARAM */);
  TRACE_POP
}

/*
equation index: 2076
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.r_shape[3] = -rearLeftWheel.radius
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2076};
  (data->simulationInfo->realParameter[244] /* rearLeftWheel.rim1.r_shape[3] PARAM */) = (-(data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */));
  TRACE_POP
}

/*
equation index: 2077
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.r_shape[3] = -rearLeftWheel.radius
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2077};
  (data->simulationInfo->realParameter[248] /* rearLeftWheel.rim2.r_shape[3] PARAM */) = (-(data->simulationInfo->realParameter[242] /* rearLeftWheel.radius PARAM */));
  TRACE_POP
}

/*
equation index: 2078
type: SIMPLE_ASSIGN
frontWheel.radius = wheelRadiusF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2078};
  (data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */) = (data->simulationInfo->realParameter[330] /* wheelRadiusF PARAM */);
  TRACE_POP
}

/*
equation index: 2079
type: SIMPLE_ASSIGN
frontWheel.rim1.r_shape[3] = -frontWheel.radius
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2079};
  (data->simulationInfo->realParameter[80] /* frontWheel.rim1.r_shape[3] PARAM */) = (-(data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */));
  TRACE_POP
}

/*
equation index: 2080
type: SIMPLE_ASSIGN
frontWheel.rim2.r_shape[3] = -frontWheel.radius
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2080};
  (data->simulationInfo->realParameter[84] /* frontWheel.rim2.r_shape[3] PARAM */) = (-(data->simulationInfo->realParameter[78] /* frontWheel.radius PARAM */));
  TRACE_POP
}

/*
equation index: 2082
type: SIMPLE_ASSIGN
revolute.support.phi = revolute.fixed.phi0
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2082};
  (data->simulationInfo->realParameter[308] /* revolute.support.phi PARAM */) = (data->simulationInfo->realParameter[306] /* revolute.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 2083
type: SIMPLE_ASSIGN
revolute.fixed.flange.phi = revolute.fixed.phi0
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2083};
  (data->simulationInfo->realParameter[305] /* revolute.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[306] /* revolute.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 2085
type: SIMPLE_ASSIGN
world.axisLength = 0.5 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2085};
  (data->simulationInfo->realParameter[334] /* world.axisLength PARAM */) = (0.5) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2087
type: SIMPLE_ASSIGN
world.axisDiameter = world.axisLength / world.defaultFrameDiameterFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2087};
  (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[334] /* world.axisLength PARAM */),(data->simulationInfo->realParameter[340] /* world.defaultFrameDiameterFraction PARAM */),"world.defaultFrameDiameterFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2088
type: SIMPLE_ASSIGN
world.headLength = min(world.axisLength, world.axisDiameter * 5.0)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2088};
  (data->simulationInfo->realParameter[373] /* world.headLength PARAM */) = fmin((data->simulationInfo->realParameter[334] /* world.axisLength PARAM */),((data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */)) * (5.0));
  TRACE_POP
}

/*
equation index: 2089
type: SIMPLE_ASSIGN
world.lineLength = max(0.0, world.axisLength - world.headLength)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2089};
  (data->simulationInfo->realParameter[376] /* world.lineLength PARAM */) = fmax(0.0,(data->simulationInfo->realParameter[334] /* world.axisLength PARAM */) - (data->simulationInfo->realParameter[373] /* world.headLength PARAM */));
  TRACE_POP
}

/*
equation index: 2090
type: SIMPLE_ASSIGN
world.x_arrowHead.r[1] = world.lineLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2090};
  (data->simulationInfo->realParameter[386] /* world.x_arrowHead.r[1] PARAM */) = (data->simulationInfo->realParameter[376] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
world.y_arrowHead.r[2] = world.lineLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2091};
  (data->simulationInfo->realParameter[405] /* world.y_arrowHead.r[2] PARAM */) = (data->simulationInfo->realParameter[376] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 2092
type: SIMPLE_ASSIGN
world.z_arrowHead.r[3] = world.lineLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2092};
  (data->simulationInfo->realParameter[421] /* world.z_arrowHead.r[3] PARAM */) = (data->simulationInfo->realParameter[376] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 2094
type: SIMPLE_ASSIGN
world.gravityArrowLine.r_shape[1] = world.gravityArrowTail[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2094};
  (data->simulationInfo->realParameter[357] /* world.gravityArrowLine.r_shape[1] PARAM */) = (data->simulationInfo->realParameter[361] /* world.gravityArrowTail[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2096
type: SIMPLE_ASSIGN
world.gravityArrowLine.r_shape[2] = world.gravityArrowTail[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2096};
  (data->simulationInfo->realParameter[358] /* world.gravityArrowLine.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[362] /* world.gravityArrowTail[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2098
type: SIMPLE_ASSIGN
world.gravityArrowLine.r_shape[3] = world.gravityArrowTail[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2098};
  (data->simulationInfo->realParameter[359] /* world.gravityArrowLine.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[363] /* world.gravityArrowTail[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2099
type: SIMPLE_ASSIGN
world.gravityArrowHead.r_shape[1] = world.gravityArrowTail[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2099};
  (data->simulationInfo->realParameter[351] /* world.gravityArrowHead.r_shape[1] PARAM */) = (data->simulationInfo->realParameter[361] /* world.gravityArrowTail[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2100
type: SIMPLE_ASSIGN
world.gravityArrowHead.r_shape[3] = world.gravityArrowTail[3]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2100};
  (data->simulationInfo->realParameter[352] /* world.gravityArrowHead.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[363] /* world.gravityArrowTail[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2101
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2101};
  (data->simulationInfo->realParameter[131] /* planarWorld.coordinateSystem.x_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2102
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2102};
  (data->simulationInfo->realParameter[128] /* planarWorld.coordinateSystem.x_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2103
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2103};
  (data->simulationInfo->realParameter[132] /* planarWorld.coordinateSystem.x_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2104
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2104};
  (data->simulationInfo->realParameter[129] /* planarWorld.coordinateSystem.x_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.diameter = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2105};
  (data->simulationInfo->realParameter[133] /* planarWorld.coordinateSystem.x_label.diameter PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2106
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2106};
  (data->simulationInfo->realParameter[149] /* planarWorld.coordinateSystem.y_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2107
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2107};
  (data->simulationInfo->realParameter[146] /* planarWorld.coordinateSystem.y_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2108
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2108};
  (data->simulationInfo->realParameter[150] /* planarWorld.coordinateSystem.y_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2109
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2109};
  (data->simulationInfo->realParameter[147] /* planarWorld.coordinateSystem.y_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2110
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.diameter = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2110};
  (data->simulationInfo->realParameter[151] /* planarWorld.coordinateSystem.y_label.diameter PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2111
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2111};
  (data->simulationInfo->realParameter[165] /* planarWorld.coordinateSystem.z_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2112
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2112};
  (data->simulationInfo->realParameter[161] /* planarWorld.coordinateSystem.z_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2113
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2113};
  (data->simulationInfo->realParameter[166] /* planarWorld.coordinateSystem.z_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2114
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2114};
  (data->simulationInfo->realParameter[162] /* planarWorld.coordinateSystem.z_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2115
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2115};
  (data->simulationInfo->realParameter[167] /* planarWorld.coordinateSystem.z_label.cylinders[3].width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2116
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2116};
  (data->simulationInfo->realParameter[163] /* planarWorld.coordinateSystem.z_label.cylinders[3].height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2117
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.diameter = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2117};
  (data->simulationInfo->realParameter[168] /* planarWorld.coordinateSystem.z_label.diameter PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2118
type: SIMPLE_ASSIGN
rearRightWheel.width = 0.6 * rearRightWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2118};
  (data->simulationInfo->realParameter[297] /* rearRightWheel.width PARAM */) = (0.6) * ((data->simulationInfo->realParameter[274] /* rearRightWheel.diameter PARAM */));
  TRACE_POP
}

/*
equation index: 2119
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.length = rearRightWheel.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2119};
  (data->simulationInfo->realParameter[272] /* rearRightWheel.cylinder.length PARAM */) = (data->simulationInfo->realParameter[297] /* rearRightWheel.width PARAM */);
  TRACE_POP
}

/*
equation index: 2120
type: SIMPLE_ASSIGN
rearRightWheel.rim1.width = rearRightWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2120};
  (data->simulationInfo->realParameter[286] /* rearRightWheel.rim1.width PARAM */) = (data->simulationInfo->realParameter[274] /* rearRightWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2121
type: SIMPLE_ASSIGN
rearRightWheel.rim1.height = rearRightWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2121};
  (data->simulationInfo->realParameter[283] /* rearRightWheel.rim1.height PARAM */) = (data->simulationInfo->realParameter[274] /* rearRightWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2122
type: SIMPLE_ASSIGN
rearRightWheel.rim2.width = rearRightWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2122};
  (data->simulationInfo->realParameter[290] /* rearRightWheel.rim2.width PARAM */) = (data->simulationInfo->realParameter[274] /* rearRightWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2123
type: SIMPLE_ASSIGN
rearRightWheel.rim2.height = rearRightWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2123};
  (data->simulationInfo->realParameter[287] /* rearRightWheel.rim2.height PARAM */) = (data->simulationInfo->realParameter[274] /* rearRightWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2124
type: SIMPLE_ASSIGN
rearRightWheel.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2124};
  (data->simulationInfo->realParameter[273] /* rearRightWheel.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2125
type: SIMPLE_ASSIGN
rearRightWheel.rim1.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2125};
  (data->simulationInfo->realParameter[285] /* rearRightWheel.rim1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2126
type: SIMPLE_ASSIGN
rearRightWheel.rim2.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2126};
  (data->simulationInfo->realParameter[289] /* rearRightWheel.rim2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2127
type: SIMPLE_ASSIGN
rearRightWheel.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2127};
  (data->simulationInfo->realParameter[293] /* rearRightWheel.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2128
type: SIMPLE_ASSIGN
rearLeftWheel.width = 0.6 * rearLeftWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2128};
  (data->simulationInfo->realParameter[257] /* rearLeftWheel.width PARAM */) = (0.6) * ((data->simulationInfo->realParameter[234] /* rearLeftWheel.diameter PARAM */));
  TRACE_POP
}

/*
equation index: 2129
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.length = rearLeftWheel.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2129};
  (data->simulationInfo->realParameter[232] /* rearLeftWheel.cylinder.length PARAM */) = (data->simulationInfo->realParameter[257] /* rearLeftWheel.width PARAM */);
  TRACE_POP
}

/*
equation index: 2130
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.width = rearLeftWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2130};
  (data->simulationInfo->realParameter[246] /* rearLeftWheel.rim1.width PARAM */) = (data->simulationInfo->realParameter[234] /* rearLeftWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2131
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.height = rearLeftWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2131};
  (data->simulationInfo->realParameter[243] /* rearLeftWheel.rim1.height PARAM */) = (data->simulationInfo->realParameter[234] /* rearLeftWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2132
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.width = rearLeftWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2132};
  (data->simulationInfo->realParameter[250] /* rearLeftWheel.rim2.width PARAM */) = (data->simulationInfo->realParameter[234] /* rearLeftWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2133
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.height = rearLeftWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2133};
  (data->simulationInfo->realParameter[247] /* rearLeftWheel.rim2.height PARAM */) = (data->simulationInfo->realParameter[234] /* rearLeftWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2134
type: SIMPLE_ASSIGN
rearLeftWheel.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2134};
  (data->simulationInfo->realParameter[233] /* rearLeftWheel.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2135
type: SIMPLE_ASSIGN
rearLeftWheel.rim1.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2135};
  (data->simulationInfo->realParameter[245] /* rearLeftWheel.rim1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2136
type: SIMPLE_ASSIGN
rearLeftWheel.rim2.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2136};
  (data->simulationInfo->realParameter[249] /* rearLeftWheel.rim2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2137
type: SIMPLE_ASSIGN
rearLeftWheel.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  (data->simulationInfo->realParameter[253] /* rearLeftWheel.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2138
type: SIMPLE_ASSIGN
frontWheel.width = 0.6 * frontWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  (data->simulationInfo->realParameter[93] /* frontWheel.width PARAM */) = (0.6) * ((data->simulationInfo->realParameter[70] /* frontWheel.diameter PARAM */));
  TRACE_POP
}

/*
equation index: 2139
type: SIMPLE_ASSIGN
frontWheel.cylinder.length = frontWheel.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  (data->simulationInfo->realParameter[68] /* frontWheel.cylinder.length PARAM */) = (data->simulationInfo->realParameter[93] /* frontWheel.width PARAM */);
  TRACE_POP
}

/*
equation index: 2140
type: SIMPLE_ASSIGN
frontWheel.rim1.width = frontWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  (data->simulationInfo->realParameter[82] /* frontWheel.rim1.width PARAM */) = (data->simulationInfo->realParameter[70] /* frontWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2141
type: SIMPLE_ASSIGN
frontWheel.rim1.height = frontWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2141};
  (data->simulationInfo->realParameter[79] /* frontWheel.rim1.height PARAM */) = (data->simulationInfo->realParameter[70] /* frontWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2142
type: SIMPLE_ASSIGN
frontWheel.rim2.width = frontWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  (data->simulationInfo->realParameter[86] /* frontWheel.rim2.width PARAM */) = (data->simulationInfo->realParameter[70] /* frontWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2143
type: SIMPLE_ASSIGN
frontWheel.rim2.height = frontWheel.diameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  (data->simulationInfo->realParameter[83] /* frontWheel.rim2.height PARAM */) = (data->simulationInfo->realParameter[70] /* frontWheel.diameter PARAM */);
  TRACE_POP
}

/*
equation index: 2144
type: SIMPLE_ASSIGN
frontWheel.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  (data->simulationInfo->realParameter[69] /* frontWheel.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2145
type: SIMPLE_ASSIGN
frontWheel.rim1.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  (data->simulationInfo->realParameter[81] /* frontWheel.rim1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2146
type: SIMPLE_ASSIGN
frontWheel.rim2.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  (data->simulationInfo->realParameter[85] /* frontWheel.rim2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2147
type: SIMPLE_ASSIGN
frontWheel.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  (data->simulationInfo->realParameter[89] /* frontWheel.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2148
type: SIMPLE_ASSIGN
rearLeft.r[1] = 0.5 * vehicleWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  (data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */) = (0.5) * ((data->simulationInfo->realParameter[325] /* vehicleWidth PARAM */));
  TRACE_POP
}

/*
equation index: 2149
type: SIMPLE_ASSIGN
rearLeft.l = sqrt(rearLeft.r * rearLeft.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  real_array tmp0;
  real_array tmp1;
  modelica_real tmp2;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[224] /* rearLeft.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp2 = mul_real_scalar_product(tmp0, tmp1);
  if(!(tmp2 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearLeft.r * rearLeft.r) was %g should be >= 0", tmp2);
    }
  }
  (data->simulationInfo->realParameter[223] /* rearLeft.l PARAM */) = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 2150
type: SIMPLE_ASSIGN
rearLeft.cylinder.length = rearLeft.l
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  (data->simulationInfo->realParameter[220] /* rearLeft.cylinder.length PARAM */) = (data->simulationInfo->realParameter[223] /* rearLeft.l PARAM */);
  TRACE_POP
}

/*
equation index: 2151
type: SIMPLE_ASSIGN
rearLeft.width = rearLeft.l / planarWorld.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  (data->simulationInfo->realParameter[227] /* rearLeft.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[223] /* rearLeft.l PARAM */),(data->simulationInfo->realParameter[187] /* planarWorld.defaultWidthFraction PARAM */),"planarWorld.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2152
type: SIMPLE_ASSIGN
rearLeft.cylinder.width = rearLeft.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  (data->simulationInfo->realParameter[222] /* rearLeft.cylinder.width PARAM */) = (data->simulationInfo->realParameter[227] /* rearLeft.width PARAM */);
  TRACE_POP
}

/*
equation index: 2153
type: SIMPLE_ASSIGN
rearLeft.cylinder.height = rearLeft.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  (data->simulationInfo->realParameter[219] /* rearLeft.cylinder.height PARAM */) = (data->simulationInfo->realParameter[227] /* rearLeft.width PARAM */);
  TRACE_POP
}

/*
equation index: 2154
type: SIMPLE_ASSIGN
rearLeft.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  (data->simulationInfo->realParameter[221] /* rearLeft.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2155
type: SIMPLE_ASSIGN
rearLeft.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2155};
  (data->simulationInfo->realParameter[226] /* rearLeft.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2156
type: SIMPLE_ASSIGN
rearRight.r[1] = 0.5 * vehicleWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2156};
  (data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */) = (0.5) * ((data->simulationInfo->realParameter[325] /* vehicleWidth PARAM */));
  TRACE_POP
}

/*
equation index: 2157
type: SIMPLE_ASSIGN
rearRight.l = sqrt(rearRight.r * rearRight.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  real_array tmp3;
  real_array tmp4;
  modelica_real tmp5;
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[264] /* rearRight.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp5 = mul_real_scalar_product(tmp3, tmp4);
  if(!(tmp5 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearRight.r * rearRight.r) was %g should be >= 0", tmp5);
    }
  }
  (data->simulationInfo->realParameter[263] /* rearRight.l PARAM */) = sqrt(tmp5);
  TRACE_POP
}

/*
equation index: 2158
type: SIMPLE_ASSIGN
rearRight.cylinder.length = rearRight.l
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  (data->simulationInfo->realParameter[260] /* rearRight.cylinder.length PARAM */) = (data->simulationInfo->realParameter[263] /* rearRight.l PARAM */);
  TRACE_POP
}

/*
equation index: 2159
type: SIMPLE_ASSIGN
rearRight.width = rearRight.l / planarWorld.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  (data->simulationInfo->realParameter[267] /* rearRight.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[263] /* rearRight.l PARAM */),(data->simulationInfo->realParameter[187] /* planarWorld.defaultWidthFraction PARAM */),"planarWorld.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2160
type: SIMPLE_ASSIGN
rearRight.cylinder.width = rearRight.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  (data->simulationInfo->realParameter[262] /* rearRight.cylinder.width PARAM */) = (data->simulationInfo->realParameter[267] /* rearRight.width PARAM */);
  TRACE_POP
}

/*
equation index: 2161
type: SIMPLE_ASSIGN
rearRight.cylinder.height = rearRight.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  (data->simulationInfo->realParameter[259] /* rearRight.cylinder.height PARAM */) = (data->simulationInfo->realParameter[267] /* rearRight.width PARAM */);
  TRACE_POP
}

/*
equation index: 2162
type: SIMPLE_ASSIGN
rearRight.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2162};
  (data->simulationInfo->realParameter[261] /* rearRight.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2163
type: SIMPLE_ASSIGN
rearRight.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  (data->simulationInfo->realParameter[266] /* rearRight.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2164
type: SIMPLE_ASSIGN
rear.r[2] = backLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  (data->simulationInfo->realParameter[215] /* rear.r[2] PARAM */) = (data->simulationInfo->realParameter[11] /* backLength PARAM */);
  TRACE_POP
}

/*
equation index: 2165
type: SIMPLE_ASSIGN
rear.l = sqrt(rear.r * rear.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2165};
  real_array tmp6;
  real_array tmp7;
  modelica_real tmp8;
  real_array_create(&tmp6, ((modelica_real*)&((&data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[214] /* rear.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp8 = mul_real_scalar_product(tmp6, tmp7);
  if(!(tmp8 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.r * rear.r) was %g should be >= 0", tmp8);
    }
  }
  (data->simulationInfo->realParameter[213] /* rear.l PARAM */) = sqrt(tmp8);
  TRACE_POP
}

/*
equation index: 2166
type: SIMPLE_ASSIGN
rear.cylinder.length = rear.l
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  (data->simulationInfo->realParameter[210] /* rear.cylinder.length PARAM */) = (data->simulationInfo->realParameter[213] /* rear.l PARAM */);
  TRACE_POP
}

/*
equation index: 2167
type: SIMPLE_ASSIGN
rear.cylinder.width = rear.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  (data->simulationInfo->realParameter[212] /* rear.cylinder.width PARAM */) = (data->simulationInfo->realParameter[217] /* rear.width PARAM */);
  TRACE_POP
}

/*
equation index: 2168
type: SIMPLE_ASSIGN
rear.cylinder.height = rear.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  (data->simulationInfo->realParameter[209] /* rear.cylinder.height PARAM */) = (data->simulationInfo->realParameter[217] /* rear.width PARAM */);
  TRACE_POP
}

/*
equation index: 2169
type: SIMPLE_ASSIGN
rear.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  (data->simulationInfo->realParameter[211] /* rear.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2170
type: SIMPLE_ASSIGN
rear.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  (data->simulationInfo->realParameter[216] /* rear.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2171
type: SIMPLE_ASSIGN
front.r[2] = -0.1 + frontLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2171};
  (data->simulationInfo->realParameter[40] /* front.r[2] PARAM */) = -0.1 + (data->simulationInfo->realParameter[55] /* frontLength PARAM */);
  TRACE_POP
}

/*
equation index: 2172
type: SIMPLE_ASSIGN
front.l = sqrt(front.r * front.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  real_array tmp9;
  real_array tmp10;
  modelica_real tmp11;
  real_array_create(&tmp9, ((modelica_real*)&((&data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp10, ((modelica_real*)&((&data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp11 = mul_real_scalar_product(tmp9, tmp10);
  if(!(tmp11 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.r * front.r) was %g should be >= 0", tmp11);
    }
  }
  (data->simulationInfo->realParameter[38] /* front.l PARAM */) = sqrt(tmp11);
  TRACE_POP
}

/*
equation index: 2173
type: SIMPLE_ASSIGN
front.cylinder.length = front.l
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  (data->simulationInfo->realParameter[35] /* front.cylinder.length PARAM */) = (data->simulationInfo->realParameter[38] /* front.l PARAM */);
  TRACE_POP
}

/*
equation index: 2174
type: SIMPLE_ASSIGN
front.cylinder.width = front.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  (data->simulationInfo->realParameter[37] /* front.cylinder.width PARAM */) = (data->simulationInfo->realParameter[42] /* front.width PARAM */);
  TRACE_POP
}

/*
equation index: 2175
type: SIMPLE_ASSIGN
front.cylinder.height = front.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  (data->simulationInfo->realParameter[34] /* front.cylinder.height PARAM */) = (data->simulationInfo->realParameter[42] /* front.width PARAM */);
  TRACE_POP
}

/*
equation index: 2176
type: SIMPLE_ASSIGN
front.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2176};
  (data->simulationInfo->realParameter[36] /* front.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2177
type: SIMPLE_ASSIGN
front.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2177};
  (data->simulationInfo->realParameter[41] /* front.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2178
type: SIMPLE_ASSIGN
planarWorld.defaultBodyDiameter = 0.1111111111111111 * planarWorld.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2178};
  (data->simulationInfo->realParameter[178] /* planarWorld.defaultBodyDiameter PARAM */) = (0.1111111111111111) * ((data->simulationInfo->realParameter[205] /* planarWorld.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2179
type: SIMPLE_ASSIGN
body.sphereDiameter = planarWorld.defaultBodyDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  (data->simulationInfo->realParameter[19] /* body.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[178] /* planarWorld.defaultBodyDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2180
type: SIMPLE_ASSIGN
body.sphere.length = body.sphereDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  (data->simulationInfo->realParameter[16] /* body.sphere.length PARAM */) = (data->simulationInfo->realParameter[19] /* body.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2181
type: SIMPLE_ASSIGN
body.sphere.width = body.sphereDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  (data->simulationInfo->realParameter[18] /* body.sphere.width PARAM */) = (data->simulationInfo->realParameter[19] /* body.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2182
type: SIMPLE_ASSIGN
body.sphere.height = body.sphereDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  (data->simulationInfo->realParameter[15] /* body.sphere.height PARAM */) = (data->simulationInfo->realParameter[19] /* body.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2183
type: SIMPLE_ASSIGN
body.sphere.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2183};
  (data->simulationInfo->realParameter[17] /* body.sphere.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2184
type: SIMPLE_ASSIGN
body.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  (data->simulationInfo->realParameter[14] /* body.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2185
type: SIMPLE_ASSIGN
frontTrail.l = sqrt(frontTrail.r * frontTrail.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  real_array tmp12;
  real_array tmp13;
  modelica_real tmp14;
  real_array_create(&tmp12, ((modelica_real*)&((&data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp13, ((modelica_real*)&((&data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp14 = mul_real_scalar_product(tmp12, tmp13);
  if(!(tmp14 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(frontTrail.r * frontTrail.r) was %g should be >= 0", tmp14);
    }
  }
  (data->simulationInfo->realParameter[60] /* frontTrail.l PARAM */) = sqrt(tmp14);
  TRACE_POP
}

/*
equation index: 2186
type: SIMPLE_ASSIGN
frontTrail.cylinder.length = frontTrail.l
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  (data->simulationInfo->realParameter[57] /* frontTrail.cylinder.length PARAM */) = (data->simulationInfo->realParameter[60] /* frontTrail.l PARAM */);
  TRACE_POP
}

/*
equation index: 2187
type: SIMPLE_ASSIGN
frontTrail.width = frontTrail.l / planarWorld.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  (data->simulationInfo->realParameter[64] /* frontTrail.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[60] /* frontTrail.l PARAM */),(data->simulationInfo->realParameter[187] /* planarWorld.defaultWidthFraction PARAM */),"planarWorld.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2188
type: SIMPLE_ASSIGN
frontTrail.cylinder.width = frontTrail.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  (data->simulationInfo->realParameter[59] /* frontTrail.cylinder.width PARAM */) = (data->simulationInfo->realParameter[64] /* frontTrail.width PARAM */);
  TRACE_POP
}

/*
equation index: 2189
type: SIMPLE_ASSIGN
frontTrail.cylinder.height = frontTrail.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  (data->simulationInfo->realParameter[56] /* frontTrail.cylinder.height PARAM */) = (data->simulationInfo->realParameter[64] /* frontTrail.width PARAM */);
  TRACE_POP
}

/*
equation index: 2190
type: SIMPLE_ASSIGN
frontTrail.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  (data->simulationInfo->realParameter[58] /* frontTrail.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2191
type: SIMPLE_ASSIGN
frontTrail.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  (data->simulationInfo->realParameter[63] /* frontTrail.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2192
type: SIMPLE_ASSIGN
body2.sphereDiameter = planarWorld.defaultBodyDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  (data->simulationInfo->realParameter[28] /* body2.sphereDiameter PARAM */) = (data->simulationInfo->realParameter[178] /* planarWorld.defaultBodyDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2193
type: SIMPLE_ASSIGN
body2.sphere.length = body2.sphereDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  (data->simulationInfo->realParameter[25] /* body2.sphere.length PARAM */) = (data->simulationInfo->realParameter[28] /* body2.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2194
type: SIMPLE_ASSIGN
body2.sphere.width = body2.sphereDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  (data->simulationInfo->realParameter[27] /* body2.sphere.width PARAM */) = (data->simulationInfo->realParameter[28] /* body2.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2195
type: SIMPLE_ASSIGN
body2.sphere.height = body2.sphereDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  (data->simulationInfo->realParameter[24] /* body2.sphere.height PARAM */) = (data->simulationInfo->realParameter[28] /* body2.sphereDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2196
type: SIMPLE_ASSIGN
body2.sphere.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  (data->simulationInfo->realParameter[26] /* body2.sphere.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2197
type: SIMPLE_ASSIGN
body2.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  (data->simulationInfo->realParameter[23] /* body2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2198
type: SIMPLE_ASSIGN
planarWorld.defaultJointLength = 0.1 * planarWorld.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  (data->simulationInfo->realParameter[182] /* planarWorld.defaultJointLength PARAM */) = (0.1) * ((data->simulationInfo->realParameter[205] /* planarWorld.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2199
type: SIMPLE_ASSIGN
revolute.cylinderLength = planarWorld.defaultJointLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  (data->simulationInfo->realParameter[304] /* revolute.cylinderLength PARAM */) = (data->simulationInfo->realParameter[182] /* planarWorld.defaultJointLength PARAM */);
  TRACE_POP
}

/*
equation index: 2200
type: SIMPLE_ASSIGN
revolute.cylinder.length = revolute.cylinderLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  (data->simulationInfo->realParameter[300] /* revolute.cylinder.length PARAM */) = (data->simulationInfo->realParameter[304] /* revolute.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 2201
type: SIMPLE_ASSIGN
planarWorld.defaultJointWidth = 0.1 * planarWorld.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  (data->simulationInfo->realParameter[183] /* planarWorld.defaultJointWidth PARAM */) = (0.1) * ((data->simulationInfo->realParameter[205] /* planarWorld.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2202
type: SIMPLE_ASSIGN
revolute.cylinderDiameter = planarWorld.defaultJointWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  (data->simulationInfo->realParameter[303] /* revolute.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[183] /* planarWorld.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2203
type: SIMPLE_ASSIGN
revolute.cylinder.width = revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  (data->simulationInfo->realParameter[302] /* revolute.cylinder.width PARAM */) = (data->simulationInfo->realParameter[303] /* revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2204
type: SIMPLE_ASSIGN
revolute.cylinder.height = revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2204};
  (data->simulationInfo->realParameter[299] /* revolute.cylinder.height PARAM */) = (data->simulationInfo->realParameter[303] /* revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2205
type: SIMPLE_ASSIGN
revolute.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2205};
  (data->simulationInfo->realParameter[301] /* revolute.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2206
type: SIMPLE_ASSIGN
revolute.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  (data->simulationInfo->realParameter[307] /* revolute.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2207
type: SIMPLE_ASSIGN
front2.l = sqrt(front2.r * front2.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  real_array tmp15;
  real_array tmp16;
  modelica_real tmp17;
  real_array_create(&tmp15, ((modelica_real*)&((&data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp16, ((modelica_real*)&((&data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp17 = mul_real_scalar_product(tmp15, tmp16);
  if(!(tmp17 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front2.r * front2.r) was %g should be >= 0", tmp17);
    }
  }
  (data->simulationInfo->realParameter[48] /* front2.l PARAM */) = sqrt(tmp17);
  TRACE_POP
}

/*
equation index: 2208
type: SIMPLE_ASSIGN
front2.cylinder.length = front2.l
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  (data->simulationInfo->realParameter[45] /* front2.cylinder.length PARAM */) = (data->simulationInfo->realParameter[48] /* front2.l PARAM */);
  TRACE_POP
}

/*
equation index: 2209
type: SIMPLE_ASSIGN
front2.width = front2.l / planarWorld.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  (data->simulationInfo->realParameter[52] /* front2.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[48] /* front2.l PARAM */),(data->simulationInfo->realParameter[187] /* planarWorld.defaultWidthFraction PARAM */),"planarWorld.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2210
type: SIMPLE_ASSIGN
front2.cylinder.width = front2.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  (data->simulationInfo->realParameter[47] /* front2.cylinder.width PARAM */) = (data->simulationInfo->realParameter[52] /* front2.width PARAM */);
  TRACE_POP
}

/*
equation index: 2211
type: SIMPLE_ASSIGN
front2.cylinder.height = front2.width
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  (data->simulationInfo->realParameter[44] /* front2.cylinder.height PARAM */) = (data->simulationInfo->realParameter[52] /* front2.width PARAM */);
  TRACE_POP
}

/*
equation index: 2212
type: SIMPLE_ASSIGN
front2.cylinder.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  (data->simulationInfo->realParameter[46] /* front2.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2213
type: SIMPLE_ASSIGN
front2.specularCoefficient = planarWorld.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  (data->simulationInfo->realParameter[51] /* front2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 2214
type: SIMPLE_ASSIGN
world.x_arrowLine.length = world.lineLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  (data->simulationInfo->realParameter[389] /* world.x_arrowLine.length PARAM */) = (data->simulationInfo->realParameter[376] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 2215
type: SIMPLE_ASSIGN
world.lineWidth = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  (data->simulationInfo->realParameter[377] /* world.lineWidth PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2216
type: SIMPLE_ASSIGN
world.x_arrowLine.width = world.lineWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  (data->simulationInfo->realParameter[390] /* world.x_arrowLine.width PARAM */) = (data->simulationInfo->realParameter[377] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2217
type: SIMPLE_ASSIGN
world.x_arrowLine.height = world.lineWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  (data->simulationInfo->realParameter[388] /* world.x_arrowLine.height PARAM */) = (data->simulationInfo->realParameter[377] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2218
type: SIMPLE_ASSIGN
world.x_arrowHead.length = world.headLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  (data->simulationInfo->realParameter[385] /* world.x_arrowHead.length PARAM */) = (data->simulationInfo->realParameter[373] /* world.headLength PARAM */);
  TRACE_POP
}

/*
equation index: 2219
type: SIMPLE_ASSIGN
world.headWidth = 3.0 * world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  (data->simulationInfo->realParameter[374] /* world.headWidth PARAM */) = (3.0) * ((data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 2220
type: SIMPLE_ASSIGN
world.x_arrowHead.width = world.headWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  (data->simulationInfo->realParameter[387] /* world.x_arrowHead.width PARAM */) = (data->simulationInfo->realParameter[374] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2221
type: SIMPLE_ASSIGN
world.x_arrowHead.height = world.headWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  (data->simulationInfo->realParameter[384] /* world.x_arrowHead.height PARAM */) = (data->simulationInfo->realParameter[374] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2222
type: SIMPLE_ASSIGN
world.labelStart = 1.05 * world.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */) = (1.05) * ((data->simulationInfo->realParameter[334] /* world.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 2223
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r[1] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  (data->simulationInfo->realParameter[393] /* world.x_label.cylinders[1].r[1] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2224
type: SIMPLE_ASSIGN
world.x_label.r_abs[1] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  (data->simulationInfo->realParameter[401] /* world.x_label.r_abs[1] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2225
type: SIMPLE_ASSIGN
world.x_label.r_lines[1] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  (data->simulationInfo->realParameter[402] /* world.x_label.r_lines[1] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2226
type: SIMPLE_ASSIGN
world.scaledLabel = 3.0 * world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */) = (3.0) * ((data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 2227
type: SIMPLE_ASSIGN
world.x_label.lines[1,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  (data->simulationInfo->realParameter[397] /* world.x_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2228
type: SIMPLE_ASSIGN
world.x_label.lines[1,2,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  (data->simulationInfo->realParameter[398] /* world.x_label.lines[1,2,2] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2229
type: SIMPLE_ASSIGN
world.x_label.lines[2,1,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  (data->simulationInfo->realParameter[399] /* world.x_label.lines[2,1,2] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2230
type: SIMPLE_ASSIGN
world.x_label.lines[2,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  (data->simulationInfo->realParameter[400] /* world.x_label.lines[2,2,1] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2231
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  (data->simulationInfo->realParameter[394] /* world.x_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2232
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  (data->simulationInfo->realParameter[391] /* world.x_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2233
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  (data->simulationInfo->realParameter[395] /* world.x_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2234
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  (data->simulationInfo->realParameter[392] /* world.x_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2235
type: SIMPLE_ASSIGN
world.x_label.diameter = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  (data->simulationInfo->realParameter[396] /* world.x_label.diameter PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2236
type: SIMPLE_ASSIGN
world.y_arrowLine.length = world.lineLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  (data->simulationInfo->realParameter[408] /* world.y_arrowLine.length PARAM */) = (data->simulationInfo->realParameter[376] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 2237
type: SIMPLE_ASSIGN
world.y_arrowLine.width = world.lineWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  (data->simulationInfo->realParameter[409] /* world.y_arrowLine.width PARAM */) = (data->simulationInfo->realParameter[377] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2238
type: SIMPLE_ASSIGN
world.y_arrowLine.height = world.lineWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  (data->simulationInfo->realParameter[407] /* world.y_arrowLine.height PARAM */) = (data->simulationInfo->realParameter[377] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2239
type: SIMPLE_ASSIGN
world.y_arrowHead.length = world.headLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  (data->simulationInfo->realParameter[404] /* world.y_arrowHead.length PARAM */) = (data->simulationInfo->realParameter[373] /* world.headLength PARAM */);
  TRACE_POP
}

/*
equation index: 2240
type: SIMPLE_ASSIGN
world.y_arrowHead.width = world.headWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  (data->simulationInfo->realParameter[406] /* world.y_arrowHead.width PARAM */) = (data->simulationInfo->realParameter[374] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2241
type: SIMPLE_ASSIGN
world.y_arrowHead.height = world.headWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  (data->simulationInfo->realParameter[403] /* world.y_arrowHead.height PARAM */) = (data->simulationInfo->realParameter[374] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2242
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r[2] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  (data->simulationInfo->realParameter[412] /* world.y_label.cylinders[1].r[2] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2243
type: SIMPLE_ASSIGN
world.y_label.r_abs[2] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  (data->simulationInfo->realParameter[417] /* world.y_label.r_abs[2] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2244
type: SIMPLE_ASSIGN
world.y_label.r_lines[2] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  (data->simulationInfo->realParameter[418] /* world.y_label.r_lines[2] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2245
type: SIMPLE_ASSIGN
world.y_label.lines[1,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  (data->simulationInfo->realParameter[416] /* world.y_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2246
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2246};
  (data->simulationInfo->realParameter[413] /* world.y_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2247
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2247};
  (data->simulationInfo->realParameter[410] /* world.y_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2248
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2248};
  (data->simulationInfo->realParameter[414] /* world.y_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2249
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2249};
  (data->simulationInfo->realParameter[411] /* world.y_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2250
type: SIMPLE_ASSIGN
world.y_label.diameter = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2250};
  (data->simulationInfo->realParameter[415] /* world.y_label.diameter PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2251
type: SIMPLE_ASSIGN
world.z_arrowLine.length = world.lineLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2251};
  (data->simulationInfo->realParameter[424] /* world.z_arrowLine.length PARAM */) = (data->simulationInfo->realParameter[376] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 2252
type: SIMPLE_ASSIGN
world.z_arrowLine.width = world.lineWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2252};
  (data->simulationInfo->realParameter[425] /* world.z_arrowLine.width PARAM */) = (data->simulationInfo->realParameter[377] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2253
type: SIMPLE_ASSIGN
world.z_arrowLine.height = world.lineWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2253};
  (data->simulationInfo->realParameter[423] /* world.z_arrowLine.height PARAM */) = (data->simulationInfo->realParameter[377] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2254
type: SIMPLE_ASSIGN
world.z_arrowHead.length = world.headLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2254};
  (data->simulationInfo->realParameter[420] /* world.z_arrowHead.length PARAM */) = (data->simulationInfo->realParameter[373] /* world.headLength PARAM */);
  TRACE_POP
}

/*
equation index: 2255
type: SIMPLE_ASSIGN
world.z_arrowHead.width = world.headWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2255};
  (data->simulationInfo->realParameter[422] /* world.z_arrowHead.width PARAM */) = (data->simulationInfo->realParameter[374] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2256
type: SIMPLE_ASSIGN
world.z_arrowHead.height = world.headWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  (data->simulationInfo->realParameter[419] /* world.z_arrowHead.height PARAM */) = (data->simulationInfo->realParameter[374] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2257
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r[3] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  (data->simulationInfo->realParameter[429] /* world.z_label.cylinders[1].r[3] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2258
type: SIMPLE_ASSIGN
world.z_label.r_abs[3] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  (data->simulationInfo->realParameter[440] /* world.z_label.r_abs[3] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2259
type: SIMPLE_ASSIGN
world.z_label.r_lines[3] = world.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  (data->simulationInfo->realParameter[441] /* world.z_label.r_lines[3] PARAM */) = (data->simulationInfo->realParameter[375] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2260
type: SIMPLE_ASSIGN
world.z_label.lines[1,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  (data->simulationInfo->realParameter[434] /* world.z_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2261
type: SIMPLE_ASSIGN
world.z_label.lines[2,1,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  (data->simulationInfo->realParameter[435] /* world.z_label.lines[2,1,2] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2262
type: SIMPLE_ASSIGN
world.z_label.lines[2,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2262};
  (data->simulationInfo->realParameter[436] /* world.z_label.lines[2,2,1] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2263
type: SIMPLE_ASSIGN
world.z_label.lines[2,2,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  (data->simulationInfo->realParameter[437] /* world.z_label.lines[2,2,2] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2264
type: SIMPLE_ASSIGN
world.z_label.lines[3,1,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  (data->simulationInfo->realParameter[438] /* world.z_label.lines[3,1,2] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2265
type: SIMPLE_ASSIGN
world.z_label.lines[3,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  (data->simulationInfo->realParameter[439] /* world.z_label.lines[3,2,1] PARAM */) = (data->simulationInfo->realParameter[383] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2266
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2266};
  (data->simulationInfo->realParameter[430] /* world.z_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2267
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2267};
  (data->simulationInfo->realParameter[426] /* world.z_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2268
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2268};
  (data->simulationInfo->realParameter[431] /* world.z_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2269
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2269};
  (data->simulationInfo->realParameter[427] /* world.z_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2270
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  (data->simulationInfo->realParameter[432] /* world.z_label.cylinders[3].width PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2271
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2271};
  (data->simulationInfo->realParameter[428] /* world.z_label.cylinders[3].height PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2272
type: SIMPLE_ASSIGN
world.z_label.diameter = world.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  (data->simulationInfo->realParameter[433] /* world.z_label.diameter PARAM */) = (data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2273
type: SIMPLE_ASSIGN
world.gravityArrowLength = 0.5 * world.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  (data->simulationInfo->realParameter[354] /* world.gravityArrowLength PARAM */) = (0.5) * ((data->simulationInfo->realParameter[334] /* world.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 2275
type: SIMPLE_ASSIGN
world.gravityArrowDiameter = world.gravityArrowLength / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2275};
  (data->simulationInfo->realParameter[348] /* world.gravityArrowDiameter PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[354] /* world.gravityArrowLength PARAM */),(data->simulationInfo->realParameter[346] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2276
type: SIMPLE_ASSIGN
world.gravityHeadLength = min(world.gravityArrowLength, world.gravityArrowDiameter * 4.0)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2276};
  (data->simulationInfo->realParameter[364] /* world.gravityHeadLength PARAM */) = fmin((data->simulationInfo->realParameter[354] /* world.gravityArrowLength PARAM */),((data->simulationInfo->realParameter[348] /* world.gravityArrowDiameter PARAM */)) * (4.0));
  TRACE_POP
}

/*
equation index: 2277
type: SIMPLE_ASSIGN
world.gravityLineLength = max(0.0, world.gravityArrowLength - world.gravityHeadLength)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  (data->simulationInfo->realParameter[366] /* world.gravityLineLength PARAM */) = fmax(0.0,(data->simulationInfo->realParameter[354] /* world.gravityArrowLength PARAM */) - (data->simulationInfo->realParameter[364] /* world.gravityHeadLength PARAM */));
  TRACE_POP
}

/*
equation index: 2278
type: SIMPLE_ASSIGN
world.gravityArrowLine.length = world.gravityLineLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  (data->simulationInfo->realParameter[356] /* world.gravityArrowLine.length PARAM */) = (data->simulationInfo->realParameter[366] /* world.gravityLineLength PARAM */);
  TRACE_POP
}

/*
equation index: 2279
type: SIMPLE_ASSIGN
world.gravityArrowLine.width = world.gravityArrowDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  (data->simulationInfo->realParameter[360] /* world.gravityArrowLine.width PARAM */) = (data->simulationInfo->realParameter[348] /* world.gravityArrowDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2280
type: SIMPLE_ASSIGN
world.gravityArrowLine.height = world.gravityArrowDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  (data->simulationInfo->realParameter[355] /* world.gravityArrowLine.height PARAM */) = (data->simulationInfo->realParameter[348] /* world.gravityArrowDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2281
type: SIMPLE_ASSIGN
world.gravityArrowHead.length = world.gravityHeadLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2281};
  (data->simulationInfo->realParameter[350] /* world.gravityArrowHead.length PARAM */) = (data->simulationInfo->realParameter[364] /* world.gravityHeadLength PARAM */);
  TRACE_POP
}

/*
equation index: 2282
type: SIMPLE_ASSIGN
world.gravityHeadWidth = 3.0 * world.gravityArrowDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2282};
  (data->simulationInfo->realParameter[365] /* world.gravityHeadWidth PARAM */) = (3.0) * ((data->simulationInfo->realParameter[348] /* world.gravityArrowDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 2283
type: SIMPLE_ASSIGN
world.gravityArrowHead.width = world.gravityHeadWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2283};
  (data->simulationInfo->realParameter[353] /* world.gravityArrowHead.width PARAM */) = (data->simulationInfo->realParameter[365] /* world.gravityHeadWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2284
type: SIMPLE_ASSIGN
world.gravityArrowHead.height = world.gravityHeadWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  (data->simulationInfo->realParameter[349] /* world.gravityArrowHead.height PARAM */) = (data->simulationInfo->realParameter[365] /* world.gravityHeadWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2285
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.rvisobj[2] = planarWorld.gravityArrowTail[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  (data->simulationInfo->realParameter[199] /* planarWorld.gravityArrow.rvisobj[2] PARAM */) = (data->simulationInfo->realParameter[203] /* planarWorld.gravityArrowTail[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2286
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.rvisobj[1] = planarWorld.gravityArrowTail[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  (data->simulationInfo->realParameter[198] /* planarWorld.gravityArrow.rvisobj[1] PARAM */) = (data->simulationInfo->realParameter[202] /* planarWorld.gravityArrowTail[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2287
type: SIMPLE_ASSIGN
planarWorld.labelStart = 1.05 * planarWorld.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  (data->simulationInfo->realParameter[204] /* planarWorld.labelStart PARAM */) = (1.05) * ((data->simulationInfo->realParameter[115] /* planarWorld.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 2288
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.labelStart = planarWorld.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2288};
  (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */) = (data->simulationInfo->realParameter[204] /* planarWorld.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2289
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].r[3] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2289};
  (data->simulationInfo->realParameter[164] /* planarWorld.coordinateSystem.z_label.cylinders[1].r[3] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2290
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.r_abs[3] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2290};
  (data->simulationInfo->realParameter[175] /* planarWorld.coordinateSystem.z_label.r_abs[3] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2291
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].r[2] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  (data->simulationInfo->realParameter[148] /* planarWorld.coordinateSystem.y_label.cylinders[1].r[2] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2292
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.r_abs[2] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  (data->simulationInfo->realParameter[153] /* planarWorld.coordinateSystem.y_label.r_abs[2] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2293
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].r[1] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  (data->simulationInfo->realParameter[130] /* planarWorld.coordinateSystem.x_label.cylinders[1].r[1] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2294
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.r_abs[1] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  (data->simulationInfo->realParameter[138] /* planarWorld.coordinateSystem.x_label.r_abs[1] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2295
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.lengthDirection[1] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2295};
  (data->simulationInfo->realParameter[124] /* planarWorld.coordinateSystem.x_arrow.arrowLine.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2296
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.lengthDirection[1] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2296};
  (data->simulationInfo->realParameter[122] /* planarWorld.coordinateSystem.x_arrow.arrowHead.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2297
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.r_head[1] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2297};
  (data->simulationInfo->realParameter[127] /* planarWorld.coordinateSystem.x_arrow.r_head[1] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2298
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.r_lines[1] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2298};
  (data->simulationInfo->realParameter[139] /* planarWorld.coordinateSystem.x_label.r_lines[1] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2299
type: SIMPLE_ASSIGN
planarWorld.scaledLabel = 3.0 * planarWorld.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2299};
  (data->simulationInfo->realParameter[206] /* planarWorld.scaledLabel PARAM */) = (3.0) * ((data->simulationInfo->realParameter[114] /* planarWorld.axisDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 2300
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.scaledLabel = planarWorld.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2300};
  (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */) = (data->simulationInfo->realParameter[206] /* planarWorld.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2301
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[1,2,1] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2301};
  (data->simulationInfo->realParameter[134] /* planarWorld.coordinateSystem.x_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2302
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[1,2,2] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2302};
  (data->simulationInfo->realParameter[135] /* planarWorld.coordinateSystem.x_label.lines[1,2,2] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2303
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[2,1,2] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2303};
  (data->simulationInfo->realParameter[136] /* planarWorld.coordinateSystem.x_label.lines[2,1,2] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2304
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.lines[2,2,1] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2304};
  (data->simulationInfo->realParameter[137] /* planarWorld.coordinateSystem.x_label.lines[2,2,1] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2305
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.lengthDirection[2] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  (data->simulationInfo->realParameter[142] /* planarWorld.coordinateSystem.y_arrow.arrowLine.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2306
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.lengthDirection[2] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2306};
  (data->simulationInfo->realParameter[140] /* planarWorld.coordinateSystem.y_arrow.arrowHead.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2307
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.r_head[2] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  (data->simulationInfo->realParameter[145] /* planarWorld.coordinateSystem.y_arrow.r_head[2] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2308
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.r_lines[2] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  (data->simulationInfo->realParameter[154] /* planarWorld.coordinateSystem.y_label.r_lines[2] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2309
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.lines[1,2,1] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2309};
  (data->simulationInfo->realParameter[152] /* planarWorld.coordinateSystem.y_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2310
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.lengthDirection[3] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  (data->simulationInfo->realParameter[157] /* planarWorld.coordinateSystem.z_arrow.arrowLine.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2311
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.lengthDirection[3] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2311};
  (data->simulationInfo->realParameter[155] /* planarWorld.coordinateSystem.z_arrow.arrowHead.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2312
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.r_head[3] = planarWorld.coordinateSystem.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  (data->simulationInfo->realParameter[160] /* planarWorld.coordinateSystem.z_arrow.r_head[3] PARAM */) = (data->simulationInfo->realParameter[119] /* planarWorld.coordinateSystem.axisLength PARAM */);
  TRACE_POP
}

/*
equation index: 2313
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.r_lines[3] = planarWorld.coordinateSystem.labelStart
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  (data->simulationInfo->realParameter[176] /* planarWorld.coordinateSystem.z_label.r_lines[3] PARAM */) = (data->simulationInfo->realParameter[120] /* planarWorld.coordinateSystem.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 2314
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[1,2,1] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  (data->simulationInfo->realParameter[169] /* planarWorld.coordinateSystem.z_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2315
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[2,1,2] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2315};
  (data->simulationInfo->realParameter[170] /* planarWorld.coordinateSystem.z_label.lines[2,1,2] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2316
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[2,2,1] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2316};
  (data->simulationInfo->realParameter[171] /* planarWorld.coordinateSystem.z_label.lines[2,2,1] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2317
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[2,2,2] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2317};
  (data->simulationInfo->realParameter[172] /* planarWorld.coordinateSystem.z_label.lines[2,2,2] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2318
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[3,1,2] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2318};
  (data->simulationInfo->realParameter[173] /* planarWorld.coordinateSystem.z_label.lines[3,1,2] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2319
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.lines[3,2,1] = planarWorld.coordinateSystem.scaledLabel
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  (data->simulationInfo->realParameter[174] /* planarWorld.coordinateSystem.z_label.lines[3,2,1] PARAM */) = (data->simulationInfo->realParameter[121] /* planarWorld.coordinateSystem.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 2320
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.r_shape[1] = planarWorld.gravityArrowTail[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  (data->simulationInfo->realParameter[192] /* planarWorld.gravityArrow.arrowLine.r_shape[1] PARAM */) = (data->simulationInfo->realParameter[202] /* planarWorld.gravityArrowTail[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2321
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.r_tail[1] = planarWorld.gravityArrowTail[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2321};
  (data->simulationInfo->realParameter[196] /* planarWorld.gravityArrow.r_tail[1] PARAM */) = (data->simulationInfo->realParameter[202] /* planarWorld.gravityArrowTail[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2322
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.r_shape[2] = planarWorld.gravityArrowTail[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2322};
  (data->simulationInfo->realParameter[193] /* planarWorld.gravityArrow.arrowLine.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[203] /* planarWorld.gravityArrowTail[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2323
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.r_tail[2] = planarWorld.gravityArrowTail[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2323};
  (data->simulationInfo->realParameter[197] /* planarWorld.gravityArrow.r_tail[2] PARAM */) = (data->simulationInfo->realParameter[203] /* planarWorld.gravityArrowTail[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2324
type: SIMPLE_ASSIGN
planarWorld.g[1] = planarWorld.constantGravity[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2324};
  (data->simulationInfo->realParameter[189] /* planarWorld.g[1] PARAM */) = (data->simulationInfo->realParameter[116] /* planarWorld.constantGravity[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2325
type: SIMPLE_ASSIGN
planarWorld.g[2] = planarWorld.constantGravity[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2325};
  (data->simulationInfo->realParameter[190] /* planarWorld.g[2] PARAM */) = (data->simulationInfo->realParameter[117] /* planarWorld.constantGravity[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2326
type: SIMPLE_ASSIGN
airResistanceLongitudinal.e[1] = airResistanceLongitudinal.r[1] / sqrt(airResistanceLongitudinal.r * airResistanceLongitudinal.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2326};
  real_array tmp18;
  real_array tmp19;
  modelica_real tmp20;
  real_array_create(&tmp18, ((modelica_real*)&((&data->simulationInfo->realParameter[8] /* airResistanceLongitudinal.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp19, ((modelica_real*)&((&data->simulationInfo->realParameter[8] /* airResistanceLongitudinal.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp20 = mul_real_scalar_product(tmp18, tmp19);
  if(!(tmp20 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(airResistanceLongitudinal.r * airResistanceLongitudinal.r) was %g should be >= 0", tmp20);
    }
  }
  (data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[8] /* airResistanceLongitudinal.r[1] PARAM */),sqrt(tmp20),"sqrt(airResistanceLongitudinal.r * airResistanceLongitudinal.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2327
type: SIMPLE_ASSIGN
airResistanceLongitudinal.Rae[1,1] = airResistanceLongitudinal.e[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2327};
  (data->simulationInfo->realParameter[0] /* airResistanceLongitudinal.Rae[1,1] PARAM */) = (data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2328
type: SIMPLE_ASSIGN
airResistanceLongitudinal.e[2] = airResistanceLongitudinal.r[2] / sqrt(airResistanceLongitudinal.r * airResistanceLongitudinal.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2328};
  real_array tmp21;
  real_array tmp22;
  modelica_real tmp23;
  real_array_create(&tmp21, ((modelica_real*)&((&data->simulationInfo->realParameter[8] /* airResistanceLongitudinal.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp22, ((modelica_real*)&((&data->simulationInfo->realParameter[8] /* airResistanceLongitudinal.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp23 = mul_real_scalar_product(tmp21, tmp22);
  if(!(tmp23 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(airResistanceLongitudinal.r * airResistanceLongitudinal.r) was %g should be >= 0", tmp23);
    }
  }
  (data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[9] /* airResistanceLongitudinal.r[2] PARAM */),sqrt(tmp23),"sqrt(airResistanceLongitudinal.r * airResistanceLongitudinal.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2329
type: SIMPLE_ASSIGN
airResistanceLongitudinal.Rae[1,2] = -airResistanceLongitudinal.e[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2329};
  (data->simulationInfo->realParameter[1] /* airResistanceLongitudinal.Rae[1,2] PARAM */) = (-(data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */));
  TRACE_POP
}

/*
equation index: 2330
type: SIMPLE_ASSIGN
airResistanceLongitudinal.Rae[2,1] = airResistanceLongitudinal.e[2]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2330};
  (data->simulationInfo->realParameter[2] /* airResistanceLongitudinal.Rae[2,1] PARAM */) = (data->simulationInfo->realParameter[7] /* airResistanceLongitudinal.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2331
type: SIMPLE_ASSIGN
airResistanceLongitudinal.Rae[2,2] = airResistanceLongitudinal.e[1]
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2331};
  (data->simulationInfo->realParameter[3] /* airResistanceLongitudinal.Rae[2,2] PARAM */) = (data->simulationInfo->realParameter[6] /* airResistanceLongitudinal.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2332
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2332};
  (data->simulationInfo->realParameter[125] /* planarWorld.coordinateSystem.x_arrow.arrowLine.width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2333
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2333};
  (data->simulationInfo->realParameter[123] /* planarWorld.coordinateSystem.x_arrow.arrowLine.height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2334
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.diameter = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2334};
  (data->simulationInfo->realParameter[126] /* planarWorld.coordinateSystem.x_arrow.diameter PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2335
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2335};
  (data->simulationInfo->realParameter[143] /* planarWorld.coordinateSystem.y_arrow.arrowLine.width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2336
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2336};
  (data->simulationInfo->realParameter[141] /* planarWorld.coordinateSystem.y_arrow.arrowLine.height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2337
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.diameter = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2337};
  (data->simulationInfo->realParameter[144] /* planarWorld.coordinateSystem.y_arrow.diameter PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2338
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.width = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2338};
  (data->simulationInfo->realParameter[158] /* planarWorld.coordinateSystem.z_arrow.arrowLine.width PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2339
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.height = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2339};
  (data->simulationInfo->realParameter[156] /* planarWorld.coordinateSystem.z_arrow.arrowLine.height PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2340
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.diameter = planarWorld.coordinateSystem.axisDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2340};
  (data->simulationInfo->realParameter[159] /* planarWorld.coordinateSystem.z_arrow.diameter PARAM */) = (data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2341
type: SIMPLE_ASSIGN
planarWorld.gravityArrowLength = 0.5 * planarWorld.axisLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2341};
  (data->simulationInfo->realParameter[201] /* planarWorld.gravityArrowLength PARAM */) = (0.5) * ((data->simulationInfo->realParameter[115] /* planarWorld.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 2342
type: SIMPLE_ASSIGN
planarWorld.gravityArrowDiameter = planarWorld.gravityArrowLength / planarWorld.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2342};
  (data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[201] /* planarWorld.gravityArrowLength PARAM */),(data->simulationInfo->realParameter[187] /* planarWorld.defaultWidthFraction PARAM */),"planarWorld.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2343
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.width = planarWorld.gravityArrowDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2343};
  (data->simulationInfo->realParameter[194] /* planarWorld.gravityArrow.arrowLine.width PARAM */) = (data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2344
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.height = planarWorld.gravityArrowDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2344};
  (data->simulationInfo->realParameter[191] /* planarWorld.gravityArrow.arrowLine.height PARAM */) = (data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2345
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.diameter = planarWorld.gravityArrowDiameter
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2345};
  (data->simulationInfo->realParameter[195] /* planarWorld.gravityArrow.diameter PARAM */) = (data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 2349
type: SIMPLE_ASSIGN
world.gravityArrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2349};
  (data->simulationInfo->stringParameter[35] /* world.gravityArrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2350
type: SIMPLE_ASSIGN
world.gravityArrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2350};
  (data->simulationInfo->stringParameter[36] /* world.gravityArrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2351
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2351};
  (data->simulationInfo->stringParameter[51] /* world.z_label.cylinders[3].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2352
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2352};
  (data->simulationInfo->stringParameter[50] /* world.z_label.cylinders[2].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2353
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2353};
  (data->simulationInfo->stringParameter[49] /* world.z_label.cylinders[1].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2355
type: SIMPLE_ASSIGN
world.z_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2355};
  (data->simulationInfo->stringParameter[47] /* world.z_arrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2356
type: SIMPLE_ASSIGN
world.z_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2356};
  (data->simulationInfo->stringParameter[48] /* world.z_arrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2357
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2357};
  (data->simulationInfo->stringParameter[46] /* world.y_label.cylinders[2].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2358
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2358};
  (data->simulationInfo->stringParameter[45] /* world.y_label.cylinders[1].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2360
type: SIMPLE_ASSIGN
world.y_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2360};
  (data->simulationInfo->stringParameter[43] /* world.y_arrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2361
type: SIMPLE_ASSIGN
world.y_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2361};
  (data->simulationInfo->stringParameter[44] /* world.y_arrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2362
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2362};
  (data->simulationInfo->stringParameter[42] /* world.x_label.cylinders[2].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2363
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2363};
  (data->simulationInfo->stringParameter[41] /* world.x_label.cylinders[1].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2365
type: SIMPLE_ASSIGN
world.x_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2365};
  (data->simulationInfo->stringParameter[39] /* world.x_arrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2366
type: SIMPLE_ASSIGN
world.x_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2366};
  (data->simulationInfo->stringParameter[40] /* world.x_arrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2372
type: SIMPLE_ASSIGN
world.defaultArrowDiameter = 0.025 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2372};
  (data->simulationInfo->realParameter[335] /* world.defaultArrowDiameter PARAM */) = (0.025) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2373
type: SIMPLE_ASSIGN
world.defaultBodyDiameter = 0.1111111111111111 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2373};
  (data->simulationInfo->realParameter[337] /* world.defaultBodyDiameter PARAM */) = (0.1111111111111111) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2374
type: SIMPLE_ASSIGN
world.defaultForceWidth = 0.05 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2374};
  (data->simulationInfo->realParameter[339] /* world.defaultForceWidth PARAM */) = (0.05) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2375
type: SIMPLE_ASSIGN
world.defaultForceLength = 0.1 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2375};
  (data->simulationInfo->realParameter[338] /* world.defaultForceLength PARAM */) = (0.1) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2376
type: SIMPLE_ASSIGN
world.defaultJointWidth = 0.05 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2376};
  (data->simulationInfo->realParameter[342] /* world.defaultJointWidth PARAM */) = (0.05) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2377
type: SIMPLE_ASSIGN
world.defaultJointLength = 0.1 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2377};
  (data->simulationInfo->realParameter[341] /* world.defaultJointLength PARAM */) = (0.1) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2378
type: SIMPLE_ASSIGN
world.defaultAxisLength = 0.2 * world.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2378};
  (data->simulationInfo->realParameter[336] /* world.defaultAxisLength PARAM */) = (0.2) * ((data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2380
type: SIMPLE_ASSIGN
world.groundLength_v = world.groundLength_u
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2380};
  (data->simulationInfo->realParameter[372] /* world.groundLength_v PARAM */) = (data->simulationInfo->realParameter[371] /* world.groundLength_u PARAM */);
  TRACE_POP
}

/*
equation index: 2393
type: SIMPLE_ASSIGN
world.label2 = "y"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2393};
  (data->simulationInfo->stringParameter[38] /* world.label2 PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2394
type: SIMPLE_ASSIGN
world.label1 = "x"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2394};
  (data->simulationInfo->stringParameter[37] /* world.label1 PARAM */) = _OMC_LIT8;
  TRACE_POP
}

/*
equation index: 2402
type: SIMPLE_ASSIGN
positionPhi.w_crit = 6.283185307179586 * positionPhi.f_crit
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2402};
  (data->simulationInfo->realParameter[208] /* positionPhi.w_crit PARAM */) = (6.283185307179586) * ((data->simulationInfo->realParameter[207] /* positionPhi.f_crit PARAM */));
  TRACE_POP
}

/*
equation index: 2405
type: SIMPLE_ASSIGN
weightTransfer.Wr = vehicleWidth
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2405};
  (data->simulationInfo->realParameter[327] /* weightTransfer.Wr PARAM */) = (data->simulationInfo->realParameter[325] /* vehicleWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2406
type: SIMPLE_ASSIGN
weightTransfer.L = frontLength + backLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2406};
  (data->simulationInfo->realParameter[326] /* weightTransfer.L PARAM */) = (data->simulationInfo->realParameter[55] /* frontLength PARAM */) + (data->simulationInfo->realParameter[11] /* backLength PARAM */);
  TRACE_POP
}

/*
equation index: 2407
type: SIMPLE_ASSIGN
weightTransfer.h = massCenterZ
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2407};
  (data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */) = (data->simulationInfo->realParameter[105] /* massCenterZ PARAM */);
  TRACE_POP
}

/*
equation index: 2408
type: SIMPLE_ASSIGN
weightTransfer.m = mass
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2408};
  (data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */) = (data->simulationInfo->realParameter[103] /* mass PARAM */);
  TRACE_POP
}

/*
equation index: 2410
type: SIMPLE_ASSIGN
airResistanceLongitudinal.area = vehicleFrontArea
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2410};
  (data->simulationInfo->realParameter[4] /* airResistanceLongitudinal.area PARAM */) = (data->simulationInfo->realParameter[324] /* vehicleFrontArea PARAM */);
  TRACE_POP
}

/*
equation index: 2411
type: SIMPLE_ASSIGN
airResistanceLongitudinal.c_W = dragCoef
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2411};
  (data->simulationInfo->realParameter[5] /* airResistanceLongitudinal.c_W PARAM */) = (data->simulationInfo->realParameter[33] /* dragCoef PARAM */);
  TRACE_POP
}

/*
equation index: 2412
type: SIMPLE_ASSIGN
front2.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2412};
  (data->simulationInfo->realParameter[53] /* front2.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2415
type: SIMPLE_ASSIGN
revolute.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2415};
  (data->simulationInfo->realParameter[309] /* revolute.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2420
type: SIMPLE_ASSIGN
body2.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2420};
  (data->simulationInfo->realParameter[29] /* body2.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2423
type: SIMPLE_ASSIGN
frontTrail.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2423};
  (data->simulationInfo->realParameter[65] /* frontTrail.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2426
type: SIMPLE_ASSIGN
body.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2426};
  (data->simulationInfo->realParameter[20] /* body.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2427
type: SIMPLE_ASSIGN
body.I = inertiaBody
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2427};
  (data->simulationInfo->realParameter[12] /* body.I PARAM */) = (data->simulationInfo->realParameter[99] /* inertiaBody PARAM */);
  TRACE_POP
}

/*
equation index: 2428
type: SIMPLE_ASSIGN
body.m = mass
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2428};
  (data->simulationInfo->realParameter[13] /* body.m PARAM */) = (data->simulationInfo->realParameter[103] /* mass PARAM */);
  TRACE_POP
}

/*
equation index: 2431
type: SIMPLE_ASSIGN
front.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2431};
  (data->simulationInfo->realParameter[43] /* front.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2433
type: SIMPLE_ASSIGN
rear.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2433};
  (data->simulationInfo->realParameter[218] /* rear.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2435
type: SIMPLE_ASSIGN
rearRight.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2435};
  (data->simulationInfo->realParameter[268] /* rearRight.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2437
type: SIMPLE_ASSIGN
rearLeft.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2437};
  (data->simulationInfo->realParameter[228] /* rearLeft.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2439
type: SIMPLE_ASSIGN
gearRight.ratio = gearRatio
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2439};
  (data->simulationInfo->realParameter[98] /* gearRight.ratio PARAM */) = (data->simulationInfo->realParameter[97] /* gearRatio PARAM */);
  TRACE_POP
}

/*
equation index: 2441
type: SIMPLE_ASSIGN
gearLeft.ratio = gearRatio
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2441};
  (data->simulationInfo->realParameter[96] /* gearLeft.ratio PARAM */) = (data->simulationInfo->realParameter[97] /* gearRatio PARAM */);
  TRACE_POP
}

/*
equation index: 2446
type: SIMPLE_ASSIGN
frontInertia.J = inertiaWheelF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2446};
  (data->simulationInfo->realParameter[54] /* frontInertia.J PARAM */) = (data->simulationInfo->realParameter[100] /* inertiaWheelF PARAM */);
  TRACE_POP
}

/*
equation index: 2448
type: SIMPLE_ASSIGN
rearRightInertia.J = inertiaWheelR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2448};
  (data->simulationInfo->realParameter[269] /* rearRightInertia.J PARAM */) = (data->simulationInfo->realParameter[102] /* inertiaWheelR PARAM */);
  TRACE_POP
}

/*
equation index: 2450
type: SIMPLE_ASSIGN
rearLeftInertia.J = inertiaWheelL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2450};
  (data->simulationInfo->realParameter[229] /* rearLeftInertia.J PARAM */) = (data->simulationInfo->realParameter[101] /* inertiaWheelL PARAM */);
  TRACE_POP
}

/*
equation index: 2451
type: SIMPLE_ASSIGN
frontWheel.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2451};
  (data->simulationInfo->realParameter[94] /* frontWheel.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2453
type: SIMPLE_ASSIGN
frontWheel.cr = c_rollF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2453};
  (data->simulationInfo->realParameter[67] /* frontWheel.cr PARAM */) = (data->simulationInfo->realParameter[30] /* c_rollF PARAM */);
  TRACE_POP
}

/*
equation index: 2454
type: SIMPLE_ASSIGN
frontWheel.e[2] = frontWheel.r[2] / sqrt(frontWheel.r * frontWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2454};
  real_array tmp24;
  real_array tmp25;
  modelica_real tmp26;
  real_array_create(&tmp24, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* frontWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp25, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* frontWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp26 = mul_real_scalar_product(tmp24, tmp25);
  if(!(tmp26 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(frontWheel.r * frontWheel.r) was %g should be >= 0", tmp26);
    }
  }
  (data->simulationInfo->realParameter[72] /* frontWheel.e[2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[77] /* frontWheel.r[2] PARAM */),sqrt(tmp26),"sqrt(frontWheel.r * frontWheel.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2455
type: SIMPLE_ASSIGN
frontWheel.e[1] = frontWheel.r[1] / sqrt(frontWheel.r * frontWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2455};
  real_array tmp27;
  real_array tmp28;
  modelica_real tmp29;
  real_array_create(&tmp27, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* frontWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp28, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* frontWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp29 = mul_real_scalar_product(tmp27, tmp28);
  if(!(tmp29 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(frontWheel.r * frontWheel.r) was %g should be >= 0", tmp29);
    }
  }
  (data->simulationInfo->realParameter[71] /* frontWheel.e[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[76] /* frontWheel.r[1] PARAM */),sqrt(tmp29),"sqrt(frontWheel.r * frontWheel.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2456
type: SIMPLE_ASSIGN
frontWheel.l = sqrt(frontWheel.r * frontWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2456};
  real_array tmp30;
  real_array tmp31;
  modelica_real tmp32;
  real_array_create(&tmp30, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* frontWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp31, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* frontWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp32 = mul_real_scalar_product(tmp30, tmp31);
  if(!(tmp32 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(frontWheel.r * frontWheel.r) was %g should be >= 0", tmp32);
    }
  }
  (data->simulationInfo->realParameter[73] /* frontWheel.l PARAM */) = sqrt(tmp32);
  TRACE_POP
}

/*
equation index: 2457
type: SIMPLE_ASSIGN
frontWheel.mu_S = muSF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2457};
  (data->simulationInfo->realParameter[75] /* frontWheel.mu_S PARAM */) = (data->simulationInfo->realParameter[109] /* muSF PARAM */);
  TRACE_POP
}

/*
equation index: 2458
type: SIMPLE_ASSIGN
frontWheel.mu_A = muAF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2458};
  (data->simulationInfo->realParameter[74] /* frontWheel.mu_A PARAM */) = (data->simulationInfo->realParameter[106] /* muAF PARAM */);
  TRACE_POP
}

/*
equation index: 2459
type: SIMPLE_ASSIGN
frontWheel.sSlide = sSlF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2459};
  (data->simulationInfo->realParameter[88] /* frontWheel.sSlide PARAM */) = (data->simulationInfo->realParameter[313] /* sSlF PARAM */);
  TRACE_POP
}

/*
equation index: 2460
type: SIMPLE_ASSIGN
frontWheel.sAdhesion = sAdF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2460};
  (data->simulationInfo->realParameter[87] /* frontWheel.sAdhesion PARAM */) = (data->simulationInfo->realParameter[310] /* sAdF PARAM */);
  TRACE_POP
}

/*
equation index: 2461
type: SIMPLE_ASSIGN
frontWheel.vSlide_min = vSlF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2461};
  (data->simulationInfo->realParameter[92] /* frontWheel.vSlide_min PARAM */) = (data->simulationInfo->realParameter[321] /* vSlF PARAM */);
  TRACE_POP
}

/*
equation index: 2462
type: SIMPLE_ASSIGN
frontWheel.vAdhesion_min = vAdF
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2462};
  (data->simulationInfo->realParameter[91] /* frontWheel.vAdhesion_min PARAM */) = (data->simulationInfo->realParameter[318] /* vAdF PARAM */);
  TRACE_POP
}

/*
equation index: 2463
type: SIMPLE_ASSIGN
massCenterY = 100.0 * backLength / (backLength + frontLength)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2463};
  (data->simulationInfo->realParameter[104] /* massCenterY PARAM */) = (100.0) * (DIVISION_SIM((data->simulationInfo->realParameter[11] /* backLength PARAM */),(data->simulationInfo->realParameter[11] /* backLength PARAM */) + (data->simulationInfo->realParameter[55] /* frontLength PARAM */),"backLength + frontLength",equationIndexes));
  TRACE_POP
}

/*
equation index: 2464
type: SIMPLE_ASSIGN
frontWheel.N = 0.01 * g * mass * massCenterY
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2464};
  (data->simulationInfo->realParameter[66] /* frontWheel.N PARAM */) = (0.01) * (((data->simulationInfo->realParameter[95] /* g PARAM */)) * (((data->simulationInfo->realParameter[103] /* mass PARAM */)) * ((data->simulationInfo->realParameter[104] /* massCenterY PARAM */))));
  TRACE_POP
}

/*
equation index: 2467
type: SIMPLE_ASSIGN
rearLeftWheel.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2467};
  (data->simulationInfo->realParameter[258] /* rearLeftWheel.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2469
type: SIMPLE_ASSIGN
rearLeftWheel.cr = c_rollL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2469};
  (data->simulationInfo->realParameter[231] /* rearLeftWheel.cr PARAM */) = (data->simulationInfo->realParameter[31] /* c_rollL PARAM */);
  TRACE_POP
}

/*
equation index: 2470
type: SIMPLE_ASSIGN
rearLeftWheel.e[2] = rearLeftWheel.r[2] / sqrt(rearLeftWheel.r * rearLeftWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2470};
  real_array tmp33;
  real_array tmp34;
  modelica_real tmp35;
  real_array_create(&tmp33, ((modelica_real*)&((&data->simulationInfo->realParameter[240] /* rearLeftWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp34, ((modelica_real*)&((&data->simulationInfo->realParameter[240] /* rearLeftWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp35 = mul_real_scalar_product(tmp33, tmp34);
  if(!(tmp35 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearLeftWheel.r * rearLeftWheel.r) was %g should be >= 0", tmp35);
    }
  }
  (data->simulationInfo->realParameter[236] /* rearLeftWheel.e[2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[241] /* rearLeftWheel.r[2] PARAM */),sqrt(tmp35),"sqrt(rearLeftWheel.r * rearLeftWheel.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2471
type: SIMPLE_ASSIGN
rearLeftWheel.e[1] = rearLeftWheel.r[1] / sqrt(rearLeftWheel.r * rearLeftWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2471};
  real_array tmp36;
  real_array tmp37;
  modelica_real tmp38;
  real_array_create(&tmp36, ((modelica_real*)&((&data->simulationInfo->realParameter[240] /* rearLeftWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp37, ((modelica_real*)&((&data->simulationInfo->realParameter[240] /* rearLeftWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp38 = mul_real_scalar_product(tmp36, tmp37);
  if(!(tmp38 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearLeftWheel.r * rearLeftWheel.r) was %g should be >= 0", tmp38);
    }
  }
  (data->simulationInfo->realParameter[235] /* rearLeftWheel.e[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[240] /* rearLeftWheel.r[1] PARAM */),sqrt(tmp38),"sqrt(rearLeftWheel.r * rearLeftWheel.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2472
type: SIMPLE_ASSIGN
rearLeftWheel.l = sqrt(rearLeftWheel.r * rearLeftWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2472};
  real_array tmp39;
  real_array tmp40;
  modelica_real tmp41;
  real_array_create(&tmp39, ((modelica_real*)&((&data->simulationInfo->realParameter[240] /* rearLeftWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp40, ((modelica_real*)&((&data->simulationInfo->realParameter[240] /* rearLeftWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp41 = mul_real_scalar_product(tmp39, tmp40);
  if(!(tmp41 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearLeftWheel.r * rearLeftWheel.r) was %g should be >= 0", tmp41);
    }
  }
  (data->simulationInfo->realParameter[237] /* rearLeftWheel.l PARAM */) = sqrt(tmp41);
  TRACE_POP
}

/*
equation index: 2473
type: SIMPLE_ASSIGN
rearLeftWheel.mu_S = muSL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2473};
  (data->simulationInfo->realParameter[239] /* rearLeftWheel.mu_S PARAM */) = (data->simulationInfo->realParameter[110] /* muSL PARAM */);
  TRACE_POP
}

/*
equation index: 2474
type: SIMPLE_ASSIGN
rearLeftWheel.mu_A = muAL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2474};
  (data->simulationInfo->realParameter[238] /* rearLeftWheel.mu_A PARAM */) = (data->simulationInfo->realParameter[107] /* muAL PARAM */);
  TRACE_POP
}

/*
equation index: 2475
type: SIMPLE_ASSIGN
rearLeftWheel.sSlide = sSlL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2475};
  (data->simulationInfo->realParameter[252] /* rearLeftWheel.sSlide PARAM */) = (data->simulationInfo->realParameter[314] /* sSlL PARAM */);
  TRACE_POP
}

/*
equation index: 2476
type: SIMPLE_ASSIGN
rearLeftWheel.sAdhesion = sAdL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2476};
  (data->simulationInfo->realParameter[251] /* rearLeftWheel.sAdhesion PARAM */) = (data->simulationInfo->realParameter[311] /* sAdL PARAM */);
  TRACE_POP
}

/*
equation index: 2477
type: SIMPLE_ASSIGN
rearLeftWheel.vSlide_min = vSlL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2477};
  (data->simulationInfo->realParameter[256] /* rearLeftWheel.vSlide_min PARAM */) = (data->simulationInfo->realParameter[322] /* vSlL PARAM */);
  TRACE_POP
}

/*
equation index: 2478
type: SIMPLE_ASSIGN
rearLeftWheel.vAdhesion_min = vAdL
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2478};
  (data->simulationInfo->realParameter[255] /* rearLeftWheel.vAdhesion_min PARAM */) = (data->simulationInfo->realParameter[319] /* vAdL PARAM */);
  TRACE_POP
}

/*
equation index: 2479
type: SIMPLE_ASSIGN
rearLeftWheel.N = 0.5 * g * mass * (1.0 + (-0.01) * massCenterY)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2479};
  (data->simulationInfo->realParameter[230] /* rearLeftWheel.N PARAM */) = (0.5) * (((data->simulationInfo->realParameter[95] /* g PARAM */)) * (((data->simulationInfo->realParameter[103] /* mass PARAM */)) * (1.0 + (-0.01) * ((data->simulationInfo->realParameter[104] /* massCenterY PARAM */)))));
  TRACE_POP
}

/*
equation index: 2482
type: SIMPLE_ASSIGN
rearRightWheel.zPosition = planarWorld.defaultZPosition
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2482};
  (data->simulationInfo->realParameter[298] /* rearRightWheel.zPosition PARAM */) = (data->simulationInfo->realParameter[188] /* planarWorld.defaultZPosition PARAM */);
  TRACE_POP
}

/*
equation index: 2484
type: SIMPLE_ASSIGN
rearRightWheel.cr = c_rollR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2484};
  (data->simulationInfo->realParameter[271] /* rearRightWheel.cr PARAM */) = (data->simulationInfo->realParameter[32] /* c_rollR PARAM */);
  TRACE_POP
}

/*
equation index: 2485
type: SIMPLE_ASSIGN
rearRightWheel.e[2] = rearRightWheel.r[2] / sqrt(rearRightWheel.r * rearRightWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2485};
  real_array tmp42;
  real_array tmp43;
  modelica_real tmp44;
  real_array_create(&tmp42, ((modelica_real*)&((&data->simulationInfo->realParameter[280] /* rearRightWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp43, ((modelica_real*)&((&data->simulationInfo->realParameter[280] /* rearRightWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp44 = mul_real_scalar_product(tmp42, tmp43);
  if(!(tmp44 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearRightWheel.r * rearRightWheel.r) was %g should be >= 0", tmp44);
    }
  }
  (data->simulationInfo->realParameter[276] /* rearRightWheel.e[2] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[281] /* rearRightWheel.r[2] PARAM */),sqrt(tmp44),"sqrt(rearRightWheel.r * rearRightWheel.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2486
type: SIMPLE_ASSIGN
rearRightWheel.e[1] = rearRightWheel.r[1] / sqrt(rearRightWheel.r * rearRightWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2486};
  real_array tmp45;
  real_array tmp46;
  modelica_real tmp47;
  real_array_create(&tmp45, ((modelica_real*)&((&data->simulationInfo->realParameter[280] /* rearRightWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp46, ((modelica_real*)&((&data->simulationInfo->realParameter[280] /* rearRightWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp47 = mul_real_scalar_product(tmp45, tmp46);
  if(!(tmp47 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearRightWheel.r * rearRightWheel.r) was %g should be >= 0", tmp47);
    }
  }
  (data->simulationInfo->realParameter[275] /* rearRightWheel.e[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[280] /* rearRightWheel.r[1] PARAM */),sqrt(tmp47),"sqrt(rearRightWheel.r * rearRightWheel.r)",equationIndexes);
  TRACE_POP
}

/*
equation index: 2487
type: SIMPLE_ASSIGN
rearRightWheel.l = sqrt(rearRightWheel.r * rearRightWheel.r)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2487};
  real_array tmp48;
  real_array tmp49;
  modelica_real tmp50;
  real_array_create(&tmp48, ((modelica_real*)&((&data->simulationInfo->realParameter[280] /* rearRightWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_create(&tmp49, ((modelica_real*)&((&data->simulationInfo->realParameter[280] /* rearRightWheel.r[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  tmp50 = mul_real_scalar_product(tmp48, tmp49);
  if(!(tmp50 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rearRightWheel.r * rearRightWheel.r) was %g should be >= 0", tmp50);
    }
  }
  (data->simulationInfo->realParameter[277] /* rearRightWheel.l PARAM */) = sqrt(tmp50);
  TRACE_POP
}

/*
equation index: 2488
type: SIMPLE_ASSIGN
rearRightWheel.mu_S = muSR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2488};
  (data->simulationInfo->realParameter[279] /* rearRightWheel.mu_S PARAM */) = (data->simulationInfo->realParameter[111] /* muSR PARAM */);
  TRACE_POP
}

/*
equation index: 2489
type: SIMPLE_ASSIGN
rearRightWheel.mu_A = muAR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2489};
  (data->simulationInfo->realParameter[278] /* rearRightWheel.mu_A PARAM */) = (data->simulationInfo->realParameter[108] /* muAR PARAM */);
  TRACE_POP
}

/*
equation index: 2490
type: SIMPLE_ASSIGN
rearRightWheel.sSlide = sSlR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2490};
  (data->simulationInfo->realParameter[292] /* rearRightWheel.sSlide PARAM */) = (data->simulationInfo->realParameter[315] /* sSlR PARAM */);
  TRACE_POP
}

/*
equation index: 2491
type: SIMPLE_ASSIGN
rearRightWheel.sAdhesion = sAdR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2491};
  (data->simulationInfo->realParameter[291] /* rearRightWheel.sAdhesion PARAM */) = (data->simulationInfo->realParameter[312] /* sAdR PARAM */);
  TRACE_POP
}

/*
equation index: 2492
type: SIMPLE_ASSIGN
rearRightWheel.vSlide_min = vSlR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2492};
  (data->simulationInfo->realParameter[296] /* rearRightWheel.vSlide_min PARAM */) = (data->simulationInfo->realParameter[323] /* vSlR PARAM */);
  TRACE_POP
}

/*
equation index: 2493
type: SIMPLE_ASSIGN
rearRightWheel.vAdhesion_min = vAdR
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2493};
  (data->simulationInfo->realParameter[295] /* rearRightWheel.vAdhesion_min PARAM */) = (data->simulationInfo->realParameter[320] /* vAdR PARAM */);
  TRACE_POP
}

/*
equation index: 2494
type: SIMPLE_ASSIGN
rearRightWheel.N = 0.5 * g * mass * (1.0 + (-0.01) * massCenterY)
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2494};
  (data->simulationInfo->realParameter[270] /* rearRightWheel.N PARAM */) = (0.5) * (((data->simulationInfo->realParameter[95] /* g PARAM */)) * (((data->simulationInfo->realParameter[103] /* mass PARAM */)) * (1.0 + (-0.01) * ((data->simulationInfo->realParameter[104] /* massCenterY PARAM */)))));
  TRACE_POP
}

/*
equation index: 2497
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2497};
  (data->simulationInfo->stringParameter[21] /* planarWorld.gravityArrow.arrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2498
type: SIMPLE_ASSIGN
planarWorld.gravityArrow.arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2498};
  (data->simulationInfo->stringParameter[22] /* planarWorld.gravityArrow.arrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2499
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[3].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2499};
  (data->simulationInfo->stringParameter[20] /* planarWorld.coordinateSystem.z_label.cylinders[3].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2500
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2500};
  (data->simulationInfo->stringParameter[19] /* planarWorld.coordinateSystem.z_label.cylinders[2].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2501
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2501};
  (data->simulationInfo->stringParameter[18] /* planarWorld.coordinateSystem.z_label.cylinders[1].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2503
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2503};
  (data->simulationInfo->stringParameter[16] /* planarWorld.coordinateSystem.z_arrow.arrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2504
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.z_arrow.arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2504};
  (data->simulationInfo->stringParameter[17] /* planarWorld.coordinateSystem.z_arrow.arrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2505
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2505};
  (data->simulationInfo->stringParameter[15] /* planarWorld.coordinateSystem.y_label.cylinders[2].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2506
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2506};
  (data->simulationInfo->stringParameter[14] /* planarWorld.coordinateSystem.y_label.cylinders[1].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2508
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2508};
  (data->simulationInfo->stringParameter[12] /* planarWorld.coordinateSystem.y_arrow.arrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2509
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.y_arrow.arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2509};
  (data->simulationInfo->stringParameter[13] /* planarWorld.coordinateSystem.y_arrow.arrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2510
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2510};
  (data->simulationInfo->stringParameter[11] /* planarWorld.coordinateSystem.x_label.cylinders[2].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2511
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2511};
  (data->simulationInfo->stringParameter[10] /* planarWorld.coordinateSystem.x_label.cylinders[1].shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2513
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2513};
  (data->simulationInfo->stringParameter[8] /* planarWorld.coordinateSystem.x_arrow.arrowHead.shapeType PARAM */) = _OMC_LIT5;
  TRACE_POP
}

/*
equation index: 2514
type: SIMPLE_ASSIGN
planarWorld.coordinateSystem.x_arrow.arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2514};
  (data->simulationInfo->stringParameter[9] /* planarWorld.coordinateSystem.x_arrow.arrowLine.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2518
type: SIMPLE_ASSIGN
planarWorld.defaultForceWidth = 0.05 * planarWorld.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2518};
  (data->simulationInfo->realParameter[180] /* planarWorld.defaultForceWidth PARAM */) = (0.05) * ((data->simulationInfo->realParameter[205] /* planarWorld.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2519
type: SIMPLE_ASSIGN
planarWorld.defaultForceLength = 0.1 * planarWorld.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2519};
  (data->simulationInfo->realParameter[179] /* planarWorld.defaultForceLength PARAM */) = (0.1) * ((data->simulationInfo->realParameter[205] /* planarWorld.nominalLength PARAM */));
  TRACE_POP
}

/*
equation index: 2520
type: SIMPLE_ASSIGN
planarWorld.defaultArrowDiameter = 0.025 * planarWorld.nominalLength
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_2520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2520};
  (data->simulationInfo->realParameter[177] /* planarWorld.defaultArrowDiameter PARAM */) = (0.025) * ((data->simulationInfo->realParameter[205] /* planarWorld.nominalLength PARAM */));
  TRACE_POP
}
extern void ThreeWheelVehicle3FMU_eqFunction_931(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_930(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_929(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_928(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_927(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_926(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_925(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_924(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_923(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_922(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_921(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_920(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_919(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_918(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_917(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_916(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_915(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_914(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_913(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_912(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_911(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_910(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_909(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_908(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_907(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_906(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_905(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_904(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_903(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_902(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_901(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_900(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_899(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_898(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_897(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_896(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_895(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_894(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_893(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_892(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_891(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_890(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_889(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_888(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_887(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_886(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_885(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_884(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_883(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_882(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_881(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_880(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_879(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_878(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_877(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_876(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_875(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_799(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_798(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_797(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_874(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_795(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_873(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_872(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_871(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_870(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_869(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_868(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_867(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_866(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_865(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_864(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_863(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_862(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_861(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_860(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_859(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_858(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_857(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_856(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_855(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_854(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_853(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_852(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_851(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_850(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_849(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_848(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_847(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_846(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_845(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_844(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_843(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_842(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_841(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_840(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_839(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_838(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_837(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_836(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_835(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_834(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_833(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_832(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_831(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_830(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_829(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_828(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_827(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_826(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_825(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_824(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_823(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_822(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_821(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_820(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_819(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_818(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_817(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_816(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_815(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_814(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_813(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_812(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_811(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_796(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_800(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_794(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_793(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_792(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_791(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_790(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_789(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_788(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_787(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_786(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_785(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_784(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_783(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_782(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_781(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_780(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_779(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_778(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_777(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_776(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_775(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_774(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_773(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_772(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_771(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_770(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_769(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_768(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_767(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_766(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_765(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_764(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_763(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_762(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_761(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_760(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_759(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_758(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_757(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_756(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_755(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_754(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_753(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_752(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_751(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_750(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_749(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_748(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_747(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_746(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_745(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_744(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_743(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_742(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_741(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_740(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_739(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_738(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_737(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_736(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_735(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_734(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_733(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_732(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_704(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_703(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_702(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_731(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_700(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_730(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_729(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_728(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_727(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_726(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_725(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_724(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_723(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_722(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_721(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_720(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_719(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_718(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_717(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_716(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_701(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_705(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_699(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_698(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_697(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_696(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_695(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_694(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_693(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_692(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_691(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_690(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_689(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_688(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_687(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_686(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_685(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_684(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_683(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_682(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_681(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_680(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_679(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_678(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_677(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_676(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_675(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_674(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_673(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_672(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_671(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_670(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_669(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_668(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_667(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_666(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_665(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_664(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_663(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_662(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_661(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_660(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_659(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_658(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_657(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_656(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_655(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_654(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_653(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_652(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_651(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_650(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_649(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_648(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_647(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_646(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_645(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_644(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_643(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_642(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_641(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_640(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_639(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_638(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_637(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_636(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_635(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_634(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_633(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_632(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_631(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_630(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_629(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_628(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_627(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_626(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_625(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_624(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_623(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_622(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_621(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_620(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_619(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_618(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_617(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_616(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_615(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_614(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_613(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_612(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_611(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_610(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_609(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_608(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_607(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_606(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_605(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_604(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_603(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_602(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_601(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_600(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_599(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_598(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_597(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_596(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_595(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_594(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_593(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_591(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_589(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_588(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_587(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_586(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_585(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_584(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_583(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_582(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_581(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_580(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_579(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_578(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_577(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_576(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_575(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_574(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_573(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_572(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_571(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_570(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_569(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_568(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_567(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_566(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_565(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_564(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_563(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_562(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_561(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_560(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_559(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_558(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_557(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_556(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_555(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_554(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_553(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_552(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_551(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_550(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_549(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_548(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_547(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_546(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_545(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_544(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_540(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_539(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_538(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_537(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_536(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_535(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_534(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_533(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_532(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_531(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_530(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_529(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_528(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_527(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_526(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_525(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_524(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_523(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_522(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_521(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_520(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_519(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_518(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_517(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_516(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_515(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_514(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_513(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_512(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_511(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_510(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_509(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_508(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_507(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_506(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_505(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_504(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_503(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_502(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_501(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_500(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_499(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_498(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_497(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_496(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_495(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_494(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_493(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_492(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_491(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_490(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_489(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_488(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_487(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_486(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_485(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_484(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_483(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_482(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_481(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_480(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_479(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_478(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_477(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_476(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_475(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_474(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_473(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_472(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_471(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_470(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_469(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_468(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_467(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_466(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_465(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_464(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_463(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_462(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_461(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_460(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_459(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_458(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_457(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_456(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_455(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_454(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_453(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_452(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_451(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_450(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_449(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_448(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_447(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_446(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_445(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_444(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_443(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_442(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_441(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_440(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_439(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_438(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_437(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_436(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_435(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_434(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_433(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_432(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_431(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_430(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_429(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_428(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_427(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_426(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_425(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_424(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_423(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_422(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_421(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_420(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_419(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_418(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_417(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_416(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_415(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_414(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_413(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_412(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_411(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_410(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_409(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_408(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_407(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_406(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_405(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_404(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_403(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_402(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_401(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_400(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_399(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_398(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_397(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_396(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_395(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_394(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_393(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_392(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_391(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_390(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_389(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_388(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_387(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_386(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_385(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_384(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_383(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_382(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_381(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_380(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_379(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_378(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_377(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_376(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_375(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_374(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_373(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_372(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_371(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_370(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_369(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_368(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_367(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_366(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_365(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_364(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_363(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_362(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_361(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_360(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_359(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_358(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_357(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_356(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_355(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_354(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_353(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_352(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_351(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_350(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_349(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_348(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_347(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_346(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_345(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_344(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_343(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_342(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_341(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_340(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_339(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_338(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_337(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_336(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_335(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_334(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_333(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_332(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_331(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_330(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_329(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_328(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_326(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_324(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_323(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_322(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_321(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_320(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_319(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_318(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_317(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_316(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_315(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_314(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_313(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_312(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_311(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_310(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_309(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_308(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_305(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_304(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_303(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_302(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_301(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_300(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_299(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_298(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_297(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_296(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_295(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_294(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_293(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_292(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_291(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_289(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_288(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_287(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_286(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_285(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_284(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_283(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_282(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_281(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_280(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_279(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_278(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_277(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_276(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_275(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_274(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_273(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_272(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_271(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_270(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_269(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_268(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_267(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_266(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_265(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_264(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_262(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_261(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_260(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_259(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_258(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_257(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_256(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_255(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_254(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_253(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_252(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_251(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_249(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_247(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_246(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_245(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_244(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_243(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_242(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_241(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_240(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_239(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_237(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_235(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_234(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_233(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_232(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_231(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_230(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_229(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_228(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_227(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_226(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_225(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_224(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_223(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_222(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_221(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_220(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_219(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_218(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_217(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_216(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_215(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_214(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_213(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_212(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_211(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_210(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_209(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_208(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_207(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_206(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_205(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_204(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_203(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_202(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_201(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_200(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_199(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_198(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_197(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_196(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_195(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_194(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_193(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_192(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_191(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_190(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_189(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_188(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_187(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_186(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_185(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_184(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_183(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_182(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_181(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_180(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_179(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_178(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_177(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_176(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_175(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_174(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_173(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_172(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_171(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_170(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_169(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_168(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_167(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_166(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_165(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_164(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_163(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_162(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_161(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_160(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_159(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_158(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_157(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_156(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_155(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_154(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_153(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_152(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_151(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_150(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_149(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_148(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_147(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_146(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_145(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_144(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_143(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_142(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_141(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_140(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_139(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_138(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_137(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_136(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_135(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_134(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_133(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_132(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_131(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_130(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_129(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_128(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_127(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_126(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_125(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_124(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_123(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_122(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_121(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_120(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_119(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_118(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_117(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_116(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_115(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_114(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_113(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_112(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_111(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_110(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_109(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_108(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_107(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_106(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_105(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_104(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_103(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_102(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_101(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_100(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_99(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_98(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_97(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_96(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_95(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_94(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_93(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_92(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_91(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_90(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_89(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_88(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_87(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_86(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_85(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_84(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_83(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_82(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_81(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_80(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_79(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_78(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_77(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_76(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_75(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_74(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_73(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_72(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_71(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_70(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_69(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_68(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_67(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_66(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_65(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_64(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_63(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_62(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_61(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_60(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_59(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_58(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_57(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_56(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_55(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_54(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_53(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_52(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_51(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_50(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_49(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_48(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_47(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_46(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_45(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_44(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_43(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_42(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_41(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_40(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_39(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_38(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_37(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_36(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_35(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_34(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_33(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_32(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_31(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_30(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_29(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_28(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_27(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_26(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_25(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_24(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_23(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_22(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_21(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_20(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_19(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_18(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_17(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_16(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_15(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_14(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_13(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_12(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_11(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_10(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_9(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_8(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_7(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_6(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_5(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_4(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_3(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_2(DATA *data, threadData_t *threadData);

extern void ThreeWheelVehicle3FMU_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 3438
type: ALGORITHM

  assert(planarWorld.axisDiameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.axisDiameter, has value: " + String(planarWorld.axisDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3438};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,79,"Variable violating min constraint: 0.0 <= planarWorld.axisDiameter, has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp51 = GreaterEq((data->simulationInfo->realParameter[114] /* planarWorld.axisDiameter PARAM */),0.0);
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[114] /* planarWorld.axisDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        const char* assert_cond = "(planarWorld.axisDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",46,3,48,114,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",46,3,48,114,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3439
type: ALGORITHM

  assert(planarWorld.coordinateSystem.axisDiameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.axisDiameter, has value: " + String(planarWorld.coordinateSystem.axisDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3439};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,96,"Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.axisDiameter, has value: ");
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  if(!tmp60)
  {
    tmp56 = GreaterEq((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */),0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[118] /* planarWorld.coordinateSystem.axisDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta59 = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.axisDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",15,3,16,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",15,3,16,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        }
      }
      tmp60 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3440
type: ALGORITHM

  assert(planarWorld.axisColor_x[1] >= 0 and planarWorld.axisColor_x[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_x[1] <= 255, has value: " + String(planarWorld.axisColor_x[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3440};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_x[1] <= 255, has value: ");
  modelica_string tmp64;
  modelica_metatype tmpMeta65;
  static int tmp66 = 0;
  if(!tmp66)
  {
    tmp61 = GreaterEq((data->simulationInfo->integerParameter[4] /* planarWorld.axisColor_x[1] PARAM */),((modelica_integer) 0));
    tmp62 = LessEq((data->simulationInfo->integerParameter[4] /* planarWorld.axisColor_x[1] PARAM */),((modelica_integer) 255));
    if(!(tmp61 && tmp62))
    {
      tmp64 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[4] /* planarWorld.axisColor_x[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta65 = stringAppend(MMC_REFSTRINGLIT(tmp63),tmp64);
      {
        const char* assert_cond = "(planarWorld.axisColor_x[1] >= 0 and planarWorld.axisColor_x[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",51,3,53,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta65));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",51,3,53,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta65));
        }
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3441
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_x[1] >= 0 and planarWorld.coordinateSystem.color_x[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_x[1] <= 255, has value: " + String(planarWorld.coordinateSystem.color_x[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3441};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_x[1] <= 255, has value: ");
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static int tmp72 = 0;
  if(!tmp72)
  {
    tmp67 = GreaterEq((data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */),((modelica_integer) 0));
    tmp68 = LessEq((data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */),((modelica_integer) 255));
    if(!(tmp67 && tmp68))
    {
      tmp70 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[13] /* planarWorld.coordinateSystem.color_x[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta71 = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_x[1] >= 0 and planarWorld.coordinateSystem.color_x[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",18,3,20,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",18,3,20,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        }
      }
      tmp72 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3442
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_arrow.color[1] >= 0 and planarWorld.coordinateSystem.x_arrow.color[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_arrow.color[1] <= 255, has value: " + String(planarWorld.coordinateSystem.x_arrow.color[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3442};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_arrow.color[1] <= 255, has value: ");
  modelica_string tmp76;
  modelica_metatype tmpMeta77;
  static int tmp78 = 0;
  if(!tmp78)
  {
    tmp73 = GreaterEq((data->simulationInfo->integerParameter[22] /* planarWorld.coordinateSystem.x_arrow.color[1] PARAM */),((modelica_integer) 0));
    tmp74 = LessEq((data->simulationInfo->integerParameter[22] /* planarWorld.coordinateSystem.x_arrow.color[1] PARAM */),((modelica_integer) 255));
    if(!(tmp73 && tmp74))
    {
      tmp76 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[22] /* planarWorld.coordinateSystem.x_arrow.color[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta77 = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_arrow.color[1] >= 0 and planarWorld.coordinateSystem.x_arrow.color[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        }
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3443
type: ALGORITHM

  assert(planarWorld.axisColor_x[2] >= 0 and planarWorld.axisColor_x[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_x[2] <= 255, has value: " + String(planarWorld.axisColor_x[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3443};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_x[2] <= 255, has value: ");
  modelica_string tmp82;
  modelica_metatype tmpMeta83;
  static int tmp84 = 0;
  if(!tmp84)
  {
    tmp79 = GreaterEq((data->simulationInfo->integerParameter[5] /* planarWorld.axisColor_x[2] PARAM */),((modelica_integer) 0));
    tmp80 = LessEq((data->simulationInfo->integerParameter[5] /* planarWorld.axisColor_x[2] PARAM */),((modelica_integer) 255));
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[5] /* planarWorld.axisColor_x[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta83 = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        const char* assert_cond = "(planarWorld.axisColor_x[2] >= 0 and planarWorld.axisColor_x[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",51,3,53,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",51,3,53,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        }
      }
      tmp84 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3444
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_x[2] >= 0 and planarWorld.coordinateSystem.color_x[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_x[2] <= 255, has value: " + String(planarWorld.coordinateSystem.color_x[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3444};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_x[2] <= 255, has value: ");
  modelica_string tmp88;
  modelica_metatype tmpMeta89;
  static int tmp90 = 0;
  if(!tmp90)
  {
    tmp85 = GreaterEq((data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */),((modelica_integer) 0));
    tmp86 = LessEq((data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */),((modelica_integer) 255));
    if(!(tmp85 && tmp86))
    {
      tmp88 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[14] /* planarWorld.coordinateSystem.color_x[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta89 = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_x[2] >= 0 and planarWorld.coordinateSystem.color_x[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",18,3,20,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",18,3,20,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        }
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3445
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_arrow.color[2] >= 0 and planarWorld.coordinateSystem.x_arrow.color[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_arrow.color[2] <= 255, has value: " + String(planarWorld.coordinateSystem.x_arrow.color[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3445};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_arrow.color[2] <= 255, has value: ");
  modelica_string tmp94;
  modelica_metatype tmpMeta95;
  static int tmp96 = 0;
  if(!tmp96)
  {
    tmp91 = GreaterEq((data->simulationInfo->integerParameter[23] /* planarWorld.coordinateSystem.x_arrow.color[2] PARAM */),((modelica_integer) 0));
    tmp92 = LessEq((data->simulationInfo->integerParameter[23] /* planarWorld.coordinateSystem.x_arrow.color[2] PARAM */),((modelica_integer) 255));
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[23] /* planarWorld.coordinateSystem.x_arrow.color[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta95 = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_arrow.color[2] >= 0 and planarWorld.coordinateSystem.x_arrow.color[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        }
      }
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3446
type: ALGORITHM

  assert(planarWorld.axisColor_x[3] >= 0 and planarWorld.axisColor_x[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_x[3] <= 255, has value: " + String(planarWorld.axisColor_x[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3446};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_x[3] <= 255, has value: ");
  modelica_string tmp100;
  modelica_metatype tmpMeta101;
  static int tmp102 = 0;
  if(!tmp102)
  {
    tmp97 = GreaterEq((data->simulationInfo->integerParameter[6] /* planarWorld.axisColor_x[3] PARAM */),((modelica_integer) 0));
    tmp98 = LessEq((data->simulationInfo->integerParameter[6] /* planarWorld.axisColor_x[3] PARAM */),((modelica_integer) 255));
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[6] /* planarWorld.axisColor_x[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta101 = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        const char* assert_cond = "(planarWorld.axisColor_x[3] >= 0 and planarWorld.axisColor_x[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",51,3,53,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",51,3,53,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        }
      }
      tmp102 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3447
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_x[3] >= 0 and planarWorld.coordinateSystem.color_x[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_x[3] <= 255, has value: " + String(planarWorld.coordinateSystem.color_x[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3447};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_x[3] <= 255, has value: ");
  modelica_string tmp106;
  modelica_metatype tmpMeta107;
  static int tmp108 = 0;
  if(!tmp108)
  {
    tmp103 = GreaterEq((data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */),((modelica_integer) 0));
    tmp104 = LessEq((data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */),((modelica_integer) 255));
    if(!(tmp103 && tmp104))
    {
      tmp106 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[15] /* planarWorld.coordinateSystem.color_x[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta107 = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_x[3] >= 0 and planarWorld.coordinateSystem.color_x[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",18,3,20,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",18,3,20,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        }
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3448
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_arrow.color[3] >= 0 and planarWorld.coordinateSystem.x_arrow.color[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_arrow.color[3] <= 255, has value: " + String(planarWorld.coordinateSystem.x_arrow.color[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3448};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_arrow.color[3] <= 255, has value: ");
  modelica_string tmp112;
  modelica_metatype tmpMeta113;
  static int tmp114 = 0;
  if(!tmp114)
  {
    tmp109 = GreaterEq((data->simulationInfo->integerParameter[24] /* planarWorld.coordinateSystem.x_arrow.color[3] PARAM */),((modelica_integer) 0));
    tmp110 = LessEq((data->simulationInfo->integerParameter[24] /* planarWorld.coordinateSystem.x_arrow.color[3] PARAM */),((modelica_integer) 255));
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[24] /* planarWorld.coordinateSystem.x_arrow.color[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta113 = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_arrow.color[3] >= 0 and planarWorld.coordinateSystem.x_arrow.color[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        }
      }
      tmp114 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3449
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_label.color[1] >= 0 and planarWorld.coordinateSystem.x_label.color[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_label.color[1] <= 255, has value: " + String(planarWorld.coordinateSystem.x_label.color[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3449};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_label.color[1] <= 255, has value: ");
  modelica_string tmp118;
  modelica_metatype tmpMeta119;
  static int tmp120 = 0;
  if(!tmp120)
  {
    tmp115 = GreaterEq((data->simulationInfo->integerParameter[25] /* planarWorld.coordinateSystem.x_label.color[1] PARAM */),((modelica_integer) 0));
    tmp116 = LessEq((data->simulationInfo->integerParameter[25] /* planarWorld.coordinateSystem.x_label.color[1] PARAM */),((modelica_integer) 255));
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[25] /* planarWorld.coordinateSystem.x_label.color[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta119 = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_label.color[1] >= 0 and planarWorld.coordinateSystem.x_label.color[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        }
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3450
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_label.color[2] >= 0 and planarWorld.coordinateSystem.x_label.color[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_label.color[2] <= 255, has value: " + String(planarWorld.coordinateSystem.x_label.color[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3450};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_label.color[2] <= 255, has value: ");
  modelica_string tmp124;
  modelica_metatype tmpMeta125;
  static int tmp126 = 0;
  if(!tmp126)
  {
    tmp121 = GreaterEq((data->simulationInfo->integerParameter[26] /* planarWorld.coordinateSystem.x_label.color[2] PARAM */),((modelica_integer) 0));
    tmp122 = LessEq((data->simulationInfo->integerParameter[26] /* planarWorld.coordinateSystem.x_label.color[2] PARAM */),((modelica_integer) 255));
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[26] /* planarWorld.coordinateSystem.x_label.color[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta125 = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_label.color[2] >= 0 and planarWorld.coordinateSystem.x_label.color[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        }
      }
      tmp126 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3451
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_label.color[3] >= 0 and planarWorld.coordinateSystem.x_label.color[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_label.color[3] <= 255, has value: " + String(planarWorld.coordinateSystem.x_label.color[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3451};
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.x_label.color[3] <= 255, has value: ");
  modelica_string tmp130;
  modelica_metatype tmpMeta131;
  static int tmp132 = 0;
  if(!tmp132)
  {
    tmp127 = GreaterEq((data->simulationInfo->integerParameter[27] /* planarWorld.coordinateSystem.x_label.color[3] PARAM */),((modelica_integer) 0));
    tmp128 = LessEq((data->simulationInfo->integerParameter[27] /* planarWorld.coordinateSystem.x_label.color[3] PARAM */),((modelica_integer) 255));
    if(!(tmp127 && tmp128))
    {
      tmp130 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[27] /* planarWorld.coordinateSystem.x_label.color[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta131 = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_label.color[3] >= 0 and planarWorld.coordinateSystem.x_label.color[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        }
      }
      tmp132 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3452
type: ALGORITHM

  assert(planarWorld.axisColor_y[1] >= 0 and planarWorld.axisColor_y[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_y[1] <= 255, has value: " + String(planarWorld.axisColor_y[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3452};
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_y[1] <= 255, has value: ");
  modelica_string tmp136;
  modelica_metatype tmpMeta137;
  static int tmp138 = 0;
  if(!tmp138)
  {
    tmp133 = GreaterEq((data->simulationInfo->integerParameter[7] /* planarWorld.axisColor_y[1] PARAM */),((modelica_integer) 0));
    tmp134 = LessEq((data->simulationInfo->integerParameter[7] /* planarWorld.axisColor_y[1] PARAM */),((modelica_integer) 255));
    if(!(tmp133 && tmp134))
    {
      tmp136 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[7] /* planarWorld.axisColor_y[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta137 = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        const char* assert_cond = "(planarWorld.axisColor_y[1] >= 0 and planarWorld.axisColor_y[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",54,3,55,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",54,3,55,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        }
      }
      tmp138 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3453
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_y[1] >= 0 and planarWorld.coordinateSystem.color_y[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_y[1] <= 255, has value: " + String(planarWorld.coordinateSystem.color_y[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3453};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_y[1] <= 255, has value: ");
  modelica_string tmp142;
  modelica_metatype tmpMeta143;
  static int tmp144 = 0;
  if(!tmp144)
  {
    tmp139 = GreaterEq((data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */),((modelica_integer) 0));
    tmp140 = LessEq((data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */),((modelica_integer) 255));
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[16] /* planarWorld.coordinateSystem.color_y[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta143 = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_y[1] >= 0 and planarWorld.coordinateSystem.color_y[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",21,3,22,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",21,3,22,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        }
      }
      tmp144 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3454
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_arrow.color[1] >= 0 and planarWorld.coordinateSystem.y_arrow.color[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_arrow.color[1] <= 255, has value: " + String(planarWorld.coordinateSystem.y_arrow.color[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3454};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_arrow.color[1] <= 255, has value: ");
  modelica_string tmp148;
  modelica_metatype tmpMeta149;
  static int tmp150 = 0;
  if(!tmp150)
  {
    tmp145 = GreaterEq((data->simulationInfo->integerParameter[29] /* planarWorld.coordinateSystem.y_arrow.color[1] PARAM */),((modelica_integer) 0));
    tmp146 = LessEq((data->simulationInfo->integerParameter[29] /* planarWorld.coordinateSystem.y_arrow.color[1] PARAM */),((modelica_integer) 255));
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[29] /* planarWorld.coordinateSystem.y_arrow.color[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta149 = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_arrow.color[1] >= 0 and planarWorld.coordinateSystem.y_arrow.color[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        }
      }
      tmp150 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3455
type: ALGORITHM

  assert(planarWorld.axisColor_y[2] >= 0 and planarWorld.axisColor_y[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_y[2] <= 255, has value: " + String(planarWorld.axisColor_y[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3455};
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_y[2] <= 255, has value: ");
  modelica_string tmp154;
  modelica_metatype tmpMeta155;
  static int tmp156 = 0;
  if(!tmp156)
  {
    tmp151 = GreaterEq((data->simulationInfo->integerParameter[8] /* planarWorld.axisColor_y[2] PARAM */),((modelica_integer) 0));
    tmp152 = LessEq((data->simulationInfo->integerParameter[8] /* planarWorld.axisColor_y[2] PARAM */),((modelica_integer) 255));
    if(!(tmp151 && tmp152))
    {
      tmp154 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[8] /* planarWorld.axisColor_y[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta155 = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        const char* assert_cond = "(planarWorld.axisColor_y[2] >= 0 and planarWorld.axisColor_y[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",54,3,55,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",54,3,55,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        }
      }
      tmp156 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3456
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_y[2] >= 0 and planarWorld.coordinateSystem.color_y[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_y[2] <= 255, has value: " + String(planarWorld.coordinateSystem.color_y[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3456};
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_y[2] <= 255, has value: ");
  modelica_string tmp160;
  modelica_metatype tmpMeta161;
  static int tmp162 = 0;
  if(!tmp162)
  {
    tmp157 = GreaterEq((data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */),((modelica_integer) 0));
    tmp158 = LessEq((data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */),((modelica_integer) 255));
    if(!(tmp157 && tmp158))
    {
      tmp160 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[17] /* planarWorld.coordinateSystem.color_y[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta161 = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_y[2] >= 0 and planarWorld.coordinateSystem.color_y[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",21,3,22,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",21,3,22,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta161));
        }
      }
      tmp162 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3457
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_arrow.color[2] >= 0 and planarWorld.coordinateSystem.y_arrow.color[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_arrow.color[2] <= 255, has value: " + String(planarWorld.coordinateSystem.y_arrow.color[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3457};
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_arrow.color[2] <= 255, has value: ");
  modelica_string tmp166;
  modelica_metatype tmpMeta167;
  static int tmp168 = 0;
  if(!tmp168)
  {
    tmp163 = GreaterEq((data->simulationInfo->integerParameter[30] /* planarWorld.coordinateSystem.y_arrow.color[2] PARAM */),((modelica_integer) 0));
    tmp164 = LessEq((data->simulationInfo->integerParameter[30] /* planarWorld.coordinateSystem.y_arrow.color[2] PARAM */),((modelica_integer) 255));
    if(!(tmp163 && tmp164))
    {
      tmp166 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[30] /* planarWorld.coordinateSystem.y_arrow.color[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta167 = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_arrow.color[2] >= 0 and planarWorld.coordinateSystem.y_arrow.color[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        }
      }
      tmp168 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3458
type: ALGORITHM

  assert(planarWorld.axisColor_y[3] >= 0 and planarWorld.axisColor_y[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_y[3] <= 255, has value: " + String(planarWorld.axisColor_y[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3458};
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_y[3] <= 255, has value: ");
  modelica_string tmp172;
  modelica_metatype tmpMeta173;
  static int tmp174 = 0;
  if(!tmp174)
  {
    tmp169 = GreaterEq((data->simulationInfo->integerParameter[9] /* planarWorld.axisColor_y[3] PARAM */),((modelica_integer) 0));
    tmp170 = LessEq((data->simulationInfo->integerParameter[9] /* planarWorld.axisColor_y[3] PARAM */),((modelica_integer) 255));
    if(!(tmp169 && tmp170))
    {
      tmp172 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[9] /* planarWorld.axisColor_y[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta173 = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        const char* assert_cond = "(planarWorld.axisColor_y[3] >= 0 and planarWorld.axisColor_y[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",54,3,55,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",54,3,55,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta173));
        }
      }
      tmp174 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3459
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_y[3] >= 0 and planarWorld.coordinateSystem.color_y[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_y[3] <= 255, has value: " + String(planarWorld.coordinateSystem.color_y[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3459};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_y[3] <= 255, has value: ");
  modelica_string tmp178;
  modelica_metatype tmpMeta179;
  static int tmp180 = 0;
  if(!tmp180)
  {
    tmp175 = GreaterEq((data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */),((modelica_integer) 0));
    tmp176 = LessEq((data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */),((modelica_integer) 255));
    if(!(tmp175 && tmp176))
    {
      tmp178 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[18] /* planarWorld.coordinateSystem.color_y[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta179 = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_y[3] >= 0 and planarWorld.coordinateSystem.color_y[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",21,3,22,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",21,3,22,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
        }
      }
      tmp180 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3460
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_arrow.color[3] >= 0 and planarWorld.coordinateSystem.y_arrow.color[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_arrow.color[3] <= 255, has value: " + String(planarWorld.coordinateSystem.y_arrow.color[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3460};
  modelica_boolean tmp181;
  modelica_boolean tmp182;
  static const MMC_DEFSTRINGLIT(tmp183,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_arrow.color[3] <= 255, has value: ");
  modelica_string tmp184;
  modelica_metatype tmpMeta185;
  static int tmp186 = 0;
  if(!tmp186)
  {
    tmp181 = GreaterEq((data->simulationInfo->integerParameter[31] /* planarWorld.coordinateSystem.y_arrow.color[3] PARAM */),((modelica_integer) 0));
    tmp182 = LessEq((data->simulationInfo->integerParameter[31] /* planarWorld.coordinateSystem.y_arrow.color[3] PARAM */),((modelica_integer) 255));
    if(!(tmp181 && tmp182))
    {
      tmp184 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[31] /* planarWorld.coordinateSystem.y_arrow.color[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta185 = stringAppend(MMC_REFSTRINGLIT(tmp183),tmp184);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_arrow.color[3] >= 0 and planarWorld.coordinateSystem.y_arrow.color[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta185));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta185));
        }
      }
      tmp186 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3461
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_label.color[1] >= 0 and planarWorld.coordinateSystem.y_label.color[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_label.color[1] <= 255, has value: " + String(planarWorld.coordinateSystem.y_label.color[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3461};
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_label.color[1] <= 255, has value: ");
  modelica_string tmp190;
  modelica_metatype tmpMeta191;
  static int tmp192 = 0;
  if(!tmp192)
  {
    tmp187 = GreaterEq((data->simulationInfo->integerParameter[32] /* planarWorld.coordinateSystem.y_label.color[1] PARAM */),((modelica_integer) 0));
    tmp188 = LessEq((data->simulationInfo->integerParameter[32] /* planarWorld.coordinateSystem.y_label.color[1] PARAM */),((modelica_integer) 255));
    if(!(tmp187 && tmp188))
    {
      tmp190 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[32] /* planarWorld.coordinateSystem.y_label.color[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta191 = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_label.color[1] >= 0 and planarWorld.coordinateSystem.y_label.color[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta191));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta191));
        }
      }
      tmp192 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3462
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_label.color[2] >= 0 and planarWorld.coordinateSystem.y_label.color[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_label.color[2] <= 255, has value: " + String(planarWorld.coordinateSystem.y_label.color[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3462};
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_label.color[2] <= 255, has value: ");
  modelica_string tmp196;
  modelica_metatype tmpMeta197;
  static int tmp198 = 0;
  if(!tmp198)
  {
    tmp193 = GreaterEq((data->simulationInfo->integerParameter[33] /* planarWorld.coordinateSystem.y_label.color[2] PARAM */),((modelica_integer) 0));
    tmp194 = LessEq((data->simulationInfo->integerParameter[33] /* planarWorld.coordinateSystem.y_label.color[2] PARAM */),((modelica_integer) 255));
    if(!(tmp193 && tmp194))
    {
      tmp196 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[33] /* planarWorld.coordinateSystem.y_label.color[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta197 = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_label.color[2] >= 0 and planarWorld.coordinateSystem.y_label.color[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        }
      }
      tmp198 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3463
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_label.color[3] >= 0 and planarWorld.coordinateSystem.y_label.color[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_label.color[3] <= 255, has value: " + String(planarWorld.coordinateSystem.y_label.color[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3463};
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.y_label.color[3] <= 255, has value: ");
  modelica_string tmp202;
  modelica_metatype tmpMeta203;
  static int tmp204 = 0;
  if(!tmp204)
  {
    tmp199 = GreaterEq((data->simulationInfo->integerParameter[34] /* planarWorld.coordinateSystem.y_label.color[3] PARAM */),((modelica_integer) 0));
    tmp200 = LessEq((data->simulationInfo->integerParameter[34] /* planarWorld.coordinateSystem.y_label.color[3] PARAM */),((modelica_integer) 255));
    if(!(tmp199 && tmp200))
    {
      tmp202 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[34] /* planarWorld.coordinateSystem.y_label.color[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta203 = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_label.color[3] >= 0 and planarWorld.coordinateSystem.y_label.color[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta203));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta203));
        }
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3464
type: ALGORITHM

  assert(planarWorld.axisColor_z[1] >= 0 and planarWorld.axisColor_z[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_z[1] <= 255, has value: " + String(planarWorld.axisColor_z[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3464};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_z[1] <= 255, has value: ");
  modelica_string tmp208;
  modelica_metatype tmpMeta209;
  static int tmp210 = 0;
  if(!tmp210)
  {
    tmp205 = GreaterEq((data->simulationInfo->integerParameter[10] /* planarWorld.axisColor_z[1] PARAM */),((modelica_integer) 0));
    tmp206 = LessEq((data->simulationInfo->integerParameter[10] /* planarWorld.axisColor_z[1] PARAM */),((modelica_integer) 255));
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[10] /* planarWorld.axisColor_z[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta209 = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        const char* assert_cond = "(planarWorld.axisColor_z[1] >= 0 and planarWorld.axisColor_z[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",56,3,57,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",56,3,57,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta209));
        }
      }
      tmp210 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3465
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_z[1] >= 0 and planarWorld.coordinateSystem.color_z[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_z[1] <= 255, has value: " + String(planarWorld.coordinateSystem.color_z[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3465};
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_z[1] <= 255, has value: ");
  modelica_string tmp214;
  modelica_metatype tmpMeta215;
  static int tmp216 = 0;
  if(!tmp216)
  {
    tmp211 = GreaterEq((data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */),((modelica_integer) 0));
    tmp212 = LessEq((data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */),((modelica_integer) 255));
    if(!(tmp211 && tmp212))
    {
      tmp214 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[19] /* planarWorld.coordinateSystem.color_z[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta215 = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_z[1] >= 0 and planarWorld.coordinateSystem.color_z[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",23,3,24,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta215));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",23,3,24,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta215));
        }
      }
      tmp216 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3466
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_arrow.color[1] >= 0 and planarWorld.coordinateSystem.z_arrow.color[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_arrow.color[1] <= 255, has value: " + String(planarWorld.coordinateSystem.z_arrow.color[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3466};
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  static const MMC_DEFSTRINGLIT(tmp219,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_arrow.color[1] <= 255, has value: ");
  modelica_string tmp220;
  modelica_metatype tmpMeta221;
  static int tmp222 = 0;
  if(!tmp222)
  {
    tmp217 = GreaterEq((data->simulationInfo->integerParameter[36] /* planarWorld.coordinateSystem.z_arrow.color[1] PARAM */),((modelica_integer) 0));
    tmp218 = LessEq((data->simulationInfo->integerParameter[36] /* planarWorld.coordinateSystem.z_arrow.color[1] PARAM */),((modelica_integer) 255));
    if(!(tmp217 && tmp218))
    {
      tmp220 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[36] /* planarWorld.coordinateSystem.z_arrow.color[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta221 = stringAppend(MMC_REFSTRINGLIT(tmp219),tmp220);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_arrow.color[1] >= 0 and planarWorld.coordinateSystem.z_arrow.color[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta221));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta221));
        }
      }
      tmp222 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3467
type: ALGORITHM

  assert(planarWorld.axisColor_z[2] >= 0 and planarWorld.axisColor_z[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_z[2] <= 255, has value: " + String(planarWorld.axisColor_z[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3467};
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_z[2] <= 255, has value: ");
  modelica_string tmp226;
  modelica_metatype tmpMeta227;
  static int tmp228 = 0;
  if(!tmp228)
  {
    tmp223 = GreaterEq((data->simulationInfo->integerParameter[11] /* planarWorld.axisColor_z[2] PARAM */),((modelica_integer) 0));
    tmp224 = LessEq((data->simulationInfo->integerParameter[11] /* planarWorld.axisColor_z[2] PARAM */),((modelica_integer) 255));
    if(!(tmp223 && tmp224))
    {
      tmp226 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[11] /* planarWorld.axisColor_z[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta227 = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        const char* assert_cond = "(planarWorld.axisColor_z[2] >= 0 and planarWorld.axisColor_z[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",56,3,57,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",56,3,57,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        }
      }
      tmp228 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3468
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_z[2] >= 0 and planarWorld.coordinateSystem.color_z[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_z[2] <= 255, has value: " + String(planarWorld.coordinateSystem.color_z[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3468};
  modelica_boolean tmp229;
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_z[2] <= 255, has value: ");
  modelica_string tmp232;
  modelica_metatype tmpMeta233;
  static int tmp234 = 0;
  if(!tmp234)
  {
    tmp229 = GreaterEq((data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */),((modelica_integer) 0));
    tmp230 = LessEq((data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */),((modelica_integer) 255));
    if(!(tmp229 && tmp230))
    {
      tmp232 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[20] /* planarWorld.coordinateSystem.color_z[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta233 = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_z[2] >= 0 and planarWorld.coordinateSystem.color_z[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",23,3,24,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",23,3,24,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        }
      }
      tmp234 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3469
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_arrow.color[2] >= 0 and planarWorld.coordinateSystem.z_arrow.color[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_arrow.color[2] <= 255, has value: " + String(planarWorld.coordinateSystem.z_arrow.color[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3469};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_arrow.color[2] <= 255, has value: ");
  modelica_string tmp238;
  modelica_metatype tmpMeta239;
  static int tmp240 = 0;
  if(!tmp240)
  {
    tmp235 = GreaterEq((data->simulationInfo->integerParameter[37] /* planarWorld.coordinateSystem.z_arrow.color[2] PARAM */),((modelica_integer) 0));
    tmp236 = LessEq((data->simulationInfo->integerParameter[37] /* planarWorld.coordinateSystem.z_arrow.color[2] PARAM */),((modelica_integer) 255));
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[37] /* planarWorld.coordinateSystem.z_arrow.color[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta239 = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_arrow.color[2] >= 0 and planarWorld.coordinateSystem.z_arrow.color[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta239));
        }
      }
      tmp240 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3470
type: ALGORITHM

  assert(planarWorld.axisColor_z[3] >= 0 and planarWorld.axisColor_z[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.axisColor_z[3] <= 255, has value: " + String(planarWorld.axisColor_z[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3470};
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,90,"Variable violating min/max constraint: 0 <= planarWorld.axisColor_z[3] <= 255, has value: ");
  modelica_string tmp244;
  modelica_metatype tmpMeta245;
  static int tmp246 = 0;
  if(!tmp246)
  {
    tmp241 = GreaterEq((data->simulationInfo->integerParameter[12] /* planarWorld.axisColor_z[3] PARAM */),((modelica_integer) 0));
    tmp242 = LessEq((data->simulationInfo->integerParameter[12] /* planarWorld.axisColor_z[3] PARAM */),((modelica_integer) 255));
    if(!(tmp241 && tmp242))
    {
      tmp244 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[12] /* planarWorld.axisColor_z[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta245 = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        const char* assert_cond = "(planarWorld.axisColor_z[3] >= 0 and planarWorld.axisColor_z[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",56,3,57,152,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",56,3,57,152,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        }
      }
      tmp246 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3471
type: ALGORITHM

  assert(planarWorld.coordinateSystem.color_z[3] >= 0 and planarWorld.coordinateSystem.color_z[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_z[3] <= 255, has value: " + String(planarWorld.coordinateSystem.color_z[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3471};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,103,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.color_z[3] <= 255, has value: ");
  modelica_string tmp250;
  modelica_metatype tmpMeta251;
  static int tmp252 = 0;
  if(!tmp252)
  {
    tmp247 = GreaterEq((data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */),((modelica_integer) 0));
    tmp248 = LessEq((data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */),((modelica_integer) 255));
    if(!(tmp247 && tmp248))
    {
      tmp250 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[21] /* planarWorld.coordinateSystem.color_z[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta251 = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.color_z[3] >= 0 and planarWorld.coordinateSystem.color_z[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",23,3,24,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta251));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/CoordinateSystem.mo",23,3,24,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta251));
        }
      }
      tmp252 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3472
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_arrow.color[3] >= 0 and planarWorld.coordinateSystem.z_arrow.color[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_arrow.color[3] <= 255, has value: " + String(planarWorld.coordinateSystem.z_arrow.color[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3472};
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_arrow.color[3] <= 255, has value: ");
  modelica_string tmp256;
  modelica_metatype tmpMeta257;
  static int tmp258 = 0;
  if(!tmp258)
  {
    tmp253 = GreaterEq((data->simulationInfo->integerParameter[38] /* planarWorld.coordinateSystem.z_arrow.color[3] PARAM */),((modelica_integer) 0));
    tmp254 = LessEq((data->simulationInfo->integerParameter[38] /* planarWorld.coordinateSystem.z_arrow.color[3] PARAM */),((modelica_integer) 255));
    if(!(tmp253 && tmp254))
    {
      tmp256 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[38] /* planarWorld.coordinateSystem.z_arrow.color[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta257 = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_arrow.color[3] >= 0 and planarWorld.coordinateSystem.z_arrow.color[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta257));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta257));
        }
      }
      tmp258 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3473
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_label.color[1] >= 0 and planarWorld.coordinateSystem.z_label.color[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_label.color[1] <= 255, has value: " + String(planarWorld.coordinateSystem.z_label.color[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3473};
  modelica_boolean tmp259;
  modelica_boolean tmp260;
  static const MMC_DEFSTRINGLIT(tmp261,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_label.color[1] <= 255, has value: ");
  modelica_string tmp262;
  modelica_metatype tmpMeta263;
  static int tmp264 = 0;
  if(!tmp264)
  {
    tmp259 = GreaterEq((data->simulationInfo->integerParameter[39] /* planarWorld.coordinateSystem.z_label.color[1] PARAM */),((modelica_integer) 0));
    tmp260 = LessEq((data->simulationInfo->integerParameter[39] /* planarWorld.coordinateSystem.z_label.color[1] PARAM */),((modelica_integer) 255));
    if(!(tmp259 && tmp260))
    {
      tmp262 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[39] /* planarWorld.coordinateSystem.z_label.color[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta263 = stringAppend(MMC_REFSTRINGLIT(tmp261),tmp262);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_label.color[1] >= 0 and planarWorld.coordinateSystem.z_label.color[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta263));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta263));
        }
      }
      tmp264 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3474
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_label.color[2] >= 0 and planarWorld.coordinateSystem.z_label.color[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_label.color[2] <= 255, has value: " + String(planarWorld.coordinateSystem.z_label.color[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3474};
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  static const MMC_DEFSTRINGLIT(tmp267,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_label.color[2] <= 255, has value: ");
  modelica_string tmp268;
  modelica_metatype tmpMeta269;
  static int tmp270 = 0;
  if(!tmp270)
  {
    tmp265 = GreaterEq((data->simulationInfo->integerParameter[40] /* planarWorld.coordinateSystem.z_label.color[2] PARAM */),((modelica_integer) 0));
    tmp266 = LessEq((data->simulationInfo->integerParameter[40] /* planarWorld.coordinateSystem.z_label.color[2] PARAM */),((modelica_integer) 255));
    if(!(tmp265 && tmp266))
    {
      tmp268 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[40] /* planarWorld.coordinateSystem.z_label.color[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta269 = stringAppend(MMC_REFSTRINGLIT(tmp267),tmp268);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_label.color[2] >= 0 and planarWorld.coordinateSystem.z_label.color[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta269));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta269));
        }
      }
      tmp270 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3475
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_label.color[3] >= 0 and planarWorld.coordinateSystem.z_label.color[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_label.color[3] <= 255, has value: " + String(planarWorld.coordinateSystem.z_label.color[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3475};
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,109,"Variable violating min/max constraint: 0 <= planarWorld.coordinateSystem.z_label.color[3] <= 255, has value: ");
  modelica_string tmp274;
  modelica_metatype tmpMeta275;
  static int tmp276 = 0;
  if(!tmp276)
  {
    tmp271 = GreaterEq((data->simulationInfo->integerParameter[41] /* planarWorld.coordinateSystem.z_label.color[3] PARAM */),((modelica_integer) 0));
    tmp272 = LessEq((data->simulationInfo->integerParameter[41] /* planarWorld.coordinateSystem.z_label.color[3] PARAM */),((modelica_integer) 255));
    if(!(tmp271 && tmp272))
    {
      tmp274 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[41] /* planarWorld.coordinateSystem.z_label.color[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta275 = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_label.color[3] >= 0 and planarWorld.coordinateSystem.z_label.color[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta275));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",29,3,31,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta275));
        }
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3476
type: ALGORITHM

  assert(planarWorld.gravityArrowColor[1] >= 0 and planarWorld.gravityArrowColor[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.gravityArrowColor[1] <= 255, has value: " + String(planarWorld.gravityArrowColor[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3476};
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,96,"Variable violating min/max constraint: 0 <= planarWorld.gravityArrowColor[1] <= 255, has value: ");
  modelica_string tmp280;
  modelica_metatype tmpMeta281;
  static int tmp282 = 0;
  if(!tmp282)
  {
    tmp277 = GreaterEq((data->simulationInfo->integerParameter[46] /* planarWorld.gravityArrowColor[1] PARAM */),((modelica_integer) 0));
    tmp278 = LessEq((data->simulationInfo->integerParameter[46] /* planarWorld.gravityArrowColor[1] PARAM */),((modelica_integer) 255));
    if(!(tmp277 && tmp278))
    {
      tmp280 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[46] /* planarWorld.gravityArrowColor[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta281 = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        const char* assert_cond = "(planarWorld.gravityArrowColor[1] >= 0 and planarWorld.gravityArrowColor[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",70,3,73,52,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta281));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",70,3,73,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta281));
        }
      }
      tmp282 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3477
type: ALGORITHM

  assert(planarWorld.gravityArrow.color[1] >= 0 and planarWorld.gravityArrow.color[1] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.gravityArrow.color[1] <= 255, has value: " + String(planarWorld.gravityArrow.color[1], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3477};
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,97,"Variable violating min/max constraint: 0 <= planarWorld.gravityArrow.color[1] <= 255, has value: ");
  modelica_string tmp286;
  modelica_metatype tmpMeta287;
  static int tmp288 = 0;
  if(!tmp288)
  {
    tmp283 = GreaterEq((data->simulationInfo->integerParameter[43] /* planarWorld.gravityArrow.color[1] PARAM */),((modelica_integer) 0));
    tmp284 = LessEq((data->simulationInfo->integerParameter[43] /* planarWorld.gravityArrow.color[1] PARAM */),((modelica_integer) 255));
    if(!(tmp283 && tmp284))
    {
      tmp286 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[43] /* planarWorld.gravityArrow.color[1] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta287 = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        const char* assert_cond = "(planarWorld.gravityArrow.color[1] >= 0 and planarWorld.gravityArrow.color[1] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        }
      }
      tmp288 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3478
type: ALGORITHM

  assert(planarWorld.gravityArrowColor[2] >= 0 and planarWorld.gravityArrowColor[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.gravityArrowColor[2] <= 255, has value: " + String(planarWorld.gravityArrowColor[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3478};
  modelica_boolean tmp289;
  modelica_boolean tmp290;
  static const MMC_DEFSTRINGLIT(tmp291,96,"Variable violating min/max constraint: 0 <= planarWorld.gravityArrowColor[2] <= 255, has value: ");
  modelica_string tmp292;
  modelica_metatype tmpMeta293;
  static int tmp294 = 0;
  if(!tmp294)
  {
    tmp289 = GreaterEq((data->simulationInfo->integerParameter[47] /* planarWorld.gravityArrowColor[2] PARAM */),((modelica_integer) 0));
    tmp290 = LessEq((data->simulationInfo->integerParameter[47] /* planarWorld.gravityArrowColor[2] PARAM */),((modelica_integer) 255));
    if(!(tmp289 && tmp290))
    {
      tmp292 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[47] /* planarWorld.gravityArrowColor[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta293 = stringAppend(MMC_REFSTRINGLIT(tmp291),tmp292);
      {
        const char* assert_cond = "(planarWorld.gravityArrowColor[2] >= 0 and planarWorld.gravityArrowColor[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",70,3,73,52,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta293));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",70,3,73,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta293));
        }
      }
      tmp294 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3479
type: ALGORITHM

  assert(planarWorld.gravityArrow.color[2] >= 0 and planarWorld.gravityArrow.color[2] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.gravityArrow.color[2] <= 255, has value: " + String(planarWorld.gravityArrow.color[2], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3479};
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,97,"Variable violating min/max constraint: 0 <= planarWorld.gravityArrow.color[2] <= 255, has value: ");
  modelica_string tmp298;
  modelica_metatype tmpMeta299;
  static int tmp300 = 0;
  if(!tmp300)
  {
    tmp295 = GreaterEq((data->simulationInfo->integerParameter[44] /* planarWorld.gravityArrow.color[2] PARAM */),((modelica_integer) 0));
    tmp296 = LessEq((data->simulationInfo->integerParameter[44] /* planarWorld.gravityArrow.color[2] PARAM */),((modelica_integer) 255));
    if(!(tmp295 && tmp296))
    {
      tmp298 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[44] /* planarWorld.gravityArrow.color[2] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta299 = stringAppend(MMC_REFSTRINGLIT(tmp297),tmp298);
      {
        const char* assert_cond = "(planarWorld.gravityArrow.color[2] >= 0 and planarWorld.gravityArrow.color[2] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta299));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta299));
        }
      }
      tmp300 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3480
type: ALGORITHM

  assert(planarWorld.gravityArrowColor[3] >= 0 and planarWorld.gravityArrowColor[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.gravityArrowColor[3] <= 255, has value: " + String(planarWorld.gravityArrowColor[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3480};
  modelica_boolean tmp301;
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,96,"Variable violating min/max constraint: 0 <= planarWorld.gravityArrowColor[3] <= 255, has value: ");
  modelica_string tmp304;
  modelica_metatype tmpMeta305;
  static int tmp306 = 0;
  if(!tmp306)
  {
    tmp301 = GreaterEq((data->simulationInfo->integerParameter[48] /* planarWorld.gravityArrowColor[3] PARAM */),((modelica_integer) 0));
    tmp302 = LessEq((data->simulationInfo->integerParameter[48] /* planarWorld.gravityArrowColor[3] PARAM */),((modelica_integer) 255));
    if(!(tmp301 && tmp302))
    {
      tmp304 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[48] /* planarWorld.gravityArrowColor[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta305 = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        const char* assert_cond = "(planarWorld.gravityArrowColor[3] >= 0 and planarWorld.gravityArrowColor[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",70,3,73,52,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",70,3,73,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
        }
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3481
type: ALGORITHM

  assert(planarWorld.gravityArrow.color[3] >= 0 and planarWorld.gravityArrow.color[3] <= 255, "Variable violating min/max constraint: 0 <= planarWorld.gravityArrow.color[3] <= 255, has value: " + String(planarWorld.gravityArrow.color[3], "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3481};
  modelica_boolean tmp307;
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,97,"Variable violating min/max constraint: 0 <= planarWorld.gravityArrow.color[3] <= 255, has value: ");
  modelica_string tmp310;
  modelica_metatype tmpMeta311;
  static int tmp312 = 0;
  if(!tmp312)
  {
    tmp307 = GreaterEq((data->simulationInfo->integerParameter[45] /* planarWorld.gravityArrow.color[3] PARAM */),((modelica_integer) 0));
    tmp308 = LessEq((data->simulationInfo->integerParameter[45] /* planarWorld.gravityArrow.color[3] PARAM */),((modelica_integer) 255));
    if(!(tmp307 && tmp308))
    {
      tmp310 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[45] /* planarWorld.gravityArrow.color[3] PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta311 = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        const char* assert_cond = "(planarWorld.gravityArrow.color[3] >= 0 and planarWorld.gravityArrow.color[3] <= 255)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta311));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",21,3,23,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta311));
        }
      }
      tmp312 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3482
type: ALGORITHM

  assert(world.axisLength >= 0.0, "Variable violating min constraint: 0.0 <= world.axisLength, has value: " + String(world.axisLength, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3482};
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,71,"Variable violating min constraint: 0.0 <= world.axisLength, has value: ");
  modelica_string tmp315;
  modelica_metatype tmpMeta316;
  static int tmp317 = 0;
  if(!tmp317)
  {
    tmp313 = GreaterEq((data->simulationInfo->realParameter[334] /* world.axisLength PARAM */),0.0);
    if(!tmp313)
    {
      tmp315 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[334] /* world.axisLength PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta316 = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        const char* assert_cond = "(world.axisLength >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",44,3,46,114,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",44,3,46,114,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        }
      }
      tmp317 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3483
type: ALGORITHM

  assert(world.axisDiameter >= 0.0, "Variable violating min constraint: 0.0 <= world.axisDiameter, has value: " + String(world.axisDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3483};
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,73,"Variable violating min constraint: 0.0 <= world.axisDiameter, has value: ");
  modelica_string tmp320;
  modelica_metatype tmpMeta321;
  static int tmp322 = 0;
  if(!tmp322)
  {
    tmp318 = GreaterEq((data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */),0.0);
    if(!tmp318)
    {
      tmp320 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[333] /* world.axisDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta321 = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        const char* assert_cond = "(world.axisDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",47,3,49,114,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",47,3,49,114,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        }
      }
      tmp322 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3484
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_label.diameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.x_label.diameter, has value: " + String(planarWorld.coordinateSystem.x_label.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3484};
  modelica_boolean tmp323;
  static const MMC_DEFSTRINGLIT(tmp324,100,"Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.x_label.diameter, has value: ");
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static int tmp327 = 0;
  if(!tmp327)
  {
    tmp323 = GreaterEq((data->simulationInfo->realParameter[133] /* planarWorld.coordinateSystem.x_label.diameter PARAM */),0.0);
    if(!tmp323)
    {
      tmp325 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[133] /* planarWorld.coordinateSystem.x_label.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta326 = stringAppend(MMC_REFSTRINGLIT(tmp324),tmp325);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_label.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        }
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3485
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_label.diameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.y_label.diameter, has value: " + String(planarWorld.coordinateSystem.y_label.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3485};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,100,"Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.y_label.diameter, has value: ");
  modelica_string tmp330;
  modelica_metatype tmpMeta331;
  static int tmp332 = 0;
  if(!tmp332)
  {
    tmp328 = GreaterEq((data->simulationInfo->realParameter[151] /* planarWorld.coordinateSystem.y_label.diameter PARAM */),0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[151] /* planarWorld.coordinateSystem.y_label.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta331 = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_label.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta331));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta331));
        }
      }
      tmp332 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3486
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_label.diameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.z_label.diameter, has value: " + String(planarWorld.coordinateSystem.z_label.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3486};
  modelica_boolean tmp333;
  static const MMC_DEFSTRINGLIT(tmp334,100,"Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.z_label.diameter, has value: ");
  modelica_string tmp335;
  modelica_metatype tmpMeta336;
  static int tmp337 = 0;
  if(!tmp337)
  {
    tmp333 = GreaterEq((data->simulationInfo->realParameter[168] /* planarWorld.coordinateSystem.z_label.diameter PARAM */),0.0);
    if(!tmp333)
    {
      tmp335 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[168] /* planarWorld.coordinateSystem.z_label.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta336 = stringAppend(MMC_REFSTRINGLIT(tmp334),tmp335);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_label.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta336));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta336));
        }
      }
      tmp337 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3487
type: ALGORITHM

  assert(planarWorld.defaultSpecularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.defaultSpecularCoefficient, has value: " + String(planarWorld.defaultSpecularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3487};
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,93,"Variable violating min constraint: 0.0 <= planarWorld.defaultSpecularCoefficient, has value: ");
  modelica_string tmp340;
  modelica_metatype tmpMeta341;
  static int tmp342 = 0;
  if(!tmp342)
  {
    tmp338 = GreaterEq((data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */),0.0);
    if(!tmp338)
    {
      tmp340 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[186] /* planarWorld.defaultSpecularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta341 = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        const char* assert_cond = "(planarWorld.defaultSpecularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",104,3,106,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",104,3,106,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta341));
        }
      }
      tmp342 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3488
type: ALGORITHM

  assert(rearRightWheel.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearRightWheel.cylinder.specularCoefficient, has value: " + String(rearRightWheel.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3488};
  modelica_boolean tmp343;
  static const MMC_DEFSTRINGLIT(tmp344,98,"Variable violating min constraint: 0.0 <= rearRightWheel.cylinder.specularCoefficient, has value: ");
  modelica_string tmp345;
  modelica_metatype tmpMeta346;
  static int tmp347 = 0;
  if(!tmp347)
  {
    tmp343 = GreaterEq((data->simulationInfo->realParameter[273] /* rearRightWheel.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp343)
    {
      tmp345 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[273] /* rearRightWheel.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta346 = stringAppend(MMC_REFSTRINGLIT(tmp344),tmp345);
      {
        const char* assert_cond = "(rearRightWheel.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta346));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta346));
        }
      }
      tmp347 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3489
type: ALGORITHM

  assert(rearRightWheel.rim1.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearRightWheel.rim1.specularCoefficient, has value: " + String(rearRightWheel.rim1.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3489};
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,94,"Variable violating min constraint: 0.0 <= rearRightWheel.rim1.specularCoefficient, has value: ");
  modelica_string tmp350;
  modelica_metatype tmpMeta351;
  static int tmp352 = 0;
  if(!tmp352)
  {
    tmp348 = GreaterEq((data->simulationInfo->realParameter[285] /* rearRightWheel.rim1.specularCoefficient PARAM */),0.0);
    if(!tmp348)
    {
      tmp350 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[285] /* rearRightWheel.rim1.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta351 = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        const char* assert_cond = "(rearRightWheel.rim1.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta351));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta351));
        }
      }
      tmp352 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3490
type: ALGORITHM

  assert(rearRightWheel.rim2.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearRightWheel.rim2.specularCoefficient, has value: " + String(rearRightWheel.rim2.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3490};
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,94,"Variable violating min constraint: 0.0 <= rearRightWheel.rim2.specularCoefficient, has value: ");
  modelica_string tmp355;
  modelica_metatype tmpMeta356;
  static int tmp357 = 0;
  if(!tmp357)
  {
    tmp353 = GreaterEq((data->simulationInfo->realParameter[289] /* rearRightWheel.rim2.specularCoefficient PARAM */),0.0);
    if(!tmp353)
    {
      tmp355 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[289] /* rearRightWheel.rim2.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta356 = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        const char* assert_cond = "(rearRightWheel.rim2.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta356));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta356));
        }
      }
      tmp357 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3491
type: ALGORITHM

  assert(rearRightWheel.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearRightWheel.specularCoefficient, has value: " + String(rearRightWheel.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3491};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,89,"Variable violating min constraint: 0.0 <= rearRightWheel.specularCoefficient, has value: ");
  modelica_string tmp360;
  modelica_metatype tmpMeta361;
  static int tmp362 = 0;
  if(!tmp362)
  {
    tmp358 = GreaterEq((data->simulationInfo->realParameter[293] /* rearRightWheel.specularCoefficient PARAM */),0.0);
    if(!tmp358)
    {
      tmp360 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[293] /* rearRightWheel.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta361 = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        const char* assert_cond = "(rearRightWheel.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",57,3,58,80,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",57,3,58,80,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        }
      }
      tmp362 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3492
type: ALGORITHM

  assert(rearLeftWheel.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearLeftWheel.cylinder.specularCoefficient, has value: " + String(rearLeftWheel.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3492};
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,97,"Variable violating min constraint: 0.0 <= rearLeftWheel.cylinder.specularCoefficient, has value: ");
  modelica_string tmp365;
  modelica_metatype tmpMeta366;
  static int tmp367 = 0;
  if(!tmp367)
  {
    tmp363 = GreaterEq((data->simulationInfo->realParameter[233] /* rearLeftWheel.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp363)
    {
      tmp365 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[233] /* rearLeftWheel.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta366 = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        const char* assert_cond = "(rearLeftWheel.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta366));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta366));
        }
      }
      tmp367 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3493
type: ALGORITHM

  assert(rearLeftWheel.rim1.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearLeftWheel.rim1.specularCoefficient, has value: " + String(rearLeftWheel.rim1.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3493};
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,93,"Variable violating min constraint: 0.0 <= rearLeftWheel.rim1.specularCoefficient, has value: ");
  modelica_string tmp370;
  modelica_metatype tmpMeta371;
  static int tmp372 = 0;
  if(!tmp372)
  {
    tmp368 = GreaterEq((data->simulationInfo->realParameter[245] /* rearLeftWheel.rim1.specularCoefficient PARAM */),0.0);
    if(!tmp368)
    {
      tmp370 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[245] /* rearLeftWheel.rim1.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta371 = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        const char* assert_cond = "(rearLeftWheel.rim1.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta371));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta371));
        }
      }
      tmp372 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3494
type: ALGORITHM

  assert(rearLeftWheel.rim2.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearLeftWheel.rim2.specularCoefficient, has value: " + String(rearLeftWheel.rim2.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3494};
  modelica_boolean tmp373;
  static const MMC_DEFSTRINGLIT(tmp374,93,"Variable violating min constraint: 0.0 <= rearLeftWheel.rim2.specularCoefficient, has value: ");
  modelica_string tmp375;
  modelica_metatype tmpMeta376;
  static int tmp377 = 0;
  if(!tmp377)
  {
    tmp373 = GreaterEq((data->simulationInfo->realParameter[249] /* rearLeftWheel.rim2.specularCoefficient PARAM */),0.0);
    if(!tmp373)
    {
      tmp375 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[249] /* rearLeftWheel.rim2.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta376 = stringAppend(MMC_REFSTRINGLIT(tmp374),tmp375);
      {
        const char* assert_cond = "(rearLeftWheel.rim2.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta376));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta376));
        }
      }
      tmp377 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3495
type: ALGORITHM

  assert(rearLeftWheel.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearLeftWheel.specularCoefficient, has value: " + String(rearLeftWheel.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3495};
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,88,"Variable violating min constraint: 0.0 <= rearLeftWheel.specularCoefficient, has value: ");
  modelica_string tmp380;
  modelica_metatype tmpMeta381;
  static int tmp382 = 0;
  if(!tmp382)
  {
    tmp378 = GreaterEq((data->simulationInfo->realParameter[253] /* rearLeftWheel.specularCoefficient PARAM */),0.0);
    if(!tmp378)
    {
      tmp380 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[253] /* rearLeftWheel.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta381 = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        const char* assert_cond = "(rearLeftWheel.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",57,3,58,80,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",57,3,58,80,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
        }
      }
      tmp382 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3496
type: ALGORITHM

  assert(frontWheel.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= frontWheel.cylinder.specularCoefficient, has value: " + String(frontWheel.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3496};
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,94,"Variable violating min constraint: 0.0 <= frontWheel.cylinder.specularCoefficient, has value: ");
  modelica_string tmp385;
  modelica_metatype tmpMeta386;
  static int tmp387 = 0;
  if(!tmp387)
  {
    tmp383 = GreaterEq((data->simulationInfo->realParameter[69] /* frontWheel.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp383)
    {
      tmp385 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[69] /* frontWheel.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta386 = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        const char* assert_cond = "(frontWheel.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta386));
        }
      }
      tmp387 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3497
type: ALGORITHM

  assert(frontWheel.rim1.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= frontWheel.rim1.specularCoefficient, has value: " + String(frontWheel.rim1.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3497};
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,90,"Variable violating min constraint: 0.0 <= frontWheel.rim1.specularCoefficient, has value: ");
  modelica_string tmp390;
  modelica_metatype tmpMeta391;
  static int tmp392 = 0;
  if(!tmp392)
  {
    tmp388 = GreaterEq((data->simulationInfo->realParameter[81] /* frontWheel.rim1.specularCoefficient PARAM */),0.0);
    if(!tmp388)
    {
      tmp390 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[81] /* frontWheel.rim1.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta391 = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        const char* assert_cond = "(frontWheel.rim1.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        }
      }
      tmp392 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3498
type: ALGORITHM

  assert(frontWheel.rim2.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= frontWheel.rim2.specularCoefficient, has value: " + String(frontWheel.rim2.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3498};
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,90,"Variable violating min constraint: 0.0 <= frontWheel.rim2.specularCoefficient, has value: ");
  modelica_string tmp395;
  modelica_metatype tmpMeta396;
  static int tmp397 = 0;
  if(!tmp397)
  {
    tmp393 = GreaterEq((data->simulationInfo->realParameter[85] /* frontWheel.rim2.specularCoefficient PARAM */),0.0);
    if(!tmp393)
    {
      tmp395 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[85] /* frontWheel.rim2.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta396 = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        const char* assert_cond = "(frontWheel.rim2.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta396));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta396));
        }
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3499
type: ALGORITHM

  assert(frontWheel.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= frontWheel.specularCoefficient, has value: " + String(frontWheel.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3499};
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,85,"Variable violating min constraint: 0.0 <= frontWheel.specularCoefficient, has value: ");
  modelica_string tmp400;
  modelica_metatype tmpMeta401;
  static int tmp402 = 0;
  if(!tmp402)
  {
    tmp398 = GreaterEq((data->simulationInfo->realParameter[89] /* frontWheel.specularCoefficient PARAM */),0.0);
    if(!tmp398)
    {
      tmp400 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[89] /* frontWheel.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta401 = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        const char* assert_cond = "(frontWheel.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",57,3,58,80,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta401));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",57,3,58,80,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta401));
        }
      }
      tmp402 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3500
type: ALGORITHM

  assert(rearLeft.width >= 0.0, "Variable violating min constraint: 0.0 <= rearLeft.width, has value: " + String(rearLeft.width, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3500};
  modelica_boolean tmp403;
  static const MMC_DEFSTRINGLIT(tmp404,69,"Variable violating min constraint: 0.0 <= rearLeft.width, has value: ");
  modelica_string tmp405;
  modelica_metatype tmpMeta406;
  static int tmp407 = 0;
  if(!tmp407)
  {
    tmp403 = GreaterEq((data->simulationInfo->realParameter[227] /* rearLeft.width PARAM */),0.0);
    if(!tmp403)
    {
      tmp405 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[227] /* rearLeft.width PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta406 = stringAppend(MMC_REFSTRINGLIT(tmp404),tmp405);
      {
        const char* assert_cond = "(rearLeft.width >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta406));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta406));
        }
      }
      tmp407 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3501
type: ALGORITHM

  assert(rearLeft.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearLeft.cylinder.specularCoefficient, has value: " + String(rearLeft.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3501};
  modelica_boolean tmp408;
  static const MMC_DEFSTRINGLIT(tmp409,92,"Variable violating min constraint: 0.0 <= rearLeft.cylinder.specularCoefficient, has value: ");
  modelica_string tmp410;
  modelica_metatype tmpMeta411;
  static int tmp412 = 0;
  if(!tmp412)
  {
    tmp408 = GreaterEq((data->simulationInfo->realParameter[221] /* rearLeft.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp408)
    {
      tmp410 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[221] /* rearLeft.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta411 = stringAppend(MMC_REFSTRINGLIT(tmp409),tmp410);
      {
        const char* assert_cond = "(rearLeft.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta411));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta411));
        }
      }
      tmp412 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3502
type: ALGORITHM

  assert(rearLeft.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearLeft.specularCoefficient, has value: " + String(rearLeft.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3502};
  modelica_boolean tmp413;
  static const MMC_DEFSTRINGLIT(tmp414,83,"Variable violating min constraint: 0.0 <= rearLeft.specularCoefficient, has value: ");
  modelica_string tmp415;
  modelica_metatype tmpMeta416;
  static int tmp417 = 0;
  if(!tmp417)
  {
    tmp413 = GreaterEq((data->simulationInfo->realParameter[226] /* rearLeft.specularCoefficient PARAM */),0.0);
    if(!tmp413)
    {
      tmp415 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[226] /* rearLeft.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta416 = stringAppend(MMC_REFSTRINGLIT(tmp414),tmp415);
      {
        const char* assert_cond = "(rearLeft.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta416));
        }
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3503
type: ALGORITHM

  assert(rearRight.width >= 0.0, "Variable violating min constraint: 0.0 <= rearRight.width, has value: " + String(rearRight.width, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3503};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,70,"Variable violating min constraint: 0.0 <= rearRight.width, has value: ");
  modelica_string tmp420;
  modelica_metatype tmpMeta421;
  static int tmp422 = 0;
  if(!tmp422)
  {
    tmp418 = GreaterEq((data->simulationInfo->realParameter[267] /* rearRight.width PARAM */),0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[267] /* rearRight.width PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta421 = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        const char* assert_cond = "(rearRight.width >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        }
      }
      tmp422 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3504
type: ALGORITHM

  assert(rearRight.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearRight.cylinder.specularCoefficient, has value: " + String(rearRight.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3504};
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,93,"Variable violating min constraint: 0.0 <= rearRight.cylinder.specularCoefficient, has value: ");
  modelica_string tmp425;
  modelica_metatype tmpMeta426;
  static int tmp427 = 0;
  if(!tmp427)
  {
    tmp423 = GreaterEq((data->simulationInfo->realParameter[261] /* rearRight.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp423)
    {
      tmp425 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[261] /* rearRight.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta426 = stringAppend(MMC_REFSTRINGLIT(tmp424),tmp425);
      {
        const char* assert_cond = "(rearRight.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta426));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta426));
        }
      }
      tmp427 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3505
type: ALGORITHM

  assert(rearRight.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rearRight.specularCoefficient, has value: " + String(rearRight.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3505};
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,84,"Variable violating min constraint: 0.0 <= rearRight.specularCoefficient, has value: ");
  modelica_string tmp430;
  modelica_metatype tmpMeta431;
  static int tmp432 = 0;
  if(!tmp432)
  {
    tmp428 = GreaterEq((data->simulationInfo->realParameter[266] /* rearRight.specularCoefficient PARAM */),0.0);
    if(!tmp428)
    {
      tmp430 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[266] /* rearRight.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta431 = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        const char* assert_cond = "(rearRight.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta431));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta431));
        }
      }
      tmp432 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3506
type: ALGORITHM

  assert(rear.width >= 0.0, "Variable violating min constraint: 0.0 <= rear.width, has value: " + String(rear.width, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3506};
  modelica_boolean tmp433;
  static const MMC_DEFSTRINGLIT(tmp434,65,"Variable violating min constraint: 0.0 <= rear.width, has value: ");
  modelica_string tmp435;
  modelica_metatype tmpMeta436;
  static int tmp437 = 0;
  if(!tmp437)
  {
    tmp433 = GreaterEq((data->simulationInfo->realParameter[217] /* rear.width PARAM */),0.0);
    if(!tmp433)
    {
      tmp435 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[217] /* rear.width PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta436 = stringAppend(MMC_REFSTRINGLIT(tmp434),tmp435);
      {
        const char* assert_cond = "(rear.width >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta436));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta436));
        }
      }
      tmp437 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3507
type: ALGORITHM

  assert(rear.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rear.cylinder.specularCoefficient, has value: " + String(rear.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3507};
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,88,"Variable violating min constraint: 0.0 <= rear.cylinder.specularCoefficient, has value: ");
  modelica_string tmp440;
  modelica_metatype tmpMeta441;
  static int tmp442 = 0;
  if(!tmp442)
  {
    tmp438 = GreaterEq((data->simulationInfo->realParameter[211] /* rear.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp438)
    {
      tmp440 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[211] /* rear.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta441 = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        const char* assert_cond = "(rear.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        }
      }
      tmp442 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3508
type: ALGORITHM

  assert(rear.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= rear.specularCoefficient, has value: " + String(rear.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3508};
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,79,"Variable violating min constraint: 0.0 <= rear.specularCoefficient, has value: ");
  modelica_string tmp445;
  modelica_metatype tmpMeta446;
  static int tmp447 = 0;
  if(!tmp447)
  {
    tmp443 = GreaterEq((data->simulationInfo->realParameter[216] /* rear.specularCoefficient PARAM */),0.0);
    if(!tmp443)
    {
      tmp445 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[216] /* rear.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta446 = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        const char* assert_cond = "(rear.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta446));
        }
      }
      tmp447 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3509
type: ALGORITHM

  assert(front.width >= 0.0, "Variable violating min constraint: 0.0 <= front.width, has value: " + String(front.width, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3509};
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,66,"Variable violating min constraint: 0.0 <= front.width, has value: ");
  modelica_string tmp450;
  modelica_metatype tmpMeta451;
  static int tmp452 = 0;
  if(!tmp452)
  {
    tmp448 = GreaterEq((data->simulationInfo->realParameter[42] /* front.width PARAM */),0.0);
    if(!tmp448)
    {
      tmp450 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[42] /* front.width PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta451 = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        const char* assert_cond = "(front.width >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta451));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta451));
        }
      }
      tmp452 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3510
type: ALGORITHM

  assert(front.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= front.cylinder.specularCoefficient, has value: " + String(front.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3510};
  modelica_boolean tmp453;
  static const MMC_DEFSTRINGLIT(tmp454,89,"Variable violating min constraint: 0.0 <= front.cylinder.specularCoefficient, has value: ");
  modelica_string tmp455;
  modelica_metatype tmpMeta456;
  static int tmp457 = 0;
  if(!tmp457)
  {
    tmp453 = GreaterEq((data->simulationInfo->realParameter[36] /* front.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp453)
    {
      tmp455 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[36] /* front.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta456 = stringAppend(MMC_REFSTRINGLIT(tmp454),tmp455);
      {
        const char* assert_cond = "(front.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta456));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta456));
        }
      }
      tmp457 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3511
type: ALGORITHM

  assert(front.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= front.specularCoefficient, has value: " + String(front.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3511};
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,80,"Variable violating min constraint: 0.0 <= front.specularCoefficient, has value: ");
  modelica_string tmp460;
  modelica_metatype tmpMeta461;
  static int tmp462 = 0;
  if(!tmp462)
  {
    tmp458 = GreaterEq((data->simulationInfo->realParameter[41] /* front.specularCoefficient PARAM */),0.0);
    if(!tmp458)
    {
      tmp460 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[41] /* front.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta461 = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        const char* assert_cond = "(front.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta461));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta461));
        }
      }
      tmp462 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3512
type: ALGORITHM

  assert(planarWorld.defaultBodyDiameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.defaultBodyDiameter, has value: " + String(planarWorld.defaultBodyDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3512};
  modelica_boolean tmp463;
  static const MMC_DEFSTRINGLIT(tmp464,86,"Variable violating min constraint: 0.0 <= planarWorld.defaultBodyDiameter, has value: ");
  modelica_string tmp465;
  modelica_metatype tmpMeta466;
  static int tmp467 = 0;
  if(!tmp467)
  {
    tmp463 = GreaterEq((data->simulationInfo->realParameter[178] /* planarWorld.defaultBodyDiameter PARAM */),0.0);
    if(!tmp463)
    {
      tmp465 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[178] /* planarWorld.defaultBodyDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta466 = stringAppend(MMC_REFSTRINGLIT(tmp464),tmp465);
      {
        const char* assert_cond = "(planarWorld.defaultBodyDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",86,3,88,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta466));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",86,3,88,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta466));
        }
      }
      tmp467 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3513
type: ALGORITHM

  assert(body.sphereDiameter >= 0.0, "Variable violating min constraint: 0.0 <= body.sphereDiameter, has value: " + String(body.sphereDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3513};
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,74,"Variable violating min constraint: 0.0 <= body.sphereDiameter, has value: ");
  modelica_string tmp470;
  modelica_metatype tmpMeta471;
  static int tmp472 = 0;
  if(!tmp472)
  {
    tmp468 = GreaterEq((data->simulationInfo->realParameter[19] /* body.sphereDiameter PARAM */),0.0);
    if(!tmp468)
    {
      tmp470 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[19] /* body.sphereDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta471 = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        const char* assert_cond = "(body.sphereDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",21,3,25,23,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta471));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",21,3,25,23,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta471));
        }
      }
      tmp472 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3514
type: ALGORITHM

  assert(body.sphere.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= body.sphere.specularCoefficient, has value: " + String(body.sphere.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3514};
  modelica_boolean tmp473;
  static const MMC_DEFSTRINGLIT(tmp474,86,"Variable violating min constraint: 0.0 <= body.sphere.specularCoefficient, has value: ");
  modelica_string tmp475;
  modelica_metatype tmpMeta476;
  static int tmp477 = 0;
  if(!tmp477)
  {
    tmp473 = GreaterEq((data->simulationInfo->realParameter[17] /* body.sphere.specularCoefficient PARAM */),0.0);
    if(!tmp473)
    {
      tmp475 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[17] /* body.sphere.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta476 = stringAppend(MMC_REFSTRINGLIT(tmp474),tmp475);
      {
        const char* assert_cond = "(body.sphere.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta476));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta476));
        }
      }
      tmp477 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3515
type: ALGORITHM

  assert(body.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= body.specularCoefficient, has value: " + String(body.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3515};
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,79,"Variable violating min constraint: 0.0 <= body.specularCoefficient, has value: ");
  modelica_string tmp480;
  modelica_metatype tmpMeta481;
  static int tmp482 = 0;
  if(!tmp482)
  {
    tmp478 = GreaterEq((data->simulationInfo->realParameter[14] /* body.specularCoefficient PARAM */),0.0);
    if(!tmp478)
    {
      tmp480 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[14] /* body.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta481 = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        const char* assert_cond = "(body.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",37,3,39,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",37,3,39,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta481));
        }
      }
      tmp482 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3516
type: ALGORITHM

  assert(frontTrail.width >= 0.0, "Variable violating min constraint: 0.0 <= frontTrail.width, has value: " + String(frontTrail.width, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3516};
  modelica_boolean tmp483;
  static const MMC_DEFSTRINGLIT(tmp484,71,"Variable violating min constraint: 0.0 <= frontTrail.width, has value: ");
  modelica_string tmp485;
  modelica_metatype tmpMeta486;
  static int tmp487 = 0;
  if(!tmp487)
  {
    tmp483 = GreaterEq((data->simulationInfo->realParameter[64] /* frontTrail.width PARAM */),0.0);
    if(!tmp483)
    {
      tmp485 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[64] /* frontTrail.width PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta486 = stringAppend(MMC_REFSTRINGLIT(tmp484),tmp485);
      {
        const char* assert_cond = "(frontTrail.width >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta486));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta486));
        }
      }
      tmp487 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3517
type: ALGORITHM

  assert(frontTrail.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= frontTrail.cylinder.specularCoefficient, has value: " + String(frontTrail.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3517};
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,94,"Variable violating min constraint: 0.0 <= frontTrail.cylinder.specularCoefficient, has value: ");
  modelica_string tmp490;
  modelica_metatype tmpMeta491;
  static int tmp492 = 0;
  if(!tmp492)
  {
    tmp488 = GreaterEq((data->simulationInfo->realParameter[58] /* frontTrail.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp488)
    {
      tmp490 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[58] /* frontTrail.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta491 = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        const char* assert_cond = "(frontTrail.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta491));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta491));
        }
      }
      tmp492 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3518
type: ALGORITHM

  assert(frontTrail.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= frontTrail.specularCoefficient, has value: " + String(frontTrail.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3518};
  modelica_boolean tmp493;
  static const MMC_DEFSTRINGLIT(tmp494,85,"Variable violating min constraint: 0.0 <= frontTrail.specularCoefficient, has value: ");
  modelica_string tmp495;
  modelica_metatype tmpMeta496;
  static int tmp497 = 0;
  if(!tmp497)
  {
    tmp493 = GreaterEq((data->simulationInfo->realParameter[63] /* frontTrail.specularCoefficient PARAM */),0.0);
    if(!tmp493)
    {
      tmp495 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[63] /* frontTrail.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta496 = stringAppend(MMC_REFSTRINGLIT(tmp494),tmp495);
      {
        const char* assert_cond = "(frontTrail.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta496));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta496));
        }
      }
      tmp497 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3519
type: ALGORITHM

  assert(body2.sphereDiameter >= 0.0, "Variable violating min constraint: 0.0 <= body2.sphereDiameter, has value: " + String(body2.sphereDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3519};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,75,"Variable violating min constraint: 0.0 <= body2.sphereDiameter, has value: ");
  modelica_string tmp500;
  modelica_metatype tmpMeta501;
  static int tmp502 = 0;
  if(!tmp502)
  {
    tmp498 = GreaterEq((data->simulationInfo->realParameter[28] /* body2.sphereDiameter PARAM */),0.0);
    if(!tmp498)
    {
      tmp500 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[28] /* body2.sphereDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta501 = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        const char* assert_cond = "(body2.sphereDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",21,3,25,23,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta501));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",21,3,25,23,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta501));
        }
      }
      tmp502 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3520
type: ALGORITHM

  assert(body2.sphere.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= body2.sphere.specularCoefficient, has value: " + String(body2.sphere.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3520};
  modelica_boolean tmp503;
  static const MMC_DEFSTRINGLIT(tmp504,87,"Variable violating min constraint: 0.0 <= body2.sphere.specularCoefficient, has value: ");
  modelica_string tmp505;
  modelica_metatype tmpMeta506;
  static int tmp507 = 0;
  if(!tmp507)
  {
    tmp503 = GreaterEq((data->simulationInfo->realParameter[26] /* body2.sphere.specularCoefficient PARAM */),0.0);
    if(!tmp503)
    {
      tmp505 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[26] /* body2.sphere.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta506 = stringAppend(MMC_REFSTRINGLIT(tmp504),tmp505);
      {
        const char* assert_cond = "(body2.sphere.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        }
      }
      tmp507 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3521
type: ALGORITHM

  assert(body2.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= body2.specularCoefficient, has value: " + String(body2.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3521};
  modelica_boolean tmp508;
  static const MMC_DEFSTRINGLIT(tmp509,80,"Variable violating min constraint: 0.0 <= body2.specularCoefficient, has value: ");
  modelica_string tmp510;
  modelica_metatype tmpMeta511;
  static int tmp512 = 0;
  if(!tmp512)
  {
    tmp508 = GreaterEq((data->simulationInfo->realParameter[23] /* body2.specularCoefficient PARAM */),0.0);
    if(!tmp508)
    {
      tmp510 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[23] /* body2.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta511 = stringAppend(MMC_REFSTRINGLIT(tmp509),tmp510);
      {
        const char* assert_cond = "(body2.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",37,3,39,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",37,3,39,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta511));
        }
      }
      tmp512 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3522
type: ALGORITHM

  assert(revolute.cylinderLength >= 0.0, "Variable violating min constraint: 0.0 <= revolute.cylinderLength, has value: " + String(revolute.cylinderLength, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3522};
  modelica_boolean tmp513;
  static const MMC_DEFSTRINGLIT(tmp514,78,"Variable violating min constraint: 0.0 <= revolute.cylinderLength, has value: ");
  modelica_string tmp515;
  modelica_metatype tmpMeta516;
  static int tmp517 = 0;
  if(!tmp517)
  {
    tmp513 = GreaterEq((data->simulationInfo->realParameter[304] /* revolute.cylinderLength PARAM */),0.0);
    if(!tmp513)
    {
      tmp515 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[304] /* revolute.cylinderLength PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta516 = stringAppend(MMC_REFSTRINGLIT(tmp514),tmp515);
      {
        const char* assert_cond = "(revolute.cylinderLength >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",26,3,29,52,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta516));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",26,3,29,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta516));
        }
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3523
type: ALGORITHM

  assert(revolute.cylinderDiameter >= 0.0, "Variable violating min constraint: 0.0 <= revolute.cylinderDiameter, has value: " + String(revolute.cylinderDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3523};
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,80,"Variable violating min constraint: 0.0 <= revolute.cylinderDiameter, has value: ");
  modelica_string tmp520;
  modelica_metatype tmpMeta521;
  static int tmp522 = 0;
  if(!tmp522)
  {
    tmp518 = GreaterEq((data->simulationInfo->realParameter[303] /* revolute.cylinderDiameter PARAM */),0.0);
    if(!tmp518)
    {
      tmp520 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[303] /* revolute.cylinderDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta521 = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        const char* assert_cond = "(revolute.cylinderDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",30,3,33,52,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta521));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",30,3,33,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta521));
        }
      }
      tmp522 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3524
type: ALGORITHM

  assert(revolute.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= revolute.cylinder.specularCoefficient, has value: " + String(revolute.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3524};
  modelica_boolean tmp523;
  static const MMC_DEFSTRINGLIT(tmp524,92,"Variable violating min constraint: 0.0 <= revolute.cylinder.specularCoefficient, has value: ");
  modelica_string tmp525;
  modelica_metatype tmpMeta526;
  static int tmp527 = 0;
  if(!tmp527)
  {
    tmp523 = GreaterEq((data->simulationInfo->realParameter[301] /* revolute.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp523)
    {
      tmp525 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[301] /* revolute.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta526 = stringAppend(MMC_REFSTRINGLIT(tmp524),tmp525);
      {
        const char* assert_cond = "(revolute.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta526));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta526));
        }
      }
      tmp527 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3525
type: ALGORITHM

  assert(revolute.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= revolute.specularCoefficient, has value: " + String(revolute.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3525};
  modelica_boolean tmp528;
  static const MMC_DEFSTRINGLIT(tmp529,83,"Variable violating min constraint: 0.0 <= revolute.specularCoefficient, has value: ");
  modelica_string tmp530;
  modelica_metatype tmpMeta531;
  static int tmp532 = 0;
  if(!tmp532)
  {
    tmp528 = GreaterEq((data->simulationInfo->realParameter[307] /* revolute.specularCoefficient PARAM */),0.0);
    if(!tmp528)
    {
      tmp530 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[307] /* revolute.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta531 = stringAppend(MMC_REFSTRINGLIT(tmp529),tmp530);
      {
        const char* assert_cond = "(revolute.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",38,3,41,52,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta531));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",38,3,41,52,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta531));
        }
      }
      tmp532 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3526
type: ALGORITHM

  assert(front2.width >= 0.0, "Variable violating min constraint: 0.0 <= front2.width, has value: " + String(front2.width, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3526};
  modelica_boolean tmp533;
  static const MMC_DEFSTRINGLIT(tmp534,67,"Variable violating min constraint: 0.0 <= front2.width, has value: ");
  modelica_string tmp535;
  modelica_metatype tmpMeta536;
  static int tmp537 = 0;
  if(!tmp537)
  {
    tmp533 = GreaterEq((data->simulationInfo->realParameter[52] /* front2.width PARAM */),0.0);
    if(!tmp533)
    {
      tmp535 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[52] /* front2.width PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta536 = stringAppend(MMC_REFSTRINGLIT(tmp534),tmp535);
      {
        const char* assert_cond = "(front2.width >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",17,3,19,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        }
      }
      tmp537 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3527
type: ALGORITHM

  assert(front2.cylinder.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= front2.cylinder.specularCoefficient, has value: " + String(front2.cylinder.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3527};
  modelica_boolean tmp538;
  static const MMC_DEFSTRINGLIT(tmp539,90,"Variable violating min constraint: 0.0 <= front2.cylinder.specularCoefficient, has value: ");
  modelica_string tmp540;
  modelica_metatype tmpMeta541;
  static int tmp542 = 0;
  if(!tmp542)
  {
    tmp538 = GreaterEq((data->simulationInfo->realParameter[46] /* front2.cylinder.specularCoefficient PARAM */),0.0);
    if(!tmp538)
    {
      tmp540 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[46] /* front2.cylinder.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta541 = stringAppend(MMC_REFSTRINGLIT(tmp539),tmp540);
      {
        const char* assert_cond = "(front2.cylinder.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta541));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Internal.mo",34,5,35,91,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta541));
        }
      }
      tmp542 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3528
type: ALGORITHM

  assert(front2.specularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= front2.specularCoefficient, has value: " + String(front2.specularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3528};
  modelica_boolean tmp543;
  static const MMC_DEFSTRINGLIT(tmp544,81,"Variable violating min constraint: 0.0 <= front2.specularCoefficient, has value: ");
  modelica_string tmp545;
  modelica_metatype tmpMeta546;
  static int tmp547 = 0;
  if(!tmp547)
  {
    tmp543 = GreaterEq((data->simulationInfo->realParameter[51] /* front2.specularCoefficient PARAM */),0.0);
    if(!tmp543)
    {
      tmp545 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[51] /* front2.specularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta546 = stringAppend(MMC_REFSTRINGLIT(tmp544),tmp545);
      {
        const char* assert_cond = "(front2.specularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta546));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/FixedTranslation.mo",26,3,29,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta546));
        }
      }
      tmp547 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3529
type: ALGORITHM

  assert(world.x_label.diameter >= 0.0, "Variable violating min constraint: 0.0 <= world.x_label.diameter, has value: " + String(world.x_label.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3529};
  modelica_boolean tmp548;
  static const MMC_DEFSTRINGLIT(tmp549,77,"Variable violating min constraint: 0.0 <= world.x_label.diameter, has value: ");
  modelica_string tmp550;
  modelica_metatype tmpMeta551;
  static int tmp552 = 0;
  if(!tmp552)
  {
    tmp548 = GreaterEq((data->simulationInfo->realParameter[396] /* world.x_label.diameter PARAM */),0.0);
    if(!tmp548)
    {
      tmp550 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[396] /* world.x_label.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta551 = stringAppend(MMC_REFSTRINGLIT(tmp549),tmp550);
      {
        const char* assert_cond = "(world.x_label.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta551));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta551));
        }
      }
      tmp552 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3530
type: ALGORITHM

  assert(world.y_label.diameter >= 0.0, "Variable violating min constraint: 0.0 <= world.y_label.diameter, has value: " + String(world.y_label.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3530};
  modelica_boolean tmp553;
  static const MMC_DEFSTRINGLIT(tmp554,77,"Variable violating min constraint: 0.0 <= world.y_label.diameter, has value: ");
  modelica_string tmp555;
  modelica_metatype tmpMeta556;
  static int tmp557 = 0;
  if(!tmp557)
  {
    tmp553 = GreaterEq((data->simulationInfo->realParameter[415] /* world.y_label.diameter PARAM */),0.0);
    if(!tmp553)
    {
      tmp555 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[415] /* world.y_label.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta556 = stringAppend(MMC_REFSTRINGLIT(tmp554),tmp555);
      {
        const char* assert_cond = "(world.y_label.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta556));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta556));
        }
      }
      tmp557 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3531
type: ALGORITHM

  assert(world.z_label.diameter >= 0.0, "Variable violating min constraint: 0.0 <= world.z_label.diameter, has value: " + String(world.z_label.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3531};
  modelica_boolean tmp558;
  static const MMC_DEFSTRINGLIT(tmp559,77,"Variable violating min constraint: 0.0 <= world.z_label.diameter, has value: ");
  modelica_string tmp560;
  modelica_metatype tmpMeta561;
  static int tmp562 = 0;
  if(!tmp562)
  {
    tmp558 = GreaterEq((data->simulationInfo->realParameter[433] /* world.z_label.diameter PARAM */),0.0);
    if(!tmp558)
    {
      tmp560 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[433] /* world.z_label.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta561 = stringAppend(MMC_REFSTRINGLIT(tmp559),tmp560);
      {
        const char* assert_cond = "(world.z_label.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta561));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Visualizers/Internal/Lines.mo",26,3,28,21,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta561));
        }
      }
      tmp562 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3532
type: ALGORITHM

  assert(world.gravityArrowDiameter >= 0.0, "Variable violating min constraint: 0.0 <= world.gravityArrowDiameter, has value: " + String(world.gravityArrowDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3532};
  modelica_boolean tmp563;
  static const MMC_DEFSTRINGLIT(tmp564,81,"Variable violating min constraint: 0.0 <= world.gravityArrowDiameter, has value: ");
  modelica_string tmp565;
  modelica_metatype tmpMeta566;
  static int tmp567 = 0;
  if(!tmp567)
  {
    tmp563 = GreaterEq((data->simulationInfo->realParameter[348] /* world.gravityArrowDiameter PARAM */),0.0);
    if(!tmp563)
    {
      tmp565 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[348] /* world.gravityArrowDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta566 = stringAppend(MMC_REFSTRINGLIT(tmp564),tmp565);
      {
        const char* assert_cond = "(world.gravityArrowDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",69,3,73,101,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",69,3,73,101,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta566));
        }
      }
      tmp567 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3533
type: ALGORITHM

  assert(planarWorld.coordinateSystem.x_arrow.diameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.x_arrow.diameter, has value: " + String(planarWorld.coordinateSystem.x_arrow.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3533};
  modelica_boolean tmp568;
  static const MMC_DEFSTRINGLIT(tmp569,100,"Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.x_arrow.diameter, has value: ");
  modelica_string tmp570;
  modelica_metatype tmpMeta571;
  static int tmp572 = 0;
  if(!tmp572)
  {
    tmp568 = GreaterEq((data->simulationInfo->realParameter[126] /* planarWorld.coordinateSystem.x_arrow.diameter PARAM */),0.0);
    if(!tmp568)
    {
      tmp570 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[126] /* planarWorld.coordinateSystem.x_arrow.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta571 = stringAppend(MMC_REFSTRINGLIT(tmp569),tmp570);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.x_arrow.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta571));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta571));
        }
      }
      tmp572 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3534
type: ALGORITHM

  assert(planarWorld.coordinateSystem.y_arrow.diameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.y_arrow.diameter, has value: " + String(planarWorld.coordinateSystem.y_arrow.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3534};
  modelica_boolean tmp573;
  static const MMC_DEFSTRINGLIT(tmp574,100,"Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.y_arrow.diameter, has value: ");
  modelica_string tmp575;
  modelica_metatype tmpMeta576;
  static int tmp577 = 0;
  if(!tmp577)
  {
    tmp573 = GreaterEq((data->simulationInfo->realParameter[144] /* planarWorld.coordinateSystem.y_arrow.diameter PARAM */),0.0);
    if(!tmp573)
    {
      tmp575 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[144] /* planarWorld.coordinateSystem.y_arrow.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta576 = stringAppend(MMC_REFSTRINGLIT(tmp574),tmp575);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.y_arrow.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta576));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta576));
        }
      }
      tmp577 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3535
type: ALGORITHM

  assert(planarWorld.coordinateSystem.z_arrow.diameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.z_arrow.diameter, has value: " + String(planarWorld.coordinateSystem.z_arrow.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3535};
  modelica_boolean tmp578;
  static const MMC_DEFSTRINGLIT(tmp579,100,"Variable violating min constraint: 0.0 <= planarWorld.coordinateSystem.z_arrow.diameter, has value: ");
  modelica_string tmp580;
  modelica_metatype tmpMeta581;
  static int tmp582 = 0;
  if(!tmp582)
  {
    tmp578 = GreaterEq((data->simulationInfo->realParameter[159] /* planarWorld.coordinateSystem.z_arrow.diameter PARAM */),0.0);
    if(!tmp578)
    {
      tmp580 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[159] /* planarWorld.coordinateSystem.z_arrow.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta581 = stringAppend(MMC_REFSTRINGLIT(tmp579),tmp580);
      {
        const char* assert_cond = "(planarWorld.coordinateSystem.z_arrow.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta581));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta581));
        }
      }
      tmp582 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3536
type: ALGORITHM

  assert(planarWorld.gravityArrowDiameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.gravityArrowDiameter, has value: " + String(planarWorld.gravityArrowDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3536};
  modelica_boolean tmp583;
  static const MMC_DEFSTRINGLIT(tmp584,87,"Variable violating min constraint: 0.0 <= planarWorld.gravityArrowDiameter, has value: ");
  modelica_string tmp585;
  modelica_metatype tmpMeta586;
  static int tmp587 = 0;
  if(!tmp587)
  {
    tmp583 = GreaterEq((data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */),0.0);
    if(!tmp583)
    {
      tmp585 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[200] /* planarWorld.gravityArrowDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta586 = stringAppend(MMC_REFSTRINGLIT(tmp584),tmp585);
      {
        const char* assert_cond = "(planarWorld.gravityArrowDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",66,3,69,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta586));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",66,3,69,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta586));
        }
      }
      tmp587 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3537
type: ALGORITHM

  assert(planarWorld.gravityArrow.diameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.gravityArrow.diameter, has value: " + String(planarWorld.gravityArrow.diameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3537};
  modelica_boolean tmp588;
  static const MMC_DEFSTRINGLIT(tmp589,88,"Variable violating min constraint: 0.0 <= planarWorld.gravityArrow.diameter, has value: ");
  modelica_string tmp590;
  modelica_metatype tmpMeta591;
  static int tmp592 = 0;
  if(!tmp592)
  {
    tmp588 = GreaterEq((data->simulationInfo->realParameter[195] /* planarWorld.gravityArrow.diameter PARAM */),0.0);
    if(!tmp588)
    {
      tmp590 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[195] /* planarWorld.gravityArrow.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta591 = stringAppend(MMC_REFSTRINGLIT(tmp589),tmp590);
      {
        const char* assert_cond = "(planarWorld.gravityArrow.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta591));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Visualizers/Internal/Arrow.mo",19,3,20,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta591));
        }
      }
      tmp592 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3538
type: ALGORITHM

  assert(world.defaultNm_to_m >= 0.0, "Variable violating min constraint: 0.0 <= world.defaultNm_to_m, has value: " + String(world.defaultNm_to_m, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3538};
  modelica_boolean tmp593;
  static const MMC_DEFSTRINGLIT(tmp594,75,"Variable violating min constraint: 0.0 <= world.defaultNm_to_m, has value: ");
  modelica_string tmp595;
  modelica_metatype tmpMeta596;
  static int tmp597 = 0;
  if(!tmp597)
  {
    tmp593 = GreaterEq((data->simulationInfo->realParameter[344] /* world.defaultNm_to_m PARAM */),0.0);
    if(!tmp593)
    {
      tmp595 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[344] /* world.defaultNm_to_m PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta596 = stringAppend(MMC_REFSTRINGLIT(tmp594),tmp595);
      {
        const char* assert_cond = "(world.defaultNm_to_m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",143,3,145,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta596));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",143,3,145,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta596));
        }
      }
      tmp597 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3539
type: ALGORITHM

  assert(world.defaultN_to_m >= 0.0, "Variable violating min constraint: 0.0 <= world.defaultN_to_m, has value: " + String(world.defaultN_to_m, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3539};
  modelica_boolean tmp598;
  static const MMC_DEFSTRINGLIT(tmp599,74,"Variable violating min constraint: 0.0 <= world.defaultN_to_m, has value: ");
  modelica_string tmp600;
  modelica_metatype tmpMeta601;
  static int tmp602 = 0;
  if(!tmp602)
  {
    tmp598 = GreaterEq((data->simulationInfo->realParameter[343] /* world.defaultN_to_m PARAM */),0.0);
    if(!tmp598)
    {
      tmp600 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[343] /* world.defaultN_to_m PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta601 = stringAppend(MMC_REFSTRINGLIT(tmp599),tmp600);
      {
        const char* assert_cond = "(world.defaultN_to_m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",140,3,142,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta601));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",140,3,142,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta601));
        }
      }
      tmp602 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3540
type: ALGORITHM

  assert(world.defaultSpecularCoefficient >= 0.0, "Variable violating min constraint: 0.0 <= world.defaultSpecularCoefficient, has value: " + String(world.defaultSpecularCoefficient, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3540};
  modelica_boolean tmp603;
  static const MMC_DEFSTRINGLIT(tmp604,87,"Variable violating min constraint: 0.0 <= world.defaultSpecularCoefficient, has value: ");
  modelica_string tmp605;
  modelica_metatype tmpMeta606;
  static int tmp607 = 0;
  if(!tmp607)
  {
    tmp603 = GreaterEq((data->simulationInfo->realParameter[345] /* world.defaultSpecularCoefficient PARAM */),0.0);
    if(!tmp603)
    {
      tmp605 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[345] /* world.defaultSpecularCoefficient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta606 = stringAppend(MMC_REFSTRINGLIT(tmp604),tmp605);
      {
        const char* assert_cond = "(world.defaultSpecularCoefficient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",137,3,139,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",137,3,139,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta606));
        }
      }
      tmp607 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3541
type: ALGORITHM

  assert(world.gravitySphereDiameter >= 0.0, "Variable violating min constraint: 0.0 <= world.gravitySphereDiameter, has value: " + String(world.gravitySphereDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3541};
  modelica_boolean tmp608;
  static const MMC_DEFSTRINGLIT(tmp609,82,"Variable violating min constraint: 0.0 <= world.gravitySphereDiameter, has value: ");
  modelica_string tmp610;
  modelica_metatype tmpMeta611;
  static int tmp612 = 0;
  if(!tmp612)
  {
    tmp608 = GreaterEq((data->simulationInfo->realParameter[367] /* world.gravitySphereDiameter PARAM */),0.0);
    if(!tmp608)
    {
      tmp610 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[367] /* world.gravitySphereDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta611 = stringAppend(MMC_REFSTRINGLIT(tmp609),tmp610);
      {
        const char* assert_cond = "(world.gravitySphereDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",78,3,82,99,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta611));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",78,3,82,99,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta611));
        }
      }
      tmp612 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3542
type: ALGORITHM

  assert(world.mu >= 0.0, "Variable violating min constraint: 0.0 <= world.mu, has value: " + String(world.mu, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3542};
  modelica_boolean tmp613;
  static const MMC_DEFSTRINGLIT(tmp614,63,"Variable violating min constraint: 0.0 <= world.mu, has value: ");
  modelica_string tmp615;
  modelica_metatype tmpMeta616;
  static int tmp617 = 0;
  if(!tmp617)
  {
    tmp613 = GreaterEq((data->simulationInfo->realParameter[378] /* world.mu PARAM */),0.0);
    if(!tmp613)
    {
      tmp615 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[378] /* world.mu PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta616 = stringAppend(MMC_REFSTRINGLIT(tmp614),tmp615);
      {
        const char* assert_cond = "(world.mu >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",36,3,40,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta616));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",36,3,40,108,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta616));
        }
      }
      tmp617 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3543
type: ALGORITHM

  assert(world.gravityType >= Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity and world.gravityType <= Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, "Variable violating min/max constraint: Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity <= world.gravityType <= Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, has value: " + String(world.gravityType, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3543};
  modelica_boolean tmp618;
  modelica_boolean tmp619;
  static const MMC_DEFSTRINGLIT(tmp620,194,"Variable violating min/max constraint: Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity <= world.gravityType <= Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, has value: ");
  modelica_string tmp621;
  modelica_metatype tmpMeta622;
  static int tmp623 = 0;
  if(!tmp623)
  {
    tmp618 = GreaterEq((data->simulationInfo->integerParameter[57] /* world.gravityType PARAM */),1);
    tmp619 = LessEq((data->simulationInfo->integerParameter[57] /* world.gravityType PARAM */),3);
    if(!(tmp618 && tmp619))
    {
      tmp621 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[57] /* world.gravityType PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta622 = stringAppend(MMC_REFSTRINGLIT(tmp620),tmp621);
      {
        const char* assert_cond = "(world.gravityType >= Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity and world.gravityType <= Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",29,3,30,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta622));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/package.mo",29,3,30,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta622));
        }
      }
      tmp623 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3544
type: ALGORITHM

  assert(weightTransfer.h >= 0.0, "Variable violating min constraint: 0.0 <= weightTransfer.h, has value: " + String(weightTransfer.h, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3544};
  modelica_boolean tmp624;
  static const MMC_DEFSTRINGLIT(tmp625,71,"Variable violating min constraint: 0.0 <= weightTransfer.h, has value: ");
  modelica_string tmp626;
  modelica_metatype tmpMeta627;
  static int tmp628 = 0;
  if(!tmp628)
  {
    tmp624 = GreaterEq((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */),0.0);
    if(!tmp624)
    {
      tmp626 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta627 = stringAppend(MMC_REFSTRINGLIT(tmp625),tmp626);
      {
        const char* assert_cond = "(weightTransfer.h >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WeightTransfer.mo",14,3,14,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta627));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WeightTransfer.mo",14,3,14,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta627));
        }
      }
      tmp628 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3545
type: ALGORITHM

  assert(weightTransfer.m >= 0.0, "Variable violating min constraint: 0.0 <= weightTransfer.m, has value: " + String(weightTransfer.m, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3545};
  modelica_boolean tmp629;
  static const MMC_DEFSTRINGLIT(tmp630,71,"Variable violating min constraint: 0.0 <= weightTransfer.m, has value: ");
  modelica_string tmp631;
  modelica_metatype tmpMeta632;
  static int tmp633 = 0;
  if(!tmp633)
  {
    tmp629 = GreaterEq((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */),0.0);
    if(!tmp629)
    {
      tmp631 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta632 = stringAppend(MMC_REFSTRINGLIT(tmp630),tmp631);
      {
        const char* assert_cond = "(weightTransfer.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WeightTransfer.mo",13,3,13,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta632));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WeightTransfer.mo",13,3,13,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta632));
        }
      }
      tmp633 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3546
type: ALGORITHM

  assert(weightTransfer.nout >= 1, "Variable violating min constraint: 1 <= weightTransfer.nout, has value: " + String(weightTransfer.nout, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3546};
  modelica_boolean tmp634;
  static const MMC_DEFSTRINGLIT(tmp635,72,"Variable violating min constraint: 1 <= weightTransfer.nout, has value: ");
  modelica_string tmp636;
  modelica_metatype tmpMeta637;
  static int tmp638 = 0;
  if(!tmp638)
  {
    tmp634 = GreaterEq((data->simulationInfo->integerParameter[56] /* weightTransfer.nout PARAM */),((modelica_integer) 1));
    if(!tmp634)
    {
      tmp636 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[56] /* weightTransfer.nout PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta637 = stringAppend(MMC_REFSTRINGLIT(tmp635),tmp636);
      {
        const char* assert_cond = "(weightTransfer.nout >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta637));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta637));
        }
      }
      tmp638 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3547
type: ALGORITHM

  assert(airResistanceLongitudinal.rho >= 0.0, "Variable violating min constraint: 0.0 <= airResistanceLongitudinal.rho, has value: " + String(airResistanceLongitudinal.rho, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3547};
  modelica_boolean tmp639;
  static const MMC_DEFSTRINGLIT(tmp640,84,"Variable violating min constraint: 0.0 <= airResistanceLongitudinal.rho, has value: ");
  modelica_string tmp641;
  modelica_metatype tmpMeta642;
  static int tmp643 = 0;
  if(!tmp643)
  {
    tmp639 = GreaterEq((data->simulationInfo->realParameter[10] /* airResistanceLongitudinal.rho PARAM */),0.0);
    if(!tmp639)
    {
      tmp641 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[10] /* airResistanceLongitudinal.rho PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta642 = stringAppend(MMC_REFSTRINGLIT(tmp640),tmp641);
      {
        const char* assert_cond = "(airResistanceLongitudinal.rho >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/VehicleComponents/AirResistanceLongitudinal.mo",6,3,6,48,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta642));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/VehicleComponents/AirResistanceLongitudinal.mo",6,3,6,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta642));
        }
      }
      tmp643 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3548
type: ALGORITHM

  assert(airResistanceLongitudinal.area >= 0.0, "Variable violating min constraint: 0.0 <= airResistanceLongitudinal.area, has value: " + String(airResistanceLongitudinal.area, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3548};
  modelica_boolean tmp644;
  static const MMC_DEFSTRINGLIT(tmp645,85,"Variable violating min constraint: 0.0 <= airResistanceLongitudinal.area, has value: ");
  modelica_string tmp646;
  modelica_metatype tmpMeta647;
  static int tmp648 = 0;
  if(!tmp648)
  {
    tmp644 = GreaterEq((data->simulationInfo->realParameter[4] /* airResistanceLongitudinal.area PARAM */),0.0);
    if(!tmp644)
    {
      tmp646 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[4] /* airResistanceLongitudinal.area PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta647 = stringAppend(MMC_REFSTRINGLIT(tmp645),tmp646);
      {
        const char* assert_cond = "(airResistanceLongitudinal.area >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/VehicleComponents/AirResistanceLongitudinal.mo",5,3,5,73,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta647));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/VehicleComponents/AirResistanceLongitudinal.mo",5,3,5,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta647));
        }
      }
      tmp648 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3549
type: ALGORITHM

  assert(airResistanceLongitudinal.c_W >= 0.0, "Variable violating min constraint: 0.0 <= airResistanceLongitudinal.c_W, has value: " + String(airResistanceLongitudinal.c_W, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3549};
  modelica_boolean tmp649;
  static const MMC_DEFSTRINGLIT(tmp650,84,"Variable violating min constraint: 0.0 <= airResistanceLongitudinal.c_W, has value: ");
  modelica_string tmp651;
  modelica_metatype tmpMeta652;
  static int tmp653 = 0;
  if(!tmp653)
  {
    tmp649 = GreaterEq((data->simulationInfo->realParameter[5] /* airResistanceLongitudinal.c_W PARAM */),0.0);
    if(!tmp649)
    {
      tmp651 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[5] /* airResistanceLongitudinal.c_W PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta652 = stringAppend(MMC_REFSTRINGLIT(tmp650),tmp651);
      {
        const char* assert_cond = "(airResistanceLongitudinal.c_W >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/VehicleComponents/AirResistanceLongitudinal.mo",4,3,4,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta652));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/VehicleComponents/AirResistanceLongitudinal.mo",4,3,4,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta652));
        }
      }
      tmp653 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3550
type: ALGORITHM

  assert(revolute.stateSelect >= StateSelect.never and revolute.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= revolute.stateSelect <= StateSelect.always, has value: " + String(revolute.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3550};
  modelica_boolean tmp654;
  modelica_boolean tmp655;
  static const MMC_DEFSTRINGLIT(tmp656,115,"Variable violating min/max constraint: StateSelect.never <= revolute.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp657;
  modelica_metatype tmpMeta658;
  static int tmp659 = 0;
  if(!tmp659)
  {
    tmp654 = GreaterEq((data->simulationInfo->integerParameter[55] /* revolute.stateSelect PARAM */),1);
    tmp655 = LessEq((data->simulationInfo->integerParameter[55] /* revolute.stateSelect PARAM */),5);
    if(!(tmp654 && tmp655))
    {
      tmp657 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[55] /* revolute.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta658 = stringAppend(MMC_REFSTRINGLIT(tmp656),tmp657);
      {
        const char* assert_cond = "(revolute.stateSelect >= StateSelect.never and revolute.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",9,3,10,93,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta658));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Joints/Revolute.mo",9,3,10,93,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta658));
        }
      }
      tmp659 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3551
type: ALGORITHM

  assert(body2.m >= 0.0, "Variable violating min constraint: 0.0 <= body2.m, has value: " + String(body2.m, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3551};
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,62,"Variable violating min constraint: 0.0 <= body2.m, has value: ");
  modelica_string tmp662;
  modelica_metatype tmpMeta663;
  static int tmp664 = 0;
  if(!tmp664)
  {
    tmp660 = GreaterEq((data->simulationInfo->realParameter[22] /* body2.m PARAM */),0.0);
    if(!tmp660)
    {
      tmp662 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[22] /* body2.m PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta663 = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        const char* assert_cond = "(body2.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",13,3,13,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta663));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",13,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta663));
        }
      }
      tmp664 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3552
type: ALGORITHM

  assert(body2.stateSelect >= StateSelect.never and body2.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= body2.stateSelect <= StateSelect.always, has value: " + String(body2.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3552};
  modelica_boolean tmp665;
  modelica_boolean tmp666;
  static const MMC_DEFSTRINGLIT(tmp667,112,"Variable violating min/max constraint: StateSelect.never <= body2.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp668;
  modelica_metatype tmpMeta669;
  static int tmp670 = 0;
  if(!tmp670)
  {
    tmp665 = GreaterEq((data->simulationInfo->integerParameter[1] /* body2.stateSelect PARAM */),1);
    tmp666 = LessEq((data->simulationInfo->integerParameter[1] /* body2.stateSelect PARAM */),5);
    if(!(tmp665 && tmp666))
    {
      tmp668 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[1] /* body2.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta669 = stringAppend(MMC_REFSTRINGLIT(tmp667),tmp668);
      {
        const char* assert_cond = "(body2.stateSelect >= StateSelect.never and body2.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",11,3,12,96,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta669));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",11,3,12,96,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta669));
        }
      }
      tmp670 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3553
type: ALGORITHM

  assert(body.m >= 0.0, "Variable violating min constraint: 0.0 <= body.m, has value: " + String(body.m, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3553};
  modelica_boolean tmp671;
  static const MMC_DEFSTRINGLIT(tmp672,61,"Variable violating min constraint: 0.0 <= body.m, has value: ");
  modelica_string tmp673;
  modelica_metatype tmpMeta674;
  static int tmp675 = 0;
  if(!tmp675)
  {
    tmp671 = GreaterEq((data->simulationInfo->realParameter[13] /* body.m PARAM */),0.0);
    if(!tmp671)
    {
      tmp673 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[13] /* body.m PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta674 = stringAppend(MMC_REFSTRINGLIT(tmp672),tmp673);
      {
        const char* assert_cond = "(body.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",13,3,13,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta674));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",13,3,13,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta674));
        }
      }
      tmp675 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3554
type: ALGORITHM

  assert(body.stateSelect >= StateSelect.never and body.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= body.stateSelect <= StateSelect.always, has value: " + String(body.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3554};
  modelica_boolean tmp676;
  modelica_boolean tmp677;
  static const MMC_DEFSTRINGLIT(tmp678,111,"Variable violating min/max constraint: StateSelect.never <= body.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp679;
  modelica_metatype tmpMeta680;
  static int tmp681 = 0;
  if(!tmp681)
  {
    tmp676 = GreaterEq((data->simulationInfo->integerParameter[0] /* body.stateSelect PARAM */),1);
    tmp677 = LessEq((data->simulationInfo->integerParameter[0] /* body.stateSelect PARAM */),5);
    if(!(tmp676 && tmp677))
    {
      tmp679 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[0] /* body.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta680 = stringAppend(MMC_REFSTRINGLIT(tmp678),tmp679);
      {
        const char* assert_cond = "(body.stateSelect >= StateSelect.never and body.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",11,3,12,96,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta680));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/Parts/Body.mo",11,3,12,96,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta680));
        }
      }
      tmp681 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3555
type: ALGORITHM

  assert(frontInertia.stateSelect >= StateSelect.never and frontInertia.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= frontInertia.stateSelect <= StateSelect.always, has value: " + String(frontInertia.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3555};
  modelica_boolean tmp682;
  modelica_boolean tmp683;
  static const MMC_DEFSTRINGLIT(tmp684,119,"Variable violating min/max constraint: StateSelect.never <= frontInertia.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp685;
  modelica_metatype tmpMeta686;
  static int tmp687 = 0;
  if(!tmp687)
  {
    tmp682 = GreaterEq((data->simulationInfo->integerParameter[2] /* frontInertia.stateSelect PARAM */),1);
    tmp683 = LessEq((data->simulationInfo->integerParameter[2] /* frontInertia.stateSelect PARAM */),5);
    if(!(tmp682 && tmp683))
    {
      tmp685 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[2] /* frontInertia.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta686 = stringAppend(MMC_REFSTRINGLIT(tmp684),tmp685);
      {
        const char* assert_cond = "(frontInertia.stateSelect >= StateSelect.never and frontInertia.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta686));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta686));
        }
      }
      tmp687 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3556
type: ALGORITHM

  assert(frontInertia.J >= 0.0, "Variable violating min constraint: 0.0 <= frontInertia.J, has value: " + String(frontInertia.J, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3556};
  modelica_boolean tmp688;
  static const MMC_DEFSTRINGLIT(tmp689,69,"Variable violating min constraint: 0.0 <= frontInertia.J, has value: ");
  modelica_string tmp690;
  modelica_metatype tmpMeta691;
  static int tmp692 = 0;
  if(!tmp692)
  {
    tmp688 = GreaterEq((data->simulationInfo->realParameter[54] /* frontInertia.J PARAM */),0.0);
    if(!tmp688)
    {
      tmp690 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[54] /* frontInertia.J PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta691 = stringAppend(MMC_REFSTRINGLIT(tmp689),tmp690);
      {
        const char* assert_cond = "(frontInertia.J >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta691));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta691));
        }
      }
      tmp692 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3557
type: ALGORITHM

  assert(rearRightInertia.stateSelect >= StateSelect.never and rearRightInertia.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= rearRightInertia.stateSelect <= StateSelect.always, has value: " + String(rearRightInertia.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3557};
  modelica_boolean tmp693;
  modelica_boolean tmp694;
  static const MMC_DEFSTRINGLIT(tmp695,123,"Variable violating min/max constraint: StateSelect.never <= rearRightInertia.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp696;
  modelica_metatype tmpMeta697;
  static int tmp698 = 0;
  if(!tmp698)
  {
    tmp693 = GreaterEq((data->simulationInfo->integerParameter[53] /* rearRightInertia.stateSelect PARAM */),1);
    tmp694 = LessEq((data->simulationInfo->integerParameter[53] /* rearRightInertia.stateSelect PARAM */),5);
    if(!(tmp693 && tmp694))
    {
      tmp696 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[53] /* rearRightInertia.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta697 = stringAppend(MMC_REFSTRINGLIT(tmp695),tmp696);
      {
        const char* assert_cond = "(rearRightInertia.stateSelect >= StateSelect.never and rearRightInertia.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta697));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta697));
        }
      }
      tmp698 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3558
type: ALGORITHM

  assert(rearRightInertia.J >= 0.0, "Variable violating min constraint: 0.0 <= rearRightInertia.J, has value: " + String(rearRightInertia.J, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3558};
  modelica_boolean tmp699;
  static const MMC_DEFSTRINGLIT(tmp700,73,"Variable violating min constraint: 0.0 <= rearRightInertia.J, has value: ");
  modelica_string tmp701;
  modelica_metatype tmpMeta702;
  static int tmp703 = 0;
  if(!tmp703)
  {
    tmp699 = GreaterEq((data->simulationInfo->realParameter[269] /* rearRightInertia.J PARAM */),0.0);
    if(!tmp699)
    {
      tmp701 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[269] /* rearRightInertia.J PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta702 = stringAppend(MMC_REFSTRINGLIT(tmp700),tmp701);
      {
        const char* assert_cond = "(rearRightInertia.J >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta702));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta702));
        }
      }
      tmp703 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3559
type: ALGORITHM

  assert(rearLeftInertia.stateSelect >= StateSelect.never and rearLeftInertia.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= rearLeftInertia.stateSelect <= StateSelect.always, has value: " + String(rearLeftInertia.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3559};
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,122,"Variable violating min/max constraint: StateSelect.never <= rearLeftInertia.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp707;
  modelica_metatype tmpMeta708;
  static int tmp709 = 0;
  if(!tmp709)
  {
    tmp704 = GreaterEq((data->simulationInfo->integerParameter[51] /* rearLeftInertia.stateSelect PARAM */),1);
    tmp705 = LessEq((data->simulationInfo->integerParameter[51] /* rearLeftInertia.stateSelect PARAM */),5);
    if(!(tmp704 && tmp705))
    {
      tmp707 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[51] /* rearLeftInertia.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta708 = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        const char* assert_cond = "(rearLeftInertia.stateSelect >= StateSelect.never and rearLeftInertia.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta708));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta708));
        }
      }
      tmp709 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3560
type: ALGORITHM

  assert(rearLeftInertia.J >= 0.0, "Variable violating min constraint: 0.0 <= rearLeftInertia.J, has value: " + String(rearLeftInertia.J, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3560};
  modelica_boolean tmp710;
  static const MMC_DEFSTRINGLIT(tmp711,72,"Variable violating min constraint: 0.0 <= rearLeftInertia.J, has value: ");
  modelica_string tmp712;
  modelica_metatype tmpMeta713;
  static int tmp714 = 0;
  if(!tmp714)
  {
    tmp710 = GreaterEq((data->simulationInfo->realParameter[229] /* rearLeftInertia.J PARAM */),0.0);
    if(!tmp710)
    {
      tmp712 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[229] /* rearLeftInertia.J PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta713 = stringAppend(MMC_REFSTRINGLIT(tmp711),tmp712);
      {
        const char* assert_cond = "(rearLeftInertia.J >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta713));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta713));
        }
      }
      tmp714 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3561
type: ALGORITHM

  assert(frontWheel.v0_roll >= 1e-15, "Variable violating min constraint: 1e-15 <= frontWheel.v0_roll, has value: " + String(frontWheel.v0_roll, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3561};
  modelica_boolean tmp715;
  static const MMC_DEFSTRINGLIT(tmp716,75,"Variable violating min constraint: 1e-15 <= frontWheel.v0_roll, has value: ");
  modelica_string tmp717;
  modelica_metatype tmpMeta718;
  static int tmp719 = 0;
  if(!tmp719)
  {
    tmp715 = GreaterEq((data->simulationInfo->realParameter[90] /* frontWheel.v0_roll PARAM */),1e-15);
    if(!tmp715)
    {
      tmp717 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[90] /* frontWheel.v0_roll PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta718 = stringAppend(MMC_REFSTRINGLIT(tmp716),tmp717);
      {
        const char* assert_cond = "(frontWheel.v0_roll >= 1e-15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",47,3,48,30,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta718));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",47,3,48,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta718));
        }
      }
      tmp719 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3562
type: ALGORITHM

  assert(frontWheel.stateSelect >= StateSelect.never and frontWheel.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= frontWheel.stateSelect <= StateSelect.always, has value: " + String(frontWheel.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3562};
  modelica_boolean tmp720;
  modelica_boolean tmp721;
  static const MMC_DEFSTRINGLIT(tmp722,117,"Variable violating min/max constraint: StateSelect.never <= frontWheel.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp723;
  modelica_metatype tmpMeta724;
  static int tmp725 = 0;
  if(!tmp725)
  {
    tmp720 = GreaterEq((data->simulationInfo->integerParameter[3] /* frontWheel.stateSelect PARAM */),1);
    tmp721 = LessEq((data->simulationInfo->integerParameter[3] /* frontWheel.stateSelect PARAM */),5);
    if(!(tmp720 && tmp721))
    {
      tmp723 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[3] /* frontWheel.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta724 = stringAppend(MMC_REFSTRINGLIT(tmp722),tmp723);
      {
        const char* assert_cond = "(frontWheel.stateSelect >= StateSelect.never and frontWheel.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",9,3,11,30,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta724));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",9,3,11,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta724));
        }
      }
      tmp725 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3563
type: ALGORITHM

  assert(rearLeftWheel.v0_roll >= 1e-15, "Variable violating min constraint: 1e-15 <= rearLeftWheel.v0_roll, has value: " + String(rearLeftWheel.v0_roll, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3563};
  modelica_boolean tmp726;
  static const MMC_DEFSTRINGLIT(tmp727,78,"Variable violating min constraint: 1e-15 <= rearLeftWheel.v0_roll, has value: ");
  modelica_string tmp728;
  modelica_metatype tmpMeta729;
  static int tmp730 = 0;
  if(!tmp730)
  {
    tmp726 = GreaterEq((data->simulationInfo->realParameter[254] /* rearLeftWheel.v0_roll PARAM */),1e-15);
    if(!tmp726)
    {
      tmp728 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[254] /* rearLeftWheel.v0_roll PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta729 = stringAppend(MMC_REFSTRINGLIT(tmp727),tmp728);
      {
        const char* assert_cond = "(rearLeftWheel.v0_roll >= 1e-15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",47,3,48,30,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta729));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",47,3,48,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta729));
        }
      }
      tmp730 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3564
type: ALGORITHM

  assert(rearLeftWheel.stateSelect >= StateSelect.never and rearLeftWheel.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= rearLeftWheel.stateSelect <= StateSelect.always, has value: " + String(rearLeftWheel.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3564};
  modelica_boolean tmp731;
  modelica_boolean tmp732;
  static const MMC_DEFSTRINGLIT(tmp733,120,"Variable violating min/max constraint: StateSelect.never <= rearLeftWheel.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp734;
  modelica_metatype tmpMeta735;
  static int tmp736 = 0;
  if(!tmp736)
  {
    tmp731 = GreaterEq((data->simulationInfo->integerParameter[52] /* rearLeftWheel.stateSelect PARAM */),1);
    tmp732 = LessEq((data->simulationInfo->integerParameter[52] /* rearLeftWheel.stateSelect PARAM */),5);
    if(!(tmp731 && tmp732))
    {
      tmp734 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[52] /* rearLeftWheel.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta735 = stringAppend(MMC_REFSTRINGLIT(tmp733),tmp734);
      {
        const char* assert_cond = "(rearLeftWheel.stateSelect >= StateSelect.never and rearLeftWheel.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",9,3,11,30,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta735));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",9,3,11,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta735));
        }
      }
      tmp736 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3565
type: ALGORITHM

  assert(rearRightWheel.v0_roll >= 1e-15, "Variable violating min constraint: 1e-15 <= rearRightWheel.v0_roll, has value: " + String(rearRightWheel.v0_roll, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3565};
  modelica_boolean tmp737;
  static const MMC_DEFSTRINGLIT(tmp738,79,"Variable violating min constraint: 1e-15 <= rearRightWheel.v0_roll, has value: ");
  modelica_string tmp739;
  modelica_metatype tmpMeta740;
  static int tmp741 = 0;
  if(!tmp741)
  {
    tmp737 = GreaterEq((data->simulationInfo->realParameter[294] /* rearRightWheel.v0_roll PARAM */),1e-15);
    if(!tmp737)
    {
      tmp739 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[294] /* rearRightWheel.v0_roll PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta740 = stringAppend(MMC_REFSTRINGLIT(tmp738),tmp739);
      {
        const char* assert_cond = "(rearRightWheel.v0_roll >= 1e-15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",47,3,48,30,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta740));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",47,3,48,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta740));
        }
      }
      tmp741 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3566
type: ALGORITHM

  assert(rearRightWheel.stateSelect >= StateSelect.never and rearRightWheel.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= rearRightWheel.stateSelect <= StateSelect.always, has value: " + String(rearRightWheel.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3566};
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  static const MMC_DEFSTRINGLIT(tmp744,121,"Variable violating min/max constraint: StateSelect.never <= rearRightWheel.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp745;
  modelica_metatype tmpMeta746;
  static int tmp747 = 0;
  if(!tmp747)
  {
    tmp742 = GreaterEq((data->simulationInfo->integerParameter[54] /* rearRightWheel.stateSelect PARAM */),1);
    tmp743 = LessEq((data->simulationInfo->integerParameter[54] /* rearRightWheel.stateSelect PARAM */),5);
    if(!(tmp742 && tmp743))
    {
      tmp745 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[54] /* rearRightWheel.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta746 = stringAppend(MMC_REFSTRINGLIT(tmp744),tmp745);
      {
        const char* assert_cond = "(rearRightWheel.stateSelect >= StateSelect.never and rearRightWheel.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",9,3,11,30,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        } else {
          FILE_INFO info = {"C:/Users/denoc/Documents/LTU/Projekt/Tuk-Tuk/Modellering/Modeller/WheelWithSlip.mo",9,3,11,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta746));
        }
      }
      tmp747 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3567
type: ALGORITHM

  assert(planarWorld.defaultNm_to_m >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.defaultNm_to_m, has value: " + String(planarWorld.defaultNm_to_m, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3567};
  modelica_boolean tmp748;
  static const MMC_DEFSTRINGLIT(tmp749,81,"Variable violating min constraint: 0.0 <= planarWorld.defaultNm_to_m, has value: ");
  modelica_string tmp750;
  modelica_metatype tmpMeta751;
  static int tmp752 = 0;
  if(!tmp752)
  {
    tmp748 = GreaterEq((data->simulationInfo->realParameter[185] /* planarWorld.defaultNm_to_m PARAM */),0.0);
    if(!tmp748)
    {
      tmp750 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[185] /* planarWorld.defaultNm_to_m PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta751 = stringAppend(MMC_REFSTRINGLIT(tmp749),tmp750);
      {
        const char* assert_cond = "(planarWorld.defaultNm_to_m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",110,3,112,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta751));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",110,3,112,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta751));
        }
      }
      tmp752 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3568
type: ALGORITHM

  assert(planarWorld.defaultN_to_m >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.defaultN_to_m, has value: " + String(planarWorld.defaultN_to_m, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3568};
  modelica_boolean tmp753;
  static const MMC_DEFSTRINGLIT(tmp754,80,"Variable violating min constraint: 0.0 <= planarWorld.defaultN_to_m, has value: ");
  modelica_string tmp755;
  modelica_metatype tmpMeta756;
  static int tmp757 = 0;
  if(!tmp757)
  {
    tmp753 = GreaterEq((data->simulationInfo->realParameter[184] /* planarWorld.defaultN_to_m PARAM */),0.0);
    if(!tmp753)
    {
      tmp755 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[184] /* planarWorld.defaultN_to_m PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta756 = stringAppend(MMC_REFSTRINGLIT(tmp754),tmp755);
      {
        const char* assert_cond = "(planarWorld.defaultN_to_m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",107,3,109,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta756));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",107,3,109,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta756));
        }
      }
      tmp757 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 3569
type: ALGORITHM

  assert(planarWorld.defaultArrowDiameter >= 0.0, "Variable violating min constraint: 0.0 <= planarWorld.defaultArrowDiameter, has value: " + String(planarWorld.defaultArrowDiameter, "g"));
*/
OMC_DISABLE_OPT
static void ThreeWheelVehicle3FMU_eqFunction_3569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3569};
  modelica_boolean tmp758;
  static const MMC_DEFSTRINGLIT(tmp759,87,"Variable violating min constraint: 0.0 <= planarWorld.defaultArrowDiameter, has value: ");
  modelica_string tmp760;
  modelica_metatype tmpMeta761;
  static int tmp762 = 0;
  if(!tmp762)
  {
    tmp758 = GreaterEq((data->simulationInfo->realParameter[177] /* planarWorld.defaultArrowDiameter PARAM */),0.0);
    if(!tmp758)
    {
      tmp760 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[177] /* planarWorld.defaultArrowDiameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta761 = stringAppend(MMC_REFSTRINGLIT(tmp759),tmp760);
      {
        const char* assert_cond = "(planarWorld.defaultArrowDiameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",92,3,94,40,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        } else {
          FILE_INFO info = {"C:/Users/denoc/AppData/Roaming/.openmodelica/libraries/PlanarMechanics 1.6.0/PlanarWorldIn3D.mo",92,3,94,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        }
      }
      tmp762 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void ThreeWheelVehicle3FMU_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  ThreeWheelVehicle3FMU_eqFunction_1983(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1984(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_948(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_949(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1987(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1988(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_950(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_951(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_941(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_942(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_943(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_944(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_945(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_946(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_934(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_935(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_936(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_937(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_938(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_939(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_976(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_975(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_974(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_973(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_972(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_971(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_970(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_969(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_968(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_967(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_966(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_965(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_964(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_963(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_962(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_961(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_960(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_959(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_958(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_957(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_956(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_955(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_954(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_953(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_952(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_947(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_940(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2031(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2032(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2034(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2035(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2037(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2038(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2039(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2040(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2041(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2042(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2043(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2044(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2045(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2046(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2047(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2048(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2049(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2050(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2051(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2052(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2053(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2054(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2055(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2056(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2057(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2058(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2059(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2060(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2061(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2062(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2063(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2064(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2065(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2067(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2069(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2071(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2072(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2073(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2074(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2075(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2076(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2077(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2078(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2079(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2080(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2082(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2083(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2085(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2087(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2088(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2089(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2090(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2091(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2092(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2094(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2096(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2098(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2099(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2100(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2101(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2102(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2103(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2104(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2105(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2106(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2107(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2108(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2109(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2110(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2111(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2112(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2113(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2114(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2115(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2116(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2117(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2118(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2119(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2120(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2121(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2122(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2123(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2124(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2125(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2126(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2127(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2128(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2129(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2130(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2131(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2132(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2133(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2134(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2135(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2136(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2137(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2138(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2139(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2140(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2141(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2142(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2143(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2144(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2145(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2146(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2147(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2148(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2149(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2150(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2151(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2152(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2153(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2154(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2155(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2156(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2157(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2158(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2159(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2160(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2161(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2162(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2163(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2164(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2165(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2166(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2167(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2168(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2169(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2170(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2171(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2172(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2173(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2174(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2175(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2176(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2177(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2178(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2179(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2180(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2181(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2182(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2183(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2184(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2185(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2186(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2187(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2188(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2189(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2190(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2191(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2192(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2193(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2194(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2195(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2196(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2197(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2198(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2199(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2200(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2201(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2202(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2203(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2204(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2205(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2206(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2207(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2208(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2209(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2210(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2211(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2212(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2213(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2214(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2215(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2216(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2217(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2218(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2219(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2220(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2221(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2222(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2223(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2224(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2225(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2226(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2227(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2228(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2229(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2230(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2231(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2232(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2233(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2234(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2235(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2236(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2237(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2238(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2239(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2240(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2241(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2242(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2243(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2244(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2245(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2246(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2247(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2248(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2249(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2250(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2251(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2252(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2253(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2254(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2255(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2256(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2257(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2258(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2259(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2260(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2261(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2262(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2263(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2264(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2265(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2266(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2267(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2268(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2269(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2270(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2271(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2272(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2273(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2275(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2276(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2277(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2278(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2279(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2280(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2281(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2282(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2283(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2284(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2285(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2286(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2287(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2288(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2289(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2290(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2291(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2292(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2293(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2294(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2295(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2296(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2297(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2298(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2299(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2300(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2301(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2302(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2303(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2304(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2305(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2306(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2307(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2308(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2309(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2310(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2311(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2312(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2313(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2314(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2315(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2316(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2317(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2318(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2319(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2320(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2321(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2322(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2323(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2324(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2325(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2326(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2327(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2328(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2329(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2330(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2331(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2332(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2333(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2334(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2335(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2336(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2337(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2338(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2339(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2340(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2341(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2342(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2343(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2344(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2345(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2349(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2350(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2351(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2352(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2353(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2355(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2356(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2357(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2358(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2360(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2361(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2362(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2363(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2365(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2366(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2372(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2373(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2374(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2375(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2376(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2377(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2378(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2380(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2393(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2394(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2402(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2405(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2406(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2407(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2408(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2410(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2411(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2412(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2415(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2420(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2423(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2426(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2427(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2428(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2431(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2433(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2435(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2437(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2439(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2441(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2446(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2448(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2450(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2451(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2453(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2454(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2455(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2456(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2457(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2458(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2459(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2460(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2461(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2462(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2463(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2464(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2467(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2469(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2470(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2471(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2472(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2473(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2474(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2475(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2476(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2477(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2478(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2479(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2482(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2484(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2485(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2486(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2487(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2488(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2489(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2490(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2491(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2492(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2493(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2494(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2497(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2498(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2499(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2500(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2501(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2503(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2504(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2505(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2506(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2508(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2509(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2510(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2511(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2513(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2514(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2518(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2519(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2520(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_931(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_930(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_929(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_928(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_927(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_926(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_925(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_924(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_923(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_922(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_921(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_920(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_919(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_918(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_917(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_916(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_915(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_914(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_913(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_912(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_911(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_910(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_909(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_908(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_907(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_906(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_905(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_904(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_903(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_902(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_901(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_900(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_899(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_898(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_897(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_896(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_895(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_894(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_893(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_892(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_891(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_890(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_889(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_888(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_887(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_886(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_885(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_884(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_883(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_882(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_881(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_880(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_879(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_878(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_877(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_876(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_875(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_799(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_798(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_797(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_874(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_795(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_873(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_872(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_871(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_870(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_869(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_868(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_867(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_866(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_865(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_864(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_863(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_862(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_861(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_860(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_859(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_858(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_857(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_856(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_855(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_854(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_853(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_852(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_851(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_850(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_849(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_848(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_847(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_846(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_845(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_844(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_843(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_842(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_841(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_840(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_839(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_838(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_837(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_836(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_835(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_834(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_833(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_832(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_831(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_830(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_829(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_828(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_827(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_826(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_825(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_824(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_823(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_822(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_821(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_820(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_819(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_818(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_817(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_816(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_815(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_814(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_813(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_812(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_811(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_796(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_800(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_794(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_793(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_792(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_791(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_790(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_789(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_788(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_787(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_786(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_785(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_784(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_783(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_782(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_781(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_780(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_779(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_778(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_777(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_776(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_775(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_774(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_773(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_772(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_771(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_770(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_769(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_768(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_767(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_766(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_765(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_764(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_763(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_762(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_761(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_760(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_759(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_758(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_757(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_756(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_755(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_754(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_753(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_752(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_751(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_750(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_749(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_748(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_747(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_746(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_745(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_744(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_743(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_742(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_741(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_740(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_739(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_738(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_737(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_736(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_735(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_734(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_733(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_732(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_704(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_703(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_702(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_731(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_700(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_730(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_729(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_728(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_727(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_726(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_725(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_724(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_723(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_722(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_721(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_720(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_719(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_718(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_717(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_716(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_701(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_705(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_699(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_698(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_697(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_696(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_695(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_694(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_693(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_692(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_691(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_690(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_689(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_688(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_687(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_686(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_685(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_684(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_683(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_682(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_681(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_680(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_679(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_678(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_677(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_676(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_675(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_674(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_673(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_672(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_671(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_670(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_669(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_668(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_667(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_666(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_665(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_664(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_663(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_662(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_661(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_660(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_659(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_658(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_657(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_656(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_655(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_654(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_653(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_652(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_651(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_650(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_649(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_648(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_647(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_646(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_645(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_644(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_643(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_642(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_641(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_640(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_639(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_638(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_637(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_636(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_635(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_634(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_633(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_632(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_631(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_630(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_629(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_628(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_627(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_626(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_625(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_624(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_623(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_622(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_621(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_620(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_619(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_618(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_617(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_616(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_615(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_614(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_613(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_612(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_611(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_610(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_609(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_608(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_607(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_606(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_605(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_604(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_603(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_602(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_601(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_600(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_599(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_598(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_597(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_596(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_595(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_594(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_593(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_591(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_589(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_588(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_587(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_586(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_585(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_584(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_583(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_582(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_581(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_580(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_579(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_578(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_577(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_576(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_575(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_574(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_573(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_572(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_571(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_570(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_569(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_568(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_567(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_566(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_565(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_564(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_563(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_562(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_561(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_560(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_559(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_558(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_557(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_556(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_555(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_554(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_553(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_552(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_551(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_550(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_549(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_548(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_547(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_546(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_545(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_544(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_540(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_539(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_538(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_537(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_536(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_535(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_534(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_533(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_532(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_531(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_530(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_529(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_528(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_527(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_526(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_525(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_524(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_523(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_522(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_521(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_520(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_519(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_518(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_517(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_516(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_515(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_514(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_513(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_512(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_511(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_510(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_509(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_508(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_507(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_506(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_505(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_504(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_503(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_502(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_501(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_500(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_499(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_498(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_497(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_496(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_495(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_494(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_493(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_492(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_491(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_490(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_489(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_488(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_487(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_486(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_485(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_484(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_483(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_482(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_481(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_480(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_479(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_478(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_477(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_476(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_475(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_474(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_473(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_472(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_471(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_470(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_469(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_468(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_467(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_466(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_465(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_464(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_463(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_462(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_461(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_460(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_459(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_458(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_457(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_456(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_455(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_454(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_453(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_452(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_451(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_450(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_449(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_448(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_447(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_446(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_445(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_444(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_443(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_442(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_441(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_440(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_439(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_438(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_437(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_436(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_435(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_434(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_433(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_432(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_431(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_430(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_429(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_428(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_427(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_426(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_425(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_424(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_423(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_422(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_421(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_420(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_419(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_418(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_417(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_416(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_415(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_414(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_413(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_412(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_411(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_410(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_409(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_408(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_407(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_406(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_405(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_404(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_403(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_402(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_401(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_400(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_399(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_398(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_397(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_396(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_395(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_394(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_393(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_392(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_391(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_390(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_389(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_388(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_387(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_386(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_385(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_384(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_383(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_382(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_381(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_380(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_379(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_378(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_377(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_376(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_375(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_374(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_373(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_372(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_371(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_370(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_369(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_368(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_367(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_366(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_365(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_364(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_363(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_362(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_361(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_360(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_359(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_358(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_357(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_356(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_355(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_354(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_353(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_352(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_351(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_350(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_349(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_348(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_347(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_346(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_345(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_344(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_343(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_342(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_341(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_340(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_339(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_338(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_337(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_336(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_335(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_334(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_333(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_332(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_331(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_330(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_329(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_328(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_326(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_324(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_323(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_322(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_321(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_320(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_319(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_318(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_317(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_316(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_315(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_314(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_313(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_312(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_311(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_310(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_309(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_308(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_305(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_304(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_303(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_302(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_301(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_300(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_299(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_298(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_297(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_296(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_295(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_294(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_293(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_292(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_291(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_289(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_288(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_287(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_286(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_285(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_284(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_283(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_282(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_281(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_280(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_279(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_278(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_277(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_276(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_275(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_274(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_273(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_272(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_271(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_270(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_269(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_268(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_267(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_266(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_265(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_264(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_262(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_261(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_260(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_259(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_258(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_257(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_256(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_255(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_254(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_253(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_252(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_251(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_249(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_247(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_246(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_245(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_244(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_243(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_242(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_241(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_240(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_239(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_237(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_235(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_234(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_233(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_232(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_231(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_230(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_229(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_228(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_227(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_226(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_225(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_224(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_223(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_222(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_221(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_220(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_219(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_218(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_217(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_216(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_215(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_214(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_213(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_212(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_211(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_210(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_209(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_208(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_207(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_206(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_205(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_204(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_203(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_202(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_201(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_200(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_199(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_198(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_197(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_196(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_195(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_194(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_193(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_192(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_191(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_190(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_189(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_188(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_187(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_186(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_185(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_184(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_183(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_182(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_181(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_180(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_179(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_178(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_177(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_176(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_175(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_174(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_173(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_172(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_171(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_170(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_169(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_168(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_167(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_166(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_165(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_164(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_163(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_162(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_161(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_160(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_159(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_158(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_157(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_156(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_155(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_154(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_153(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_152(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_151(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_150(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_149(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_148(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_147(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_146(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_145(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_144(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_143(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_142(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_141(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_140(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_139(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_138(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_137(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_136(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_135(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_134(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_133(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_132(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_131(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_130(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_129(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_128(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_127(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_126(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_125(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_124(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_123(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_122(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_121(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_120(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_119(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_118(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_117(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_116(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_115(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_114(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_113(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_112(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_111(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_110(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_109(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_108(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_107(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_106(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_105(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_104(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_103(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_102(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_101(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_100(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_99(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_98(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_97(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_96(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_95(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_94(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_93(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_92(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_91(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_90(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_89(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_88(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_87(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_86(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_85(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_84(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_83(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_82(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_81(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_80(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_79(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_78(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_77(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_76(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_75(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_74(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_73(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_72(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_71(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_70(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_69(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_68(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_67(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_66(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_65(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_64(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_63(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_62(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_61(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_60(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_59(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_58(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_57(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_56(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_55(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_54(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_53(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_52(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_51(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_50(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_49(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_48(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_47(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_46(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_45(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_44(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_43(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_42(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_41(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_40(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_39(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_38(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_37(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_36(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_35(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_34(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_33(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_32(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_31(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_30(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_29(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_28(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_27(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_26(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_25(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_24(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_23(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_22(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_21(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_20(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_19(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_18(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_17(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_16(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_15(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_14(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_13(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_12(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_11(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_10(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_9(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_8(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_7(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_6(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_5(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_4(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_2(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_1(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3438(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3439(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3440(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3441(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3442(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3443(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3444(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3445(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3446(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3447(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3448(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3449(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3450(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3451(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3452(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3453(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3454(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3455(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3456(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3457(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3458(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3459(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3460(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3461(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3462(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3463(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3464(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3465(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3466(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3467(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3468(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3469(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3470(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3471(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3472(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3473(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3474(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3475(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3476(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3477(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3478(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3479(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3480(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3481(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3482(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3483(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3484(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3485(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3486(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3487(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3488(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3489(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3490(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3491(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3492(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3493(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3494(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3495(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3496(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3497(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3498(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3499(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3500(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3501(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3502(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3503(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3504(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3505(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3506(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3507(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3508(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3509(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3510(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3511(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3512(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3513(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3514(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3515(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3516(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3517(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3518(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3519(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3520(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3521(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3522(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3523(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3524(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3525(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3526(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3527(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3528(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3529(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3530(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3531(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3532(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3533(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3534(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3535(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3536(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3537(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3538(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3539(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3540(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3541(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3542(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3543(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3544(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3545(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3546(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3547(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3548(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3549(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3550(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3551(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3552(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3553(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3554(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3555(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3556(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3557(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3558(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3559(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3560(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3561(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3562(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3563(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3564(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3565(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3566(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3567(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3568(data, threadData);
  ThreeWheelVehicle3FMU_eqFunction_3569(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int ThreeWheelVehicle3FMU_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->localData[0]->integerVars[0] /* body.sphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[0].time_unvarying = 1;
  (data->localData[0]->integerVars[3] /* body2.sphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[3].time_unvarying = 1;
  (data->localData[0]->integerVars[6] /* front.color[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[6].time_unvarying = 1;
  (data->localData[0]->integerVars[8] /* front.color[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[8].time_unvarying = 1;
  (data->localData[0]->integerVars[15] /* rear.color[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[15].time_unvarying = 1;
  (data->localData[0]->integerVars[17] /* rear.color[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[17].time_unvarying = 1;
  (data->localData[0]->integerVars[25] /* revolute.cylinderColor[2] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[25].time_unvarying = 1;
  (data->localData[0]->integerVars[26] /* revolute.cylinderColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[26].time_unvarying = 1;
  (data->localData[0]->integerVars[27] /* world.axisColor_x[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[27].time_unvarying = 1;
  (data->localData[0]->integerVars[28] /* world.axisColor_x[2] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[28].time_unvarying = 1;
  (data->localData[0]->integerVars[29] /* world.axisColor_x[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[29].time_unvarying = 1;
  (data->localData[0]->integerVars[30] /* world.gravityArrowColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[30].time_unvarying = 1;
  (data->localData[0]->integerVars[32] /* world.gravityArrowColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[32].time_unvarying = 1;
  (data->localData[0]->integerVars[33] /* world.gravitySphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[33].time_unvarying = 1;
  (data->localData[0]->integerVars[35] /* world.gravitySphereColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[35].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4] /* planarWorld.axisColor_x[1] PARAM */) = ((modelica_integer) 85);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5] /* planarWorld.axisColor_x[2] PARAM */) = ((modelica_integer) 85);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[6] /* planarWorld.axisColor_x[3] PARAM */) = ((modelica_integer) 200);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[28] /* planarWorld.coordinateSystem.x_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[28].time_unvarying = 1;
  (data->simulationInfo->integerParameter[35] /* planarWorld.coordinateSystem.y_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[35].time_unvarying = 1;
  (data->simulationInfo->integerParameter[42] /* planarWorld.coordinateSystem.z_label.n PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[42].time_unvarying = 1;
  (data->simulationInfo->integerParameter[46] /* planarWorld.gravityArrowColor[1] PARAM */) = ((modelica_integer) 0);
  data->modelData->integerParameterData[46].time_unvarying = 1;
  (data->simulationInfo->integerParameter[47] /* planarWorld.gravityArrowColor[2] PARAM */) = ((modelica_integer) 180);
  data->modelData->integerParameterData[47].time_unvarying = 1;
  (data->simulationInfo->integerParameter[48] /* planarWorld.gravityArrowColor[3] PARAM */) = ((modelica_integer) 0);
  data->modelData->integerParameterData[48].time_unvarying = 1;
  (data->simulationInfo->integerParameter[49] /* planarWorld.ndim PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[49].time_unvarying = 1;
  (data->simulationInfo->integerParameter[50] /* planarWorld.ndim2 PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[50].time_unvarying = 1;
  (data->simulationInfo->integerParameter[56] /* weightTransfer.nout PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[56].time_unvarying = 1;
  (data->simulationInfo->integerParameter[58] /* world.ndim PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[58].time_unvarying = 1;
  (data->simulationInfo->integerParameter[59] /* world.ndim2 PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[59].time_unvarying = 1;
  (data->simulationInfo->integerParameter[60] /* world.ndim_pointGravity PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[60].time_unvarying = 1;
  (data->simulationInfo->integerParameter[61] /* world.x_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[61].time_unvarying = 1;
  (data->simulationInfo->integerParameter[62] /* world.y_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[62].time_unvarying = 1;
  (data->simulationInfo->integerParameter[63] /* world.z_label.n PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[63].time_unvarying = 1;
  (data->localData[0]->realVars[765] /* rearLeft.frame_a.t variable */) = -0.0;
  data->modelData->realVarsData[765].time_unvarying = 1;
  (data->localData[0]->realVars[882] /* rearRight.frame_b.t variable */) = -0.0;
  data->modelData->realVarsData[882].time_unvarying = 1;
  (data->simulationInfo->realParameter[306] /* revolute.fixed.phi0 PARAM */) = 0.0;
  data->modelData->realParameterData[306].time_unvarying = 1;
  (data->simulationInfo->realParameter[340] /* world.defaultFrameDiameterFraction PARAM */) = 40.0;
  data->modelData->realParameterData[340].time_unvarying = 1;
  (data->simulationInfo->realParameter[343] /* world.defaultN_to_m PARAM */) = 1000.0;
  data->modelData->realParameterData[343].time_unvarying = 1;
  (data->simulationInfo->realParameter[344] /* world.defaultNm_to_m PARAM */) = 1000.0;
  data->modelData->realParameterData[344].time_unvarying = 1;
  (data->simulationInfo->realParameter[345] /* world.defaultSpecularCoefficient PARAM */) = 0.7;
  data->modelData->realParameterData[345].time_unvarying = 1;
  (data->simulationInfo->realParameter[346] /* world.defaultWidthFraction PARAM */) = 20.0;
  data->modelData->realParameterData[346].time_unvarying = 1;
  (data->simulationInfo->realParameter[347] /* world.g PARAM */) = 9.806649999999999;
  data->modelData->realParameterData[347].time_unvarying = 1;
  (data->simulationInfo->realParameter[361] /* world.gravityArrowTail[1] PARAM */) = 0.0;
  data->modelData->realParameterData[361].time_unvarying = 1;
  (data->simulationInfo->realParameter[362] /* world.gravityArrowTail[2] PARAM */) = 0.0;
  data->modelData->realParameterData[362].time_unvarying = 1;
  (data->simulationInfo->realParameter[363] /* world.gravityArrowTail[3] PARAM */) = 0.0;
  data->modelData->realParameterData[363].time_unvarying = 1;
  (data->simulationInfo->realParameter[367] /* world.gravitySphereDiameter PARAM */) = 12742000.0;
  data->modelData->realParameterData[367].time_unvarying = 1;
  (data->simulationInfo->realParameter[368] /* world.groundAxis_u[1] PARAM */) = 1.0;
  data->modelData->realParameterData[368].time_unvarying = 1;
  (data->simulationInfo->realParameter[369] /* world.groundAxis_u[2] PARAM */) = 0.0;
  data->modelData->realParameterData[369].time_unvarying = 1;
  (data->simulationInfo->realParameter[370] /* world.groundAxis_u[3] PARAM */) = 0.0;
  data->modelData->realParameterData[370].time_unvarying = 1;
  (data->simulationInfo->realParameter[371] /* world.groundLength_u PARAM */) = 2.0;
  data->modelData->realParameterData[371].time_unvarying = 1;
  (data->simulationInfo->realParameter[378] /* world.mu PARAM */) = 398600441800000.0;
  data->modelData->realParameterData[378].time_unvarying = 1;
  (data->simulationInfo->realParameter[379] /* world.n[1] PARAM */) = 0.0;
  data->modelData->realParameterData[379].time_unvarying = 1;
  (data->simulationInfo->realParameter[380] /* world.n[2] PARAM */) = -1.0;
  data->modelData->realParameterData[380].time_unvarying = 1;
  (data->simulationInfo->realParameter[381] /* world.n[3] PARAM */) = 0.0;
  data->modelData->realParameterData[381].time_unvarying = 1;
  (data->simulationInfo->realParameter[382] /* world.nominalLength PARAM */) = 1.0;
  data->modelData->realParameterData[382].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[0] /* body.animate PARAM */) = 1;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[1] /* body.enableGravity PARAM */) = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[2] /* body2.animate PARAM */) = 1;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[3] /* body2.enableGravity PARAM */) = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[4] /* front.animate PARAM */) = 1;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[5] /* front2.animate PARAM */) = 1;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[6] /* frontRollingResistance.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[7] /* frontTrail.animate PARAM */) = 1;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[8] /* frontWheel.animate PARAM */) = 1;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[9] /* frontWheel.useHeatPort PARAM */) = 0;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[10] /* gearLeft.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[11] /* gearRight.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[12] /* planarWorld.animateGravity PARAM */) = 1;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[13] /* planarWorld.animateWorld PARAM */) = 1;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[14] /* planarWorld.axisShowLabels PARAM */) = 1;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[15] /* planarWorld.connectToMultiBody PARAM */) = 0;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[16] /* planarWorld.coordinateSystem.axisShowLabels PARAM */) = 1;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[17] /* planarWorld.enableAnimation PARAM */) = 1;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[18] /* planarWorld.inheritGravityFromMultiBody PARAM */) = 0;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[19] /* positionPhi.exact PARAM */) = 1;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[20] /* positionPhi.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[21] /* rear.animate PARAM */) = 1;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[22] /* rearLeft.animate PARAM */) = 1;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[23] /* rearLeftRollResistance.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[24] /* rearLeftWheel.animate PARAM */) = 1;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[25] /* rearLeftWheel.useHeatPort PARAM */) = 0;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[26] /* rearRight.animate PARAM */) = 1;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[27] /* rearRightRollingResistance.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[28] /* rearRightWheel.animate PARAM */) = 1;
  data->modelData->booleanParameterData[28].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[29] /* rearRightWheel.useHeatPort PARAM */) = 0;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[30] /* revolute.animate PARAM */) = 1;
  data->modelData->booleanParameterData[30].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[31] /* revolute.extraLine PARAM */) = 0;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[32] /* revolute.useFlange PARAM */) = 1;
  data->modelData->booleanParameterData[32].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[33] /* torqueRearLeft.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[33].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[34] /* torqueRearRight.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[34].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[35] /* world.animateGravity PARAM */) = 1;
  data->modelData->booleanParameterData[35].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[36] /* world.animateGround PARAM */) = 0;
  data->modelData->booleanParameterData[36].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[37] /* world.animateWorld PARAM */) = 1;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[38] /* world.axisShowLabels PARAM */) = 1;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[39] /* world.driveTrainMechanics3D PARAM */) = 1;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[40] /* world.enableAnimation PARAM */) = 1;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  (data->simulationInfo->integerParameter[0] /* body.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[1] /* body2.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2] /* frontInertia.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3] /* frontWheel.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[51] /* rearLeftInertia.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[51].time_unvarying = 1;
  (data->simulationInfo->integerParameter[52] /* rearLeftWheel.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[52].time_unvarying = 1;
  (data->simulationInfo->integerParameter[53] /* rearRightInertia.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[53].time_unvarying = 1;
  (data->simulationInfo->integerParameter[54] /* rearRightWheel.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[54].time_unvarying = 1;
  (data->simulationInfo->integerParameter[55] /* revolute.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[55].time_unvarying = 1;
  (data->simulationInfo->integerParameter[57] /* world.gravityType PARAM */) = 2;
  data->modelData->integerParameterData[57].time_unvarying = 1;
  ThreeWheelVehicle3FMU_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

