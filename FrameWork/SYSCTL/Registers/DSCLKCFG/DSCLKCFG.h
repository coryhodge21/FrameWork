/**********************************
* \file : DSCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSCLKCFG_h_
#define _DSCLKCFG_h_

#include "DSCLKCFG_enums.h" 

typedef void(Set_fpt)(DSCLKCFG_e);
typedef void(Clear_fpt)(DSCLKCFG_e);
typedef int32_t(Set_fpt)(DSCLKCFG_e);
typedef void(Write_fpt)(DSCLKCFG_e, int32_t);

struct DSCLKCFG_obj;

typedef struct DSCLKCFG_obj DSCLKCFG_t;

DSCLKCFG_t CreateRegister_DSCLKCFG(void);


#endif // _DSCLKCFG_h_

