/**********************************
* \file : RCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCTIMER_h_
#define _RCGCTIMER_h_

#include "RCGCTIMER_enums.h" 

typedef void(Set_fpt)(RCGCTIMER_e);
typedef void(Clear_fpt)(RCGCTIMER_e);
typedef int32_t(Set_fpt)(RCGCTIMER_e);
typedef void(Write_fpt)(RCGCTIMER_e, int32_t);

struct RCGCTIMER_obj;

typedef struct RCGCTIMER_obj RCGCTIMER_t;

RCGCTIMER_t CreateRegister_RCGCTIMER(void);


#endif // _RCGCTIMER_h_

