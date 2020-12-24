/**********************************
* \file : LDOSPCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LDOSPCTL_h_
#define _LDOSPCTL_h_

#include "LDOSPCTL_enums.h" 

typedef void(Set_fpt)(LDOSPCTL_e);
typedef void(Clear_fpt)(LDOSPCTL_e);
typedef int32_t(Set_fpt)(LDOSPCTL_e);
typedef void(Write_fpt)(LDOSPCTL_e, int32_t);

struct LDOSPCTL_obj;

typedef struct LDOSPCTL_obj LDOSPCTL_t;

LDOSPCTL_t CreateRegister_LDOSPCTL(void);


#endif // _LDOSPCTL_h_

