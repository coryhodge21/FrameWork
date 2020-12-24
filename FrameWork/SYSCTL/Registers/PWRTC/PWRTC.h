/**********************************
* \file : PWRTC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PWRTC_h_
#define _PWRTC_h_

#include "PWRTC_enums.h" 

typedef void(Set_fpt)(PWRTC_e);
typedef void(Clear_fpt)(PWRTC_e);
typedef int32_t(Set_fpt)(PWRTC_e);
typedef void(Write_fpt)(PWRTC_e, int32_t);

struct PWRTC_obj;

typedef struct PWRTC_obj PWRTC_t;

PWRTC_t CreateRegister_PWRTC(void);


#endif // _PWRTC_h_

