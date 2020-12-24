/**********************************
* \file : RCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCQEI_h_
#define _RCGCQEI_h_

#include "RCGCQEI_enums.h" 

typedef void(Set_fpt)(RCGCQEI_e);
typedef void(Clear_fpt)(RCGCQEI_e);
typedef int32_t(Set_fpt)(RCGCQEI_e);
typedef void(Write_fpt)(RCGCQEI_e, int32_t);

struct RCGCQEI_obj;

typedef struct RCGCQEI_obj RCGCQEI_t;

RCGCQEI_t CreateRegister_RCGCQEI(void);


#endif // _RCGCQEI_h_

