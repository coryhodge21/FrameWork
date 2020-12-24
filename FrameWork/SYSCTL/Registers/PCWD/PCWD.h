/**********************************
* \file : PCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCWD_h_
#define _PCWD_h_

#include "PCWD_enums.h" 

typedef void(Set_fpt)(PCWD_e);
typedef void(Clear_fpt)(PCWD_e);
typedef int32_t(Set_fpt)(PCWD_e);
typedef void(Write_fpt)(PCWD_e, int32_t);

struct PCWD_obj;

typedef struct PCWD_obj PCWD_t;

PCWD_t CreateRegister_PCWD(void);


#endif // _PCWD_h_

