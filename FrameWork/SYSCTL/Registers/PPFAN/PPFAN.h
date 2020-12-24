/**********************************
* \file : PPFAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPFAN_h_
#define _PPFAN_h_

#include "PPFAN_enums.h" 

typedef void(Set_fpt)(PPFAN_e);
typedef void(Clear_fpt)(PPFAN_e);
typedef int32_t(Set_fpt)(PPFAN_e);
typedef void(Write_fpt)(PPFAN_e, int32_t);

struct PPFAN_obj;

typedef struct PPFAN_obj PPFAN_t;

PPFAN_t CreateRegister_PPFAN(void);


#endif // _PPFAN_h_

