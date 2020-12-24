/**********************************
* \file : RCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEPI_h_
#define _RCGCEPI_h_

#include "RCGCEPI_enums.h" 

typedef void(Set_fpt)(RCGCEPI_e);
typedef void(Clear_fpt)(RCGCEPI_e);
typedef int32_t(Set_fpt)(RCGCEPI_e);
typedef void(Write_fpt)(RCGCEPI_e, int32_t);

struct RCGCEPI_obj;

typedef struct RCGCEPI_obj RCGCEPI_t;

RCGCEPI_t CreateRegister_RCGCEPI(void);


#endif // _RCGCEPI_h_

