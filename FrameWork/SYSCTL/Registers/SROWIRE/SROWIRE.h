/**********************************
* \file : SROWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SROWIRE_h_
#define _SROWIRE_h_

#include "SROWIRE_enums.h" 

typedef void(Set_fpt)(SROWIRE_e);
typedef void(Clear_fpt)(SROWIRE_e);
typedef int32_t(Set_fpt)(SROWIRE_e);
typedef void(Write_fpt)(SROWIRE_e, int32_t);

struct SROWIRE_obj;

typedef struct SROWIRE_obj SROWIRE_t;

SROWIRE_t CreateRegister_SROWIRE(void);


#endif // _SROWIRE_h_

