/**********************************
* \file : SCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCGPIO_h_
#define _SCGCGPIO_h_

#include "SCGCGPIO_enums.h" 

typedef void(Set_fpt)(SCGCGPIO_e);
typedef void(Clear_fpt)(SCGCGPIO_e);
typedef int32_t(Set_fpt)(SCGCGPIO_e);
typedef void(Write_fpt)(SCGCGPIO_e, int32_t);

struct SCGCGPIO_obj;

typedef struct SCGCGPIO_obj SCGCGPIO_t;

SCGCGPIO_t CreateRegister_SCGCGPIO(void);


#endif // _SCGCGPIO_h_

