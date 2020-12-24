/**********************************
* \file : PCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCUSB_h_
#define _PCUSB_h_

#include "PCUSB_enums.h" 

typedef void(Set_fpt)(PCUSB_e);
typedef void(Clear_fpt)(PCUSB_e);
typedef int32_t(Set_fpt)(PCUSB_e);
typedef void(Write_fpt)(PCUSB_e, int32_t);

struct PCUSB_obj;

typedef struct PCUSB_obj PCUSB_t;

PCUSB_t CreateRegister_PCUSB(void);


#endif // _PCUSB_h_

