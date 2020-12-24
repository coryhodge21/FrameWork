/**********************************
* \file : SRDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRDMA_h_
#define _SRDMA_h_

#include "SRDMA_enums.h" 

typedef void(Set_fpt)(SRDMA_e);
typedef void(Clear_fpt)(SRDMA_e);
typedef int32_t(Set_fpt)(SRDMA_e);
typedef void(Write_fpt)(SRDMA_e, int32_t);

struct SRDMA_obj;

typedef struct SRDMA_obj SRDMA_t;

SRDMA_t CreateRegister_SRDMA(void);


#endif // _SRDMA_h_

