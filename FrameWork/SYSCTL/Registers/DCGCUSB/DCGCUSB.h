/**********************************
* \file : DCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCUSB_h_
#define _DCGCUSB_h_

#include "DCGCUSB_enums.h" 

typedef void(Set_fpt)(DCGCUSB_e);
typedef void(Clear_fpt)(DCGCUSB_e);
typedef int32_t(Set_fpt)(DCGCUSB_e);
typedef void(Write_fpt)(DCGCUSB_e, int32_t);

struct DCGCUSB_obj;

typedef struct DCGCUSB_obj DCGCUSB_t;

DCGCUSB_t CreateRegister_DCGCUSB(void);


#endif // _DCGCUSB_h_

