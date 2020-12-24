/**********************************
* \file : SCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCI2C_h_
#define _SCGCI2C_h_

#include "SCGCI2C_enums.h" 

typedef void(Set_fpt)(SCGCI2C_e);
typedef void(Clear_fpt)(SCGCI2C_e);
typedef int32_t(Set_fpt)(SCGCI2C_e);
typedef void(Write_fpt)(SCGCI2C_e, int32_t);

struct SCGCI2C_obj;

typedef struct SCGCI2C_obj SCGCI2C_t;

SCGCI2C_t CreateRegister_SCGCI2C(void);


#endif // _SCGCI2C_h_

