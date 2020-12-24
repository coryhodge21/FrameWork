/**********************************
* \file : USBPDS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _USBPDS_h_
#define _USBPDS_h_

#include "USBPDS_enums.h" 

typedef void(Set_fpt)(USBPDS_e);
typedef void(Clear_fpt)(USBPDS_e);
typedef int32_t(Set_fpt)(USBPDS_e);
typedef void(Write_fpt)(USBPDS_e, int32_t);

struct USBPDS_obj;

typedef struct USBPDS_obj USBPDS_t;

USBPDS_t CreateRegister_USBPDS(void);


#endif // _USBPDS_h_

