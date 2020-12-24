/**********************************
* \file : SRCR0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR0_h_
#define _SRCR0_h_

#include "SRCR0_enums.h" 

typedef void(Set_fpt)(SRCR0_e);
typedef void(Clear_fpt)(SRCR0_e);
typedef int32_t(Set_fpt)(SRCR0_e);
typedef void(Write_fpt)(SRCR0_e, int32_t);

struct SRCR0_obj;

typedef struct SRCR0_obj SRCR0_t;

SRCR0_t CreateRegister_SRCR0(void);


#endif // _SRCR0_h_

