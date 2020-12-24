/**********************************
* \file : SCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC0_h_
#define _SCGC0_h_

#include "SCGC0_enums.h" 

typedef void(Set_fpt)(SCGC0_e);
typedef void(Clear_fpt)(SCGC0_e);
typedef int32_t(Set_fpt)(SCGC0_e);
typedef void(Write_fpt)(SCGC0_e, int32_t);

struct SCGC0_obj;

typedef struct SCGC0_obj SCGC0_t;

SCGC0_t CreateRegister_SCGC0(void);


#endif // _SCGC0_h_

