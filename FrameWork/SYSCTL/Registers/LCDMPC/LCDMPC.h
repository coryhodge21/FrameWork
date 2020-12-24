/**********************************
* \file : LCDMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LCDMPC_h_
#define _LCDMPC_h_

#include "LCDMPC_enums.h" 

typedef void(Set_fpt)(LCDMPC_e);
typedef void(Clear_fpt)(LCDMPC_e);
typedef int32_t(Set_fpt)(LCDMPC_e);
typedef void(Write_fpt)(LCDMPC_e, int32_t);

struct LCDMPC_obj;

typedef struct LCDMPC_obj LCDMPC_t;

LCDMPC_t CreateRegister_LCDMPC(void);


#endif // _LCDMPC_h_

