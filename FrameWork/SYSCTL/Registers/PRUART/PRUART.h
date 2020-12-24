/**********************************
* \file : PRUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRUART_h_
#define _PRUART_h_

#include "PRUART_enums.h" 

typedef void(Set_fpt)(PRUART_e);
typedef void(Clear_fpt)(PRUART_e);
typedef int32_t(Set_fpt)(PRUART_e);
typedef void(Write_fpt)(PRUART_e, int32_t);

struct PRUART_obj;

typedef struct PRUART_obj PRUART_t;

PRUART_t CreateRegister_PRUART(void);


#endif // _PRUART_h_

