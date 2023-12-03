/* Non Linear Systems */
#include "ThreeWheelVehicle3FMU_model.h"
#include "ThreeWheelVehicle3FMU_12jac.h"
#include "simulation/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 1302
type: SIMPLE_ASSIGN
$DER.$DER.front2.R[2,1] = cos(body.phi) * $DER.body.w - sin(body.phi) * body.w ^ 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[30] /* der(der(front2.R[2,1])) DUMMY_DER */) = (cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)) - ((sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((tmp0 * tmp0)));
  TRACE_POP
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
$DER.$DER.front2.R[2,2] = (-cos(body.phi)) * body.w ^ 2.0 - sin(body.phi) * $DER.body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[31] /* der(der(front2.R[2,2])) DUMMY_DER */) = ((-cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)))) * ((tmp0 * tmp0)) - ((sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
$DER.$DER.front2.r0[2] = $DER.$DER.front2.R[2,1] * front2.r[1] + $DER.$DER.front2.R[2,2] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[33] /* der(der(front2.r0[2])) DUMMY_DER */) = ((data->localData[0]->realVars[30] /* der(der(front2.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) + ((data->localData[0]->realVars[31] /* der(der(front2.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
$DER.$DER.front2.r0[1] = $DER.$DER.front2.R[2,2] * front2.r[1] - $DER.$DER.front2.R[2,1] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[32] /* der(der(front2.r0[1])) DUMMY_DER */) = ((data->localData[0]->realVars[31] /* der(der(front2.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) - (((data->localData[0]->realVars[30] /* der(der(front2.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
$DER.$DER.front.R[2,1] = cos(body.phi) * $DER.body.w - sin(body.phi) * body.w ^ 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[24] /* der(der(front.R[2,1])) DUMMY_DER */) = (cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)) - ((sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((tmp0 * tmp0)));
  TRACE_POP
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
$DER.$DER.front.R[2,2] = (-cos(body.phi)) * body.w ^ 2.0 - sin(body.phi) * $DER.body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[25] /* der(der(front.R[2,2])) DUMMY_DER */) = ((-cos((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */)))) * ((tmp0 * tmp0)) - ((sin((data->localData[0]->realVars[0] /* body.phi STATE(1,body.w) */))) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
$DER.$DER.front.r0[2] = $DER.$DER.front.R[2,1] * front.r[1] + $DER.$DER.front.R[2,2] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[29] /* der(der(front.r0[2])) DUMMY_DER */) = ((data->localData[0]->realVars[24] /* der(der(front.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) + ((data->localData[0]->realVars[25] /* der(der(front.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
$DER.$DER.front.r0[1] = $DER.$DER.front.R[2,2] * front.r[1] - $DER.$DER.front.R[2,1] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[28] /* der(der(front.r0[1])) DUMMY_DER */) = ((data->localData[0]->realVars[25] /* der(der(front.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) - (((data->localData[0]->realVars[24] /* der(der(front.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1310
type: SIMPLE_ASSIGN
body2.z = $DER.body.w + revolute.z
*/
void ThreeWheelVehicle3FMU_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->realVars[180] /* body2.z variable */) = (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */) + (data->localData[0]->realVars[1008] /* revolute.z variable */);
  TRACE_POP
}
/*
equation index: 1311
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.R[2,1] = cos(body2.phi) * body2.z - sin(body2.phi) * body2.w ^ 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */);
  (data->localData[0]->realVars[34] /* der(der(frontTrail.R[2,1])) DUMMY_DER */) = (cos((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */))) * ((data->localData[0]->realVars[180] /* body2.z variable */)) - ((sin((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */))) * ((tmp0 * tmp0)));
  TRACE_POP
}
/*
equation index: 1312
type: SIMPLE_ASSIGN
body2.frame_a.t = body2.I * body2.z
*/
void ThreeWheelVehicle3FMU_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  (data->localData[0]->realVars[148] /* body2.frame_a.t variable */) = ((data->simulationInfo->realParameter[21] /* body2.I PARAM */)) * ((data->localData[0]->realVars[180] /* body2.z variable */));
  TRACE_POP
}
/*
equation index: 1313
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.R[2,2] = (-cos(body2.phi)) * body2.w ^ 2.0 - sin(body2.phi) * body2.z
*/
void ThreeWheelVehicle3FMU_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[179] /* body2.w DUMMY_STATE */);
  (data->localData[0]->realVars[35] /* der(der(frontTrail.R[2,2])) DUMMY_DER */) = ((-cos((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */)))) * ((tmp0 * tmp0)) - ((sin((data->localData[0]->realVars[149] /* body2.phi DUMMY_STATE */))) * ((data->localData[0]->realVars[180] /* body2.z variable */)));
  TRACE_POP
}
/*
equation index: 1314
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.r0[1] = $DER.$DER.frontTrail.R[2,2] * frontTrail.r[1] - $DER.$DER.frontTrail.R[2,1] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  (data->localData[0]->realVars[36] /* der(der(frontTrail.r0[1])) DUMMY_DER */) = ((data->localData[0]->realVars[35] /* der(der(frontTrail.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) - (((data->localData[0]->realVars[34] /* der(der(frontTrail.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1315
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.r0[2] = $DER.$DER.frontTrail.R[2,1] * frontTrail.r[1] + $DER.$DER.frontTrail.R[2,2] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  (data->localData[0]->realVars[37] /* der(der(frontTrail.r0[2])) DUMMY_DER */) = ((data->localData[0]->realVars[34] /* der(der(frontTrail.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) + ((data->localData[0]->realVars[35] /* der(der(frontTrail.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1316
type: SIMPLE_ASSIGN
outCarAngularAcc = -$DER.body.w
*/
void ThreeWheelVehicle3FMU_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  (data->localData[0]->realVars[353] /* outCarAngularAcc variable */) = (-(data->localData[0]->realVars[17] /* der(body.w) STATE_DER */));
  TRACE_POP
}
/*
equation index: 1317
type: SIMPLE_ASSIGN
body.frame_a.t = (-body.I) * outCarAngularAcc
*/
void ThreeWheelVehicle3FMU_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  (data->localData[0]->realVars[118] /* body.frame_a.t variable */) = ((-(data->simulationInfo->realParameter[12] /* body.I PARAM */))) * ((data->localData[0]->realVars[353] /* outCarAngularAcc variable */));
  TRACE_POP
}
/*
equation index: 1318
type: SIMPLE_ASSIGN
body.f[1] = body.m * body.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  (data->localData[0]->realVars[116] /* body.f[1] variable */) = ((data->simulationInfo->realParameter[13] /* body.m PARAM */)) * ((data->localData[0]->realVars[114] /* body.a[1] variable */));
  TRACE_POP
}
/*
equation index: 1319
type: SIMPLE_ASSIGN
$DER.$DER.front.frame_b.x = body.a[1] + $DER.$DER.front.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  (data->localData[0]->realVars[26] /* der(der(front.frame_b.x)) DUMMY_DER */) = (data->localData[0]->realVars[114] /* body.a[1] variable */) + (data->localData[0]->realVars[28] /* der(der(front.r0[1])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1320
type: SIMPLE_ASSIGN
$DER.$DER.revolute.frame_a.x = $DER.$DER.front.frame_b.x - $DER.$DER.front2.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  (data->localData[0]->realVars[38] /* der(der(revolute.frame_a.x)) DUMMY_DER */) = (data->localData[0]->realVars[26] /* der(der(front.frame_b.x)) DUMMY_DER */) - (data->localData[0]->realVars[32] /* der(der(front2.r0[1])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1321
type: SIMPLE_ASSIGN
body2.a[1] = $DER.$DER.revolute.frame_a.x + $DER.$DER.frontTrail.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  (data->localData[0]->realVars[144] /* body2.a[1] variable */) = (data->localData[0]->realVars[38] /* der(der(revolute.frame_a.x)) DUMMY_DER */) + (data->localData[0]->realVars[36] /* der(der(frontTrail.r0[1])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1322
type: SIMPLE_ASSIGN
body2.f[1] = body2.m * body2.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  (data->localData[0]->realVars[146] /* body2.f[1] variable */) = ((data->simulationInfo->realParameter[22] /* body2.m PARAM */)) * ((data->localData[0]->realVars[144] /* body2.a[1] variable */));
  TRACE_POP
}
/*
equation index: 1323
type: SIMPLE_ASSIGN
outCarAcc[2] = Trot[2,1] * body.a[1] + Trot[2,2] * body.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->realVars[351] /* outCarAcc[2] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[114] /* body.a[1] variable */)) + ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[115] /* body.a[2] variable */));
  TRACE_POP
}
/*
equation index: 1324
type: SIMPLE_ASSIGN
outCarAcc[1] = Trot[2,1] * body.a[2] - Trot[2,2] * body.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  (data->localData[0]->realVars[350] /* outCarAcc[1] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[115] /* body.a[2] variable */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[114] /* body.a[1] variable */)));
  TRACE_POP
}
/*
equation index: 1325
type: SIMPLE_ASSIGN
body.f[2] = body.m * body.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->realVars[117] /* body.f[2] variable */) = ((data->simulationInfo->realParameter[13] /* body.m PARAM */)) * ((data->localData[0]->realVars[115] /* body.a[2] variable */));
  TRACE_POP
}
/*
equation index: 1326
type: SIMPLE_ASSIGN
outWeightTransfer[1] = ((-outCarVelocity[2]) * body.w - outCarAcc[1]) * weightTransfer.m * weightTransfer.h / weightTransfer.L
*/
void ThreeWheelVehicle3FMU_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  (data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */) = (((-(data->localData[0]->realVars[360] /* outCarVelocity[2] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */)) - (data->localData[0]->realVars[350] /* outCarAcc[1] variable */)) * (((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */),(data->simulationInfo->realParameter[326] /* weightTransfer.L PARAM */),"weightTransfer.L",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1327
type: SIMPLE_ASSIGN
outForceFrontWheel[1,3] = max(0.0, frontWheel.N + outWeightTransfer[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  (data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */) = fmax(0.0,(data->simulationInfo->realParameter[66] /* frontWheel.N PARAM */) + (data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */));
  TRACE_POP
}
/*
equation index: 1328
type: SIMPLE_ASSIGN
frontWheel.f = outForceFrontWheel[1,3] * PlanarMechanics.Utilities.Functions.limitByStriple(frontWheel.vAdhesion, frontWheel.vSlide, frontWheel.mu_A, frontWheel.mu_S, frontWheel.v_slip)
*/
void ThreeWheelVehicle3FMU_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  (data->localData[0]->realVars[273] /* frontWheel.f variable */) = ((data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */)) * (omc_PlanarMechanics_Utilities_Functions_limitByStriple(threadData, (data->localData[0]->realVars[336] /* frontWheel.vAdhesion variable */), (data->localData[0]->realVars[337] /* frontWheel.vSlide variable */), (data->simulationInfo->realParameter[74] /* frontWheel.mu_A PARAM */), (data->simulationInfo->realParameter[75] /* frontWheel.mu_S PARAM */), (data->localData[0]->realVars[339] /* frontWheel.v_slip variable */)));
  TRACE_POP
}
/*
equation index: 1329
type: SIMPLE_ASSIGN
outForceFrontWheel[1,2] = frontWheel.f * outSlipFrontWheel[2] / frontWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  (data->localData[0]->realVars[365] /* outForceFrontWheel[1,2] variable */) = ((data->localData[0]->realVars[273] /* frontWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[377] /* outSlipFrontWheel[2] variable */),(data->localData[0]->realVars[339] /* frontWheel.v_slip variable */),"frontWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1330
type: SIMPLE_ASSIGN
outForceFrontWheel[1,1] = frontWheel.f * outSlipFrontWheel[1] / frontWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  (data->localData[0]->realVars[364] /* outForceFrontWheel[1,1] variable */) = ((data->localData[0]->realVars[273] /* frontWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[376] /* outSlipFrontWheel[1] variable */),(data->localData[0]->realVars[339] /* frontWheel.v_slip variable */),"frontWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1331
type: SIMPLE_ASSIGN
outWeightTransfer[3] = (-0.5) * outWeightTransfer[1] - weightTransfer.m * weightTransfer.h * (outCarAcc[2] - outCarVelocity[1] * body.w) / weightTransfer.Wr
*/
void ThreeWheelVehicle3FMU_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  (data->localData[0]->realVars[392] /* outWeightTransfer[3] variable */) = (-0.5) * ((data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */)) - (((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[351] /* outCarAcc[2] variable */) - (((data->localData[0]->realVars[359] /* outCarVelocity[1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */))),(data->simulationInfo->realParameter[327] /* weightTransfer.Wr PARAM */),"weightTransfer.Wr",equationIndexes))));
  TRACE_POP
}
/*
equation index: 1332
type: SIMPLE_ASSIGN
outForceRightWheel[1,3] = max(0.0, rearRightWheel.N + outWeightTransfer[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  (data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */) = fmax(0.0,(data->simulationInfo->realParameter[270] /* rearRightWheel.N PARAM */) + (data->localData[0]->realVars[392] /* outWeightTransfer[3] variable */));
  TRACE_POP
}
/*
equation index: 1333
type: SIMPLE_ASSIGN
rearRightWheel.f = outForceRightWheel[1,3] * PlanarMechanics.Utilities.Functions.limitByStriple(rearRightWheel.vAdhesion, rearRightWheel.vSlide, rearRightWheel.mu_A, rearRightWheel.mu_S, rearRightWheel.v_slip)
*/
void ThreeWheelVehicle3FMU_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  (data->localData[0]->realVars[908] /* rearRightWheel.f variable */) = ((data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */)) * (omc_PlanarMechanics_Utilities_Functions_limitByStriple(threadData, (data->localData[0]->realVars[973] /* rearRightWheel.vAdhesion variable */), (data->localData[0]->realVars[974] /* rearRightWheel.vSlide variable */), (data->simulationInfo->realParameter[278] /* rearRightWheel.mu_A PARAM */), (data->simulationInfo->realParameter[279] /* rearRightWheel.mu_S PARAM */), (data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */)));
  TRACE_POP
}
/*
equation index: 1334
type: SIMPLE_ASSIGN
outForceRightWheel[1,1] = rearRightWheel.f * outSlipRightWheel[1] / rearRightWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  (data->localData[0]->realVars[370] /* outForceRightWheel[1,1] variable */) = ((data->localData[0]->realVars[908] /* rearRightWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[383] /* outSlipRightWheel[1] variable */),(data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */),"rearRightWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1335
type: SIMPLE_ASSIGN
outForceRightWheel[1,2] = rearRightWheel.f * outSlipRightWheel[2] / rearRightWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->realVars[371] /* outForceRightWheel[1,2] variable */) = ((data->localData[0]->realVars[908] /* rearRightWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[384] /* outSlipRightWheel[2] variable */),(data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */),"rearRightWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1336
type: SIMPLE_ASSIGN
outWeightTransfer[2] = weightTransfer.m * weightTransfer.h * (outCarAcc[2] - outCarVelocity[1] * body.w) / weightTransfer.Wr + (-0.5) * outWeightTransfer[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  (data->localData[0]->realVars[391] /* outWeightTransfer[2] variable */) = ((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[351] /* outCarAcc[2] variable */) - (((data->localData[0]->realVars[359] /* outCarVelocity[1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */))),(data->simulationInfo->realParameter[327] /* weightTransfer.Wr PARAM */),"weightTransfer.Wr",equationIndexes))) + (-0.5) * ((data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */));
  TRACE_POP
}
/*
equation index: 1337
type: SIMPLE_ASSIGN
outForceLeftWheel[1,3] = max(0.0, rearLeftWheel.N + outWeightTransfer[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */) = fmax(0.0,(data->simulationInfo->realParameter[230] /* rearLeftWheel.N PARAM */) + (data->localData[0]->realVars[391] /* outWeightTransfer[2] variable */));
  TRACE_POP
}
/*
equation index: 1338
type: SIMPLE_ASSIGN
rearLeftWheel.f = outForceLeftWheel[1,3] * PlanarMechanics.Utilities.Functions.limitByStriple(rearLeftWheel.vAdhesion, rearLeftWheel.vSlide, rearLeftWheel.mu_A, rearLeftWheel.mu_S, rearLeftWheel.v_slip)
*/
void ThreeWheelVehicle3FMU_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  (data->localData[0]->realVars[792] /* rearLeftWheel.f variable */) = ((data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */)) * (omc_PlanarMechanics_Utilities_Functions_limitByStriple(threadData, (data->localData[0]->realVars[857] /* rearLeftWheel.vAdhesion variable */), (data->localData[0]->realVars[858] /* rearLeftWheel.vSlide variable */), (data->simulationInfo->realParameter[238] /* rearLeftWheel.mu_A PARAM */), (data->simulationInfo->realParameter[239] /* rearLeftWheel.mu_S PARAM */), (data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */)));
  TRACE_POP
}
/*
equation index: 1339
type: SIMPLE_ASSIGN
outForceLeftWheel[1,2] = rearLeftWheel.f * outSlipLeftWheel[2] / rearLeftWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  (data->localData[0]->realVars[368] /* outForceLeftWheel[1,2] variable */) = ((data->localData[0]->realVars[792] /* rearLeftWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[379] /* outSlipLeftWheel[2] variable */),(data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */),"rearLeftWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1340
type: SIMPLE_ASSIGN
outForceLeftWheel[1,1] = rearLeftWheel.f * outSlipLeftWheel[1] / rearLeftWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  (data->localData[0]->realVars[367] /* outForceLeftWheel[1,1] variable */) = ((data->localData[0]->realVars[792] /* rearLeftWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[378] /* outSlipLeftWheel[1] variable */),(data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */),"rearLeftWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1341
type: SIMPLE_ASSIGN
$DER.$DER.front.frame_b.y = body.a[2] + $DER.$DER.front.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  (data->localData[0]->realVars[27] /* der(der(front.frame_b.y)) DUMMY_DER */) = (data->localData[0]->realVars[115] /* body.a[2] variable */) + (data->localData[0]->realVars[29] /* der(der(front.r0[2])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1342
type: SIMPLE_ASSIGN
$DER.$DER.revolute.frame_a.y = $DER.$DER.front.frame_b.y - $DER.$DER.front2.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  (data->localData[0]->realVars[39] /* der(der(revolute.frame_a.y)) DUMMY_DER */) = (data->localData[0]->realVars[27] /* der(der(front.frame_b.y)) DUMMY_DER */) - (data->localData[0]->realVars[33] /* der(der(front2.r0[2])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1343
type: SIMPLE_ASSIGN
body2.a[2] = $DER.$DER.revolute.frame_a.y + $DER.$DER.frontTrail.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  (data->localData[0]->realVars[145] /* body2.a[2] variable */) = (data->localData[0]->realVars[39] /* der(der(revolute.frame_a.y)) DUMMY_DER */) + (data->localData[0]->realVars[37] /* der(der(frontTrail.r0[2])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1344
type: SIMPLE_ASSIGN
body2.f[2] = body2.m * body2.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  (data->localData[0]->realVars[147] /* body2.f[2] variable */) = ((data->simulationInfo->realParameter[22] /* body2.m PARAM */)) * ((data->localData[0]->realVars[145] /* body2.a[2] variable */));
  TRACE_POP
}
/*
equation index: 1345
type: SIMPLE_ASSIGN
rear.frame_a.fy = airResistanceLongitudinal.frame_a.fy + body.f[2] - front2.frame_a.fy
*/
void ThreeWheelVehicle3FMU_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  (data->localData[0]->realVars[738] /* rear.frame_a.fy variable */) = (data->localData[0]->realVars[107] /* airResistanceLongitudinal.frame_a.fy variable */) + (data->localData[0]->realVars[117] /* body.f[2] variable */) - (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  TRACE_POP
}
/*
equation index: 1346
type: SIMPLE_ASSIGN
frontWheel.frame_a.fy = (-body2.f[2]) - front2.frame_a.fy
*/
void ThreeWheelVehicle3FMU_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1346};
  (data->localData[0]->realVars[277] /* frontWheel.frame_a.fy variable */) = (-(data->localData[0]->realVars[147] /* body2.f[2] variable */)) - (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  TRACE_POP
}
/*
equation index: 1347
type: SIMPLE_ASSIGN
revolute.t = body2.frame_a.t - (frontTrail.r0[1] * front2.frame_a.fy - frontTrail.r0[2] * front2.frame_a.fx)
*/
void ThreeWheelVehicle3FMU_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  (data->localData[0]->realVars[1006] /* revolute.t variable */) = (data->localData[0]->realVars[148] /* body2.frame_a.t variable */) - (((data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[225] /* front2.frame_a.fy variable */)) - (((data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[224] /* front2.frame_a.fx variable */))));
  TRACE_POP
}
/*
equation index: 1348
type: SIMPLE_ASSIGN
front2.frame_b.t = revolute.t - (front2.r0[2] * front2.frame_a.fx - front2.r0[1] * front2.frame_a.fy)
*/
void ThreeWheelVehicle3FMU_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  (data->localData[0]->realVars[226] /* front2.frame_b.t variable */) = (data->localData[0]->realVars[1006] /* revolute.t variable */) - (((data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[224] /* front2.frame_a.fx variable */)) - (((data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[225] /* front2.frame_a.fy variable */))));
  TRACE_POP
}
/*
equation index: 1349
type: SIMPLE_ASSIGN
front.frame_a.t = front2.frame_b.t - (front.r0[1] * front2.frame_a.fy - front.r0[2] * front2.frame_a.fx)
*/
void ThreeWheelVehicle3FMU_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  (data->localData[0]->realVars[201] /* front.frame_a.t variable */) = (data->localData[0]->realVars[226] /* front2.frame_b.t variable */) - (((data->localData[0]->realVars[204] /* front.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[225] /* front2.frame_a.fy variable */)) - (((data->localData[0]->realVars[205] /* front.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[224] /* front2.frame_a.fx variable */))));
  TRACE_POP
}
/*
equation index: 1350
type: SIMPLE_ASSIGN
rear.frame_b.t = (-body.frame_a.t) - front.frame_a.t
*/
void ThreeWheelVehicle3FMU_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  (data->localData[0]->realVars[742] /* rear.frame_b.t variable */) = (-(data->localData[0]->realVars[118] /* body.frame_a.t variable */)) - (data->localData[0]->realVars[201] /* front.frame_a.t variable */);
  TRACE_POP
}
/*
equation index: 1351
type: SIMPLE_ASSIGN
rear.frame_a.fx = airResistanceLongitudinal.frame_a.fx + body.f[1] - front2.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  (data->localData[0]->realVars[737] /* rear.frame_a.fx variable */) = (data->localData[0]->realVars[106] /* airResistanceLongitudinal.frame_a.fx variable */) + (data->localData[0]->realVars[116] /* body.f[1] variable */) - (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  TRACE_POP
}
/*
equation index: 1352
type: SIMPLE_ASSIGN
rear.frame_a.t = rear.r0[1] * rear.frame_a.fy - (rear.frame_b.t + rear.r0[2] * rear.frame_a.fx)
*/
void ThreeWheelVehicle3FMU_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  (data->localData[0]->realVars[739] /* rear.frame_a.t variable */) = ((data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[738] /* rear.frame_a.fy variable */)) - ((data->localData[0]->realVars[742] /* rear.frame_b.t variable */) + ((data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[737] /* rear.frame_a.fx variable */)));
  TRACE_POP
}
/*
equation index: 1353
type: SIMPLE_ASSIGN
frontWheel.frame_a.fx = (-body2.f[1]) - front2.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  (data->localData[0]->realVars[276] /* frontWheel.frame_a.fx variable */) = (-(data->localData[0]->realVars[146] /* body2.f[1] variable */)) - (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  TRACE_POP
}
/*
equation index: 1354
type: SIMPLE_ASSIGN
rearLeft.frame_a.fy = rear.frame_a.fy + rearRight.frame_a.fy
*/
void ThreeWheelVehicle3FMU_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  (data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */) = (data->localData[0]->realVars[738] /* rear.frame_a.fy variable */) + (data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */);
  TRACE_POP
}
/*
equation index: 1355
type: SIMPLE_ASSIGN
rearRight.frame_a.t = rearRight.r0[1] * rearRight.frame_a.fy - rearRight.r0[2] * rearRight.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  (data->localData[0]->realVars[881] /* rearRight.frame_a.t variable */) = ((data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */)) - (((data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */)));
  TRACE_POP
}
/*
equation index: 1356
type: SIMPLE_ASSIGN
rearLeft.frame_b.t = (-rear.frame_a.t) - rearRight.frame_a.t
*/
void ThreeWheelVehicle3FMU_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  (data->localData[0]->realVars[766] /* rearLeft.frame_b.t variable */) = (-(data->localData[0]->realVars[739] /* rear.frame_a.t variable */)) - (data->localData[0]->realVars[881] /* rearRight.frame_a.t variable */);
  TRACE_POP
}
/*
equation index: 1357
type: SIMPLE_ASSIGN
rearLeft.frame_a.fx = rear.frame_a.fx + rearRight.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  (data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */) = (data->localData[0]->realVars[737] /* rear.frame_a.fx variable */) + (data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */);
  TRACE_POP
}

