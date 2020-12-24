/**********************************
* \file : DIVSCLK.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DIVSCLK_h_
#define _DIVSCLK_h_

#include "DIVSCLK_enums.h" 

typedef void(Set_fpt)(DIVSCLK_e);
typedef void(Clear_fpt)(DIVSCLK_e);
typedef int32_t(Set_fpt)(DIVSCLK_e);
typedef void(Write_fpt)(DIVSCLK_e, int32_t);

struct DIVSCLK_obj;

typedef struct DIVSCLK_obj DIVSCLK_t;

DIVSCLK_t CreateRegister_DIVSCLK(void);


#endif // _DIVSCLK_h_

