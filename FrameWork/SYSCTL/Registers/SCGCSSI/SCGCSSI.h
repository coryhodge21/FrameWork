/**********************************
* \file : SCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCSSI_h_
#define _SCGCSSI_h_

#include "SCGCSSI_enums.h" 

typedef void(Set_fpt)(SCGCSSI_e);
typedef void(Clear_fpt)(SCGCSSI_e);
typedef int32_t(Set_fpt)(SCGCSSI_e);
typedef void(Write_fpt)(SCGCSSI_e, int32_t);

struct SCGCSSI_obj;

typedef struct SCGCSSI_obj SCGCSSI_t;

SCGCSSI_t CreateRegister_SCGCSSI(void);


#endif // _SCGCSSI_h_

