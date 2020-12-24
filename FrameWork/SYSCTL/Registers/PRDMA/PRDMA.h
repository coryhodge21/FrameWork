/**********************************
* \file : PRDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRDMA_h_
#define _PRDMA_h_

#include "PRDMA_enums.h" 

typedef void(Set_fpt)(PRDMA_e);
typedef void(Clear_fpt)(PRDMA_e);
typedef int32_t(Set_fpt)(PRDMA_e);
typedef void(Write_fpt)(PRDMA_e, int32_t);

struct PRDMA_obj;

typedef struct PRDMA_obj PRDMA_t;

PRDMA_t CreateRegister_PRDMA(void);


#endif // _PRDMA_h_

