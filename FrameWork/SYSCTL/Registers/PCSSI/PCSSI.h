/**********************************
* \file : PCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCSSI_h_
#define _PCSSI_h_

#include "PCSSI_enums.h" 

typedef void(Set_fpt)(PCSSI_e);
typedef void(Clear_fpt)(PCSSI_e);
typedef int32_t(Set_fpt)(PCSSI_e);
typedef void(Write_fpt)(PCSSI_e, int32_t);

struct PCSSI_obj;

typedef struct PCSSI_obj PCSSI_t;

PCSSI_t CreateRegister_PCSSI(void);


#endif // _PCSSI_h_

