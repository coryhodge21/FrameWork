/**********************************
* \file : DCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCGPIO_h_
#define _DCGCGPIO_h_

#include "DCGCGPIO_enums.h" 

typedef void(Set_fpt)(DCGCGPIO_e);
typedef void(Clear_fpt)(DCGCGPIO_e);
typedef int32_t(Set_fpt)(DCGCGPIO_e);
typedef void(Write_fpt)(DCGCGPIO_e, int32_t);

struct DCGCGPIO_obj;

typedef struct DCGCGPIO_obj DCGCGPIO_t;

DCGCGPIO_t CreateRegister_DCGCGPIO(void);


#endif // _DCGCGPIO_h_

