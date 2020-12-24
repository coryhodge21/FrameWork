/**********************************
* \file : RESC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RESC_h_
#define _RESC_h_

#include "RESC_enums.h" 

typedef void(Set_fpt)(RESC_e);
typedef void(Clear_fpt)(RESC_e);
typedef int32_t(Set_fpt)(RESC_e);
typedef void(Write_fpt)(RESC_e, int32_t);

struct RESC_obj;

typedef struct RESC_obj RESC_t;

RESC_t CreateRegister_RESC(void);


#endif // _RESC_h_

