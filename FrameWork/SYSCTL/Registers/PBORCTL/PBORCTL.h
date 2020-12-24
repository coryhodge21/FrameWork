/**********************************
* \file : PBORCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PBORCTL_h_
#define _PBORCTL_h_

#include "PBORCTL_enums.h" 

typedef void(Set_fpt)(PBORCTL_e);
typedef void(Clear_fpt)(PBORCTL_e);
typedef int32_t(Set_fpt)(PBORCTL_e);
typedef void(Write_fpt)(PBORCTL_e, int32_t);

struct PBORCTL_obj;

typedef struct PBORCTL_obj PBORCTL_t;

PBORCTL_t CreateRegister_PBORCTL(void);


#endif // _PBORCTL_h_

