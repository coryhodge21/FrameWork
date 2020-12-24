/**********************************
* \file : DC3.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC3_h_
#define _DC3_h_

#include "DC3_enums.h" 

typedef void(Set_fpt)(DC3_e);
typedef void(Clear_fpt)(DC3_e);
typedef int32_t(Set_fpt)(DC3_e);
typedef void(Write_fpt)(DC3_e, int32_t);

struct DC3_obj;

typedef struct DC3_obj DC3_t;

DC3_t CreateRegister_DC3(void);


#endif // _DC3_h_