void residualFunc1365(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1365};
  int i,j;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc1365: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<7; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1365 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */) = xloc[0];
  (data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */) = xloc[1];
  (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */) = xloc[2];
  (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */) = xloc[3];
  (data->localData[0]->realVars[115] /* body.a[2] variable */) = xloc[4];
  (data->localData[0]->realVars[114] /* body.a[1] variable */) = xloc[5];
  (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */) = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1302(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1303(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1304(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1305(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1306(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1307(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1308(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1309(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1310(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1311(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1312(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1313(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1314(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1315(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1316(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1317(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1318(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1319(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1320(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1321(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1322(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1323(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1324(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1325(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1326(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1327(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1328(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1329(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1330(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1331(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1332(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1333(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1334(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1335(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1336(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1337(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1338(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1339(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1340(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1341(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1342(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1343(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1344(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1345(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1346(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1347(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1348(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1349(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1350(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1351(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1352(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1353(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1354(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1355(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1356(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1357(data, threadData);
  /* body */
  res[0] = ((-(data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */))) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) - (data->localData[0]->realVars[367] /* outForceLeftWheel[1,1] variable */) - (((data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)));

  res[1] = ((data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */)) - (((data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */))) + (data->localData[0]->realVars[766] /* rearLeft.frame_b.t variable */);

  res[2] = ((data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) + ((-(data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */))) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) - (data->localData[0]->realVars[368] /* outForceLeftWheel[1,2] variable */);

  res[3] = ((data->localData[0]->realVars[277] /* frontWheel.frame_a.fy variable */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) + ((data->localData[0]->realVars[276] /* frontWheel.frame_a.fx variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) - (data->localData[0]->realVars[364] /* outForceFrontWheel[1,1] variable */);

  res[4] = ((data->localData[0]->realVars[277] /* frontWheel.frame_a.fy variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) + ((-(data->localData[0]->realVars[276] /* frontWheel.frame_a.fx variable */))) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) - (data->localData[0]->realVars[365] /* outForceFrontWheel[1,2] variable */);

  res[5] = ((data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) + ((data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) - (data->localData[0]->realVars[370] /* outForceRightWheel[1,1] variable */);

  res[6] = ((data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) + ((-(data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */))) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) - (data->localData[0]->realVars[371] /* outForceRightWheel[1,2] variable */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1365(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,5,5,5,5,7,7,3};
  const int rowIndex[37] = {0,1,2,5,6,0,1,2,5,6,0,1,2,3,4,0,1,2,3,4,0,1,2,3,4,5,6,0,1,2,3,4,5,6,1,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(7, 37, 7);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 37*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {6};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
  
  /* color 7 with 1 columns */
  const int indices_7[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_7[i]] = 7;
}
void initializeNonlinearPatternNLS1365(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1365(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for rearRight.frame_a.fx */
  sysData->nominal[i] = data->modelData->realVarsData[879].attribute /* rearRight.frame_a.fx */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[879].attribute /* rearRight.frame_a.fx */.min;
  sysData->max[i++]   = data->modelData->realVarsData[879].attribute /* rearRight.frame_a.fx */.max;
  /* static nls data for rearRight.frame_a.fy */
  sysData->nominal[i] = data->modelData->realVarsData[880].attribute /* rearRight.frame_a.fy */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[880].attribute /* rearRight.frame_a.fy */.min;
  sysData->max[i++]   = data->modelData->realVarsData[880].attribute /* rearRight.frame_a.fy */.max;
  /* static nls data for front2.frame_a.fx */
  sysData->nominal[i] = data->modelData->realVarsData[224].attribute /* front2.frame_a.fx */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[224].attribute /* front2.frame_a.fx */.min;
  sysData->max[i++]   = data->modelData->realVarsData[224].attribute /* front2.frame_a.fx */.max;
  /* static nls data for front2.frame_a.fy */
  sysData->nominal[i] = data->modelData->realVarsData[225].attribute /* front2.frame_a.fy */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[225].attribute /* front2.frame_a.fy */.min;
  sysData->max[i++]   = data->modelData->realVarsData[225].attribute /* front2.frame_a.fy */.max;
  /* static nls data for body.a[2] */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* body.a[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* body.a[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* body.a[2] */.max;
  /* static nls data for body.a[1] */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* body.a[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* body.a[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* body.a[1] */.max;
  /* static nls data for der(body.w) */
  sysData->nominal[i] = data->modelData->realVarsData[17].attribute /* der(body.w) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[17].attribute /* der(body.w) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[17].attribute /* der(body.w) */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1365(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1365(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS1365(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */);
  array[1] = (data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */);
  array[2] = (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  array[3] = (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  array[4] = (data->localData[0]->realVars[115] /* body.a[2] variable */);
  array[5] = (data->localData[0]->realVars[114] /* body.a[1] variable */);
  array[6] = (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */);
}


/* inner equations */

/*
equation index: 1778
type: SIMPLE_ASSIGN
$DER.$DER.front2.R[2,2] = (-Trot[2,1]) * body.w ^ 2.0 - Trot[2,2] * der(body.w)
*/
void ThreeWheelVehicle3FMU_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1778};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[31] /* der(der(front2.R[2,2])) DUMMY_DER */) = ((-(data->localData[0]->realVars[97] /* Trot[2,1] variable */))) * ((tmp0 * tmp0)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1779
type: SIMPLE_ASSIGN
$DER.$DER.front2.R[2,1] = Trot[2,1] * der(body.w) - Trot[2,2] * body.w ^ 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[30] /* der(der(front2.R[2,1])) DUMMY_DER */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((tmp0 * tmp0)));
  TRACE_POP
}
/*
equation index: 1780
type: SIMPLE_ASSIGN
$DER.$DER.front.R[2,1] = Trot[2,1] * der(body.w) - Trot[2,2] * body.w ^ 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1780};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[24] /* der(der(front.R[2,1])) DUMMY_DER */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((tmp0 * tmp0)));
  TRACE_POP
}
/*
equation index: 1781
type: SIMPLE_ASSIGN
$DER.$DER.front.R[2,2] = (-Trot[2,1]) * body.w ^ 2.0 - Trot[2,2] * der(body.w)
*/
void ThreeWheelVehicle3FMU_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[25] /* der(der(front.R[2,2])) DUMMY_DER */) = ((-(data->localData[0]->realVars[97] /* Trot[2,1] variable */))) * ((tmp0 * tmp0)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[17] /* der(body.w) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1782
type: SIMPLE_ASSIGN
$DER.$DER.front2.r0[2] = $DER.$DER.front2.R[2,1] * front2.r[1] + $DER.$DER.front2.R[2,2] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1782};
  (data->localData[0]->realVars[33] /* der(der(front2.r0[2])) DUMMY_DER */) = ((data->localData[0]->realVars[30] /* der(der(front2.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) + ((data->localData[0]->realVars[31] /* der(der(front2.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1783
type: SIMPLE_ASSIGN
$DER.$DER.front2.r0[1] = $DER.$DER.front2.R[2,2] * front2.r[1] - $DER.$DER.front2.R[2,1] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1783};
  (data->localData[0]->realVars[32] /* der(der(front2.r0[1])) DUMMY_DER */) = ((data->localData[0]->realVars[31] /* der(der(front2.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) - (((data->localData[0]->realVars[30] /* der(der(front2.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1784
type: SIMPLE_ASSIGN
$DER.$DER.front.r0[2] = $DER.$DER.front.R[2,1] * front.r[1] + $DER.$DER.front.R[2,2] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1784};
  (data->localData[0]->realVars[29] /* der(der(front.r0[2])) DUMMY_DER */) = ((data->localData[0]->realVars[24] /* der(der(front.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) + ((data->localData[0]->realVars[25] /* der(der(front.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1785
type: SIMPLE_ASSIGN
$DER.$DER.front.r0[1] = $DER.$DER.front.R[2,2] * front.r[1] - $DER.$DER.front.R[2,1] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1785};
  (data->localData[0]->realVars[28] /* der(der(front.r0[1])) DUMMY_DER */) = ((data->localData[0]->realVars[25] /* der(der(front.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) - (((data->localData[0]->realVars[24] /* der(der(front.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1786
type: SIMPLE_ASSIGN
body2.z = der(body.w)
*/
void ThreeWheelVehicle3FMU_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  (data->localData[0]->realVars[180] /* body2.z variable */) = (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */);
  TRACE_POP
}
/*
equation index: 1787
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.R[2,1] = frontWheel.R[2,2] * body2.z - frontWheel.R[2,1] * body.w ^ 2.0
*/
void ThreeWheelVehicle3FMU_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1787};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[34] /* der(der(frontTrail.R[2,1])) DUMMY_DER */) = ((data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */)) * ((data->localData[0]->realVars[180] /* body2.z variable */)) - (((data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */)) * ((tmp0 * tmp0)));
  TRACE_POP
}
/*
equation index: 1788
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.R[2,2] = (-frontWheel.R[2,2]) * body.w ^ 2.0 - frontWheel.R[2,1] * body2.z
*/
void ThreeWheelVehicle3FMU_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[5] /* body.w STATE(1) */);
  (data->localData[0]->realVars[35] /* der(der(frontTrail.R[2,2])) DUMMY_DER */) = ((-(data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */))) * ((tmp0 * tmp0)) - (((data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */)) * ((data->localData[0]->realVars[180] /* body2.z variable */)));
  TRACE_POP
}
/*
equation index: 1789
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.r0[2] = $DER.$DER.frontTrail.R[2,1] * frontTrail.r[1] + $DER.$DER.frontTrail.R[2,2] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  (data->localData[0]->realVars[37] /* der(der(frontTrail.r0[2])) DUMMY_DER */) = ((data->localData[0]->realVars[34] /* der(der(frontTrail.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) + ((data->localData[0]->realVars[35] /* der(der(frontTrail.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */));
  TRACE_POP
}
/*
equation index: 1790
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.r0[1] = $DER.$DER.frontTrail.R[2,2] * frontTrail.r[1] - $DER.$DER.frontTrail.R[2,1] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1790};
  (data->localData[0]->realVars[36] /* der(der(frontTrail.r0[1])) DUMMY_DER */) = ((data->localData[0]->realVars[35] /* der(der(frontTrail.R[2,2])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) - (((data->localData[0]->realVars[34] /* der(der(frontTrail.R[2,1])) DUMMY_DER */)) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */)));
  TRACE_POP
}
/*
equation index: 1791
type: SIMPLE_ASSIGN
body2.frame_a.t = body2.I * body2.z
*/
void ThreeWheelVehicle3FMU_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1791};
  (data->localData[0]->realVars[148] /* body2.frame_a.t variable */) = ((data->simulationInfo->realParameter[21] /* body2.I PARAM */)) * ((data->localData[0]->realVars[180] /* body2.z variable */));
  TRACE_POP
}
/*
equation index: 1792
type: SIMPLE_ASSIGN
outCarAngularAcc = -der(body.w)
*/
void ThreeWheelVehicle3FMU_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1792};
  (data->localData[0]->realVars[353] /* outCarAngularAcc variable */) = (-(data->localData[0]->realVars[17] /* der(body.w) STATE_DER */));
  TRACE_POP
}
/*
equation index: 1793
type: SIMPLE_ASSIGN
body.frame_a.t = (-body.I) * outCarAngularAcc
*/
void ThreeWheelVehicle3FMU_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1793};
  (data->localData[0]->realVars[118] /* body.frame_a.t variable */) = ((-(data->simulationInfo->realParameter[12] /* body.I PARAM */))) * ((data->localData[0]->realVars[353] /* outCarAngularAcc variable */));
  TRACE_POP
}
/*
equation index: 1794
type: SIMPLE_ASSIGN
body.f[2] = body.m * body.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1794};
  (data->localData[0]->realVars[117] /* body.f[2] variable */) = ((data->simulationInfo->realParameter[13] /* body.m PARAM */)) * ((data->localData[0]->realVars[115] /* body.a[2] variable */));
  TRACE_POP
}
/*
equation index: 1795
type: SIMPLE_ASSIGN
$DER.$DER.front.frame_b.y = body.a[2] + $DER.$DER.front.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1795};
  (data->localData[0]->realVars[27] /* der(der(front.frame_b.y)) DUMMY_DER */) = (data->localData[0]->realVars[115] /* body.a[2] variable */) + (data->localData[0]->realVars[29] /* der(der(front.r0[2])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1796
type: SIMPLE_ASSIGN
$DER.$DER.revolute.frame_a.y = $DER.$DER.front.frame_b.y - $DER.$DER.front2.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1796};
  (data->localData[0]->realVars[39] /* der(der(revolute.frame_a.y)) DUMMY_DER */) = (data->localData[0]->realVars[27] /* der(der(front.frame_b.y)) DUMMY_DER */) - (data->localData[0]->realVars[33] /* der(der(front2.r0[2])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1797
type: SIMPLE_ASSIGN
body2.a[2] = $DER.$DER.revolute.frame_a.y + $DER.$DER.frontTrail.r0[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1797};
  (data->localData[0]->realVars[145] /* body2.a[2] variable */) = (data->localData[0]->realVars[39] /* der(der(revolute.frame_a.y)) DUMMY_DER */) + (data->localData[0]->realVars[37] /* der(der(frontTrail.r0[2])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1798
type: SIMPLE_ASSIGN
body2.f[2] = body2.m * body2.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  (data->localData[0]->realVars[147] /* body2.f[2] variable */) = ((data->simulationInfo->realParameter[22] /* body2.m PARAM */)) * ((data->localData[0]->realVars[145] /* body2.a[2] variable */));
  TRACE_POP
}
/*
equation index: 1799
type: SIMPLE_ASSIGN
outCarAcc[1] = Trot[2,1] * body.a[2] - Trot[2,2] * body.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  (data->localData[0]->realVars[350] /* outCarAcc[1] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[115] /* body.a[2] variable */)) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[114] /* body.a[1] variable */)));
  TRACE_POP
}
/*
equation index: 1800
type: SIMPLE_ASSIGN
outCarAcc[2] = Trot[2,1] * body.a[1] + Trot[2,2] * body.a[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  (data->localData[0]->realVars[351] /* outCarAcc[2] variable */) = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * ((data->localData[0]->realVars[114] /* body.a[1] variable */)) + ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * ((data->localData[0]->realVars[115] /* body.a[2] variable */));
  TRACE_POP
}
/*
equation index: 1801
type: SIMPLE_ASSIGN
outWeightTransfer[1] = ((-outCarVelocity[2]) * body.w - outCarAcc[1]) * weightTransfer.m * weightTransfer.h / weightTransfer.L
*/
void ThreeWheelVehicle3FMU_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  (data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */) = (((-(data->localData[0]->realVars[360] /* outCarVelocity[2] variable */))) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */)) - (data->localData[0]->realVars[350] /* outCarAcc[1] variable */)) * (((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */),(data->simulationInfo->realParameter[326] /* weightTransfer.L PARAM */),"weightTransfer.L",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1802
type: SIMPLE_ASSIGN
outForceFrontWheel[1,3] = max(0.0, frontWheel.N + outWeightTransfer[1])
*/
void ThreeWheelVehicle3FMU_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  (data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */) = fmax(0.0,(data->simulationInfo->realParameter[66] /* frontWheel.N PARAM */) + (data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */));
  TRACE_POP
}
/*
equation index: 1803
type: SIMPLE_ASSIGN
outWeightTransfer[3] = (-0.5) * outWeightTransfer[1] - weightTransfer.m * weightTransfer.h * (outCarAcc[2] - outCarVelocity[1] * body.w) / weightTransfer.Wr
*/
void ThreeWheelVehicle3FMU_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  (data->localData[0]->realVars[392] /* outWeightTransfer[3] variable */) = (-0.5) * ((data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */)) - (((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[351] /* outCarAcc[2] variable */) - (((data->localData[0]->realVars[359] /* outCarVelocity[1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */))),(data->simulationInfo->realParameter[327] /* weightTransfer.Wr PARAM */),"weightTransfer.Wr",equationIndexes))));
  TRACE_POP
}
/*
equation index: 1804
type: SIMPLE_ASSIGN
outForceRightWheel[1,3] = max(0.0, rearRightWheel.N + outWeightTransfer[3])
*/
void ThreeWheelVehicle3FMU_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  (data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */) = fmax(0.0,(data->simulationInfo->realParameter[270] /* rearRightWheel.N PARAM */) + (data->localData[0]->realVars[392] /* outWeightTransfer[3] variable */));
  TRACE_POP
}
/*
equation index: 1805
type: SIMPLE_ASSIGN
outWeightTransfer[2] = weightTransfer.m * weightTransfer.h * (outCarAcc[2] - outCarVelocity[1] * body.w) / weightTransfer.Wr + (-0.5) * outWeightTransfer[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  (data->localData[0]->realVars[391] /* outWeightTransfer[2] variable */) = ((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[351] /* outCarAcc[2] variable */) - (((data->localData[0]->realVars[359] /* outCarVelocity[1] variable */)) * ((data->localData[0]->realVars[5] /* body.w STATE(1) */))),(data->simulationInfo->realParameter[327] /* weightTransfer.Wr PARAM */),"weightTransfer.Wr",equationIndexes))) + (-0.5) * ((data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */));
  TRACE_POP
}
/*
equation index: 1806
type: SIMPLE_ASSIGN
outForceLeftWheel[1,3] = max(0.0, rearLeftWheel.N + outWeightTransfer[2])
*/
void ThreeWheelVehicle3FMU_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  (data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */) = fmax(0.0,(data->simulationInfo->realParameter[230] /* rearLeftWheel.N PARAM */) + (data->localData[0]->realVars[391] /* outWeightTransfer[2] variable */));
  TRACE_POP
}
/*
equation index: 1807
type: SIMPLE_ASSIGN
frontWheel.f = outForceFrontWheel[1,3] * $cse6
*/
void ThreeWheelVehicle3FMU_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  (data->localData[0]->realVars[273] /* frontWheel.f variable */) = ((data->localData[0]->realVars[366] /* outForceFrontWheel[1,3] variable */)) * ((data->localData[0]->realVars[91] /* $cse6 variable */));
  TRACE_POP
}
/*
equation index: 1808
type: SIMPLE_ASSIGN
outForceFrontWheel[1,2] = frontWheel.f * outSlipFrontWheel[2] / frontWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1808};
  (data->localData[0]->realVars[365] /* outForceFrontWheel[1,2] variable */) = ((data->localData[0]->realVars[273] /* frontWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[377] /* outSlipFrontWheel[2] variable */),(data->localData[0]->realVars[339] /* frontWheel.v_slip variable */),"frontWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1809
type: SIMPLE_ASSIGN
outForceFrontWheel[1,1] = frontWheel.f * outSlipFrontWheel[1] / frontWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  (data->localData[0]->realVars[364] /* outForceFrontWheel[1,1] variable */) = ((data->localData[0]->realVars[273] /* frontWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[376] /* outSlipFrontWheel[1] variable */),(data->localData[0]->realVars[339] /* frontWheel.v_slip variable */),"frontWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1810
type: SIMPLE_ASSIGN
rearLeftWheel.f = outForceLeftWheel[1,3] * $cse10
*/
void ThreeWheelVehicle3FMU_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1810};
  (data->localData[0]->realVars[792] /* rearLeftWheel.f variable */) = ((data->localData[0]->realVars[369] /* outForceLeftWheel[1,3] variable */)) * ((data->localData[0]->realVars[83] /* $cse10 variable */));
  TRACE_POP
}
/*
equation index: 1811
type: SIMPLE_ASSIGN
outForceLeftWheel[1,2] = rearLeftWheel.f * outSlipLeftWheel[2] / rearLeftWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1811};
  (data->localData[0]->realVars[368] /* outForceLeftWheel[1,2] variable */) = ((data->localData[0]->realVars[792] /* rearLeftWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[379] /* outSlipLeftWheel[2] variable */),(data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */),"rearLeftWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1812
type: SIMPLE_ASSIGN
rearRightWheel.f = outForceRightWheel[1,3] * $cse14
*/
void ThreeWheelVehicle3FMU_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1812};
  (data->localData[0]->realVars[908] /* rearRightWheel.f variable */) = ((data->localData[0]->realVars[372] /* outForceRightWheel[1,3] variable */)) * ((data->localData[0]->realVars[87] /* $cse14 variable */));
  TRACE_POP
}
/*
equation index: 1813
type: SIMPLE_ASSIGN
outForceRightWheel[1,2] = rearRightWheel.f * outSlipRightWheel[2] / rearRightWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1813};
  (data->localData[0]->realVars[371] /* outForceRightWheel[1,2] variable */) = ((data->localData[0]->realVars[908] /* rearRightWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[384] /* outSlipRightWheel[2] variable */),(data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */),"rearRightWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1814
type: SIMPLE_ASSIGN
outForceRightWheel[1,1] = rearRightWheel.f * outSlipRightWheel[1] / rearRightWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1814};
  (data->localData[0]->realVars[370] /* outForceRightWheel[1,1] variable */) = ((data->localData[0]->realVars[908] /* rearRightWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[383] /* outSlipRightWheel[1] variable */),(data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */),"rearRightWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1815
type: SIMPLE_ASSIGN
outForceLeftWheel[1,1] = rearLeftWheel.f * outSlipLeftWheel[1] / rearLeftWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1815};
  (data->localData[0]->realVars[367] /* outForceLeftWheel[1,1] variable */) = ((data->localData[0]->realVars[792] /* rearLeftWheel.f variable */)) * (DIVISION_SIM((data->localData[0]->realVars[378] /* outSlipLeftWheel[1] variable */),(data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */),"rearLeftWheel.v_slip",equationIndexes));
  TRACE_POP
}
/*
equation index: 1816
type: SIMPLE_ASSIGN
body.f[1] = body.m * body.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1816};
  (data->localData[0]->realVars[116] /* body.f[1] variable */) = ((data->simulationInfo->realParameter[13] /* body.m PARAM */)) * ((data->localData[0]->realVars[114] /* body.a[1] variable */));
  TRACE_POP
}
/*
equation index: 1817
type: SIMPLE_ASSIGN
$DER.$DER.front.frame_b.x = body.a[1] + $DER.$DER.front.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1817};
  (data->localData[0]->realVars[26] /* der(der(front.frame_b.x)) DUMMY_DER */) = (data->localData[0]->realVars[114] /* body.a[1] variable */) + (data->localData[0]->realVars[28] /* der(der(front.r0[1])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1818
type: SIMPLE_ASSIGN
$DER.$DER.revolute.frame_a.x = $DER.$DER.front.frame_b.x - $DER.$DER.front2.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1818};
  (data->localData[0]->realVars[38] /* der(der(revolute.frame_a.x)) DUMMY_DER */) = (data->localData[0]->realVars[26] /* der(der(front.frame_b.x)) DUMMY_DER */) - (data->localData[0]->realVars[32] /* der(der(front2.r0[1])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1819
type: SIMPLE_ASSIGN
body2.a[1] = $DER.$DER.revolute.frame_a.x + $DER.$DER.frontTrail.r0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1819};
  (data->localData[0]->realVars[144] /* body2.a[1] variable */) = (data->localData[0]->realVars[38] /* der(der(revolute.frame_a.x)) DUMMY_DER */) + (data->localData[0]->realVars[36] /* der(der(frontTrail.r0[1])) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 1820
type: SIMPLE_ASSIGN
body2.f[1] = body2.m * body2.a[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  (data->localData[0]->realVars[146] /* body2.f[1] variable */) = ((data->simulationInfo->realParameter[22] /* body2.m PARAM */)) * ((data->localData[0]->realVars[144] /* body2.a[1] variable */));
  TRACE_POP
}
/*
equation index: 1821
type: SIMPLE_ASSIGN
frontWheel.frame_a.fx = (-body2.f[1]) - front2.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1821};
  (data->localData[0]->realVars[276] /* frontWheel.frame_a.fx variable */) = (-(data->localData[0]->realVars[146] /* body2.f[1] variable */)) - (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  TRACE_POP
}
/*
equation index: 1822
type: SIMPLE_ASSIGN
rear.frame_a.fx = airResistanceLongitudinal.frame_a.fx + body.f[1] - front2.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  (data->localData[0]->realVars[737] /* rear.frame_a.fx variable */) = (data->localData[0]->realVars[106] /* airResistanceLongitudinal.frame_a.fx variable */) + (data->localData[0]->realVars[116] /* body.f[1] variable */) - (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  TRACE_POP
}
/*
equation index: 1823
type: SIMPLE_ASSIGN
revolute.t = body2.frame_a.t - (frontTrail.r0[1] * front2.frame_a.fy - frontTrail.r0[2] * front2.frame_a.fx)
*/
void ThreeWheelVehicle3FMU_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1823};
  (data->localData[0]->realVars[1006] /* revolute.t variable */) = (data->localData[0]->realVars[148] /* body2.frame_a.t variable */) - (((data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[225] /* front2.frame_a.fy variable */)) - (((data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[224] /* front2.frame_a.fx variable */))));
  TRACE_POP
}
/*
equation index: 1824
type: SIMPLE_ASSIGN
front2.frame_b.t = revolute.t - (front2.r0[2] * front2.frame_a.fx - front2.r0[1] * front2.frame_a.fy)
*/
void ThreeWheelVehicle3FMU_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  (data->localData[0]->realVars[226] /* front2.frame_b.t variable */) = (data->localData[0]->realVars[1006] /* revolute.t variable */) - (((data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[224] /* front2.frame_a.fx variable */)) - (((data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[225] /* front2.frame_a.fy variable */))));
  TRACE_POP
}
/*
equation index: 1825
type: SIMPLE_ASSIGN
front.frame_a.t = front2.frame_b.t - (front.r0[1] * front2.frame_a.fy - front.r0[2] * front2.frame_a.fx)
*/
void ThreeWheelVehicle3FMU_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  (data->localData[0]->realVars[201] /* front.frame_a.t variable */) = (data->localData[0]->realVars[226] /* front2.frame_b.t variable */) - (((data->localData[0]->realVars[204] /* front.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[225] /* front2.frame_a.fy variable */)) - (((data->localData[0]->realVars[205] /* front.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[224] /* front2.frame_a.fx variable */))));
  TRACE_POP
}
/*
equation index: 1826
type: SIMPLE_ASSIGN
rear.frame_b.t = (-body.frame_a.t) - front.frame_a.t
*/
void ThreeWheelVehicle3FMU_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1826};
  (data->localData[0]->realVars[742] /* rear.frame_b.t variable */) = (-(data->localData[0]->realVars[118] /* body.frame_a.t variable */)) - (data->localData[0]->realVars[201] /* front.frame_a.t variable */);
  TRACE_POP
}
/*
equation index: 1827
type: SIMPLE_ASSIGN
frontWheel.frame_a.fy = (-body2.f[2]) - front2.frame_a.fy
*/
void ThreeWheelVehicle3FMU_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1827};
  (data->localData[0]->realVars[277] /* frontWheel.frame_a.fy variable */) = (-(data->localData[0]->realVars[147] /* body2.f[2] variable */)) - (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  TRACE_POP
}
/*
equation index: 1828
type: SIMPLE_ASSIGN
rear.frame_a.fy = airResistanceLongitudinal.frame_a.fy + body.f[2] - front2.frame_a.fy
*/
void ThreeWheelVehicle3FMU_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1828};
  (data->localData[0]->realVars[738] /* rear.frame_a.fy variable */) = (data->localData[0]->realVars[107] /* airResistanceLongitudinal.frame_a.fy variable */) + (data->localData[0]->realVars[117] /* body.f[2] variable */) - (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  TRACE_POP
}
/*
equation index: 1829
type: SIMPLE_ASSIGN
rear.frame_a.t = rear.r0[1] * rear.frame_a.fy - (rear.frame_b.t + rear.r0[2] * rear.frame_a.fx)
*/
void ThreeWheelVehicle3FMU_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1829};
  (data->localData[0]->realVars[739] /* rear.frame_a.t variable */) = ((data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[738] /* rear.frame_a.fy variable */)) - ((data->localData[0]->realVars[742] /* rear.frame_b.t variable */) + ((data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[737] /* rear.frame_a.fx variable */)));
  TRACE_POP
}
/*
equation index: 1830
type: SIMPLE_ASSIGN
rearRight.frame_a.fy = rearLeft.frame_a.fy - rear.frame_a.fy
*/
void ThreeWheelVehicle3FMU_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1830};
  (data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */) = (data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */) - (data->localData[0]->realVars[738] /* rear.frame_a.fy variable */);
  TRACE_POP
}
/*
equation index: 1831
type: SIMPLE_ASSIGN
rearLeft.frame_b.t = rearLeft.r0[1] * rearLeft.frame_a.fy - rearLeft.r0[2] * rearLeft.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1831};
  (data->localData[0]->realVars[766] /* rearLeft.frame_b.t variable */) = ((data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */)) - (((data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */)));
  TRACE_POP
}
/*
equation index: 1832
type: SIMPLE_ASSIGN
rearRight.frame_a.t = (-rear.frame_a.t) - rearLeft.frame_b.t
*/
void ThreeWheelVehicle3FMU_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1832};
  (data->localData[0]->realVars[881] /* rearRight.frame_a.t variable */) = (-(data->localData[0]->realVars[739] /* rear.frame_a.t variable */)) - (data->localData[0]->realVars[766] /* rearLeft.frame_b.t variable */);
  TRACE_POP
}
/*
equation index: 1833
type: SIMPLE_ASSIGN
rearRight.frame_a.fx = rearLeft.frame_a.fx - rear.frame_a.fx
*/
void ThreeWheelVehicle3FMU_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  (data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */) = (data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */) - (data->localData[0]->realVars[737] /* rear.frame_a.fx variable */);
  TRACE_POP
}

