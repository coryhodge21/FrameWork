/**********************************
* \file : DCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC1_h_
#define _DCGC1_h_

#include "DCGC1_enums.h" 

typedef void(Set_fpt)(DCGC1_e);
typedef void(Clear_fpt)(DCGC1_e);
typedef int32_t(Set_fpt)(DCGC1_e);
typedef void(Write_fpt)(DCGC1_e, int32_t);

struct DCGC1_obj;

typedef struct DCGC1_obj DCGC1_t;

DCGC1_t CreateRegister_DCGC1(void);


#endif // _DCGC1_h_

