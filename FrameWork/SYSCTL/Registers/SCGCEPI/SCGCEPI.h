/**********************************
* \file : SCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEPI_h_
#define _SCGCEPI_h_

#include "SCGCEPI_enums.h" 

typedef void(Set_fpt)(SCGCEPI_e);
typedef void(Clear_fpt)(SCGCEPI_e);
typedef int32_t(Set_fpt)(SCGCEPI_e);
typedef void(Write_fpt)(SCGCEPI_e, int32_t);

struct SCGCEPI_obj;

typedef struct SCGCEPI_obj SCGCEPI_t;

SCGCEPI_t CreateRegister_SCGCEPI(void);


#endif // _SCGCEPI_h_

