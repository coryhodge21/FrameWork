/**********************************
* \file : SRTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRTIMER_h_
#define _SRTIMER_h_

#include "SRTIMER_enums.h" 

typedef void(Set_fpt)(SRTIMER_e);
typedef void(Clear_fpt)(SRTIMER_e);
typedef int32_t(Set_fpt)(SRTIMER_e);
typedef void(Write_fpt)(SRTIMER_e, int32_t);

struct SRTIMER_obj;

typedef struct SRTIMER_obj SRTIMER_t;

SRTIMER_t CreateRegister_SRTIMER(void);


#endif // _SRTIMER_h_

