/* Delay */
#include "ThreeWheelVehicle3FMU_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

int ThreeWheelVehicle3FMU_function_storeDelayed(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  int equationIndexes[2] = {1,-1};
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

