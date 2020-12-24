/**********************************
* \file : DC8.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC8_h_
#define _DC8_h_

#include "DC8_enums.h" 

typedef void(Set_fpt)(DC8_e);
typedef void(Clear_fpt)(DC8_e);
typedef int32_t(Set_fpt)(DC8_e);
typedef void(Write_fpt)(DC8_e, int32_t);

struct DC8_obj;

typedef struct DC8_obj DC8_t;

DC8_t CreateRegister_DC8(void);


#endif // _DC8_h_

