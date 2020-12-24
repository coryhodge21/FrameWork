/**********************************
* \file : GPIOHBCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _GPIOHBCTL_h_
#define _GPIOHBCTL_h_

#include "GPIOHBCTL_enums.h" 

typedef void(Set_fpt)(GPIOHBCTL_e);
typedef void(Clear_fpt)(GPIOHBCTL_e);
typedef int32_t(Set_fpt)(GPIOHBCTL_e);
typedef void(Write_fpt)(GPIOHBCTL_e, int32_t);

struct GPIOHBCTL_obj;

typedef struct GPIOHBCTL_obj GPIOHBCTL_t;

GPIOHBCTL_t CreateRegister_GPIOHBCTL(void);


#endif // _GPIOHBCTL_h_

