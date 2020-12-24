/**********************************
* \file : PRI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRI2C_h_
#define _PRI2C_h_

#include "PRI2C_enums.h" 

typedef void(Set_fpt)(PRI2C_e);
typedef void(Clear_fpt)(PRI2C_e);
typedef int32_t(Set_fpt)(PRI2C_e);
typedef void(Write_fpt)(PRI2C_e, int32_t);

struct PRI2C_obj;

typedef struct PRI2C_obj PRI2C_t;

PRI2C_t CreateRegister_PRI2C(void);


#endif // _PRI2C_h_

