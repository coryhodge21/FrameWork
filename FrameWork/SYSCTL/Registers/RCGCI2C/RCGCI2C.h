/**********************************
* \file : RCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCI2C_h_
#define _RCGCI2C_h_

#include "RCGCI2C_enums.h" 

typedef void(Set_fpt)(RCGCI2C_e);
typedef void(Clear_fpt)(RCGCI2C_e);
typedef int32_t(Set_fpt)(RCGCI2C_e);
typedef void(Write_fpt)(RCGCI2C_e, int32_t);

struct RCGCI2C_obj;

typedef struct RCGCI2C_obj RCGCI2C_t;

RCGCI2C_t CreateRegister_RCGCI2C(void);


#endif // _RCGCI2C_h_

