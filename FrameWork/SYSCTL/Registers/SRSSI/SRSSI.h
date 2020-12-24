/**********************************
* \file : SRSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRSSI_h_
#define _SRSSI_h_

#include "SRSSI_enums.h" 

typedef void(Set_fpt)(SRSSI_e);
typedef void(Clear_fpt)(SRSSI_e);
typedef int32_t(Set_fpt)(SRSSI_e);
typedef void(Write_fpt)(SRSSI_e, int32_t);

struct SRSSI_obj;

typedef struct SRSSI_obj SRSSI_t;

SRSSI_t CreateRegister_SRSSI(void);


#endif // _SRSSI_h_

