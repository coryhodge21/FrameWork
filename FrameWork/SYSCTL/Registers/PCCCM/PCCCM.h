/**********************************
* \file : PCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCCCM_h_
#define _PCCCM_h_

#include "PCCCM_enums.h" 

typedef void(Set_fpt)(PCCCM_e);
typedef void(Clear_fpt)(PCCCM_e);
typedef int32_t(Set_fpt)(PCCCM_e);
typedef void(Write_fpt)(PCCCM_e, int32_t);

struct PCCCM_obj;

typedef struct PCCCM_obj PCCCM_t;

PCCCM_t CreateRegister_PCCCM(void);


#endif // _PCCCM_h_

