/**********************************
* \file : DCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCPWM_h_
#define _DCGCPWM_h_

#include "DCGCPWM_enums.h" 

typedef void(Set_fpt)(DCGCPWM_e);
typedef void(Clear_fpt)(DCGCPWM_e);
typedef int32_t(Set_fpt)(DCGCPWM_e);
typedef void(Write_fpt)(DCGCPWM_e, int32_t);

struct DCGCPWM_obj;

typedef struct DCGCPWM_obj DCGCPWM_t;

DCGCPWM_t CreateRegister_DCGCPWM(void);


#endif // _DCGCPWM_h_

