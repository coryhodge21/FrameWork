/**********************************
* \file : RCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCADC_h_
#define _RCGCADC_h_

#include "RCGCADC_enums.h" 

typedef void(Set_fpt)(RCGCADC_e);
typedef void(Clear_fpt)(RCGCADC_e);
typedef int32_t(Set_fpt)(RCGCADC_e);
typedef void(Write_fpt)(RCGCADC_e, int32_t);

struct RCGCADC_obj;

typedef struct RCGCADC_obj RCGCADC_t;

RCGCADC_t CreateRegister_RCGCADC(void);


#endif // _RCGCADC_h_

