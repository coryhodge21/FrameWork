/**********************************
* \file : LDODPCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LDODPCTL_h_
#define _LDODPCTL_h_

#include "LDODPCTL_enums.h" 

typedef void(Set_fpt)(LDODPCTL_e);
typedef void(Clear_fpt)(LDODPCTL_e);
typedef int32_t(Set_fpt)(LDODPCTL_e);
typedef void(Write_fpt)(LDODPCTL_e, int32_t);

struct LDODPCTL_obj;

typedef struct LDODPCTL_obj LDODPCTL_t;

LDODPCTL_t CreateRegister_LDODPCTL(void);


#endif // _LDODPCTL_h_

