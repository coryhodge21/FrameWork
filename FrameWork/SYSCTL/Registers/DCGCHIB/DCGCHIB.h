/**********************************
* \file : DCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCHIB_h_
#define _DCGCHIB_h_

#include "DCGCHIB_enums.h" 

typedef void(Set_fpt)(DCGCHIB_e);
typedef void(Clear_fpt)(DCGCHIB_e);
typedef int32_t(Set_fpt)(DCGCHIB_e);
typedef void(Write_fpt)(DCGCHIB_e, int32_t);

struct DCGCHIB_obj;

typedef struct DCGCHIB_obj DCGCHIB_t;

DCGCHIB_t CreateRegister_DCGCHIB(void);


#endif // _DCGCHIB_h_

