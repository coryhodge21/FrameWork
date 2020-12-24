/**********************************
* \file : PCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCACMP_h_
#define _PCACMP_h_

#include "PCACMP_enums.h" 

typedef void(Set_fpt)(PCACMP_e);
typedef void(Clear_fpt)(PCACMP_e);
typedef int32_t(Set_fpt)(PCACMP_e);
typedef void(Write_fpt)(PCACMP_e, int32_t);

struct PCACMP_obj;

typedef struct PCACMP_obj PCACMP_t;

PCACMP_t CreateRegister_PCACMP(void);


#endif // _PCACMP_h_

