/**********************************
* \file : SCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEPHY_h_
#define _SCGCEPHY_h_

#include "SCGCEPHY_enums.h" 

typedef void(Set_fpt)(SCGCEPHY_e);
typedef void(Clear_fpt)(SCGCEPHY_e);
typedef int32_t(Set_fpt)(SCGCEPHY_e);
typedef void(Write_fpt)(SCGCEPHY_e, int32_t);

struct SCGCEPHY_obj;

typedef struct SCGCEPHY_obj SCGCEPHY_t;

SCGCEPHY_t CreateRegister_SCGCEPHY(void);


#endif // _SCGCEPHY_h_

