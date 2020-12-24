/**********************************
* \file : PRCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRCCM_h_
#define _PRCCM_h_

#include "PRCCM_enums.h" 

typedef void(Set_fpt)(PRCCM_e);
typedef void(Clear_fpt)(PRCCM_e);
typedef int32_t(Set_fpt)(PRCCM_e);
typedef void(Write_fpt)(PRCCM_e, int32_t);

struct PRCCM_obj;

typedef struct PRCCM_obj PRCCM_t;

PRCCM_t CreateRegister_PRCCM(void);


#endif // _PRCCM_h_

