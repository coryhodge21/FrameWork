/**********************************
* \file : DC6.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC6_h_
#define _DC6_h_

#include "DC6_enums.h" 

typedef void(Set_fpt)(DC6_e);
typedef void(Clear_fpt)(DC6_e);
typedef int32_t(Set_fpt)(DC6_e);
typedef void(Write_fpt)(DC6_e, int32_t);

struct DC6_obj;

typedef struct DC6_obj DC6_t;

DC6_t CreateRegister_DC6(void);


#endif // _DC6_h_

