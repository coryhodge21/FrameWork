/**********************************
* \file : DCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEMAC_h_
#define _DCGCEMAC_h_

#include "DCGCEMAC_enums.h" 

typedef void(Set_fpt)(DCGCEMAC_e);
typedef void(Clear_fpt)(DCGCEMAC_e);
typedef int32_t(Set_fpt)(DCGCEMAC_e);
typedef void(Write_fpt)(DCGCEMAC_e, int32_t);

struct DCGCEMAC_obj;

typedef struct DCGCEMAC_obj DCGCEMAC_t;

DCGCEMAC_t CreateRegister_DCGCEMAC(void);


#endif // _DCGCEMAC_h_

