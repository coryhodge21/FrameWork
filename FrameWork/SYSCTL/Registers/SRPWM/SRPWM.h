/**********************************
* \file : SRPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRPWM_h_
#define _SRPWM_h_

#include "SRPWM_enums.h" 

typedef void(Set_fpt)(SRPWM_e);
typedef void(Clear_fpt)(SRPWM_e);
typedef int32_t(Set_fpt)(SRPWM_e);
typedef void(Write_fpt)(SRPWM_e, int32_t);

struct SRPWM_obj;

typedef struct SRPWM_obj SRPWM_t;

SRPWM_t CreateRegister_SRPWM(void);


#endif // _SRPWM_h_

