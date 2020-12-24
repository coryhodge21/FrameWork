/**********************************
* \file : DID1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DID1_h_
#define _DID1_h_

#include "DID1_enums.h" 

typedef void(Set_fpt)(DID1_e);
typedef void(Clear_fpt)(DID1_e);
typedef int32_t(Set_fpt)(DID1_e);
typedef void(Write_fpt)(DID1_e, int32_t);

struct DID1_obj;

typedef struct DID1_obj DID1_t;

DID1_t CreateRegister_DID1(void);


#endif // _DID1_h_

