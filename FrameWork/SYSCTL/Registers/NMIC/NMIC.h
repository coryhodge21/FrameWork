/**********************************
* \file : NMIC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _NMIC_h_
#define _NMIC_h_

#include "NMIC_enums.h" 

typedef void(Set_fpt)(NMIC_e);
typedef void(Clear_fpt)(NMIC_e);
typedef int32_t(Set_fpt)(NMIC_e);
typedef void(Write_fpt)(NMIC_e, int32_t);

struct NMIC_obj;

typedef struct NMIC_obj NMIC_t;

NMIC_t CreateRegister_NMIC(void);


#endif // _NMIC_h_

