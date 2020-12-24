/**********************************
* \file : RCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCGPIO_h_
#define _RCGCGPIO_h_

#include "RCGCGPIO_enums.h" 

typedef void(Set_fpt)(RCGCGPIO_e);
typedef void(Clear_fpt)(RCGCGPIO_e);
typedef int32_t(Set_fpt)(RCGCGPIO_e);
typedef void(Write_fpt)(RCGCGPIO_e, int32_t);

struct RCGCGPIO_obj;

typedef struct RCGCGPIO_obj RCGCGPIO_t;

RCGCGPIO_t CreateRegister_RCGCGPIO(void);


#endif // _RCGCGPIO_h_

