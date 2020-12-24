/**********************************
* \file : SCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCWD_h_
#define _SCGCWD_h_

#include "SCGCWD_enums.h" 

typedef void(Set_fpt)(SCGCWD_e);
typedef void(Clear_fpt)(SCGCWD_e);
typedef int32_t(Set_fpt)(SCGCWD_e);
typedef void(Write_fpt)(SCGCWD_e, int32_t);

struct SCGCWD_obj;

typedef struct SCGCWD_obj SCGCWD_t;

SCGCWD_t CreateRegister_SCGCWD(void);


#endif // _SCGCWD_h_

