/**********************************
* \file : PPRTS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPRTS_h_
#define _PPRTS_h_

#include "PPRTS_enums.h" 

typedef void(Set_fpt)(PPRTS_e);
typedef void(Clear_fpt)(PPRTS_e);
typedef int32_t(Set_fpt)(PPRTS_e);
typedef void(Write_fpt)(PPRTS_e, int32_t);

struct PPRTS_obj;

typedef struct PPRTS_obj PPRTS_t;

PPRTS_t CreateRegister_PPRTS(void);


#endif // _PPRTS_h_

