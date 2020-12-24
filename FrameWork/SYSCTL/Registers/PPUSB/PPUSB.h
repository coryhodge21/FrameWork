/**********************************
* \file : PPUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPUSB_h_
#define _PPUSB_h_

#include "PPUSB_enums.h" 

typedef void(Set_fpt)(PPUSB_e);
typedef void(Clear_fpt)(PPUSB_e);
typedef int32_t(Set_fpt)(PPUSB_e);
typedef void(Write_fpt)(PPUSB_e, int32_t);

struct PPUSB_obj;

typedef struct PPUSB_obj PPUSB_t;

PPUSB_t CreateRegister_PPUSB(void);


#endif // _PPUSB_h_

