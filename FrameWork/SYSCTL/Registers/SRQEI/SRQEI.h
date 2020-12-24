/**********************************
* \file : SRQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRQEI_h_
#define _SRQEI_h_

#include "SRQEI_enums.h" 

typedef void(Set_fpt)(SRQEI_e);
typedef void(Clear_fpt)(SRQEI_e);
typedef int32_t(Set_fpt)(SRQEI_e);
typedef void(Write_fpt)(SRQEI_e, int32_t);

struct SRQEI_obj;

typedef struct SRQEI_obj SRQEI_t;

SRQEI_t CreateRegister_SRQEI(void);


#endif // _SRQEI_h_

