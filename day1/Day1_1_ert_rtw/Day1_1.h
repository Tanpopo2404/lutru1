/*
 * File: Day1_1.h
 *
 * Code generated for Simulink model 'Day1_1'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Mar 22 16:30:33 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Day1_1_h_
#define RTW_HEADER_Day1_1_h_
#ifndef Day1_1_COMMON_INCLUDES_
# define Day1_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Day1_1_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Model entry point functions */
extern void Day1_1_initialize(void);
extern void Day1_1_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Add' : Unused code path elimination
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<S1>/Compare' : Unused code path elimination
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S2>/Compare' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S3>/Compare' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant8' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Divide' : Unused code path elimination
 * Block '<Root>/Product' : Unused code path elimination
 * Block '<Root>/Switch1' : Unused code path elimination
 * Block '<Root>/Switch2' : Unused code path elimination
 * Block '<Root>/Switch3' : Unused code path elimination
 */

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
 * '<Root>' : 'Day1_1'
 * '<S1>'   : 'Day1_1/Compare To Constant'
 * '<S2>'   : 'Day1_1/Compare To Constant1'
 * '<S3>'   : 'Day1_1/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_Day1_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
