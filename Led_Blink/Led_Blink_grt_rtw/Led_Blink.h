/*
 * Led_Blink.h
 *
 * Code generation for model "Led_Blink".
 *
 * Model version              : 1.14
 * Simulink Coder version : 8.4 (R2013a) 13-Feb-2013
 * C source code generated on : Wed Jun 12 12:51:11 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Debugging
 * Validation result: Not run
 */
#ifndef RTW_HEADER_Led_Blink_h_
#define RTW_HEADER_Led_Blink_h_
#ifndef Led_Blink_COMMON_INCLUDES_
# define Led_Blink_COMMON_INCLUDES_
#include <float.h>
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#endif                                 /* Led_Blink_COMMON_INCLUDES_ */

#include "Led_Blink_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* user code (top of header file) */
#include <wiringPi.h>

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c1_Led_Blink;      /* '<S1>/Chart' */
  uint8_T is_c1_Led_Blink;             /* '<S1>/Chart' */
} DW_Led_Blink_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T butPin;                       /* '<Root>/butPin' */
} ExtU_Led_Blink_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T out;                          /* '<Root>/out' */
} ExtY_Led_Blink_T;

/* Real-time Model Data Structure */
struct tag_RTM_Led_Blink_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block states (auto storage) */
extern DW_Led_Blink_T Led_Blink_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Led_Blink_T Led_Blink_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Led_Blink_T Led_Blink_Y;

/* Model entry point functions */
extern void Led_Blink_initialize(void);
extern void Led_Blink_step(void);
extern void Led_Blink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Led_Blink_T *const Led_Blink_M;

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
 * '<Root>' : 'Led_Blink'
 * '<S1>'   : 'Led_Blink/Subsystem'
 * '<S2>'   : 'Led_Blink/Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_Led_Blink_h_ */
