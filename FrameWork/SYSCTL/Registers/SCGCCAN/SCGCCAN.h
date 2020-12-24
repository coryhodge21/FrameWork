/**********************************
* \file : SCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCCAN_h_
#define _SCGCCAN_h_

#include "SCGCCAN_enums.h" 

typedef void(Set_fpt)(SCGCCAN_e);
typedef void(Clear_fpt)(SCGCCAN_e);
typedef int32_t(Set_fpt)(SCGCCAN_e);
typedef void(Write_fpt)(SCGCCAN_e, int32_t);

struct SCGCCAN_obj;

typedef struct SCGCCAN_obj SCGCCAN_t;

SCGCCAN_t CreateRegister_SCGCCAN(void);


#endif // _SCGCCAN_h_

