/**********************************
* \file : PPPECI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPPECI_h_
#define _PPPECI_h_

#include "PPPECI_enums.h" 

typedef void(Set_fpt)(PPPECI_e);
typedef void(Clear_fpt)(PPPECI_e);
typedef int32_t(Set_fpt)(PPPECI_e);
typedef void(Write_fpt)(PPPECI_e, int32_t);

struct PPPECI_obj;

typedef struct PPPECI_obj PPPECI_t;

PPPECI_t CreateRegister_PPPECI(void);


#endif // _PPPECI_h_

