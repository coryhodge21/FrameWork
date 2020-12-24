/**********************************
* \file : SCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCOWIRE_h_
#define _SCGCOWIRE_h_

#include "SCGCOWIRE_enums.h" 

typedef void(Set_fpt)(SCGCOWIRE_e);
typedef void(Clear_fpt)(SCGCOWIRE_e);
typedef int32_t(Set_fpt)(SCGCOWIRE_e);
typedef void(Write_fpt)(SCGCOWIRE_e, int32_t);

struct SCGCOWIRE_obj;

typedef struct SCGCOWIRE_obj SCGCOWIRE_t;

SCGCOWIRE_t CreateRegister_SCGCOWIRE(void);


#endif // _SCGCOWIRE_h_

