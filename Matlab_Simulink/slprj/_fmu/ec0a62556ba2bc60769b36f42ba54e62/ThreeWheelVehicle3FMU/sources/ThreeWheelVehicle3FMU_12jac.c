/* Jacobians 7 */
#include "ThreeWheelVehicle3FMU_model.h"
#include "ThreeWheelVehicle3FMU_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 1841
type: SIMPLE_ASSIGN
rearLeft.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 = rearLeft.r0[1] * rearLeft.frame_a.fy.SeedNLSJac5 - rearLeft.r0[2] * rearLeft.frame_a.fx.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1841};
  jacobian->tmpVars[53] /* rearLeft.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[767] /* rearLeft.r0[1] DUMMY_STATE */)) * (jacobian->seedVars[1] /* rearLeft.frame_a.fy.SeedNLSJac5 SEED_VAR */) - (((data->localData[0]->realVars[768] /* rearLeft.r0[2] DUMMY_STATE */)) * (jacobian->seedVars[0] /* rearLeft.frame_a.fx.SeedNLSJac5 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
body.f.$pDERNLSJac5.dummyVarNLSJac5[1] = body.m * body.a.SeedNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1842};
  jacobian->tmpVars[38] /* body.f.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[13] /* body.m PARAM */)) * (jacobian->seedVars[4] /* body.a.SeedNLSJac5[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
rear.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 = body.f.$pDERNLSJac5.dummyVarNLSJac5[1] - front2.frame_a.fx.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1843};
  jacobian->tmpVars[44] /* rear.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[38] /* body.f.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[3] /* front2.frame_a.fx.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1844
type: SIMPLE_ASSIGN
rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 = rearLeft.frame_a.fx.SeedNLSJac5 - rear.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1844};
  jacobian->tmpVars[55] /* rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* rearLeft.frame_a.fx.SeedNLSJac5 SEED_VAR */ - jacobian->tmpVars[44] /* rear.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[2] = Trot[2,1] * body.a.SeedNLSJac5[1] + Trot[2,2] * body.a.SeedNLSJac5[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1845};
  jacobian->tmpVars[22] /* outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * (jacobian->seedVars[4] /* body.a.SeedNLSJac5[1] SEED_VAR */) + ((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * (jacobian->seedVars[5] /* body.a.SeedNLSJac5[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[1] = Trot[2,1] * body.a.SeedNLSJac5[2] - Trot[2,2] * body.a.SeedNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1846};
  jacobian->tmpVars[21] /* outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * (jacobian->seedVars[5] /* body.a.SeedNLSJac5[2] SEED_VAR */) - (((data->localData[0]->realVars[98] /* Trot[2,2] variable */)) * (jacobian->seedVars[4] /* body.a.SeedNLSJac5[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1] = (-outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[1]) * weightTransfer.m * weightTransfer.h / weightTransfer.L
*/
void ThreeWheelVehicle3FMU_eqFunction_1847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1847};
  jacobian->tmpVars[23] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */ = ((-jacobian->tmpVars[21] /* outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */)) * (((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (DIVISION((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */),(data->simulationInfo->realParameter[326] /* weightTransfer.L PARAM */),"weightTransfer.L")));
  TRACE_POP
}

/*
equation index: 1848
type: SIMPLE_ASSIGN
outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] = if noEvent(0.0 > frontWheel.N + outWeightTransfer[1]) then 0.0 else outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1848};
  modelica_boolean tmp0;
  tmp0 = Greater(0.0,(data->simulationInfo->realParameter[66] /* frontWheel.N PARAM */) + (data->localData[0]->realVars[390] /* outWeightTransfer[1] variable */));
  jacobian->tmpVars[24] /* outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] JACOBIAN_DIFF_VAR */ = (tmp0?0.0:jacobian->tmpVars[23] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
frontWheel.f.$pDERNLSJac5.dummyVarNLSJac5 = outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] * $cse6
*/
void ThreeWheelVehicle3FMU_eqFunction_1849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1849};
  jacobian->tmpVars[29] /* frontWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[24] /* outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[91] /* $cse6 variable */));
  TRACE_POP
}

