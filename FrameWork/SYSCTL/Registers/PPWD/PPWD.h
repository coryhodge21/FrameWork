/**********************************
* \file : PPWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPWD_h_
#define _PPWD_h_

#include "PPWD_enums.h" 

typedef void(Set_fpt)(PPWD_e);
typedef void(Clear_fpt)(PPWD_e);
typedef int32_t(Set_fpt)(PPWD_e);
typedef void(Write_fpt)(PPWD_e, int32_t);

struct PPWD_obj;

typedef struct PPWD_obj PPWD_t;

PPWD_t CreateRegister_PPWD(void);


#endif // _PPWD_h_

