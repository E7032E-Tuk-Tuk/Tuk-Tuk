#ifndef ThreeWheelVehicle3FMU__H
#define ThreeWheelVehicle3FMU__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  real_array _T;
  real_array _w;
} Modelica_Mechanics_MultiBody_Frames_Orientation;
extern struct record_description Modelica_Mechanics_MultiBody_Frames_Orientation__desc;

void Modelica_Mechanics_MultiBody_Frames_Orientation_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Mechanics_MultiBody_Frames_Orientation_construct(td, ths ) Modelica_Mechanics_MultiBody_Frames_Orientation_construct_p(td, &ths )
void Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p(void* v_src, void* v_dst);
#define Modelica_Mechanics_MultiBody_Frames_Orientation_copy(src,dst) Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p(&src, &dst)


void Modelica_Mechanics_MultiBody_Frames_Orientation_wrap_vars_p(threadData_t *threadData , void* v_dst , real_array in_T, real_array in_w);
#define Modelica_Mechanics_MultiBody_Frames_Orientation_wrap_vars(td, dst , in_T, in_w) Modelica_Mechanics_MultiBody_Frames_Orientation_wrap_vars_p(td, &dst , in_T, in_w)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Mechanics_MultiBody_Frames_Orientation_copy_to_vars_p(void* v_src , real_array* in_T, real_array* in_w);
// #define Modelica_Mechanics_MultiBody_Frames_Orientation_copy_to_vars(src,...) Modelica_Mechanics_MultiBody_Frames_Orientation_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Mechanics_MultiBody_Frames_Orientation_array;
#define alloc_Modelica_Mechanics_MultiBody_Frames_Orientation_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Mechanics_MultiBody_Frames_Orientation_construct_p, ndims, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation), __VA_ARGS__)
#define Modelica_Mechanics_MultiBody_Frames_Orientation_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation))
#define Modelica_Mechanics_MultiBody_Frames_Orientation_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation))
#define Modelica_Mechanics_MultiBody_Frames_Orientation_array_get(src,ndims,...)   (*(Modelica_Mechanics_MultiBody_Frames_Orientation*)(generic_array_get(&src, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation), __VA_ARGS__)))
#define Modelica_Mechanics_MultiBody_Frames_Orientation_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation), __VA_ARGS__)

DLLExport
modelica_real omc_Modelica_Math_Vectors_length(threadData_t *threadData, real_array _v);
DLLExport
modelica_metatype boxptr_Modelica_Math_Vectors_length(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_length,2,0) {(void*) boxptr_Modelica_Math_Vectors_length,0}};
#define boxvar_Modelica_Math_Vectors_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_length)


DLLExport
real_array omc_Modelica_Math_Vectors_normalize(threadData_t *threadData, real_array _v, modelica_real _eps);
DLLExport
modelica_metatype boxptr_Modelica_Math_Vectors_normalize(threadData_t *threadData, modelica_metatype _v, modelica_metatype _eps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_normalize,2,0) {(void*) boxptr_Modelica_Math_Vectors_normalize,0}};
#define boxvar_Modelica_Math_Vectors_normalize MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_normalize)


DLLExport
Modelica_Mechanics_MultiBody_Frames_Orientation omc_Modelica_Mechanics_MultiBody_Frames_Orientation (threadData_t *threadData, real_array omc_T, real_array omc_w);

DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, modelica_metatype _T, modelica_metatype _w);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_Orientation,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_Orientation,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_Orientation MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_Orientation)


DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, real_array _n_x, real_array _n_y);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, modelica_metatype _n_x, modelica_metatype _n_y);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy)


DLLExport
modelica_real omc_PlanarMechanics_Utilities_Functions_limitBySform(threadData_t *threadData, modelica_real _x_min, modelica_real _x_max, modelica_real _y_min, modelica_real _y_max, modelica_real _x);
DLLExport
modelica_metatype boxptr_PlanarMechanics_Utilities_Functions_limitBySform(threadData_t *threadData, modelica_metatype _x_min, modelica_metatype _x_max, modelica_metatype _y_min, modelica_metatype _y_max, modelica_metatype _x);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PlanarMechanics_Utilities_Functions_limitBySform,2,0) {(void*) boxptr_PlanarMechanics_Utilities_Functions_limitBySform,0}};
#define boxvar_PlanarMechanics_Utilities_Functions_limitBySform MMC_REFSTRUCTLIT(boxvar_lit_PlanarMechanics_Utilities_Functions_limitBySform)


DLLExport
modelica_real omc_PlanarMechanics_Utilities_Functions_limitByStriple(threadData_t *threadData, modelica_real _x_max, modelica_real _x_sat, modelica_real _y_max, modelica_real _y_sat, modelica_real _x);
DLLExport
modelica_metatype boxptr_PlanarMechanics_Utilities_Functions_limitByStriple(threadData_t *threadData, modelica_metatype _x_max, modelica_metatype _x_sat, modelica_metatype _y_max, modelica_metatype _y_sat, modelica_metatype _x);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PlanarMechanics_Utilities_Functions_limitByStriple,2,0) {(void*) boxptr_PlanarMechanics_Utilities_Functions_limitByStriple,0}};
#define boxvar_PlanarMechanics_Utilities_Functions_limitByStriple MMC_REFSTRUCTLIT(boxvar_lit_PlanarMechanics_Utilities_Functions_limitByStriple)
#include "ThreeWheelVehicle3FMU_model.h"


#ifdef __cplusplus
}
#endif
#endif

