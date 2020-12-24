/**********************************
* \file : EMACMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _EMACMPC_h_
#define _EMACMPC_h_

#include "EMACMPC_enums.h" 

typedef void(Set_fpt)(EMACMPC_e);
typedef void(Clear_fpt)(EMACMPC_e);
typedef int32_t(Set_fpt)(EMACMPC_e);
typedef void(Write_fpt)(EMACMPC_e, int32_t);

struct EMACMPC_obj;

typedef struct EMACMPC_obj EMACMPC_t;

EMACMPC_t CreateRegister_EMACMPC(void);


#endif // _EMACMPC_h_

