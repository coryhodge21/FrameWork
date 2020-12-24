/**********************************
* \file : PCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCI2C_h_
#define _PCI2C_h_

#include "PCI2C_enums.h" 

typedef void(Set_fpt)(PCI2C_e);
typedef void(Clear_fpt)(PCI2C_e);
typedef int32_t(Set_fpt)(PCI2C_e);
typedef void(Write_fpt)(PCI2C_e, int32_t);

struct PCI2C_obj;

typedef struct PCI2C_obj PCI2C_t;

PCI2C_t CreateRegister_PCI2C(void);


#endif // _PCI2C_h_