/*
equation index: 1850
type: SIMPLE_ASSIGN
outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] = frontWheel.f.$pDERNLSJac5.dummyVarNLSJac5 * outSlipFrontWheel[2] / frontWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1850};
  jacobian->tmpVars[30] /* outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[29] /* frontWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[377] /* outSlipFrontWheel[2] variable */),(data->localData[0]->realVars[339] /* frontWheel.v_slip variable */),"frontWheel.v_slip"));
  TRACE_POP
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] = frontWheel.f.$pDERNLSJac5.dummyVarNLSJac5 * outSlipFrontWheel[1] / frontWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1851};
  jacobian->tmpVars[31] /* outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[29] /* frontWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[376] /* outSlipFrontWheel[1] variable */),(data->localData[0]->realVars[339] /* frontWheel.v_slip variable */),"frontWheel.v_slip"));
  TRACE_POP
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[3] = (-0.5) * outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1] - weightTransfer.m * weightTransfer.h * outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[2] / weightTransfer.Wr
*/
void ThreeWheelVehicle3FMU_eqFunction_1852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1852};
  jacobian->tmpVars[25] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */ = (-0.5) * (jacobian->tmpVars[23] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */) - (((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */)) * (DIVISION(jacobian->tmpVars[22] /* outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[327] /* weightTransfer.Wr PARAM */),"weightTransfer.Wr"))));
  TRACE_POP
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] = if noEvent(0.0 > rearRightWheel.N + outWeightTransfer[3]) then 0.0 else outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[3]
*/
void ThreeWheelVehicle3FMU_eqFunction_1853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,1853};
  modelica_boolean tmp1;
  tmp1 = Greater(0.0,(data->simulationInfo->realParameter[270] /* rearRightWheel.N PARAM */) + (data->localData[0]->realVars[392] /* outWeightTransfer[3] variable */));
  jacobian->tmpVars[26] /* outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] JACOBIAN_DIFF_VAR */ = (tmp1?0.0:jacobian->tmpVars[25] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
rearRightWheel.f.$pDERNLSJac5.dummyVarNLSJac5 = outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] * $cse14
*/
void ThreeWheelVehicle3FMU_eqFunction_1854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,1854};
  jacobian->tmpVars[34] /* rearRightWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[26] /* outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[87] /* $cse14 variable */));
  TRACE_POP
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] = rearRightWheel.f.$pDERNLSJac5.dummyVarNLSJac5 * outSlipRightWheel[2] / rearRightWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,1855};
  jacobian->tmpVars[35] /* outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[34] /* rearRightWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[384] /* outSlipRightWheel[2] variable */),(data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */),"rearRightWheel.v_slip"));
  TRACE_POP
}

/*
equation index: 1856
type: SIMPLE_ASSIGN
outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] = rearRightWheel.f.$pDERNLSJac5.dummyVarNLSJac5 * outSlipRightWheel[1] / rearRightWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,1856};
  jacobian->tmpVars[36] /* outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[34] /* rearRightWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[383] /* outSlipRightWheel[1] variable */),(data->localData[0]->realVars[976] /* rearRightWheel.v_slip variable */),"rearRightWheel.v_slip"));
  TRACE_POP
}

