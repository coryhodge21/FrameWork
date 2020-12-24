/**********************************
* \file : PIOSCSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PIOSCSTAT_h_
#define _PIOSCSTAT_h_

#include "PIOSCSTAT_enums.h" 

typedef void(Set_fpt)(PIOSCSTAT_e);
typedef void(Clear_fpt)(PIOSCSTAT_e);
typedef int32_t(Set_fpt)(PIOSCSTAT_e);
typedef void(Write_fpt)(PIOSCSTAT_e, int32_t);

struct PIOSCSTAT_obj;

typedef struct PIOSCSTAT_obj PIOSCSTAT_t;

PIOSCSTAT_t CreateRegister_PIOSCSTAT(void);


#endif // _PIOSCSTAT_h_

