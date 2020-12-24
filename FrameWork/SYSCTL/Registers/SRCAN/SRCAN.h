/**********************************
* \file : SRCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCAN_h_
#define _SRCAN_h_

#include "SRCAN_enums.h" 

typedef void(Set_fpt)(SRCAN_e);
typedef void(Clear_fpt)(SRCAN_e);
typedef int32_t(Set_fpt)(SRCAN_e);
typedef void(Write_fpt)(SRCAN_e, int32_t);

struct SRCAN_obj;

typedef struct SRCAN_obj SRCAN_t;

SRCAN_t CreateRegister_SRCAN(void);


#endif // _SRCAN_h_

