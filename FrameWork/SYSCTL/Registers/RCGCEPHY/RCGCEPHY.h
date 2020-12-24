/**********************************
* \file : RCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEPHY_h_
#define _RCGCEPHY_h_

#include "RCGCEPHY_enums.h" 

typedef void(Set_fpt)(RCGCEPHY_e);
typedef void(Clear_fpt)(RCGCEPHY_e);
typedef int32_t(Set_fpt)(RCGCEPHY_e);
typedef void(Write_fpt)(RCGCEPHY_e, int32_t);

struct RCGCEPHY_obj;

typedef struct RCGCEPHY_obj RCGCEPHY_t;

RCGCEPHY_t CreateRegister_RCGCEPHY(void);


#endif // _RCGCEPHY_h_

