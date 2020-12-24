/**********************************
* \file : PRWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRWTIMER_h_
#define _PRWTIMER_h_

#include "PRWTIMER_enums.h" 

typedef void(Set_fpt)(PRWTIMER_e);
typedef void(Clear_fpt)(PRWTIMER_e);
typedef int32_t(Set_fpt)(PRWTIMER_e);
typedef void(Write_fpt)(PRWTIMER_e, int32_t);

struct PRWTIMER_obj;

typedef struct PRWTIMER_obj PRWTIMER_t;

PRWTIMER_t CreateRegister_PRWTIMER(void);


#endif // _PRWTIMER_h_

