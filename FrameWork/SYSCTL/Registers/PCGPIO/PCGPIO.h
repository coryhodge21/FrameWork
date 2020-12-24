/**********************************
* \file : PCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCGPIO_h_
#define _PCGPIO_h_

#include "PCGPIO_enums.h" 

typedef void(Set_fpt)(PCGPIO_e);
typedef void(Clear_fpt)(PCGPIO_e);
typedef int32_t(Set_fpt)(PCGPIO_e);
typedef void(Write_fpt)(PCGPIO_e, int32_t);

struct PCGPIO_obj;

typedef struct PCGPIO_obj PCGPIO_t;

PCGPIO_t CreateRegister_PCGPIO(void);


#endif // _PCGPIO_h_

