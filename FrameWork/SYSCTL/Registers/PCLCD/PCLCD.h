/**********************************
* \file : PCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCLCD_h_
#define _PCLCD_h_

#include "PCLCD_enums.h" 

typedef void(Set_fpt)(PCLCD_e);
typedef void(Clear_fpt)(PCLCD_e);
typedef int32_t(Set_fpt)(PCLCD_e);
typedef void(Write_fpt)(PCLCD_e, int32_t);

struct PCLCD_obj;

typedef struct PCLCD_obj PCLCD_t;

PCLCD_t CreateRegister_PCLCD(void);


#endif // _PCLCD_h_

