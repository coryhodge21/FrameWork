/**********************************
* \file : SREPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREPI_h_
#define _SREPI_h_

#include "SREPI_enums.h" 

typedef void(Set_fpt)(SREPI_e);
typedef void(Clear_fpt)(SREPI_e);
typedef int32_t(Set_fpt)(SREPI_e);
typedef void(Write_fpt)(SREPI_e, int32_t);

struct SREPI_obj;

typedef struct SREPI_obj SREPI_t;

SREPI_t CreateRegister_SREPI(void);


#endif // _SREPI_h_

