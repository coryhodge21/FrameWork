/**********************************
* \file : IMC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _IMC_h_
#define _IMC_h_

#include "IMC_enums.h" 

typedef void(Set_fpt)(IMC_e);
typedef void(Clear_fpt)(IMC_e);
typedef int32_t(Set_fpt)(IMC_e);
typedef void(Write_fpt)(IMC_e, int32_t);

struct IMC_obj;

typedef struct IMC_obj IMC_t;

IMC_t CreateRegister_IMC(void);


#endif // _IMC_h_

