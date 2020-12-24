/**********************************
* \file : UNIQUEID2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID2_h_
#define _UNIQUEID2_h_

#include "UNIQUEID2_enums.h" 

typedef void(Set_fpt)(UNIQUEID2_e);
typedef void(Clear_fpt)(UNIQUEID2_e);
typedef int32_t(Set_fpt)(UNIQUEID2_e);
typedef void(Write_fpt)(UNIQUEID2_e, int32_t);

struct UNIQUEID2_obj;

typedef struct UNIQUEID2_obj UNIQUEID2_t;

UNIQUEID2_t CreateRegister_UNIQUEID2(void);


#endif // _UNIQUEID2_h_

