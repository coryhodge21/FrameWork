/**********************************
* \file : PTBOCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PTBOCTL_h_
#define _PTBOCTL_h_

#include "PTBOCTL_enums.h" 

typedef void(Set_fpt)(PTBOCTL_e);
typedef void(Clear_fpt)(PTBOCTL_e);
typedef int32_t(Set_fpt)(PTBOCTL_e);
typedef void(Write_fpt)(PTBOCTL_e, int32_t);

struct PTBOCTL_obj;

typedef struct PTBOCTL_obj PTBOCTL_t;

PTBOCTL_t CreateRegister_PTBOCTL(void);


#endif // _PTBOCTL_h_

