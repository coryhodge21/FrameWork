/**********************************
* \file : PCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCTIMER_h_
#define _PCTIMER_h_

#include "PCTIMER_enums.h" 

typedef void(Set_fpt)(PCTIMER_e);
typedef void(Clear_fpt)(PCTIMER_e);
typedef int32_t(Set_fpt)(PCTIMER_e);
typedef void(Write_fpt)(PCTIMER_e, int32_t);

struct PCTIMER_obj;

typedef struct PCTIMER_obj PCTIMER_t;

PCTIMER_t CreateRegister_PCTIMER(void);


#endif // _PCTIMER_h_

