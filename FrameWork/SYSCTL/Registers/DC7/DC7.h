/**********************************
* \file : DC7.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC7_h_
#define _DC7_h_

#include "DC7_enums.h" 

typedef void(Set_fpt)(DC7_e);
typedef void(Clear_fpt)(DC7_e);
typedef int32_t(Set_fpt)(DC7_e);
typedef void(Write_fpt)(DC7_e, int32_t);

struct DC7_obj;

typedef struct DC7_obj DC7_t;

DC7_t CreateRegister_DC7(void);


#endif // _DC7_h_

