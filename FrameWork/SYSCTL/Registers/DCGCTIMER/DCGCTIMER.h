/**********************************
* \file : DCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCTIMER_h_
#define _DCGCTIMER_h_

#include "DCGCTIMER_enums.h" 

typedef void(Set_fpt)(DCGCTIMER_e);
typedef void(Clear_fpt)(DCGCTIMER_e);
typedef int32_t(Set_fpt)(DCGCTIMER_e);
typedef void(Write_fpt)(DCGCTIMER_e, int32_t);

struct DCGCTIMER_obj;

typedef struct DCGCTIMER_obj DCGCTIMER_t;

DCGCTIMER_t CreateRegister_DCGCTIMER(void);


#endif // _DCGCTIMER_h_

