/**********************************
* \file : PPTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPTIMER_h_
#define _PPTIMER_h_

#include "PPTIMER_enums.h" 

typedef void(Set_fpt)(PPTIMER_e);
typedef void(Clear_fpt)(PPTIMER_e);
typedef int32_t(Set_fpt)(PPTIMER_e);
typedef void(Write_fpt)(PPTIMER_e, int32_t);

struct PPTIMER_obj;

typedef struct PPTIMER_obj PPTIMER_t;

PPTIMER_t CreateRegister_PPTIMER(void);


#endif // _PPTIMER_h_

