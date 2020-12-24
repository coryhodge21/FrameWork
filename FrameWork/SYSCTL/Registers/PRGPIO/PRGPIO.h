/**********************************
* \file : PRGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRGPIO_h_
#define _PRGPIO_h_

#include "PRGPIO_enums.h" 

typedef void(Set_fpt)(PRGPIO_e);
typedef void(Clear_fpt)(PRGPIO_e);
typedef int32_t(Set_fpt)(PRGPIO_e);
typedef void(Write_fpt)(PRGPIO_e, int32_t);

struct PRGPIO_obj;

typedef struct PRGPIO_obj PRGPIO_t;

PRGPIO_t CreateRegister_PRGPIO(void);


#endif // _PRGPIO_h_

