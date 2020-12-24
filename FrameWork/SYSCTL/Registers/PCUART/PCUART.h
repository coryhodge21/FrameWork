/**********************************
* \file : PCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCUART_h_
#define _PCUART_h_

#include "PCUART_enums.h" 

typedef void(Set_fpt)(PCUART_e);
typedef void(Clear_fpt)(PCUART_e);
typedef int32_t(Set_fpt)(PCUART_e);
typedef void(Write_fpt)(PCUART_e, int32_t);

struct PCUART_obj;

typedef struct PCUART_obj PCUART_t;

PCUART_t CreateRegister_PCUART(void);


#endif // _PCUART_h_

