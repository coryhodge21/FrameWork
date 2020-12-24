/**********************************
* \file : PPI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPI2C_h_
#define _PPI2C_h_

#include "PPI2C_enums.h" 

typedef void(Set_fpt)(PPI2C_e);
typedef void(Clear_fpt)(PPI2C_e);
typedef int32_t(Set_fpt)(PPI2C_e);
typedef void(Write_fpt)(PPI2C_e, int32_t);

struct PPI2C_obj;

typedef struct PPI2C_obj PPI2C_t;

PPI2C_t CreateRegister_PPI2C(void);


#endif // _PPI2C_h_

