/**********************************
* \file : DCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC0_h_
#define _DCGC0_h_

#include "DCGC0_enums.h" 

typedef void(Set_fpt)(DCGC0_e);
typedef void(Clear_fpt)(DCGC0_e);
typedef int32_t(Set_fpt)(DCGC0_e);
typedef void(Write_fpt)(DCGC0_e, int32_t);

struct DCGC0_obj;

typedef struct DCGC0_obj DCGC0_t;

DCGC0_t CreateRegister_DCGC0(void);


#endif // _DCGC0_h_

