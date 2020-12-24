/**********************************
* \file : RCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCACMP_h_
#define _RCGCACMP_h_

#include "RCGCACMP_enums.h" 

typedef void(Set_fpt)(RCGCACMP_e);
typedef void(Clear_fpt)(RCGCACMP_e);
typedef int32_t(Set_fpt)(RCGCACMP_e);
typedef void(Write_fpt)(RCGCACMP_e, int32_t);

struct RCGCACMP_obj;

typedef struct RCGCACMP_obj RCGCACMP_t;

RCGCACMP_t CreateRegister_RCGCACMP(void);


#endif // _RCGCACMP_h_

