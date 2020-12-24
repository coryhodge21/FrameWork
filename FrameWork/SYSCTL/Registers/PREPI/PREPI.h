/**********************************
* \file : PREPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREPI_h_
#define _PREPI_h_

#include "PREPI_enums.h" 

typedef void(Set_fpt)(PREPI_e);
typedef void(Clear_fpt)(PREPI_e);
typedef int32_t(Set_fpt)(PREPI_e);
typedef void(Write_fpt)(PREPI_e, int32_t);

struct PREPI_obj;

typedef struct PREPI_obj PREPI_t;

PREPI_t CreateRegister_PREPI(void);


#endif // _PREPI_h_

