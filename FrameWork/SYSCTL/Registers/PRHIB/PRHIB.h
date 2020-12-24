/**********************************
* \file : PRHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRHIB_h_
#define _PRHIB_h_

#include "PRHIB_enums.h" 

typedef void(Set_fpt)(PRHIB_e);
typedef void(Clear_fpt)(PRHIB_e);
typedef int32_t(Set_fpt)(PRHIB_e);
typedef void(Write_fpt)(PRHIB_e, int32_t);

struct PRHIB_obj;

typedef struct PRHIB_obj PRHIB_t;

PRHIB_t CreateRegister_PRHIB(void);


#endif // _PRHIB_h_

