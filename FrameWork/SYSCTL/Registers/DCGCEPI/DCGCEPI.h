/**********************************
* \file : DCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEPI_h_
#define _DCGCEPI_h_

#include "DCGCEPI_enums.h" 

typedef void(Set_fpt)(DCGCEPI_e);
typedef void(Clear_fpt)(DCGCEPI_e);
typedef int32_t(Set_fpt)(DCGCEPI_e);
typedef void(Write_fpt)(DCGCEPI_e, int32_t);

struct DCGCEPI_obj;

typedef struct DCGCEPI_obj DCGCEPI_t;

DCGCEPI_t CreateRegister_DCGCEPI(void);


#endif // _DCGCEPI_h_

