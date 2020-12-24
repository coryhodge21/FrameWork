/**********************************
* \file : DSLPPWRCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSLPPWRCFG_h_
#define _DSLPPWRCFG_h_

#include "DSLPPWRCFG_enums.h" 

typedef void(Set_fpt)(DSLPPWRCFG_e);
typedef void(Clear_fpt)(DSLPPWRCFG_e);
typedef int32_t(Set_fpt)(DSLPPWRCFG_e);
typedef void(Write_fpt)(DSLPPWRCFG_e, int32_t);

struct DSLPPWRCFG_obj;

typedef struct DSLPPWRCFG_obj DSLPPWRCFG_t;

DSLPPWRCFG_t CreateRegister_DSLPPWRCFG(void);


#endif // _DSLPPWRCFG_h_

