/**********************************
* \file : DCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCQEI_h_
#define _DCGCQEI_h_

#include "DCGCQEI_enums.h" 

typedef void(Set_fpt)(DCGCQEI_e);
typedef void(Clear_fpt)(DCGCQEI_e);
typedef int32_t(Set_fpt)(DCGCQEI_e);
typedef void(Write_fpt)(DCGCQEI_e, int32_t);

struct DCGCQEI_obj;

typedef struct DCGCQEI_obj DCGCQEI_t;

DCGCQEI_t CreateRegister_DCGCQEI(void);


#endif // _DCGCQEI_h_

