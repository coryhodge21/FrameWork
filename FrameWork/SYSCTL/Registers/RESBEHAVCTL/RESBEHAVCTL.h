/**********************************
* \file : RESBEHAVCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RESBEHAVCTL_h_
#define _RESBEHAVCTL_h_

#include "RESBEHAVCTL_enums.h" 

typedef void(Set_fpt)(RESBEHAVCTL_e);
typedef void(Clear_fpt)(RESBEHAVCTL_e);
typedef int32_t(Set_fpt)(RESBEHAVCTL_e);
typedef void(Write_fpt)(RESBEHAVCTL_e, int32_t);

struct RESBEHAVCTL_obj;

typedef struct RESBEHAVCTL_obj RESBEHAVCTL_t;

RESBEHAVCTL_t CreateRegister_RESBEHAVCTL(void);


#endif // _RESBEHAVCTL_h_

