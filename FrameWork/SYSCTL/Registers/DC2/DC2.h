/**********************************
* \file : DC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC2_h_
#define _DC2_h_

#include "DC2_enums.h" 

typedef void(Set_fpt)(DC2_e);
typedef void(Clear_fpt)(DC2_e);
typedef int32_t(Set_fpt)(DC2_e);
typedef void(Write_fpt)(DC2_e, int32_t);

struct DC2_obj;

typedef struct DC2_obj DC2_t;

DC2_t CreateRegister_DC2(void);


#endif // _DC2_h_

