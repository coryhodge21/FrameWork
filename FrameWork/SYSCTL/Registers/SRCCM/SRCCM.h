/**********************************
* \file : SRCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCCM_h_
#define _SRCCM_h_

#include "SRCCM_enums.h" 

typedef void(Set_fpt)(SRCCM_e);
typedef void(Clear_fpt)(SRCCM_e);
typedef int32_t(Set_fpt)(SRCCM_e);
typedef void(Write_fpt)(SRCCM_e, int32_t);

struct SRCCM_obj;

typedef struct SRCCM_obj SRCCM_t;

SRCCM_t CreateRegister_SRCCM(void);


#endif // _SRCCM_h_

