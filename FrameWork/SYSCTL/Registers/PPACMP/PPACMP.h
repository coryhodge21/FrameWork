/**********************************
* \file : PPACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPACMP_h_
#define _PPACMP_h_

#include "PPACMP_enums.h" 

typedef void(Set_fpt)(PPACMP_e);
typedef void(Clear_fpt)(PPACMP_e);
typedef int32_t(Set_fpt)(PPACMP_e);
typedef void(Write_fpt)(PPACMP_e, int32_t);

struct PPACMP_obj;

typedef struct PPACMP_obj PPACMP_t;

PPACMP_t CreateRegister_PPACMP(void);


#endif // _PPACMP_h_

