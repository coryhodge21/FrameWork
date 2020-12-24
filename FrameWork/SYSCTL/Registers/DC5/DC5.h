/**********************************
* \file : DC5.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC5_h_
#define _DC5_h_

#include "DC5_enums.h" 

typedef void(Set_fpt)(DC5_e);
typedef void(Clear_fpt)(DC5_e);
typedef int32_t(Set_fpt)(DC5_e);
typedef void(Write_fpt)(DC5_e, int32_t);

struct DC5_obj;

typedef struct DC5_obj DC5_t;

DC5_t CreateRegister_DC5(void);


#endif // _DC5_h_

