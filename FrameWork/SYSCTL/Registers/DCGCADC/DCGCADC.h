/**********************************
* \file : DCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCADC_h_
#define _DCGCADC_h_

#include "DCGCADC_enums.h" 

typedef void(Set_fpt)(DCGCADC_e);
typedef void(Clear_fpt)(DCGCADC_e);
typedef int32_t(Set_fpt)(DCGCADC_e);
typedef void(Write_fpt)(DCGCADC_e, int32_t);

struct DCGCADC_obj;

typedef struct DCGCADC_obj DCGCADC_t;

DCGCADC_t CreateRegister_DCGCADC(void);


#endif // _DCGCADC_h_

