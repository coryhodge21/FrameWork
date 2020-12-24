/**********************************
* \file : PPQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPQEI_h_
#define _PPQEI_h_

#include "PPQEI_enums.h" 

typedef void(Set_fpt)(PPQEI_e);
typedef void(Clear_fpt)(PPQEI_e);
typedef int32_t(Set_fpt)(PPQEI_e);
typedef void(Write_fpt)(PPQEI_e, int32_t);

struct PPQEI_obj;

typedef struct PPQEI_obj PPQEI_t;

PPQEI_t CreateRegister_PPQEI(void);


#endif // _PPQEI_h_

