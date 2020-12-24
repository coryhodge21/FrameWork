/**********************************
* \file : PRCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRCAN_h_
#define _PRCAN_h_

#include "PRCAN_enums.h" 

typedef void(Set_fpt)(PRCAN_e);
typedef void(Clear_fpt)(PRCAN_e);
typedef int32_t(Set_fpt)(PRCAN_e);
typedef void(Write_fpt)(PRCAN_e, int32_t);

struct PRCAN_obj;

typedef struct PRCAN_obj PRCAN_t;

PRCAN_t CreateRegister_PRCAN(void);


#endif // _PRCAN_h_

