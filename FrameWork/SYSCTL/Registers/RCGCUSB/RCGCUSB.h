/**********************************
* \file : RCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCUSB_h_
#define _RCGCUSB_h_

#include "RCGCUSB_enums.h" 

typedef void(Set_fpt)(RCGCUSB_e);
typedef void(Clear_fpt)(RCGCUSB_e);
typedef int32_t(Set_fpt)(RCGCUSB_e);
typedef void(Write_fpt)(RCGCUSB_e, int32_t);

struct RCGCUSB_obj;

typedef struct RCGCUSB_obj RCGCUSB_t;

RCGCUSB_t CreateRegister_RCGCUSB(void);


#endif // _RCGCUSB_h_