/*
equation index: 1857
type: SIMPLE_ASSIGN
outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[2] = weightTransfer.m * weightTransfer.h * outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[2] / weightTransfer.Wr + (-0.5) * outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,1857};
  jacobian->tmpVars[27] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[329] /* weightTransfer.m PARAM */)) * (((data->simulationInfo->realParameter[328] /* weightTransfer.h PARAM */)) * (DIVISION(jacobian->tmpVars[22] /* outCarAcc.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[327] /* weightTransfer.Wr PARAM */),"weightTransfer.Wr"))) + (-0.5) * (jacobian->tmpVars[23] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1858
type: SIMPLE_ASSIGN
outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] = if noEvent(0.0 > rearLeftWheel.N + outWeightTransfer[2]) then 0.0 else outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,1858};
  modelica_boolean tmp2;
  tmp2 = Greater(0.0,(data->simulationInfo->realParameter[230] /* rearLeftWheel.N PARAM */) + (data->localData[0]->realVars[391] /* outWeightTransfer[2] variable */));
  jacobian->tmpVars[28] /* outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] JACOBIAN_DIFF_VAR */ = (tmp2?0.0:jacobian->tmpVars[27] /* outWeightTransfer.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
rearLeftWheel.f.$pDERNLSJac5.dummyVarNLSJac5 = outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] * $cse10
*/
void ThreeWheelVehicle3FMU_eqFunction_1859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,1859};
  jacobian->tmpVars[32] /* rearLeftWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[28] /* outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,3] JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[83] /* $cse10 variable */));
  TRACE_POP
}

/*
equation index: 1860
type: SIMPLE_ASSIGN
outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] = rearLeftWheel.f.$pDERNLSJac5.dummyVarNLSJac5 * outSlipLeftWheel[2] / rearLeftWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,1860};
  jacobian->tmpVars[33] /* outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[32] /* rearLeftWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[379] /* outSlipLeftWheel[2] variable */),(data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */),"rearLeftWheel.v_slip"));
  TRACE_POP
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
$res_NLSJac5_5.$pDERNLSJac5.dummyVarNLSJac5 = rearLeft.frame_a.fx.SeedNLSJac5 * rearLeftWheel.e0[2] + (-rearLeft.frame_a.fy.SeedNLSJac5) * rearLeftWheel.e0[1] - outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,1861};
  jacobian->resultVars[4] /* $res_NLSJac5_5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->seedVars[0] /* rearLeft.frame_a.fx.SeedNLSJac5 SEED_VAR */) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */)) + ((-jacobian->seedVars[1] /* rearLeft.frame_a.fy.SeedNLSJac5 SEED_VAR */)) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)) - jacobian->tmpVars[33] /* outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] = rearLeftWheel.f.$pDERNLSJac5.dummyVarNLSJac5 * outSlipLeftWheel[1] / rearLeftWheel.v_slip
*/
void ThreeWheelVehicle3FMU_eqFunction_1862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,1862};
  jacobian->tmpVars[37] /* outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[32] /* rearLeftWheel.f.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[378] /* outSlipLeftWheel[1] variable */),(data->localData[0]->realVars[860] /* rearLeftWheel.v_slip variable */),"rearLeftWheel.v_slip"));
  TRACE_POP
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
$res_NLSJac5_4.$pDERNLSJac5.dummyVarNLSJac5 = (-outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1]) - rearLeft.frame_a.fy.SeedNLSJac5 * rearLeftWheel.e0[2] - rearLeft.frame_a.fx.SeedNLSJac5 * rearLeftWheel.e0[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,1863};
  jacobian->resultVars[3] /* $res_NLSJac5_4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (-jacobian->tmpVars[37] /* outForceLeftWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] JACOBIAN_DIFF_VAR */) - ((jacobian->seedVars[1] /* rearLeft.frame_a.fy.SeedNLSJac5 SEED_VAR */) * ((data->localData[0]->realVars[791] /* rearLeftWheel.e0[2] variable */))) - ((jacobian->seedVars[0] /* rearLeft.frame_a.fx.SeedNLSJac5 SEED_VAR */) * ((data->localData[0]->realVars[790] /* rearLeftWheel.e0[1] variable */)));
  TRACE_POP
}

