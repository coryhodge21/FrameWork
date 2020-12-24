/**********************************
* \file : PPLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPLCD_h_
#define _PPLCD_h_

#include "PPLCD_enums.h" 

typedef void(Set_fpt)(PPLCD_e);
typedef void(Clear_fpt)(PPLCD_e);
typedef int32_t(Set_fpt)(PPLCD_e);
typedef void(Write_fpt)(PPLCD_e, int32_t);

struct PPLCD_obj;

typedef struct PPLCD_obj PPLCD_t;

PPLCD_t CreateRegister_PPLCD(void);


#endif // _PPLCD_h_

