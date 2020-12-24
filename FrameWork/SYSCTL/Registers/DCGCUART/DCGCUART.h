/**********************************
* \file : DCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCUART_h_
#define _DCGCUART_h_

#include "DCGCUART_enums.h" 

typedef void(Set_fpt)(DCGCUART_e);
typedef void(Clear_fpt)(DCGCUART_e);
typedef int32_t(Set_fpt)(DCGCUART_e);
typedef void(Write_fpt)(DCGCUART_e, int32_t);

struct DCGCUART_obj;

typedef struct DCGCUART_obj DCGCUART_t;

DCGCUART_t CreateRegister_DCGCUART(void);


#endif // _DCGCUART_h_

