/**********************************
* \file : PPWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPWTIMER_h_
#define _PPWTIMER_h_

#include "PPWTIMER_enums.h" 

typedef void(Set_fpt)(PPWTIMER_e);
typedef void(Clear_fpt)(PPWTIMER_e);
typedef int32_t(Set_fpt)(PPWTIMER_e);
typedef void(Write_fpt)(PPWTIMER_e, int32_t);

struct PPWTIMER_obj;

typedef struct PPWTIMER_obj PPWTIMER_t;

PPWTIMER_t CreateRegister_PPWTIMER(void);


#endif // _PPWTIMER_h_

