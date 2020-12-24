/**********************************
* \file : RCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC2_h_
#define _RCGC2_h_

#include "RCGC2_enums.h" 

typedef void(Set_fpt)(RCGC2_e);
typedef void(Clear_fpt)(RCGC2_e);
typedef int32_t(Set_fpt)(RCGC2_e);
typedef void(Write_fpt)(RCGC2_e, int32_t);

struct RCGC2_obj;

typedef struct RCGC2_obj RCGC2_t;

RCGC2_t CreateRegister_RCGC2(void);


#endif // _RCGC2_h_

