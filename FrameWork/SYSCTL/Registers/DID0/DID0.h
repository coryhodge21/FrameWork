/**********************************
* \file : DID0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DID0_h_
#define _DID0_h_

#include "DID0_enums.h" 

typedef void(Set_fpt)(DID0_e);
typedef void(Clear_fpt)(DID0_e);
typedef int32_t(Set_fpt)(DID0_e);
typedef void(Write_fpt)(DID0_e, int32_t);

struct DID0_obj;

typedef struct DID0_obj DID0_t;

DID0_t CreateRegister_DID0(void);


#endif // _DID0_h_

