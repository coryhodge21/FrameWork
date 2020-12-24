/**********************************
* \file : SYSPROP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SYSPROP_h_
#define _SYSPROP_h_

#include "SYSPROP_enums.h" 

typedef void(Set_fpt)(SYSPROP_e);
typedef void(Clear_fpt)(SYSPROP_e);
typedef int32_t(Set_fpt)(SYSPROP_e);
typedef void(Write_fpt)(SYSPROP_e, int32_t);

struct SYSPROP_obj;

typedef struct SYSPROP_obj SYSPROP_t;

SYSPROP_t CreateRegister_SYSPROP(void);


#endif // _SYSPROP_h_

