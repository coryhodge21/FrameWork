/**********************************
* \file : SRCR2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR2_h_
#define _SRCR2_h_

#include "SRCR2_enums.h" 

typedef void(Set_fpt)(SRCR2_e);
typedef void(Clear_fpt)(SRCR2_e);
typedef int32_t(Set_fpt)(SRCR2_e);
typedef void(Write_fpt)(SRCR2_e, int32_t);

struct SRCR2_obj;

typedef struct SRCR2_obj SRCR2_t;

SRCR2_t CreateRegister_SRCR2(void);


#endif // _SRCR2_h_

