/**********************************
* \file : PPHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPHIB_h_
#define _PPHIB_h_

#include "PPHIB_enums.h" 

typedef void(Set_fpt)(PPHIB_e);
typedef void(Clear_fpt)(PPHIB_e);
typedef int32_t(Set_fpt)(PPHIB_e);
typedef void(Write_fpt)(PPHIB_e, int32_t);

struct PPHIB_obj;

typedef struct PPHIB_obj PPHIB_t;

PPHIB_t CreateRegister_PPHIB(void);


#endif // _PPHIB_h_

