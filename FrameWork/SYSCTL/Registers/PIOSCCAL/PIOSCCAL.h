/**********************************
* \file : PIOSCCAL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PIOSCCAL_h_
#define _PIOSCCAL_h_

#include "PIOSCCAL_enums.h" 

typedef void(Set_fpt)(PIOSCCAL_e);
typedef void(Clear_fpt)(PIOSCCAL_e);
typedef int32_t(Set_fpt)(PIOSCCAL_e);
typedef void(Write_fpt)(PIOSCCAL_e, int32_t);

struct PIOSCCAL_obj;

typedef struct PIOSCCAL_obj PIOSCCAL_t;

PIOSCCAL_t CreateRegister_PIOSCCAL(void);


#endif // _PIOSCCAL_h_

