/**********************************
* \file : RCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCWD_h_
#define _RCGCWD_h_

#include "RCGCWD_enums.h" 

typedef void(Set_fpt)(RCGCWD_e);
typedef void(Clear_fpt)(RCGCWD_e);
typedef int32_t(Set_fpt)(RCGCWD_e);
typedef void(Write_fpt)(RCGCWD_e, int32_t);

struct RCGCWD_obj;

typedef struct RCGCWD_obj RCGCWD_t;

RCGCWD_t CreateRegister_RCGCWD(void);


#endif // _RCGCWD_h_

