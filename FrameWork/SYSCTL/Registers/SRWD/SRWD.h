/**********************************
* \file : SRWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRWD_h_
#define _SRWD_h_

#include "SRWD_enums.h" 

typedef void(Set_fpt)(SRWD_e);
typedef void(Clear_fpt)(SRWD_e);
typedef int32_t(Set_fpt)(SRWD_e);
typedef void(Write_fpt)(SRWD_e, int32_t);

struct SRWD_obj;

typedef struct SRWD_obj SRWD_t;

SRWD_t CreateRegister_SRWD(void);


#endif // _SRWD_h_

