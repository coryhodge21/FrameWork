/**********************************
* \file : RCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCWTIMER_h_
#define _RCGCWTIMER_h_

#include "RCGCWTIMER_enums.h" 

typedef void(Set_fpt)(RCGCWTIMER_e);
typedef void(Clear_fpt)(RCGCWTIMER_e);
typedef int32_t(Set_fpt)(RCGCWTIMER_e);
typedef void(Write_fpt)(RCGCWTIMER_e, int32_t);

struct RCGCWTIMER_obj;

typedef struct RCGCWTIMER_obj RCGCWTIMER_t;

RCGCWTIMER_t CreateRegister_RCGCWTIMER(void);


#endif // _RCGCWTIMER_h_

