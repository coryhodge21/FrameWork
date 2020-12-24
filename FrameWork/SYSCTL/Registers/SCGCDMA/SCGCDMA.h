/**********************************
* \file : SCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCDMA_h_
#define _SCGCDMA_h_

#include "SCGCDMA_enums.h" 

typedef void(Set_fpt)(SCGCDMA_e);
typedef void(Clear_fpt)(SCGCDMA_e);
typedef int32_t(Set_fpt)(SCGCDMA_e);
typedef void(Write_fpt)(SCGCDMA_e, int32_t);

struct SCGCDMA_obj;

typedef struct SCGCDMA_obj SCGCDMA_t;

SCGCDMA_t CreateRegister_SCGCDMA(void);


#endif // _SCGCDMA_h_

