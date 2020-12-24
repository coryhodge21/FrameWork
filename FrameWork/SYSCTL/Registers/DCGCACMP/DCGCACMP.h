/**********************************
* \file : DCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCACMP_h_
#define _DCGCACMP_h_

#include "DCGCACMP_enums.h" 

typedef void(Set_fpt)(DCGCACMP_e);
typedef void(Clear_fpt)(DCGCACMP_e);
typedef int32_t(Set_fpt)(DCGCACMP_e);
typedef void(Write_fpt)(DCGCACMP_e, int32_t);

struct DCGCACMP_obj;

typedef struct DCGCACMP_obj DCGCACMP_t;

DCGCACMP_t CreateRegister_DCGCACMP(void);


#endif // _DCGCACMP_h_

