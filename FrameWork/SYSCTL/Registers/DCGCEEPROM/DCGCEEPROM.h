/**********************************
* \file : DCGCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEEPROM_h_
#define _DCGCEEPROM_h_

#include "DCGCEEPROM_enums.h" 

typedef void(Set_fpt)(DCGCEEPROM_e);
typedef void(Clear_fpt)(DCGCEEPROM_e);
typedef int32_t(Set_fpt)(DCGCEEPROM_e);
typedef void(Write_fpt)(DCGCEEPROM_e, int32_t);

struct DCGCEEPROM_obj;

typedef struct DCGCEEPROM_obj DCGCEEPROM_t;

DCGCEEPROM_t CreateRegister_DCGCEEPROM(void);


#endif // _DCGCEEPROM_h_

