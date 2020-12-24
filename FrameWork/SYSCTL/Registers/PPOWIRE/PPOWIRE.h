/**********************************
* \file : PPOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPOWIRE_h_
#define _PPOWIRE_h_

#include "PPOWIRE_enums.h" 

typedef void(Set_fpt)(PPOWIRE_e);
typedef void(Clear_fpt)(PPOWIRE_e);
typedef int32_t(Set_fpt)(PPOWIRE_e);
typedef void(Write_fpt)(PPOWIRE_e, int32_t);

struct PPOWIRE_obj;

typedef struct PPOWIRE_obj PPOWIRE_t;

PPOWIRE_t CreateRegister_PPOWIRE(void);


#endif // _PPOWIRE_h_

