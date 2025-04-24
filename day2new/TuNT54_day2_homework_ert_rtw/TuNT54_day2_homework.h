/*
 * File: TuNT54_day2_homework.h
 *
 * Code generated for Simulink model 'TuNT54_day2_homework'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Apr  1 23:37:33 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TuNT54_day2_homework_h_
#define RTW_HEADER_TuNT54_day2_homework_h_
#ifndef TuNT54_day2_homework_COMMON_INCLUDES_
# define TuNT54_day2_homework_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TuNT54_day2_homework_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Model entry point functions */
extern void TuNT54_day2_homework_initialize(void);
extern void TuNT54_day2_homework_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<S1>/Abs1' : Unused code path elimination
 * Block '<S1>/Add' : Unused code path elimination
 * Block '<S1>/Math Function' : Unused code path elimination
 * Block '<S1>/Math Function1' : Unused code path elimination
 * Block '<S1>/Math Function2' : Unused code path elimination
 * Block '<S1>/Product' : Unused code path elimination
 * Block '<S1>/Sqrt1' : Unused code path elimination
 * Block '<Root>/Speed_v0' : Unused code path elimination
 * Block '<S2>/Abs' : Unused code path elimination
 * Block '<S2>/Constant1' : Unused code path elimination
 * Block '<S2>/Divide' : Unused code path elimination
 * Block '<S2>/Product1' : Unused code path elimination
 * Block '<S2>/Sqrt' : Unused code path elimination
 * Block '<Root>/gravity_value' : Unused code path elimination
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
 * '<Root>' : 'TuNT54_day2_homework'
 * '<S1>'   : 'TuNT54_day2_homework/Speed_Calculator'
 * '<S2>'   : 'TuNT54_day2_homework/Time_Calculator'
 */
#endif                                 /* RTW_HEADER_TuNT54_day2_homework_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
