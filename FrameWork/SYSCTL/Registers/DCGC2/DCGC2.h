/**********************************
* \file : DCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC2_h_
#define _DCGC2_h_

#include "DCGC2_enums.h" 

typedef void(Set_fpt)(DCGC2_e);
typedef void(Clear_fpt)(DCGC2_e);
typedef int32_t(Set_fpt)(DCGC2_e);
typedef void(Write_fpt)(DCGC2_e, int32_t);

struct DCGC2_obj;

typedef struct DCGC2_obj DCGC2_t;

DCGC2_t CreateRegister_DCGC2(void);


#endif // _DCGC2_h_

