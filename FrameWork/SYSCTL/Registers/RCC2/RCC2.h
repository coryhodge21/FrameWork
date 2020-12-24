/**********************************
* \file : RCC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCC2_h_
#define _RCC2_h_

#include "RCC2_enums.h" 

typedef void(Set_fpt)(RCC2_e);
typedef void(Clear_fpt)(RCC2_e);
typedef int32_t(Set_fpt)(RCC2_e);
typedef void(Write_fpt)(RCC2_e, int32_t);

struct RCC2_obj;

typedef struct RCC2_obj RCC2_t;

RCC2_t CreateRegister_RCC2(void);


#endif // _RCC2_h_

