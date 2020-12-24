/**********************************
* \file : RCC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCC_h_
#define _RCC_h_

#include "RCC_enums.h" 

typedef void(Set_fpt)(RCC_e);
typedef void(Clear_fpt)(RCC_e);
typedef int32_t(Set_fpt)(RCC_e);
typedef void(Write_fpt)(RCC_e, int32_t);

struct RCC_obj;

typedef struct RCC_obj RCC_t;

RCC_t CreateRegister_RCC(void);


#endif // _RCC_h_

