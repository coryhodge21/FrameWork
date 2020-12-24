/**********************************
* \file : DCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCCCM_h_
#define _DCGCCCM_h_

#include "DCGCCCM_enums.h" 

typedef void(Set_fpt)(DCGCCCM_e);
typedef void(Clear_fpt)(DCGCCCM_e);
typedef int32_t(Set_fpt)(DCGCCCM_e);
typedef void(Write_fpt)(DCGCCCM_e, int32_t);

struct DCGCCCM_obj;

typedef struct DCGCCCM_obj DCGCCCM_t;

DCGCCCM_t CreateRegister_DCGCCCM(void);


#endif // _DCGCCCM_h_

