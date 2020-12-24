/**********************************
* \file : PCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCQEI_h_
#define _PCQEI_h_

#include "PCQEI_enums.h" 

typedef void(Set_fpt)(PCQEI_e);
typedef void(Clear_fpt)(PCQEI_e);
typedef int32_t(Set_fpt)(PCQEI_e);
typedef void(Write_fpt)(PCQEI_e, int32_t);

struct PCQEI_obj;

typedef struct PCQEI_obj PCQEI_t;

PCQEI_t CreateRegister_PCQEI(void);


#endif // _PCQEI_h_