void residualFunc1902(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1902};
  int i,j;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc1902: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<7; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1902 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */) = xloc[0];
  (data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */) = xloc[1];
  (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */) = xloc[2];
  (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */) = xloc[3];
  (data->localData[0]->realVars[114] /* body.a[1] variable */) = xloc[4];
  (data->localData[0]->realVars[115] /* body.a[2] variable */) = xloc[5];
  (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */) = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1778(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1779(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1780(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1781(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1782(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1783(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1784(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1785(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1786(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1787(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1788(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1789(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1790(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1791(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1792(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1793(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1794(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1795(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1796(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1797(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1798(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1799(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1800(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1801(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1802(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1803(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1804(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1805(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1806(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1807(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1808(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1809(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1810(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1811(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1812(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1813(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1814(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1815(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1816(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1817(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1818(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1819(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1820(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1821(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1822(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1823(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1824(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1825(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1826(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1827(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1828(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1829(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1830(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1831(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1832(data, threadData);

  /* local constraints */
  ThreeWheelVehicle3FMU_eqFunction_1833(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) + ((data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) - (data->localData[0]->realVars[370] /* outForceRightWheel[1,1] variable */);

  res[1] = ((data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */)) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) + ((-(data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */))) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) - (data->localData[0]->realVars[371] /* outForceRightWheel[1,2] variable */);

  res[2] = ((data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[879] /* rearRight.frame_a.fx variable */)) - (((data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[880] /* rearRight.frame_a.fy variable */))) + (data->localData[0]->realVars[881] /* rearRight.frame_a.t variable */);

  res[3] = ((-(data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */))) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) - (data->localData[0]->realVars[367] /* outForceLeftWheel[1,1] variable */) - (((data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)));

  res[4] = ((data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */)) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) + ((-(data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */))) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) - (data->localData[0]->realVars[368] /* outForceLeftWheel[1,2] variable */);

  res[5] = ((data->localData[0]->realVars[277] /* frontWheel.frame_a.fy variable */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) + ((data->localData[0]->realVars[276] /* frontWheel.frame_a.fx variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) - (data->localData[0]->realVars[364] /* outForceFrontWheel[1,1] variable */);

  res[6] = ((data->localData[0]->realVars[277] /* frontWheel.frame_a.fy variable */)) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) + ((-(data->localData[0]->realVars[276] /* frontWheel.frame_a.fx variable */))) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) - (data->localData[0]->realVars[365] /* outForceFrontWheel[1,2] variable */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1902(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,5,5,5,5,7,7,3};
  const int rowIndex[37] = {0,1,2,3,4,0,1,2,3,4,0,1,2,5,6,0,1,2,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,2,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(7, 37, 7);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 37*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {6};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
  
  /* color 7 with 1 columns */
  const int indices_7[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_7[i]] = 7;
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1902(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 7;
  inSysData->nonlinearPattern->numberOfEqns = 7;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((7+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((7+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+7] = {0,0,0,0,0,0,0,0};
  const int index_eqn[1+7] = {0,0,0,0,0,0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (7+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (7+1)*sizeof(unsigned int));
  for(i=2;i<7+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<7+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1902(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for rearLeft.frame_a.fx */
  sysData->nominal[i] = data->modelData->realVarsData[763].attribute /* rearLeft.frame_a.fx */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[763].attribute /* rearLeft.frame_a.fx */.min;
  sysData->max[i++]   = data->modelData->realVarsData[763].attribute /* rearLeft.frame_a.fx */.max;
  /* static nls data for rearLeft.frame_a.fy */
  sysData->nominal[i] = data->modelData->realVarsData[764].attribute /* rearLeft.frame_a.fy */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[764].attribute /* rearLeft.frame_a.fy */.min;
  sysData->max[i++]   = data->modelData->realVarsData[764].attribute /* rearLeft.frame_a.fy */.max;
  /* static nls data for front2.frame_a.fy */
  sysData->nominal[i] = data->modelData->realVarsData[225].attribute /* front2.frame_a.fy */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[225].attribute /* front2.frame_a.fy */.min;
  sysData->max[i++]   = data->modelData->realVarsData[225].attribute /* front2.frame_a.fy */.max;
  /* static nls data for front2.frame_a.fx */
  sysData->nominal[i] = data->modelData->realVarsData[224].attribute /* front2.frame_a.fx */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[224].attribute /* front2.frame_a.fx */.min;
  sysData->max[i++]   = data->modelData->realVarsData[224].attribute /* front2.frame_a.fx */.max;
  /* static nls data for body.a[1] */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* body.a[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* body.a[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* body.a[1] */.max;
  /* static nls data for body.a[2] */
  sysData->nominal[i] = data->modelData->realVarsData[115].attribute /* body.a[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[115].attribute /* body.a[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[115].attribute /* body.a[2] */.max;
  /* static nls data for der(body.w) */
  sysData->nominal[i] = data->modelData->realVarsData[17].attribute /* der(body.w) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[17].attribute /* der(body.w) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[17].attribute /* der(body.w) */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1902(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1902(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS1902(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[763] /* rearLeft.frame_a.fx variable */);
  array[1] = (data->localData[0]->realVars[764] /* rearLeft.frame_a.fy variable */);
  array[2] = (data->localData[0]->realVars[225] /* front2.frame_a.fy variable */);
  array[3] = (data->localData[0]->realVars[224] /* front2.frame_a.fx variable */);
  array[4] = (data->localData[0]->realVars[114] /* body.a[1] variable */);
  array[5] = (data->localData[0]->realVars[115] /* body.a[2] variable */);
  array[6] = (data->localData[0]->realVars[17] /* der(body.w) STATE_DER */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void ThreeWheelVehicle3FMU_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 1902;
  nonLinearSystemData[1].size = 7;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc1902;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = ThreeWheelVehicle3FMU_functionJacNLSJac5_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = ThreeWheelVehicle3FMU_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS1902;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS1902;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 1365;
  nonLinearSystemData[0].size = 7;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc1365;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS1365;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS1365;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

