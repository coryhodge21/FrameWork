/**********************************
* \file : RCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCCCM_h_
#define _RCGCCCM_h_

#include "RCGCCCM_enums.h" 

typedef void(Set_fpt)(RCGCCCM_e);
typedef void(Clear_fpt)(RCGCCCM_e);
typedef int32_t(Set_fpt)(RCGCCCM_e);
typedef void(Write_fpt)(RCGCCCM_e, int32_t);

struct RCGCCCM_obj;

typedef struct RCGCCCM_obj RCGCCCM_t;

RCGCCCM_t CreateRegister_RCGCCCM(void);


#endif // _RCGCCCM_h_

