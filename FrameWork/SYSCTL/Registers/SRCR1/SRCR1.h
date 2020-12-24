/**********************************
* \file : SRCR1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR1_h_
#define _SRCR1_h_

#include "SRCR1_enums.h" 

typedef void(Set_fpt)(SRCR1_e);
typedef void(Clear_fpt)(SRCR1_e);
typedef int32_t(Set_fpt)(SRCR1_e);
typedef void(Write_fpt)(SRCR1_e, int32_t);

struct SRCR1_obj;

typedef struct SRCR1_obj SRCR1_t;

SRCR1_t CreateRegister_SRCR1(void);


#endif // _SRCR1_h_

