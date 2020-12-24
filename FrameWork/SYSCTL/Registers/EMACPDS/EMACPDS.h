/**********************************
* \file : EMACPDS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _EMACPDS_h_
#define _EMACPDS_h_

#include "EMACPDS_enums.h" 

typedef void(Set_fpt)(EMACPDS_e);
typedef void(Clear_fpt)(EMACPDS_e);
typedef int32_t(Set_fpt)(EMACPDS_e);
typedef void(Write_fpt)(EMACPDS_e, int32_t);

struct EMACPDS_obj;

typedef struct EMACPDS_obj EMACPDS_t;

EMACPDS_t CreateRegister_EMACPDS(void);


#endif // _EMACPDS_h_

