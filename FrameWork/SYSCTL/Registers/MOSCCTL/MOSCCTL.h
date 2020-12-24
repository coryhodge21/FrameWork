/**********************************
* \file : MOSCCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MOSCCTL_h_
#define _MOSCCTL_h_

#include "MOSCCTL_enums.h" 

typedef void(Set_fpt)(MOSCCTL_e);
typedef void(Clear_fpt)(MOSCCTL_e);
typedef int32_t(Set_fpt)(MOSCCTL_e);
typedef void(Write_fpt)(MOSCCTL_e, int32_t);

struct MOSCCTL_obj;

typedef struct MOSCCTL_obj MOSCCTL_t;

MOSCCTL_t CreateRegister_MOSCCTL(void);


#endif // _MOSCCTL_h_

