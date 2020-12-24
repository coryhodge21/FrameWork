/**********************************
* \file : SRI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRI2C_h_
#define _SRI2C_h_

#include "SRI2C_enums.h" 

typedef void(Set_fpt)(SRI2C_e);
typedef void(Clear_fpt)(SRI2C_e);
typedef int32_t(Set_fpt)(SRI2C_e);
typedef void(Write_fpt)(SRI2C_e, int32_t);

struct SRI2C_obj;

typedef struct SRI2C_obj SRI2C_t;

SRI2C_t CreateRegister_SRI2C(void);


#endif // _SRI2C_h_

