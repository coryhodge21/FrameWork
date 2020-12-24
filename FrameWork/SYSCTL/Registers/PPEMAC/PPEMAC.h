/**********************************
* \file : PPEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEMAC_h_
#define _PPEMAC_h_

#include "PPEMAC_enums.h" 

typedef void(Set_fpt)(PPEMAC_e);
typedef void(Clear_fpt)(PPEMAC_e);
typedef int32_t(Set_fpt)(PPEMAC_e);
typedef void(Write_fpt)(PPEMAC_e, int32_t);

struct PPEMAC_obj;

typedef struct PPEMAC_obj PPEMAC_t;

PPEMAC_t CreateRegister_PPEMAC(void);


#endif // _PPEMAC_h_

