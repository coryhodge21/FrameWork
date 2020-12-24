/**********************************
* \file : RCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCPWM_h_
#define _RCGCPWM_h_

#include "RCGCPWM_enums.h" 

typedef void(Set_fpt)(RCGCPWM_e);
typedef void(Clear_fpt)(RCGCPWM_e);
typedef int32_t(Set_fpt)(RCGCPWM_e);
typedef void(Write_fpt)(RCGCPWM_e, int32_t);

struct RCGCPWM_obj;

typedef struct RCGCPWM_obj RCGCPWM_t;

RCGCPWM_t CreateRegister_RCGCPWM(void);


#endif // _RCGCPWM_h_

