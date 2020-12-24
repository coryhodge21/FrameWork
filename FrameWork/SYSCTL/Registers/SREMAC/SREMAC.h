/**********************************
* \file : SREMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREMAC_h_
#define _SREMAC_h_

#include "SREMAC_enums.h" 

typedef void(Set_fpt)(SREMAC_e);
typedef void(Clear_fpt)(SREMAC_e);
typedef int32_t(Set_fpt)(SREMAC_e);
typedef void(Write_fpt)(SREMAC_e, int32_t);

struct SREMAC_obj;

typedef struct SREMAC_obj SREMAC_t;

SREMAC_t CreateRegister_SREMAC(void);


#endif // _SREMAC_h_

