/**********************************
* \file : PPEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEPI_h_
#define _PPEPI_h_

#include "PPEPI_enums.h" 

typedef void(Set_fpt)(PPEPI_e);
typedef void(Clear_fpt)(PPEPI_e);
typedef int32_t(Set_fpt)(PPEPI_e);
typedef void(Write_fpt)(PPEPI_e, int32_t);

struct PPEPI_obj;

typedef struct PPEPI_obj PPEPI_t;

PPEPI_t CreateRegister_PPEPI(void);


#endif // _PPEPI_h_

