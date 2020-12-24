/**********************************
* \file : SCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCTIMER_h_
#define _SCGCTIMER_h_

#include "SCGCTIMER_enums.h" 

typedef void(Set_fpt)(SCGCTIMER_e);
typedef void(Clear_fpt)(SCGCTIMER_e);
typedef int32_t(Set_fpt)(SCGCTIMER_e);
typedef void(Write_fpt)(SCGCTIMER_e, int32_t);

struct SCGCTIMER_obj;

typedef struct SCGCTIMER_obj SCGCTIMER_t;

SCGCTIMER_t CreateRegister_SCGCTIMER(void);


#endif // _SCGCTIMER_h_

