/**********************************
* \file : HSSR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _HSSR_h_
#define _HSSR_h_

#include "HSSR_enums.h" 

typedef void(Set_fpt)(HSSR_e);
typedef void(Clear_fpt)(HSSR_e);
typedef int32_t(Set_fpt)(HSSR_e);
typedef void(Write_fpt)(HSSR_e, int32_t);

struct HSSR_obj;

typedef struct HSSR_obj HSSR_t;

HSSR_t CreateRegister_HSSR(void);


#endif // _HSSR_h_

