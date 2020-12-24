/**********************************
* \file : SRUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRUART_h_
#define _SRUART_h_

#include "SRUART_enums.h" 

typedef void(Set_fpt)(SRUART_e);
typedef void(Clear_fpt)(SRUART_e);
typedef int32_t(Set_fpt)(SRUART_e);
typedef void(Write_fpt)(SRUART_e, int32_t);

struct SRUART_obj;

typedef struct SRUART_obj SRUART_t;

SRUART_t CreateRegister_SRUART(void);


#endif // _SRUART_h_

