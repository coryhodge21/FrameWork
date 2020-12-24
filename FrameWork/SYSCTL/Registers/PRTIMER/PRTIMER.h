/**********************************
* \file : PRTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRTIMER_h_
#define _PRTIMER_h_

#include "PRTIMER_enums.h" 

typedef void(Set_fpt)(PRTIMER_e);
typedef void(Clear_fpt)(PRTIMER_e);
typedef int32_t(Set_fpt)(PRTIMER_e);
typedef void(Write_fpt)(PRTIMER_e, int32_t);

struct PRTIMER_obj;

typedef struct PRTIMER_obj PRTIMER_t;

PRTIMER_t CreateRegister_PRTIMER(void);


#endif // _PRTIMER_h_

