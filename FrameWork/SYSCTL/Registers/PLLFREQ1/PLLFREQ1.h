/**********************************
* \file : PLLFREQ1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLFREQ1_h_
#define _PLLFREQ1_h_

#include "PLLFREQ1_enums.h" 

typedef void(Set_fpt)(PLLFREQ1_e);
typedef void(Clear_fpt)(PLLFREQ1_e);
typedef int32_t(Set_fpt)(PLLFREQ1_e);
typedef void(Write_fpt)(PLLFREQ1_e, int32_t);

struct PLLFREQ1_obj;

typedef struct PLLFREQ1_obj PLLFREQ1_t;

PLLFREQ1_t CreateRegister_PLLFREQ1(void);


#endif // _PLLFREQ1_h_

