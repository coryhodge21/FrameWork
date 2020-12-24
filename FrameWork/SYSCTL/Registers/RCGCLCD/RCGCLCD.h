/**********************************
* \file : RCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCLCD_h_
#define _RCGCLCD_h_

#include "RCGCLCD_enums.h" 

typedef void(Set_fpt)(RCGCLCD_e);
typedef void(Clear_fpt)(RCGCLCD_e);
typedef int32_t(Set_fpt)(RCGCLCD_e);
typedef void(Write_fpt)(RCGCLCD_e, int32_t);

struct RCGCLCD_obj;

typedef struct RCGCLCD_obj RCGCLCD_t;

RCGCLCD_t CreateRegister_RCGCLCD(void);


#endif // _RCGCLCD_h_

