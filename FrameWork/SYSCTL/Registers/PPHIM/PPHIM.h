/**********************************
* \file : PPHIM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPHIM_h_
#define _PPHIM_h_

#include "PPHIM_enums.h" 

typedef void(Set_fpt)(PPHIM_e);
typedef void(Clear_fpt)(PPHIM_e);
typedef int32_t(Set_fpt)(PPHIM_e);
typedef void(Write_fpt)(PPHIM_e, int32_t);

struct PPHIM_obj;

typedef struct PPHIM_obj PPHIM_t;

PPHIM_t CreateRegister_PPHIM(void);


#endif // _PPHIM_h_

