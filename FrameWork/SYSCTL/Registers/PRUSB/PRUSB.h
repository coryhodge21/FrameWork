/**********************************
* \file : PRUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRUSB_h_
#define _PRUSB_h_

#include "PRUSB_enums.h" 

typedef void(Set_fpt)(PRUSB_e);
typedef void(Clear_fpt)(PRUSB_e);
typedef int32_t(Set_fpt)(PRUSB_e);
typedef void(Write_fpt)(PRUSB_e, int32_t);

struct PRUSB_obj;

typedef struct PRUSB_obj PRUSB_t;

PRUSB_t CreateRegister_PRUSB(void);


#endif // _PRUSB_h_

