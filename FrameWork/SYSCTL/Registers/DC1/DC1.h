/**********************************
* \file : DC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC1_h_
#define _DC1_h_

#include "DC1_enums.h" 

typedef void(Set_fpt)(DC1_e);
typedef void(Clear_fpt)(DC1_e);
typedef int32_t(Set_fpt)(DC1_e);
typedef void(Write_fpt)(DC1_e, int32_t);

struct DC1_obj;

typedef struct DC1_obj DC1_t;

DC1_t CreateRegister_DC1(void);


#endif // _DC1_h_

