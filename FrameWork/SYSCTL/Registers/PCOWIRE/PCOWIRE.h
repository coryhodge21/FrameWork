/**********************************
* \file : PCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCOWIRE_h_
#define _PCOWIRE_h_

#include "PCOWIRE_enums.h" 

typedef void(Set_fpt)(PCOWIRE_e);
typedef void(Clear_fpt)(PCOWIRE_e);
typedef int32_t(Set_fpt)(PCOWIRE_e);
typedef void(Write_fpt)(PCOWIRE_e, int32_t);

struct PCOWIRE_obj;

typedef struct PCOWIRE_obj PCOWIRE_t;

PCOWIRE_t CreateRegister_PCOWIRE(void);


#endif // _PCOWIRE_h_

