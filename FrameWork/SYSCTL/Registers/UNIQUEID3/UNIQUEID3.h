/**********************************
* \file : UNIQUEID3.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID3_h_
#define _UNIQUEID3_h_

#include "UNIQUEID3_enums.h" 

typedef void(Set_fpt)(UNIQUEID3_e);
typedef void(Clear_fpt)(UNIQUEID3_e);
typedef int32_t(Set_fpt)(UNIQUEID3_e);
typedef void(Write_fpt)(UNIQUEID3_e, int32_t);

struct UNIQUEID3_obj;

typedef struct UNIQUEID3_obj UNIQUEID3_t;

UNIQUEID3_t CreateRegister_UNIQUEID3(void);


#endif // _UNIQUEID3_h_

