/**********************************
* \file : PCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCPWM_h_
#define _PCPWM_h_

#include "PCPWM_enums.h" 

typedef void(Set_fpt)(PCPWM_e);
typedef void(Clear_fpt)(PCPWM_e);
typedef int32_t(Set_fpt)(PCPWM_e);
typedef void(Write_fpt)(PCPWM_e, int32_t);

struct PCPWM_obj;

typedef struct PCPWM_obj PCPWM_t;

PCPWM_t CreateRegister_PCPWM(void);


#endif // _PCPWM_h_

