#ifndef __c1_Led_Blink_h__
#define __c1_Led_Blink_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc1_Led_BlinkInstanceStruct
#define typedef_SFc1_Led_BlinkInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  uint8_T c1_tp_OFF;
  uint8_T c1_tp_ON;
  boolean_T c1_isStable;
  uint8_T c1_is_active_c1_Led_Blink;
  uint8_T c1_is_c1_Led_Blink;
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
} SFc1_Led_BlinkInstanceStruct;

#endif                                 /*typedef_SFc1_Led_BlinkInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Led_Blink_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_Led_Blink_get_check_sum(mxArray *plhs[]);
extern void c1_Led_Blink_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
