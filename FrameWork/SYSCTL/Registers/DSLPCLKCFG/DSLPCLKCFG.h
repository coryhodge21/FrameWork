/**********************************
* \file : DSLPCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSLPCLKCFG_h_
#define _DSLPCLKCFG_h_

#include "DSLPCLKCFG_enums.h" 

typedef void(Set_fpt)(DSLPCLKCFG_e);
typedef void(Clear_fpt)(DSLPCLKCFG_e);
typedef int32_t(Set_fpt)(DSLPCLKCFG_e);
typedef void(Write_fpt)(DSLPCLKCFG_e, int32_t);

struct DSLPCLKCFG_obj;

typedef struct DSLPCLKCFG_obj DSLPCLKCFG_t;

DSLPCLKCFG_t CreateRegister_DSLPCLKCFG(void);


#endif // _DSLPCLKCFG_h_

