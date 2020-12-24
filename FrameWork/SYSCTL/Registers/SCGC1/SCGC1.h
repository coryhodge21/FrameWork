/**********************************
* \file : SCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC1_h_
#define _SCGC1_h_

#include "SCGC1_enums.h" 

typedef void(Set_fpt)(SCGC1_e);
typedef void(Clear_fpt)(SCGC1_e);
typedef int32_t(Set_fpt)(SCGC1_e);
typedef void(Write_fpt)(SCGC1_e, int32_t);

struct SCGC1_obj;

typedef struct SCGC1_obj SCGC1_t;

SCGC1_t CreateRegister_SCGC1(void);


#endif // _SCGC1_h_

