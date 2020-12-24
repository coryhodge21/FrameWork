/**********************************
* \file : RCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEMAC_h_
#define _RCGCEMAC_h_

#include "RCGCEMAC_enums.h" 

typedef void(Set_fpt)(RCGCEMAC_e);
typedef void(Clear_fpt)(RCGCEMAC_e);
typedef int32_t(Set_fpt)(RCGCEMAC_e);
typedef void(Write_fpt)(RCGCEMAC_e, int32_t);

struct RCGCEMAC_obj;

typedef struct RCGCEMAC_obj RCGCEMAC_t;

RCGCEMAC_t CreateRegister_RCGCEMAC(void);


#endif // _RCGCEMAC_h_

