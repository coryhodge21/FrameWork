/**********************************
* \file : PPCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPCAN_h_
#define _PPCAN_h_

#include "PPCAN_enums.h" 

typedef void(Set_fpt)(PPCAN_e);
typedef void(Clear_fpt)(PPCAN_e);
typedef int32_t(Set_fpt)(PPCAN_e);
typedef void(Write_fpt)(PPCAN_e, int32_t);

struct PPCAN_obj;

typedef struct PPCAN_obj PPCAN_t;

PPCAN_t CreateRegister_PPCAN(void);


#endif // _PPCAN_h_

