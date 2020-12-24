/**********************************
* \file : SCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCWTIMER_h_
#define _SCGCWTIMER_h_

#include "SCGCWTIMER_enums.h" 

typedef void(Set_fpt)(SCGCWTIMER_e);
typedef void(Clear_fpt)(SCGCWTIMER_e);
typedef int32_t(Set_fpt)(SCGCWTIMER_e);
typedef void(Write_fpt)(SCGCWTIMER_e, int32_t);

struct SCGCWTIMER_obj;

typedef struct SCGCWTIMER_obj SCGCWTIMER_t;

SCGCWTIMER_t CreateRegister_SCGCWTIMER(void);


#endif // _SCGCWTIMER_h_

