/*
 * File: gencode.h
 *
 * Code generated for Simulink model 'gencode'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Apr  1 22:20:22 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gencode_h_
#define RTW_HEADER_gencode_h_
#include <stddef.h>
#ifndef gencode_COMMON_INCLUDES_
# define gencode_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* gencode_COMMON_INCLUDES_ */

#include "gencode_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T Divide;                 /* '<Root>/Divide' */
} ConstB_gencode_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_gencode_T;

/* Real-time Model Data Structure */
struct tag_RTM_gencode_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_gencode_T gencode_Y;
extern const ConstB_gencode_T gencode_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void gencode_initialize(void);
extern void gencode_step(void);
extern void gencode_terminate(void);

/* Real-time Model object */
extern RT_MODEL_gencode_T *const gencode_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'gencode'
 */
#endif                                 /* RTW_HEADER_gencode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
