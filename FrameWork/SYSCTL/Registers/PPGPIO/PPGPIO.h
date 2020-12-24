/**********************************
* \file : PPGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPGPIO_h_
#define _PPGPIO_h_

#include "PPGPIO_enums.h" 

typedef void(Set_fpt)(PPGPIO_e);
typedef void(Clear_fpt)(PPGPIO_e);
typedef int32_t(Set_fpt)(PPGPIO_e);
typedef void(Write_fpt)(PPGPIO_e, int32_t);

struct PPGPIO_obj;

typedef struct PPGPIO_obj PPGPIO_t;

PPGPIO_t CreateRegister_PPGPIO(void);


#endif // _PPGPIO_h_

