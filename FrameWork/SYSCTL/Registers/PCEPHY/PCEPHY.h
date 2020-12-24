/**********************************
* \file : PCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEPHY_h_
#define _PCEPHY_h_

#include "PCEPHY_enums.h" 

typedef void(Set_fpt)(PCEPHY_e);
typedef void(Clear_fpt)(PCEPHY_e);
typedef int32_t(Set_fpt)(PCEPHY_e);
typedef void(Write_fpt)(PCEPHY_e, int32_t);

struct PCEPHY_obj;

typedef struct PCEPHY_obj PCEPHY_t;

PCEPHY_t CreateRegister_PCEPHY(void);


#endif // _PCEPHY_h_

