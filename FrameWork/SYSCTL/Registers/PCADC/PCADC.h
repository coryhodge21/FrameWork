/**********************************
* \file : PCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCADC_h_
#define _PCADC_h_

#include "PCADC_enums.h" 

typedef void(Set_fpt)(PCADC_e);
typedef void(Clear_fpt)(PCADC_e);
typedef int32_t(Set_fpt)(PCADC_e);
typedef void(Write_fpt)(PCADC_e, int32_t);

struct PCADC_obj;

typedef struct PCADC_obj PCADC_t;

PCADC_t CreateRegister_PCADC(void);


#endif // _PCADC_h_

