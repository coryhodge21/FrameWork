/**********************************
* \file : SRWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRWTIMER_h_
#define _SRWTIMER_h_

#include "SRWTIMER_enums.h" 

typedef void(Set_fpt)(SRWTIMER_e);
typedef void(Clear_fpt)(SRWTIMER_e);
typedef int32_t(Set_fpt)(SRWTIMER_e);
typedef void(Write_fpt)(SRWTIMER_e, int32_t);

struct SRWTIMER_obj;

typedef struct SRWTIMER_obj SRWTIMER_t;

SRWTIMER_t CreateRegister_SRWTIMER(void);


#endif // _SRWTIMER_h_

