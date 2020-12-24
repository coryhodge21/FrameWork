/**********************************
* \file : PRQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRQEI_h_
#define _PRQEI_h_

#include "PRQEI_enums.h" 

typedef void(Set_fpt)(PRQEI_e);
typedef void(Clear_fpt)(PRQEI_e);
typedef int32_t(Set_fpt)(PRQEI_e);
typedef void(Write_fpt)(PRQEI_e, int32_t);

struct PRQEI_obj;

typedef struct PRQEI_obj PRQEI_t;

PRQEI_t CreateRegister_PRQEI(void);


#endif // _PRQEI_h_

