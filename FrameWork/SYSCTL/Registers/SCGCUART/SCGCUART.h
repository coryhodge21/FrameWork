/**********************************
* \file : SCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCUART_h_
#define _SCGCUART_h_

#include "SCGCUART_enums.h" 

typedef void(Set_fpt)(SCGCUART_e);
typedef void(Clear_fpt)(SCGCUART_e);
typedef int32_t(Set_fpt)(SCGCUART_e);
typedef void(Write_fpt)(SCGCUART_e, int32_t);

struct SCGCUART_obj;

typedef struct SCGCUART_obj SCGCUART_t;

SCGCUART_t CreateRegister_SCGCUART(void);


#endif // _SCGCUART_h_

