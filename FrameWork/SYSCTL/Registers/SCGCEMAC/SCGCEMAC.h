/**********************************
* \file : SCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEMAC_h_
#define _SCGCEMAC_h_

#include "SCGCEMAC_enums.h" 

typedef void(Set_fpt)(SCGCEMAC_e);
typedef void(Clear_fpt)(SCGCEMAC_e);
typedef int32_t(Set_fpt)(SCGCEMAC_e);
typedef void(Write_fpt)(SCGCEMAC_e, int32_t);

struct SCGCEMAC_obj;

typedef struct SCGCEMAC_obj SCGCEMAC_t;

SCGCEMAC_t CreateRegister_SCGCEMAC(void);


#endif // _SCGCEMAC_h_

