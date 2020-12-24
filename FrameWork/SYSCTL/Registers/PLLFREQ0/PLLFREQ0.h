/**********************************
* \file : PLLFREQ0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLFREQ0_h_
#define _PLLFREQ0_h_

#include "PLLFREQ0_enums.h" 

typedef void(Set_fpt)(PLLFREQ0_e);
typedef void(Clear_fpt)(PLLFREQ0_e);
typedef int32_t(Set_fpt)(PLLFREQ0_e);
typedef void(Write_fpt)(PLLFREQ0_e, int32_t);

struct PLLFREQ0_obj;

typedef struct PLLFREQ0_obj PLLFREQ0_t;

PLLFREQ0_t CreateRegister_PLLFREQ0(void);


#endif // _PLLFREQ0_h_

