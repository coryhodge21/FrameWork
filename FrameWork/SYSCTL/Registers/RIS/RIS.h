/**********************************
* \file : RIS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RIS_h_
#define _RIS_h_

#include "RIS_enums.h" 

typedef void(Set_fpt)(RIS_e);
typedef void(Clear_fpt)(RIS_e);
typedef int32_t(Set_fpt)(RIS_e);
typedef void(Write_fpt)(RIS_e, int32_t);

struct RIS_obj;

typedef struct RIS_obj RIS_t;

RIS_t CreateRegister_RIS(void);


#endif // _RIS_h_

