/**********************************
* \file : USBMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _USBMPC_h_
#define _USBMPC_h_

#include "USBMPC_enums.h" 

typedef void(Set_fpt)(USBMPC_e);
typedef void(Clear_fpt)(USBMPC_e);
typedef int32_t(Set_fpt)(USBMPC_e);
typedef void(Write_fpt)(USBMPC_e, int32_t);

struct USBMPC_obj;

typedef struct USBMPC_obj USBMPC_t;

USBMPC_t CreateRegister_USBMPC(void);


#endif // _USBMPC_h_

