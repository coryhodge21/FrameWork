/**********************************
* \file : SCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCCCM_h_
#define _SCGCCCM_h_

#include "SCGCCCM_enums.h" 

typedef void(Set_fpt)(SCGCCCM_e);
typedef void(Clear_fpt)(SCGCCCM_e);
typedef int32_t(Set_fpt)(SCGCCCM_e);
typedef void(Write_fpt)(SCGCCCM_e, int32_t);

struct SCGCCCM_obj;

typedef struct SCGCCCM_obj SCGCCCM_t;

SCGCCCM_t CreateRegister_SCGCCCM(void);


#endif // _SCGCCCM_h_

