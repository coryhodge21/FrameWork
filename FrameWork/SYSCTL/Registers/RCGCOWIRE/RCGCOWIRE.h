/**********************************
* \file : RCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCOWIRE_h_
#define _RCGCOWIRE_h_

#include "RCGCOWIRE_enums.h" 

typedef void(Set_fpt)(RCGCOWIRE_e);
typedef void(Clear_fpt)(RCGCOWIRE_e);
typedef int32_t(Set_fpt)(RCGCOWIRE_e);
typedef void(Write_fpt)(RCGCOWIRE_e, int32_t);

struct RCGCOWIRE_obj;

typedef struct RCGCOWIRE_obj RCGCOWIRE_t;

RCGCOWIRE_t CreateRegister_RCGCOWIRE(void);


#endif // _RCGCOWIRE_h_

