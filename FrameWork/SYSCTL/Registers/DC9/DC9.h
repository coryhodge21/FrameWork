/**********************************
* \file : DC9.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC9_h_
#define _DC9_h_

#include "DC9_enums.h" 

typedef void(Set_fpt)(DC9_e);
typedef void(Clear_fpt)(DC9_e);
typedef int32_t(Set_fpt)(DC9_e);
typedef void(Write_fpt)(DC9_e, int32_t);

struct DC9_obj;

typedef struct DC9_obj DC9_t;

DC9_t CreateRegister_DC9(void);


#endif // _DC9_h_

