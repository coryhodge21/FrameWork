/**********************************
* \file : SRUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRUSB_h_
#define _SRUSB_h_

#include "SRUSB_enums.h" 

typedef void(Set_fpt)(SRUSB_e);
typedef void(Clear_fpt)(SRUSB_e);
typedef int32_t(Set_fpt)(SRUSB_e);
typedef void(Write_fpt)(SRUSB_e, int32_t);

struct SRUSB_obj;

typedef struct SRUSB_obj SRUSB_t;

SRUSB_t CreateRegister_SRUSB(void);


#endif // _SRUSB_h_