/*
equation index: 1864
type: SIMPLE_ASSIGN
body.f.$pDERNLSJac5.dummyVarNLSJac5[2] = body.m * body.a.SeedNLSJac5[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,1864};
  jacobian->tmpVars[16] /* body.f.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[13] /* body.m PARAM */)) * (jacobian->seedVars[5] /* body.a.SeedNLSJac5[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
rear.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 = body.f.$pDERNLSJac5.dummyVarNLSJac5[2] - front2.frame_a.fy.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,1865};
  jacobian->tmpVars[50] /* rear.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[16] /* body.f.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[2] /* front2.frame_a.fy.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1866
type: SIMPLE_ASSIGN
rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 = rearLeft.frame_a.fy.SeedNLSJac5 - rear.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,1866};
  jacobian->tmpVars[52] /* rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[1] /* rearLeft.frame_a.fy.SeedNLSJac5 SEED_VAR */ - jacobian->tmpVars[50] /* rear.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1867
type: SIMPLE_ASSIGN
$res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 = rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 * rearRightWheel.e0[2] + rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 * rearRightWheel.e0[1] - outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,1867};
  jacobian->resultVars[0] /* $res_NLSJac5_1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[52] /* rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) + (jacobian->tmpVars[55] /* rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) - jacobian->tmpVars[36] /* outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
$res_NLSJac5_2.$pDERNLSJac5.dummyVarNLSJac5 = rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 * rearRightWheel.e0[1] + (-rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5) * rearRightWheel.e0[2] - outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,1868};
  jacobian->resultVars[1] /* $res_NLSJac5_2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[52] /* rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[906] /* rearRightWheel.e0[1] variable */)) + ((-jacobian->tmpVars[55] /* rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[907] /* rearRightWheel.e0[2] variable */)) - jacobian->tmpVars[35] /* outForceRightWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
body.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 = body.I * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,1869};
  jacobian->tmpVars[15] /* body.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[12] /* body.I PARAM */)) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1870
type: SIMPLE_ASSIGN
body2.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 = body2.I * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,1870};
  jacobian->tmpVars[13] /* body2.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[21] /* body2.I PARAM */)) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
