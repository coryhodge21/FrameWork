/**********************************
* \file : SRGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRGPIO_h_
#define _SRGPIO_h_

#include "SRGPIO_enums.h" 

typedef void(Set_fpt)(SRGPIO_e);
typedef void(Clear_fpt)(SRGPIO_e);
typedef int32_t(Set_fpt)(SRGPIO_e);
typedef void(Write_fpt)(SRGPIO_e, int32_t);

struct SRGPIO_obj;

typedef struct SRGPIO_obj SRGPIO_t;

SRGPIO_t CreateRegister_SRGPIO(void);


#endif // _SRGPIO_h_

