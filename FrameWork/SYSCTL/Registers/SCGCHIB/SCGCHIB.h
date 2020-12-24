/**********************************
* \file : SCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCHIB_h_
#define _SCGCHIB_h_

#include "SCGCHIB_enums.h" 

typedef void(Set_fpt)(SCGCHIB_e);
typedef void(Clear_fpt)(SCGCHIB_e);
typedef int32_t(Set_fpt)(SCGCHIB_e);
typedef void(Write_fpt)(SCGCHIB_e, int32_t);

struct SCGCHIB_obj;

typedef struct SCGCHIB_obj SCGCHIB_t;

SCGCHIB_t CreateRegister_SCGCHIB(void);


#endif // _SCGCHIB_h_

