/**********************************
* \file : PPADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPADC_h_
#define _PPADC_h_

#include "PPADC_enums.h" 

typedef void(Set_fpt)(PPADC_e);
typedef void(Clear_fpt)(PPADC_e);
typedef int32_t(Set_fpt)(PPADC_e);
typedef void(Write_fpt)(PPADC_e, int32_t);

struct PPADC_obj;

typedef struct PPADC_obj PPADC_t;

PPADC_t CreateRegister_PPADC(void);


#endif // _PPADC_h_

