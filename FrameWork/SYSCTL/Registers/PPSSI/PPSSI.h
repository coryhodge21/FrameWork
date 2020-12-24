/**********************************
* \file : PPSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPSSI_h_
#define _PPSSI_h_

#include "PPSSI_enums.h" 

typedef void(Set_fpt)(PPSSI_e);
typedef void(Clear_fpt)(PPSSI_e);
typedef int32_t(Set_fpt)(PPSSI_e);
typedef void(Write_fpt)(PPSSI_e, int32_t);

struct PPSSI_obj;

typedef struct PPSSI_obj PPSSI_t;

PPSSI_t CreateRegister_PPSSI(void);


#endif // _PPSSI_h_

