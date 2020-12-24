/**********************************
* \file : SRADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRADC_h_
#define _SRADC_h_

#include "SRADC_enums.h" 

typedef void(Set_fpt)(SRADC_e);
typedef void(Clear_fpt)(SRADC_e);
typedef int32_t(Set_fpt)(SRADC_e);
typedef void(Write_fpt)(SRADC_e, int32_t);

struct SRADC_obj;

typedef struct SRADC_obj SRADC_t;

SRADC_t CreateRegister_SRADC(void);


#endif // _SRADC_h_