revolute.t.$pDERNLSJac5.dummyVarNLSJac5 = body2.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 - (frontTrail.r0[1] * front2.frame_a.fy.SeedNLSJac5 - frontTrail.r0[2] * front2.frame_a.fx.SeedNLSJac5)
*/
void ThreeWheelVehicle3FMU_eqFunction_1871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,1871};
  jacobian->tmpVars[45] /* revolute.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[13] /* body2.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - (((data->localData[0]->realVars[251] /* frontTrail.r0[1] DUMMY_STATE */)) * (jacobian->seedVars[2] /* front2.frame_a.fy.SeedNLSJac5 SEED_VAR */) - (((data->localData[0]->realVars[252] /* frontTrail.r0[2] DUMMY_STATE */)) * (jacobian->seedVars[3] /* front2.frame_a.fx.SeedNLSJac5 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
front2.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 = revolute.t.$pDERNLSJac5.dummyVarNLSJac5 - (front2.r0[2] * front2.frame_a.fx.SeedNLSJac5 - front2.r0[1] * front2.frame_a.fy.SeedNLSJac5)
*/
void ThreeWheelVehicle3FMU_eqFunction_1872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,1872};
  jacobian->tmpVars[46] /* front2.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[45] /* revolute.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - (((data->localData[0]->realVars[228] /* front2.r0[2] DUMMY_STATE */)) * (jacobian->seedVars[3] /* front2.frame_a.fx.SeedNLSJac5 SEED_VAR */) - (((data->localData[0]->realVars[227] /* front2.r0[1] DUMMY_STATE */)) * (jacobian->seedVars[2] /* front2.frame_a.fy.SeedNLSJac5 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 1873
type: SIMPLE_ASSIGN
front.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 = front2.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 - (front.r0[1] * front2.frame_a.fy.SeedNLSJac5 - front.r0[2] * front2.frame_a.fx.SeedNLSJac5)
*/
void ThreeWheelVehicle3FMU_eqFunction_1873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,1873};
  jacobian->tmpVars[47] /* front.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[46] /* front2.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - (((data->localData[0]->realVars[204] /* front.r0[1] DUMMY_STATE */)) * (jacobian->seedVars[2] /* front2.frame_a.fy.SeedNLSJac5 SEED_VAR */) - (((data->localData[0]->realVars[205] /* front.r0[2] DUMMY_STATE */)) * (jacobian->seedVars[3] /* front2.frame_a.fx.SeedNLSJac5 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 1874
type: SIMPLE_ASSIGN
rear.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 = (-body.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5) - front.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,1874};
  jacobian->tmpVars[48] /* rear.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[15] /* body.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[47] /* front.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
rear.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 = rear.r0[1] * rear.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 - (rear.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 + rear.r0[2] * rear.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5)
*/
void ThreeWheelVehicle3FMU_eqFunction_1875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 34;
  const int equationIndexes[2] = {1,1875};
  jacobian->tmpVars[51] /* rear.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[743] /* rear.r0[1] DUMMY_STATE */)) * (jacobian->tmpVars[50] /* rear.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - (jacobian->tmpVars[48] /* rear.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((data->localData[0]->realVars[744] /* rear.r0[2] DUMMY_STATE */)) * (jacobian->tmpVars[44] /* rear.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
rearRight.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 = (-rear.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5) - rearLeft.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 35;
  const int equationIndexes[2] = {1,1876};
  jacobian->tmpVars[54] /* rearRight.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[51] /* rear.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[53] /* rearLeft.frame_b.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1877
type: SIMPLE_ASSIGN
$res_NLSJac5_3.$pDERNLSJac5.dummyVarNLSJac5 = rearRight.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 + rearRight.r0[2] * rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 - rearRight.r0[1] * rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 36;
  const int equationIndexes[2] = {1,1877};
  jacobian->resultVars[2] /* $res_NLSJac5_3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[54] /* rearRight.frame_a.t.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((data->localData[0]->realVars[884] /* rearRight.r0[2] DUMMY_STATE */)) * (jacobian->tmpVars[55] /* rearRight.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - (((data->localData[0]->realVars[883] /* rearRight.r0[1] DUMMY_STATE */)) * (jacobian->tmpVars[52] /* rearRight.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1878
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] = (-frontWheel.R[2,1]) * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 37;
  const int equationIndexes[2] = {1,1878};
  jacobian->tmpVars[10] /* der(der(frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */ = ((-(data->localData[0]->realVars[253] /* frontWheel.R[2,1] variable */))) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1879
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] = frontWheel.R[2,2] * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 38;
  const int equationIndexes[2] = {1,1879};
  jacobian->tmpVars[9] /* der(der(frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[254] /* frontWheel.R[2,2] variable */)) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1880
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[2] = $DER.$DER.frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] * frontTrail.r[1] + $DER.$DER.frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 39;
  const int equationIndexes[2] = {1,1880};
  jacobian->tmpVars[11] /* der(der(frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[2])) JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[9] /* der(der(frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) + (jacobian->tmpVars[10] /* der(der(frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */));
  TRACE_POP
}

