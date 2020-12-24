/**********************************
* \file : DC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC0_h_
#define _DC0_h_

#include "DC0_enums.h" 

typedef void(Set_fpt)(DC0_e);
typedef void(Clear_fpt)(DC0_e);
typedef int32_t(Set_fpt)(DC0_e);
typedef void(Write_fpt)(DC0_e, int32_t);

struct DC0_obj;

typedef struct DC0_obj DC0_t;

DC0_t CreateRegister_DC0(void);


#endif // _DC0_h_

