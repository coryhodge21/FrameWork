/**********************************
* \file : MISC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MISC_h_
#define _MISC_h_

#include "MISC_enums.h" 

typedef void(Set_fpt)(MISC_e);
typedef void(Clear_fpt)(MISC_e);
typedef int32_t(Set_fpt)(MISC_e);
typedef void(Write_fpt)(MISC_e, int32_t);

struct MISC_obj;

typedef struct MISC_obj MISC_t;

MISC_t CreateRegister_MISC(void);


#endif // _MISC_h_

