/**********************************
* \file : DCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCCAN_h_
#define _DCGCCAN_h_

#include "DCGCCAN_enums.h" 

typedef void(Set_fpt)(DCGCCAN_e);
typedef void(Clear_fpt)(DCGCCAN_e);
typedef int32_t(Set_fpt)(DCGCCAN_e);
typedef void(Write_fpt)(DCGCCAN_e, int32_t);

struct DCGCCAN_obj;

typedef struct DCGCCAN_obj DCGCCAN_t;

DCGCCAN_t CreateRegister_DCGCCAN(void);


#endif // _DCGCCAN_h_

