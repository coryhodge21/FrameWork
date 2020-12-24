/**********************************
* \file : PPUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPUART_h_
#define _PPUART_h_

#include "PPUART_enums.h" 

typedef void(Set_fpt)(PPUART_e);
typedef void(Clear_fpt)(PPUART_e);
typedef int32_t(Set_fpt)(PPUART_e);
typedef void(Write_fpt)(PPUART_e, int32_t);

struct PPUART_obj;

typedef struct PPUART_obj PPUART_t;

PPUART_t CreateRegister_PPUART(void);


#endif // _PPUART_h_

