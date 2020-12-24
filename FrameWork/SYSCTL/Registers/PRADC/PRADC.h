/**********************************
* \file : PRADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRADC_h_
#define _PRADC_h_

#include "PRADC_enums.h" 

typedef void(Set_fpt)(PRADC_e);
typedef void(Clear_fpt)(PRADC_e);
typedef int32_t(Set_fpt)(PRADC_e);
typedef void(Write_fpt)(PRADC_e, int32_t);

struct PRADC_obj;

typedef struct PRADC_obj PRADC_t;

PRADC_t CreateRegister_PRADC(void);


#endif // _PRADC_h_

