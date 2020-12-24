/**********************************
* \file : SCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCPWM_h_
#define _SCGCPWM_h_

#include "SCGCPWM_enums.h" 

typedef void(Set_fpt)(SCGCPWM_e);
typedef void(Clear_fpt)(SCGCPWM_e);
typedef int32_t(Set_fpt)(SCGCPWM_e);
typedef void(Write_fpt)(SCGCPWM_e, int32_t);

struct SCGCPWM_obj;

typedef struct SCGCPWM_obj SCGCPWM_t;

SCGCPWM_t CreateRegister_SCGCPWM(void);


#endif // _SCGCPWM_h_

