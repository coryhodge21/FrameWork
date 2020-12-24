/**********************************
* \file : DC4.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC4_h_
#define _DC4_h_

#include "DC4_enums.h" 

typedef void(Set_fpt)(DC4_e);
typedef void(Clear_fpt)(DC4_e);
typedef int32_t(Set_fpt)(DC4_e);
typedef void(Write_fpt)(DC4_e, int32_t);

struct DC4_obj;

typedef struct DC4_obj DC4_t;

DC4_t CreateRegister_DC4(void);


#endif // _DC4_h_

