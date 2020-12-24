/**********************************
* \file : DCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCI2C_h_
#define _DCGCI2C_h_

#include "DCGCI2C_enums.h" 

typedef void(Set_fpt)(DCGCI2C_e);
typedef void(Clear_fpt)(DCGCI2C_e);
typedef int32_t(Set_fpt)(DCGCI2C_e);
typedef void(Write_fpt)(DCGCI2C_e, int32_t);

struct DCGCI2C_obj;

typedef struct DCGCI2C_obj DCGCI2C_t;

DCGCI2C_t CreateRegister_DCGCI2C(void);


#endif // _DCGCI2C_h_

