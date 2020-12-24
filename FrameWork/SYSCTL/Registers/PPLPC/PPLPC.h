/**********************************
* \file : PPLPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPLPC_h_
#define _PPLPC_h_

#include "PPLPC_enums.h" 

typedef void(Set_fpt)(PPLPC_e);
typedef void(Clear_fpt)(PPLPC_e);
typedef int32_t(Set_fpt)(PPLPC_e);
typedef void(Write_fpt)(PPLPC_e, int32_t);

struct PPLPC_obj;

typedef struct PPLPC_obj PPLPC_t;

PPLPC_t CreateRegister_PPLPC(void);


#endif // _PPLPC_h_

