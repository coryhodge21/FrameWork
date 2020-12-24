/**********************************
* \file : SCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC2_h_
#define _SCGC2_h_

#include "SCGC2_enums.h" 

typedef void(Set_fpt)(SCGC2_e);
typedef void(Clear_fpt)(SCGC2_e);
typedef int32_t(Set_fpt)(SCGC2_e);
typedef void(Write_fpt)(SCGC2_e, int32_t);

struct SCGC2_obj;

typedef struct SCGC2_obj SCGC2_t;

SCGC2_t CreateRegister_SCGC2(void);


#endif // _SCGC2_h_

