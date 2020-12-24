/**********************************
* \file : PCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEPI_h_
#define _PCEPI_h_

#include "PCEPI_enums.h" 

typedef void(Set_fpt)(PCEPI_e);
typedef void(Clear_fpt)(PCEPI_e);
typedef int32_t(Set_fpt)(PCEPI_e);
typedef void(Write_fpt)(PCEPI_e, int32_t);

struct PCEPI_obj;

typedef struct PCEPI_obj PCEPI_t;

PCEPI_t CreateRegister_PCEPI(void);


#endif // _PCEPI_h_

