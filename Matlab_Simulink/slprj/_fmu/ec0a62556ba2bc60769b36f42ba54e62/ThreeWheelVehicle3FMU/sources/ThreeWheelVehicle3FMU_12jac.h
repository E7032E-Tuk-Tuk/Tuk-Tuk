/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define ThreeWheelVehicle3FMU_INDEX_JAC_NLSJac5 0
int ThreeWheelVehicle3FMU_functionJacNLSJac5_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int ThreeWheelVehicle3FMU_initialAnalyticJacobianNLSJac5(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define ThreeWheelVehicle3FMU_INDEX_JAC_H 1
int ThreeWheelVehicle3FMU_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int ThreeWheelVehicle3FMU_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define ThreeWheelVehicle3FMU_INDEX_JAC_F 2
int ThreeWheelVehicle3FMU_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int ThreeWheelVehicle3FMU_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define ThreeWheelVehicle3FMU_INDEX_JAC_D 3
int ThreeWheelVehicle3FMU_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int ThreeWheelVehicle3FMU_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define ThreeWheelVehicle3FMU_INDEX_JAC_C 4
int ThreeWheelVehicle3FMU_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int ThreeWheelVehicle3FMU_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define ThreeWheelVehicle3FMU_INDEX_JAC_B 5
int ThreeWheelVehicle3FMU_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int ThreeWheelVehicle3FMU_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define ThreeWheelVehicle3FMU_INDEX_JAC_A 6
int ThreeWheelVehicle3FMU_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int ThreeWheelVehicle3FMU_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif

