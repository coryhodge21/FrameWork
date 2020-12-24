/**********************************
* \file : PLLSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLSTAT_h_
#define _PLLSTAT_h_

#include "PLLSTAT_enums.h" 

typedef void(Set_fpt)(PLLSTAT_e);
typedef void(Clear_fpt)(PLLSTAT_e);
typedef int32_t(Set_fpt)(PLLSTAT_e);
typedef void(Write_fpt)(PLLSTAT_e, int32_t);

struct PLLSTAT_obj;

typedef struct PLLSTAT_obj PLLSTAT_t;

PLLSTAT_t CreateRegister_PLLSTAT(void);


#endif // _PLLSTAT_h_

