/**********************************
* \file : SRACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRACMP_h_
#define _SRACMP_h_

#include "SRACMP_enums.h" 

typedef void(Set_fpt)(SRACMP_e);
typedef void(Clear_fpt)(SRACMP_e);
typedef int32_t(Set_fpt)(SRACMP_e);
typedef void(Write_fpt)(SRACMP_e, int32_t);

struct SRACMP_obj;

typedef struct SRACMP_obj SRACMP_t;

SRACMP_t CreateRegister_SRACMP(void);


#endif // _SRACMP_h_

