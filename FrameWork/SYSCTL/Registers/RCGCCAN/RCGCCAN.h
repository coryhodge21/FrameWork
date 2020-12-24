/**********************************
* \file : RCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCCAN_h_
#define _RCGCCAN_h_

#include "RCGCCAN_enums.h" 

typedef void(Set_fpt)(RCGCCAN_e);
typedef void(Clear_fpt)(RCGCCAN_e);
typedef int32_t(Set_fpt)(RCGCCAN_e);
typedef void(Write_fpt)(RCGCCAN_e, int32_t);

struct RCGCCAN_obj;

typedef struct RCGCCAN_obj RCGCCAN_t;

RCGCCAN_t CreateRegister_RCGCCAN(void);


#endif // _RCGCCAN_h_

