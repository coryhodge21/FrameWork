/**********************************
* \file : RCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCSSI_h_
#define _RCGCSSI_h_

#include "RCGCSSI_enums.h" 

typedef void(Set_fpt)(RCGCSSI_e);
typedef void(Clear_fpt)(RCGCSSI_e);
typedef int32_t(Set_fpt)(RCGCSSI_e);
typedef void(Write_fpt)(RCGCSSI_e, int32_t);

struct RCGCSSI_obj;

typedef struct RCGCSSI_obj RCGCSSI_t;

RCGCSSI_t CreateRegister_RCGCSSI(void);


#endif // _RCGCSSI_h_

