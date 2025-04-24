/*
 * File: gencode.c
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

#include "gencode.h"
#include "gencode_private.h"

/* External outputs (root outports fed by signals with auto storage) */
ExtY_gencode_T gencode_Y;

/* Real-time model */
RT_MODEL_gencode_T gencode_M_;
RT_MODEL_gencode_T *const gencode_M = &gencode_M_;

/* Model step function */
void gencode_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void gencode_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(gencode_M, (NULL));

  /* external outputs */
  gencode_Y.Out1 = 0.0;

  /* ConstCode for Outport: '<Root>/Out1' */
  gencode_Y.Out1 = gencode_ConstB.Divide;
}

/* Model terminate function */
void gencode_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
