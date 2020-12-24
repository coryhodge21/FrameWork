/**********************************
* \file : PCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEEPROM_h_
#define _PCEEPROM_h_

#include "PCEEPROM_enums.h" 

typedef void(Set_fpt)(PCEEPROM_e);
typedef void(Clear_fpt)(PCEEPROM_e);
typedef int32_t(Set_fpt)(PCEEPROM_e);
typedef void(Write_fpt)(PCEEPROM_e, int32_t);

struct PCEEPROM_obj;

typedef struct PCEEPROM_obj PCEEPROM_t;

PCEEPROM_t CreateRegister_PCEEPROM(void);


#endif // _PCEEPROM_h_

