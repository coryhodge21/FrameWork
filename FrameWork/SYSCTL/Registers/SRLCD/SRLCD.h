/**********************************
* \file : SRLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRLCD_h_
#define _SRLCD_h_

#include "SRLCD_enums.h" 

typedef void(Set_fpt)(SRLCD_e);
typedef void(Clear_fpt)(SRLCD_e);
typedef int32_t(Set_fpt)(SRLCD_e);
typedef void(Write_fpt)(SRLCD_e, int32_t);

struct SRLCD_obj;

typedef struct SRLCD_obj SRLCD_t;

SRLCD_t CreateRegister_SRLCD(void);


#endif // _SRLCD_h_

