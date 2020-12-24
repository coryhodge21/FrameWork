/**********************************
* \file : DCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCWD_h_
#define _DCGCWD_h_

#include "DCGCWD_enums.h" 

typedef void(Set_fpt)(DCGCWD_e);
typedef void(Clear_fpt)(DCGCWD_e);
typedef int32_t(Set_fpt)(DCGCWD_e);
typedef void(Write_fpt)(DCGCWD_e, int32_t);

struct DCGCWD_obj;

typedef struct DCGCWD_obj DCGCWD_t;

DCGCWD_t CreateRegister_DCGCWD(void);


#endif // _DCGCWD_h_

