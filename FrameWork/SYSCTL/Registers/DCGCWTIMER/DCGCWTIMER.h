/**********************************
* \file : DCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCWTIMER_h_
#define _DCGCWTIMER_h_

#include "DCGCWTIMER_enums.h" 

typedef void(Set_fpt)(DCGCWTIMER_e);
typedef void(Clear_fpt)(DCGCWTIMER_e);
typedef int32_t(Set_fpt)(DCGCWTIMER_e);
typedef void(Write_fpt)(DCGCWTIMER_e, int32_t);

struct DCGCWTIMER_obj;

typedef struct DCGCWTIMER_obj DCGCWTIMER_t;

DCGCWTIMER_t CreateRegister_DCGCWTIMER(void);


#endif // _DCGCWTIMER_h_

