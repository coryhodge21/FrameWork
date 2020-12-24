/**********************************
* \file : RCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC1_h_
#define _RCGC1_h_

#include "RCGC1_enums.h" 

typedef void(Set_fpt)(RCGC1_e);
typedef void(Clear_fpt)(RCGC1_e);
typedef int32_t(Set_fpt)(RCGC1_e);
typedef void(Write_fpt)(RCGC1_e, int32_t);

struct RCGC1_obj;

typedef struct RCGC1_obj RCGC1_t;

RCGC1_t CreateRegister_RCGC1(void);


#endif // _RCGC1_h_

