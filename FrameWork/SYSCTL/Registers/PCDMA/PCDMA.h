/**********************************
* \file : PCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCDMA_h_
#define _PCDMA_h_

#include "PCDMA_enums.h" 

typedef void(Set_fpt)(PCDMA_e);
typedef void(Clear_fpt)(PCDMA_e);
typedef int32_t(Set_fpt)(PCDMA_e);
typedef void(Write_fpt)(PCDMA_e, int32_t);

struct PCDMA_obj;

typedef struct PCDMA_obj PCDMA_t;

PCDMA_t CreateRegister_PCDMA(void);


#endif // _PCDMA_h_

