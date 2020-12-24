/**********************************
* \file : RCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCUART_h_
#define _RCGCUART_h_

#include "RCGCUART_enums.h" 

typedef void(Set_fpt)(RCGCUART_e);
typedef void(Clear_fpt)(RCGCUART_e);
typedef int32_t(Set_fpt)(RCGCUART_e);
typedef void(Write_fpt)(RCGCUART_e, int32_t);

struct RCGCUART_obj;

typedef struct RCGCUART_obj RCGCUART_t;

RCGCUART_t CreateRegister_RCGCUART(void);


#endif // _RCGCUART_h_

