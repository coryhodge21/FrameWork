/**********************************
* \file : SCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCACMP_h_
#define _SCGCACMP_h_

#include "SCGCACMP_enums.h" 

typedef void(Set_fpt)(SCGCACMP_e);
typedef void(Clear_fpt)(SCGCACMP_e);
typedef int32_t(Set_fpt)(SCGCACMP_e);
typedef void(Write_fpt)(SCGCACMP_e, int32_t);

struct SCGCACMP_obj;

typedef struct SCGCACMP_obj SCGCACMP_t;

SCGCACMP_t CreateRegister_SCGCACMP(void);


#endif // _SCGCACMP_h_

