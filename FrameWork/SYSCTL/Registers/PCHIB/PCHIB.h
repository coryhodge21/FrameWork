/**********************************
* \file : PCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCHIB_h_
#define _PCHIB_h_

#include "PCHIB_enums.h" 

typedef void(Set_fpt)(PCHIB_e);
typedef void(Clear_fpt)(PCHIB_e);
typedef int32_t(Set_fpt)(PCHIB_e);
typedef void(Write_fpt)(PCHIB_e, int32_t);

struct PCHIB_obj;

typedef struct PCHIB_obj PCHIB_t;

PCHIB_t CreateRegister_PCHIB(void);


#endif // _PCHIB_h_

