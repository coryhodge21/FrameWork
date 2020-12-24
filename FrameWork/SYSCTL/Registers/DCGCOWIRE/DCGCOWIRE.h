/**********************************
* \file : DCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCOWIRE_h_
#define _DCGCOWIRE_h_

#include "DCGCOWIRE_enums.h" 

typedef void(Set_fpt)(DCGCOWIRE_e);
typedef void(Clear_fpt)(DCGCOWIRE_e);
typedef int32_t(Set_fpt)(DCGCOWIRE_e);
typedef void(Write_fpt)(DCGCOWIRE_e, int32_t);

struct DCGCOWIRE_obj;

typedef struct DCGCOWIRE_obj DCGCOWIRE_t;

DCGCOWIRE_t CreateRegister_DCGCOWIRE(void);


#endif // _DCGCOWIRE_h_

