/**********************************
* \file : PCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEMAC_h_
#define _PCEMAC_h_

#include "PCEMAC_enums.h" 

typedef void(Set_fpt)(PCEMAC_e);
typedef void(Clear_fpt)(PCEMAC_e);
typedef int32_t(Set_fpt)(PCEMAC_e);
typedef void(Write_fpt)(PCEMAC_e, int32_t);

struct PCEMAC_obj;

typedef struct PCEMAC_obj PCEMAC_t;

PCEMAC_t CreateRegister_PCEMAC(void);


#endif // _PCEMAC_h_

