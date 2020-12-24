/**********************************
* \file : DCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCDMA_h_
#define _DCGCDMA_h_

#include "DCGCDMA_enums.h" 

typedef void(Set_fpt)(DCGCDMA_e);
typedef void(Clear_fpt)(DCGCDMA_e);
typedef int32_t(Set_fpt)(DCGCDMA_e);
typedef void(Write_fpt)(DCGCDMA_e, int32_t);

struct DCGCDMA_obj;

typedef struct DCGCDMA_obj DCGCDMA_t;

DCGCDMA_t CreateRegister_DCGCDMA(void);


#endif // _DCGCDMA_h_

