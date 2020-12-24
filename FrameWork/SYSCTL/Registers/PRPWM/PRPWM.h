/**********************************
* \file : PRPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRPWM_h_
#define _PRPWM_h_

#include "PRPWM_enums.h" 

typedef void(Set_fpt)(PRPWM_e);
typedef void(Clear_fpt)(PRPWM_e);
typedef int32_t(Set_fpt)(PRPWM_e);
typedef void(Write_fpt)(PRPWM_e, int32_t);

struct PRPWM_obj;

typedef struct PRPWM_obj PRPWM_t;

PRPWM_t CreateRegister_PRPWM(void);


#endif // _PRPWM_h_