/*
equation index: 1881
type: SIMPLE_ASSIGN
$DER.$DER.frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[1] = $DER.$DER.frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] * frontTrail.r[1] - $DER.$DER.frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] * frontTrail.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 40;
  const int equationIndexes[2] = {1,1881};
  jacobian->tmpVars[12] /* der(der(frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[1])) JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[10] /* der(der(frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[61] /* frontTrail.r[1] PARAM */)) - ((jacobian->tmpVars[9] /* der(der(frontTrail.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[62] /* frontTrail.r[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
$DER.$DER.front.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] = (-Trot[2,2]) * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 41;
  const int equationIndexes[2] = {1,1882};
  jacobian->tmpVars[3] /* der(der(front.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */ = ((-(data->localData[0]->realVars[98] /* Trot[2,2] variable */))) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
$DER.$DER.front.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] = Trot[2,1] * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 42;
  const int equationIndexes[2] = {1,1883};
  jacobian->tmpVars[2] /* der(der(front.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1884
type: SIMPLE_ASSIGN
$DER.$DER.front.r0.$pDERNLSJac5.dummyVarNLSJac5[2] = $DER.$DER.front.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] * front.r[1] + $DER.$DER.front.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 43;
  const int equationIndexes[2] = {1,1884};
  jacobian->tmpVars[6] /* der(der(front.r0.$pDERNLSJac5.dummyVarNLSJac5[2])) JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[2] /* der(der(front.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) + (jacobian->tmpVars[3] /* der(der(front.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */));
  TRACE_POP
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
$DER.$DER.front.frame_b.y.$pDERNLSJac5.dummyVarNLSJac5 = body.a.SeedNLSJac5[2] + $DER.$DER.front.r0.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 44;
  const int equationIndexes[2] = {1,1885};
  jacobian->tmpVars[17] /* der(der(front.frame_b.y.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[5] /* body.a.SeedNLSJac5[2] SEED_VAR */ + jacobian->tmpVars[6] /* der(der(front.r0.$pDERNLSJac5.dummyVarNLSJac5[2])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1886
type: SIMPLE_ASSIGN
$DER.$DER.front.r0.$pDERNLSJac5.dummyVarNLSJac5[1] = $DER.$DER.front.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] * front.r[1] - $DER.$DER.front.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] * front.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1886(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 45;
  const int equationIndexes[2] = {1,1886};
  jacobian->tmpVars[7] /* der(der(front.r0.$pDERNLSJac5.dummyVarNLSJac5[1])) JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[3] /* der(der(front.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[39] /* front.r[1] PARAM */)) - ((jacobian->tmpVars[2] /* der(der(front.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[40] /* front.r[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
$DER.$DER.front.frame_b.x.$pDERNLSJac5.dummyVarNLSJac5 = body.a.SeedNLSJac5[1] + $DER.$DER.front.r0.$pDERNLSJac5.dummyVarNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1887(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 46;
  const int equationIndexes[2] = {1,1887};
  jacobian->tmpVars[39] /* der(der(front.frame_b.x.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[4] /* body.a.SeedNLSJac5[1] SEED_VAR */ + jacobian->tmpVars[7] /* der(der(front.r0.$pDERNLSJac5.dummyVarNLSJac5[1])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
$DER.$DER.front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] = Trot[2,1] * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1888(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 47;
  const int equationIndexes[2] = {1,1888};
  jacobian->tmpVars[1] /* der(der(front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[97] /* Trot[2,1] variable */)) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1889
