/**********************************
* \file : SCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCQEI_h_
#define _SCGCQEI_h_

#include "SCGCQEI_enums.h" 

typedef void(Set_fpt)(SCGCQEI_e);
typedef void(Clear_fpt)(SCGCQEI_e);
typedef int32_t(Set_fpt)(SCGCQEI_e);
typedef void(Write_fpt)(SCGCQEI_e, int32_t);

struct SCGCQEI_obj;

typedef struct SCGCQEI_obj SCGCQEI_t;

SCGCQEI_t CreateRegister_SCGCQEI(void);


#endif // _SCGCQEI_h_

