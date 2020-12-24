/**********************************
* \file : SLPPWRCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SLPPWRCFG_h_
#define _SLPPWRCFG_h_

#include "SLPPWRCFG_enums.h" 

typedef void(Set_fpt)(SLPPWRCFG_e);
typedef void(Clear_fpt)(SLPPWRCFG_e);
typedef int32_t(Set_fpt)(SLPPWRCFG_e);
typedef void(Write_fpt)(SLPPWRCFG_e, int32_t);

struct SLPPWRCFG_obj;

typedef struct SLPPWRCFG_obj SLPPWRCFG_t;

SLPPWRCFG_t CreateRegister_SLPPWRCFG(void);


#endif // _SLPPWRCFG_h_

