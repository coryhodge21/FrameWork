/**********************************
* \file : PRLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRLCD_h_
#define _PRLCD_h_

#include "PRLCD_enums.h" 

typedef void(Set_fpt)(PRLCD_e);
typedef void(Clear_fpt)(PRLCD_e);
typedef int32_t(Set_fpt)(PRLCD_e);
typedef void(Write_fpt)(PRLCD_e, int32_t);

struct PRLCD_obj;

typedef struct PRLCD_obj PRLCD_t;

PRLCD_t CreateRegister_PRLCD(void);


#endif // _PRLCD_h_

