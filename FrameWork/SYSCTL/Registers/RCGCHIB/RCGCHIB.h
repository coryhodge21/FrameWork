/**********************************
* \file : RCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCHIB_h_
#define _RCGCHIB_h_

#include "RCGCHIB_enums.h" 

typedef void(Set_fpt)(RCGCHIB_e);
typedef void(Clear_fpt)(RCGCHIB_e);
typedef int32_t(Set_fpt)(RCGCHIB_e);
typedef void(Write_fpt)(RCGCHIB_e, int32_t);

struct RCGCHIB_obj;

typedef struct RCGCHIB_obj RCGCHIB_t;

RCGCHIB_t CreateRegister_RCGCHIB(void);


#endif // _RCGCHIB_h_

