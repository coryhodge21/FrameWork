/**********************************
* \file : SCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCLCD_h_
#define _SCGCLCD_h_

#include "SCGCLCD_enums.h" 

typedef void(Set_fpt)(SCGCLCD_e);
typedef void(Clear_fpt)(SCGCLCD_e);
typedef int32_t(Set_fpt)(SCGCLCD_e);
typedef void(Write_fpt)(SCGCLCD_e, int32_t);

struct SCGCLCD_obj;

typedef struct SCGCLCD_obj SCGCLCD_t;

SCGCLCD_t CreateRegister_SCGCLCD(void);


#endif // _SCGCLCD_h_

