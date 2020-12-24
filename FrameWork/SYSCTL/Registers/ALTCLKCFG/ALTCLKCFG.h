/**********************************
* \file : ALTCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _ALTCLKCFG_h_
#define _ALTCLKCFG_h_

#include "ALTCLKCFG_enums.h" 

typedef void(Set_fpt)(ALTCLKCFG_e);
typedef void(Clear_fpt)(ALTCLKCFG_e);
typedef int32_t(Set_fpt)(ALTCLKCFG_e);
typedef void(Write_fpt)(ALTCLKCFG_e, int32_t);

struct ALTCLKCFG_obj;

typedef struct ALTCLKCFG_obj ALTCLKCFG_t;

ALTCLKCFG_t CreateRegister_ALTCLKCFG(void);


#endif // _ALTCLKCFG_h_

