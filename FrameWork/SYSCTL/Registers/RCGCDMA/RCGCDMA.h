/**********************************
* \file : RCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCDMA_h_
#define _RCGCDMA_h_

#include "RCGCDMA_enums.h" 

typedef void(Set_fpt)(RCGCDMA_e);
typedef void(Clear_fpt)(RCGCDMA_e);
typedef int32_t(Set_fpt)(RCGCDMA_e);
typedef void(Write_fpt)(RCGCDMA_e, int32_t);

struct RCGCDMA_obj;

typedef struct RCGCDMA_obj RCGCDMA_t;

RCGCDMA_t CreateRegister_RCGCDMA(void);


#endif // _RCGCDMA_h_

