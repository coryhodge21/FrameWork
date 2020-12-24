/**********************************
* \file : SCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCADC_h_
#define _SCGCADC_h_

#include "SCGCADC_enums.h" 

typedef void(Set_fpt)(SCGCADC_e);
typedef void(Clear_fpt)(SCGCADC_e);
typedef int32_t(Set_fpt)(SCGCADC_e);
typedef void(Write_fpt)(SCGCADC_e, int32_t);

struct SCGCADC_obj;

typedef struct SCGCADC_obj SCGCADC_t;

SCGCADC_t CreateRegister_SCGCADC(void);


#endif // _SCGCADC_h_

