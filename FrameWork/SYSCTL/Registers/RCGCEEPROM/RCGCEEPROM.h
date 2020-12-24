/**********************************
* \file : RCGCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEEPROM_h_
#define _RCGCEEPROM_h_

#include "RCGCEEPROM_enums.h" 

typedef void(Set_fpt)(RCGCEEPROM_e);
typedef void(Clear_fpt)(RCGCEEPROM_e);
typedef int32_t(Set_fpt)(RCGCEEPROM_e);
typedef void(Write_fpt)(RCGCEEPROM_e, int32_t);

struct RCGCEEPROM_obj;

typedef struct RCGCEEPROM_obj RCGCEEPROM_t;

RCGCEEPROM_t CreateRegister_RCGCEEPROM(void);


#endif // _RCGCEEPROM_h_

