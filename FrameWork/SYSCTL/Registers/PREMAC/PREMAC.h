/**********************************
* \file : PREMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREMAC_h_
#define _PREMAC_h_

#include "PREMAC_enums.h" 

typedef void(Set_fpt)(PREMAC_e);
typedef void(Clear_fpt)(PREMAC_e);
typedef int32_t(Set_fpt)(PREMAC_e);
typedef void(Write_fpt)(PREMAC_e, int32_t);

struct PREMAC_obj;

typedef struct PREMAC_obj PREMAC_t;

PREMAC_t CreateRegister_PREMAC(void);


#endif // _PREMAC_h_

