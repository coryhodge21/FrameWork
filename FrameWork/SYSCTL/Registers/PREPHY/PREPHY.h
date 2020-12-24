/**********************************
* \file : PREPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREPHY_h_
#define _PREPHY_h_

#include "PREPHY_enums.h" 

typedef void(Set_fpt)(PREPHY_e);
typedef void(Clear_fpt)(PREPHY_e);
typedef int32_t(Set_fpt)(PREPHY_e);
typedef void(Write_fpt)(PREPHY_e, int32_t);

struct PREPHY_obj;

typedef struct PREPHY_obj PREPHY_t;

PREPHY_t CreateRegister_PREPHY(void);


#endif // _PREPHY_h_

