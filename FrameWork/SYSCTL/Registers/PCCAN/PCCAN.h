/**********************************
* \file : PCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCCAN_h_
#define _PCCAN_h_

#include "PCCAN_enums.h" 

typedef void(Set_fpt)(PCCAN_e);
typedef void(Clear_fpt)(PCCAN_e);
typedef int32_t(Set_fpt)(PCCAN_e);
typedef void(Write_fpt)(PCCAN_e, int32_t);

struct PCCAN_obj;

typedef struct PCCAN_obj PCCAN_t;

PCCAN_t CreateRegister_PCCAN(void);


#endif // _PCCAN_h_

