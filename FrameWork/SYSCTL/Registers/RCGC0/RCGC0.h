/**********************************
* \file : RCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC0_h_
#define _RCGC0_h_

#include "RCGC0_enums.h" 

typedef void(Set_fpt)(RCGC0_e);
typedef void(Clear_fpt)(RCGC0_e);
typedef int32_t(Set_fpt)(RCGC0_e);
typedef void(Write_fpt)(RCGC0_e, int32_t);

struct RCGC0_obj;

typedef struct RCGC0_obj RCGC0_t;

RCGC0_t CreateRegister_RCGC0(void);


#endif // _RCGC0_h_

