/*
 * Led_Blink.c
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
#include "Led_Blink.h"
#include "Led_Blink_private.h"

/* Named constants for Chart: '<S1>/Chart' */
#define Led_Blink_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define Led_Blink_IN_OFF               ((uint8_T)1U)
#define Led_Blink_IN_ON                ((uint8_T)2U)

/* Block states (auto storage) */
DW_Led_Blink_T Led_Blink_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Led_Blink_T Led_Blink_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Led_Blink_T Led_Blink_Y;

/* Real-time model */
RT_MODEL_Led_Blink_T Led_Blink_M_;
RT_MODEL_Led_Blink_T *const Led_Blink_M = &Led_Blink_M_;

/* Model step function */
void Led_Blink_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* Chart: '<S1>/Chart' incorporates:
   *  Inport: '<Root>/butPin'
   */
  /* Gateway: Subsystem/Chart */
  /* During: Subsystem/Chart */
  if (Led_Blink_DW.is_active_c1_Led_Blink == 0U) {
    /* Entry: Subsystem/Chart */
    Led_Blink_DW.is_active_c1_Led_Blink = 1U;

    /* Entry Internal: Subsystem/Chart */
    /* Transition: '<S2>:3' */
    Led_Blink_DW.is_c1_Led_Blink = Led_Blink_IN_ON;

    /* Outport: '<Root>/out' */
    /* Entry 'ON': '<S2>:1' */
    Led_Blink_Y.out = 1.0;
    printf("LED_ON\\r\\n");
  } else if (Led_Blink_DW.is_c1_Led_Blink == Led_Blink_IN_OFF) {
    /* During 'OFF': '<S2>:2' */
    //if (Led_Blink_U.butPin == 1.0)
      if(Led_Blink_U.butPin)
    {
      /* Transition: '<S2>:4' */
      /* LED_on */
      Led_Blink_DW.is_c1_Led_Blink = Led_Blink_IN_ON;

      /* Outport: '<Root>/out' */
      /* Entry 'ON': '<S2>:1' */
      digitalWrite(Led_Blink_Y.out,1);
     // Led_Blink_Y.out = 1.0;
      printf("LED_ON\\r\\n");
    }
  } else {
    /* During 'ON': '<S2>:1' */
    //if (Led_Blink_U.butPin == 0.0) 
      if(!(Led_Blink_U.butPin))
      {
      /* Transition: '<S2>:5' */
      /* LED_off */
      Led_Blink_DW.is_c1_Led_Blink = Led_Blink_IN_OFF;

      /* Outport: '<Root>/out' */
      /* Entry 'OFF': '<S2>:2' */
      digitalWrite(Led_Blink_Y.out,0);
      //Led_Blink_Y.out = 0.0;
      printf("LED_OFF\\r\\n");
    }
  }

  /* End of Chart: '<S1>/Chart' */
  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(Led_Blink_M->rtwLogInfo, (&Led_Blink_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(Led_Blink_M)!=-1) &&
        !((rtmGetTFinal(Led_Blink_M)-Led_Blink_M->Timing.taskTime0) >
          Led_Blink_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Led_Blink_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Led_Blink_M->Timing.clockTick0)) {
    ++Led_Blink_M->Timing.clockTickH0;
  }

  Led_Blink_M->Timing.taskTime0 = Led_Blink_M->Timing.clockTick0 *
    Led_Blink_M->Timing.stepSize0 + Led_Blink_M->Timing.clockTickH0 *
    Led_Blink_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Led_Blink_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Led_Blink_M, 0,
                sizeof(RT_MODEL_Led_Blink_T));
  rtmSetTFinal(Led_Blink_M, -1);
  Led_Blink_M->Timing.stepSize0 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    Led_Blink_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Led_Blink_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Led_Blink_M->rtwLogInfo, (NULL));
    rtliSetLogT(Led_Blink_M->rtwLogInfo, "tout");
    rtliSetLogX(Led_Blink_M->rtwLogInfo, "");
    rtliSetLogXFinal(Led_Blink_M->rtwLogInfo, "");
    rtliSetSigLog(Led_Blink_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Led_Blink_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Led_Blink_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(Led_Blink_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(Led_Blink_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &Led_Blink_Y.out
      };

      rtliSetLogYSignalPtrs(Led_Blink_M->rtwLogInfo, ((LogSignalPtrsType)
        rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_DOUBLE
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "Led_Blink/out" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          1,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(Led_Blink_M->rtwLogInfo, rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
    }

    rtliSetLogY(Led_Blink_M->rtwLogInfo, "yout");
  }

  /* states (dwork) */
  (void) memset((void *)&Led_Blink_DW, 0,
                sizeof(DW_Led_Blink_T));

  /* external inputs */
  Led_Blink_U.butPin = 0.0;

  /* external outputs */
  Led_Blink_Y.out = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Led_Blink_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Led_Blink_M), Led_Blink_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Led_Blink_M)));

  /* user code (Initialize function Body) */
  pinMode (0, OUTPUT) ;
  pinMode (1, INPUT) ;
  pullUpDnControl(1, PUD_UP);

  /* InitializeConditions for Atomic SubSystem: '<Root>/Subsystem' */
  /* InitializeConditions for Chart: '<S1>/Chart' */
  Led_Blink_DW.is_active_c1_Led_Blink = 0U;
  Led_Blink_DW.is_c1_Led_Blink = Led_Blink_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for Outport: '<Root>/out' incorporates:
   *  InitializeConditions for Chart: '<S1>/Chart'
   */
  Led_Blink_Y.out = 0.0;

  /* End of InitializeConditions for SubSystem: '<Root>/Subsystem' */
}

/* Model terminate function */
void Led_Blink_terminate(void)
{
  /* (no terminate code required) */
}
