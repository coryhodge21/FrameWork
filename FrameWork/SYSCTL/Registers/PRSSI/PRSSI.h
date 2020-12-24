/**********************************
* \file : PRSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRSSI_h_
#define _PRSSI_h_

#include "PRSSI_enums.h" 

typedef void(Set_fpt)(PRSSI_e);
typedef void(Clear_fpt)(PRSSI_e);
typedef int32_t(Set_fpt)(PRSSI_e);
typedef void(Write_fpt)(PRSSI_e, int32_t);

struct PRSSI_obj;

typedef struct PRSSI_obj PRSSI_t;

PRSSI_t CreateRegister_PRSSI(void);


#endif // _PRSSI_h_

