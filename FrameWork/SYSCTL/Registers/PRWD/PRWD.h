/**********************************
* \file : PRWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRWD_h_
#define _PRWD_h_

#include "PRWD_enums.h" 

typedef void(Set_fpt)(PRWD_e);
typedef void(Clear_fpt)(PRWD_e);
typedef int32_t(Set_fpt)(PRWD_e);
typedef void(Write_fpt)(PRWD_e, int32_t);

struct PRWD_obj;

typedef struct PRWD_obj PRWD_t;

PRWD_t CreateRegister_PRWD(void);


#endif // _PRWD_h_

