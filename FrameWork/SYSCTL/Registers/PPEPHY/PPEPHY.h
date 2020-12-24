/**********************************
* \file : PPEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEPHY_h_
#define _PPEPHY_h_

#include "PPEPHY_enums.h" 

typedef void(Set_fpt)(PPEPHY_e);
typedef void(Clear_fpt)(PPEPHY_e);
typedef int32_t(Set_fpt)(PPEPHY_e);
typedef void(Write_fpt)(PPEPHY_e, int32_t);

struct PPEPHY_obj;

typedef struct PPEPHY_obj PPEPHY_t;

PPEPHY_t CreateRegister_PPEPHY(void);


#endif // _PPEPHY_h_

