/**********************************
* \file : PPDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPDMA_h_
#define _PPDMA_h_

#include "PPDMA_enums.h" 

typedef void(Set_fpt)(PPDMA_e);
typedef void(Clear_fpt)(PPDMA_e);
typedef int32_t(Set_fpt)(PPDMA_e);
typedef void(Write_fpt)(PPDMA_e, int32_t);

struct PPDMA_obj;

typedef struct PPDMA_obj PPDMA_t;

PPDMA_t CreateRegister_PPDMA(void);


#endif // _PPDMA_h_

