/**********************************
* \file : CCMCGREQ.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _CCMCGREQ_h_
#define _CCMCGREQ_h_

#include "CCMCGREQ_enums.h" 

typedef void(Set_fpt)(CCMCGREQ_e);
typedef void(Clear_fpt)(CCMCGREQ_e);
typedef int32_t(Set_fpt)(CCMCGREQ_e);
typedef void(Write_fpt)(CCMCGREQ_e, int32_t);

struct CCMCGREQ_obj;

typedef struct CCMCGREQ_obj CCMCGREQ_t;

CCMCGREQ_t CreateRegister_CCMCGREQ(void);


#endif // _CCMCGREQ_h_

