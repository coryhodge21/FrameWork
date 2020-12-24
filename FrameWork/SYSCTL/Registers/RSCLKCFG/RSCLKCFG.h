/**********************************
* \file : RSCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RSCLKCFG_h_
#define _RSCLKCFG_h_

#include "RSCLKCFG_enums.h" 

typedef void(Set_fpt)(RSCLKCFG_e);
typedef void(Clear_fpt)(RSCLKCFG_e);
typedef int32_t(Set_fpt)(RSCLKCFG_e);
typedef void(Write_fpt)(RSCLKCFG_e, int32_t);

struct RSCLKCFG_obj;

typedef struct RSCLKCFG_obj RSCLKCFG_t;

RSCLKCFG_t CreateRegister_RSCLKCFG(void);


#endif // _RSCLKCFG_h_

