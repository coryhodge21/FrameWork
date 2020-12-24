/**********************************
* \file : DCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCLCD_h_
#define _DCGCLCD_h_

#include "DCGCLCD_enums.h" 

typedef void(Set_fpt)(DCGCLCD_e);
typedef void(Clear_fpt)(DCGCLCD_e);
typedef int32_t(Set_fpt)(DCGCLCD_e);
typedef void(Write_fpt)(DCGCLCD_e, int32_t);

struct DCGCLCD_obj;

typedef struct DCGCLCD_obj DCGCLCD_t;

DCGCLCD_t CreateRegister_DCGCLCD(void);


#endif // _DCGCLCD_h_