type: SIMPLE_ASSIGN
$DER.$DER.front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] = (-Trot[2,2]) * $DER.body.w.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 48;
  const int equationIndexes[2] = {1,1889};
  jacobian->tmpVars[0] /* der(der(front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */ = ((-(data->localData[0]->realVars[98] /* Trot[2,2] variable */))) * (jacobian->seedVars[6] /* der(body.w.SeedNLSJac5) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1890
type: SIMPLE_ASSIGN
$DER.$DER.front2.r0.$pDERNLSJac5.dummyVarNLSJac5[2] = $DER.$DER.front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] * front2.r[1] + $DER.$DER.front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 49;
  const int equationIndexes[2] = {1,1890};
  jacobian->tmpVars[4] /* der(der(front2.r0.$pDERNLSJac5.dummyVarNLSJac5[2])) JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[1] /* der(der(front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) + (jacobian->tmpVars[0] /* der(der(front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */));
  TRACE_POP
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
$DER.$DER.revolute.frame_a.y.$pDERNLSJac5.dummyVarNLSJac5 = $DER.$DER.front.frame_b.y.$pDERNLSJac5.dummyVarNLSJac5 - $DER.$DER.front2.r0.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 50;
  const int equationIndexes[2] = {1,1891};
  jacobian->tmpVars[18] /* der(der(revolute.frame_a.y.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[17] /* der(der(front.frame_b.y.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[4] /* der(der(front2.r0.$pDERNLSJac5.dummyVarNLSJac5[2])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
body2.a.$pDERNLSJac5.dummyVarNLSJac5[2] = $DER.$DER.revolute.frame_a.y.$pDERNLSJac5.dummyVarNLSJac5 + $DER.$DER.frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 51;
  const int equationIndexes[2] = {1,1892};
  jacobian->tmpVars[19] /* body2.a.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[18] /* der(der(revolute.frame_a.y.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[11] /* der(der(frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[2])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1893
type: SIMPLE_ASSIGN
body2.f.$pDERNLSJac5.dummyVarNLSJac5[2] = body2.m * body2.a.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 52;
  const int equationIndexes[2] = {1,1893};
  jacobian->tmpVars[20] /* body2.f.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[22] /* body2.m PARAM */)) * (jacobian->tmpVars[19] /* body2.a.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1894
type: SIMPLE_ASSIGN
frontWheel.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 = (-body2.f.$pDERNLSJac5.dummyVarNLSJac5[2]) - front2.frame_a.fy.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1894(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 53;
  const int equationIndexes[2] = {1,1894};
  jacobian->tmpVars[49] /* frontWheel.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[20] /* body2.f.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[2] /* front2.frame_a.fy.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
$DER.$DER.front2.r0.$pDERNLSJac5.dummyVarNLSJac5[1] = $DER.$DER.front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,2] * front2.r[1] - $DER.$DER.front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,1] * front2.r[2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1895(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 54;
  const int equationIndexes[2] = {1,1895};
  jacobian->tmpVars[5] /* der(der(front2.r0.$pDERNLSJac5.dummyVarNLSJac5[1])) JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* der(der(front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,2])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[49] /* front2.r[1] PARAM */)) - ((jacobian->tmpVars[1] /* der(der(front2.R.$pDERNLSJac5.dummyVarNLSJac5[2,1])) JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[50] /* front2.r[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1896
type: SIMPLE_ASSIGN
$DER.$DER.revolute.frame_a.x.$pDERNLSJac5.dummyVarNLSJac5 = $DER.$DER.front.frame_b.x.$pDERNLSJac5.dummyVarNLSJac5 - $DER.$DER.front2.r0.$pDERNLSJac5.dummyVarNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1896(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 55;
  const int equationIndexes[2] = {1,1896};
  jacobian->tmpVars[40] /* der(der(revolute.frame_a.x.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[39] /* der(der(front.frame_b.x.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[5] /* der(der(front2.r0.$pDERNLSJac5.dummyVarNLSJac5[1])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1897
type: SIMPLE_ASSIGN
body2.a.$pDERNLSJac5.dummyVarNLSJac5[1] = $DER.$DER.revolute.frame_a.x.$pDERNLSJac5.dummyVarNLSJac5 + $DER.$DER.frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1897(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 56;
  const int equationIndexes[2] = {1,1897};
  jacobian->tmpVars[41] /* body2.a.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[40] /* der(der(revolute.frame_a.x.$pDERNLSJac5.dummyVarNLSJac5)) JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[12] /* der(der(frontTrail.r0.$pDERNLSJac5.dummyVarNLSJac5[1])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1898
type: SIMPLE_ASSIGN
body2.f.$pDERNLSJac5.dummyVarNLSJac5[1] = body2.m * body2.a.$pDERNLSJac5.dummyVarNLSJac5[1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1898(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 57;
  const int equationIndexes[2] = {1,1898};
  jacobian->tmpVars[42] /* body2.f.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[22] /* body2.m PARAM */)) * (jacobian->tmpVars[41] /* body2.a.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1899
type: SIMPLE_ASSIGN
frontWheel.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 = (-body2.f.$pDERNLSJac5.dummyVarNLSJac5[1]) - front2.frame_a.fx.SeedNLSJac5
*/
void ThreeWheelVehicle3FMU_eqFunction_1899(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 58;
  const int equationIndexes[2] = {1,1899};
  jacobian->tmpVars[43] /* frontWheel.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[42] /* body2.f.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[3] /* front2.frame_a.fx.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1900
type: SIMPLE_ASSIGN
$res_NLSJac5_6.$pDERNLSJac5.dummyVarNLSJac5 = frontWheel.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 * frontWheel.e0[2] + frontWheel.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 * frontWheel.e0[1] - outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1]
*/
void ThreeWheelVehicle3FMU_eqFunction_1900(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 59;
  const int equationIndexes[2] = {1,1900};
  jacobian->resultVars[5] /* $res_NLSJac5_6.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[49] /* frontWheel.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) + (jacobian->tmpVars[43] /* frontWheel.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) - jacobian->tmpVars[31] /* outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1901
type: SIMPLE_ASSIGN
$res_NLSJac5_7.$pDERNLSJac5.dummyVarNLSJac5 = frontWheel.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 * frontWheel.e0[1] + (-frontWheel.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5) * frontWheel.e0[2] - outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2]
*/
void ThreeWheelVehicle3FMU_eqFunction_1901(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 60;
  const int equationIndexes[2] = {1,1901};
  jacobian->resultVars[6] /* $res_NLSJac5_7.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (jacobian->tmpVars[49] /* frontWheel.frame_a.fy.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[271] /* frontWheel.e0[1] variable */)) + ((-jacobian->tmpVars[43] /* frontWheel.frame_a.fx.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[272] /* frontWheel.e0[2] variable */)) - jacobian->tmpVars[30] /* outForceFrontWheel.$pDERNLSJac5.dummyVarNLSJac5[1,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int ThreeWheelVehicle3FMU_functionJacNLSJac5_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = ThreeWheelVehicle3FMU_INDEX_JAC_NLSJac5;
  
  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_functionJacNLSJac5_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = ThreeWheelVehicle3FMU_INDEX_JAC_NLSJac5;
  ThreeWheelVehicle3FMU_eqFunction_1841(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1842(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1843(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1844(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1845(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1846(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1847(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1848(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1849(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1850(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1851(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1852(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1853(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1854(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1855(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1856(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1857(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1858(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1859(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1860(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1861(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1862(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1863(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1864(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1865(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1866(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1867(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1868(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1869(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1870(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1871(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1872(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1873(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1874(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1875(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1876(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1877(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1878(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1879(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1880(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1881(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1882(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1883(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1884(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1885(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1886(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1887(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1888(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1889(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1890(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1891(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1892(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1893(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1894(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1895(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1896(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1897(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1898(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1899(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1900(data, threadData, jacobian, parentJacobian);
  ThreeWheelVehicle3FMU_eqFunction_1901(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int ThreeWheelVehicle3FMU_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int ThreeWheelVehicle3FMU_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int ThreeWheelVehicle3FMU_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int ThreeWheelVehicle3FMU_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int ThreeWheelVehicle3FMU_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int ThreeWheelVehicle3FMU_functionJacA_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = ThreeWheelVehicle3FMU_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = ThreeWheelVehicle3FMU_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int ThreeWheelVehicle3FMU_initialAnalyticJacobianNLSJac5(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "ThreeWheelVehicle3FMU_JacNLSJac5.bin");
  
  initAnalyticJacobian(jacobian, 7, 7, 63, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(7, 37, 7);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 7+1, pFile, FALSE);
  if (count != 7+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 7+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 37, pFile, FALSE);
  if (count != 37) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 7+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1);
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
int ThreeWheelVehicle3FMU_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ThreeWheelVehicle3FMU_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ThreeWheelVehicle3FMU_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ThreeWheelVehicle3FMU_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int ThreeWheelVehicle3FMU_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int ThreeWheelVehicle3FMU_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "ThreeWheelVehicle3FMU_JacA.bin");
  
  initAnalyticJacobian(jacobian, 12, 12, 0, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(12, 48, 7);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 12+1, pFile, FALSE);
  if (count != 12+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 12+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 48, pFile, FALSE);
  if (count != 48) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 12+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1);
  /* color 7 with 6 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 6);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}



