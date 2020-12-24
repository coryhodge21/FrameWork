/**********************************
* \file : PPCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPCCM_h_
#define _PPCCM_h_

#include "PPCCM_enums.h" 

typedef void(Set_fpt)(PPCCM_e);
typedef void(Clear_fpt)(PPCCM_e);
typedef int32_t(Set_fpt)(PPCCM_e);
typedef void(Write_fpt)(PPCCM_e, int32_t);

struct PPCCM_obj;

typedef struct PPCCM_obj PPCCM_t;

PPCCM_t CreateRegister_PPCCM(void);


#endif // _PPCCM_h_

