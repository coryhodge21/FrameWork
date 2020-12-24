/**********************************
* \file : SRHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRHIB_h_
#define _SRHIB_h_

#include "SRHIB_enums.h" 

typedef void(Set_fpt)(SRHIB_e);
typedef void(Clear_fpt)(SRHIB_e);
typedef int32_t(Set_fpt)(SRHIB_e);
typedef void(Write_fpt)(SRHIB_e, int32_t);

struct SRHIB_obj;

typedef struct SRHIB_obj SRHIB_t;

SRHIB_t CreateRegister_SRHIB(void);


#endif // _SRHIB_h_

