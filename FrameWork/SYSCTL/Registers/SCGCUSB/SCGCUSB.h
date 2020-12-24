/**********************************
* \file : SCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCUSB_h_
#define _SCGCUSB_h_

#include "SCGCUSB_enums.h" 

typedef void(Set_fpt)(SCGCUSB_e);
typedef void(Clear_fpt)(SCGCUSB_e);
typedef int32_t(Set_fpt)(SCGCUSB_e);
typedef void(Write_fpt)(SCGCUSB_e, int32_t);

struct SCGCUSB_obj;

typedef struct SCGCUSB_obj SCGCUSB_t;

SCGCUSB_t CreateRegister_SCGCUSB(void);


#endif // _SCGCUSB_h_

