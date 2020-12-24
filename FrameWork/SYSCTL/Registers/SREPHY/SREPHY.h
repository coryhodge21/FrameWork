/**********************************
* \file : SREPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREPHY_h_
#define _SREPHY_h_

#include "SREPHY_enums.h" 

typedef void(Set_fpt)(SREPHY_e);
typedef void(Clear_fpt)(SREPHY_e);
typedef int32_t(Set_fpt)(SREPHY_e);
typedef void(Write_fpt)(SREPHY_e, int32_t);

struct SREPHY_obj;

typedef struct SREPHY_obj SREPHY_t;

SREPHY_t CreateRegister_SREPHY(void);


#endif // _SREPHY_h_

