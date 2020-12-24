/**********************************
* \file : DCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCSSI_h_
#define _DCGCSSI_h_

#include "DCGCSSI_enums.h" 

typedef void(Set_fpt)(DCGCSSI_e);
typedef void(Clear_fpt)(DCGCSSI_e);
typedef int32_t(Set_fpt)(DCGCSSI_e);
typedef void(Write_fpt)(DCGCSSI_e, int32_t);

struct DCGCSSI_obj;

typedef struct DCGCSSI_obj DCGCSSI_t;

DCGCSSI_t CreateRegister_DCGCSSI(void);


#endif // _DCGCSSI_h_

