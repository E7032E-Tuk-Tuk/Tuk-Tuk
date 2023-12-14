/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "ThreeWheelVehicle3FMU_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void ThreeWheelVehicle3FMU_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *ThreeWheelVehicle3FMU_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  *out_EquationIndexes = NULL;
  return "empty";
}

/* forwarded equations */

int ThreeWheelVehicle3FMU_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int ThreeWheelVehicle3FMU_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;


#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;


#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *ThreeWheelVehicle3FMU_relationDescription(int i)
{
  return "empty";
}

int ThreeWheelVehicle3FMU_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  
  if(evalforZeroCross) {
  } else {
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

