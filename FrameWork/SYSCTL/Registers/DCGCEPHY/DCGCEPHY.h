/**********************************
* \file : DCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEPHY_h_
#define _DCGCEPHY_h_

#include "DCGCEPHY_enums.h" 

typedef void(Set_fpt)(DCGCEPHY_e);
typedef void(Clear_fpt)(DCGCEPHY_e);
typedef int32_t(Set_fpt)(DCGCEPHY_e);
typedef void(Write_fpt)(DCGCEPHY_e, int32_t);

struct DCGCEPHY_obj;

typedef struct DCGCEPHY_obj DCGCEPHY_t;

DCGCEPHY_t CreateRegister_DCGCEPHY(void);


#endif // _DCGCEPHY_h_

