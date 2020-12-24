/**********************************
* \file : NVMSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _NVMSTAT_h_
#define _NVMSTAT_h_

#include "NVMSTAT_enums.h" 

typedef void(Set_fpt)(NVMSTAT_e);
typedef void(Clear_fpt)(NVMSTAT_e);
typedef int32_t(Set_fpt)(NVMSTAT_e);
typedef void(Write_fpt)(NVMSTAT_e, int32_t);

struct NVMSTAT_obj;

typedef struct NVMSTAT_obj NVMSTAT_t;

NVMSTAT_t CreateRegister_NVMSTAT(void);


#endif // _NVMSTAT_h_

