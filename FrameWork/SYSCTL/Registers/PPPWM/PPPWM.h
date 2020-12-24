/**********************************
* \file : PPPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPPWM_h_
#define _PPPWM_h_

#include "PPPWM_enums.h" 

typedef void(Set_fpt)(PPPWM_e);
typedef void(Clear_fpt)(PPPWM_e);
typedef int32_t(Set_fpt)(PPPWM_e);
typedef void(Write_fpt)(PPPWM_e, int32_t);

struct PPPWM_obj;

typedef struct PPPWM_obj PPPWM_t;

PPPWM_t CreateRegister_PPPWM(void);


#endif // _PPPWM_h_

