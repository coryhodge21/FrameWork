/**********************************
* \file : PRACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRACMP_h_
#define _PRACMP_h_

#include "PRACMP_enums.h" 

typedef void(Set_fpt)(PRACMP_e);
typedef void(Clear_fpt)(PRACMP_e);
typedef int32_t(Set_fpt)(PRACMP_e);
typedef void(Write_fpt)(PRACMP_e, int32_t);

struct PRACMP_obj;

typedef struct PRACMP_obj PRACMP_t;

PRACMP_t CreateRegister_PRACMP(void);


#endif // _PRACMP_h_

