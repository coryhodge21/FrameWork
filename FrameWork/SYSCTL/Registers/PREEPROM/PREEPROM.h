/**********************************
* \file : PREEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREEPROM_h_
#define _PREEPROM_h_

#include "PREEPROM_enums.h" 

typedef void(Set_fpt)(PREEPROM_e);
typedef void(Clear_fpt)(PREEPROM_e);
typedef int32_t(Set_fpt)(PREEPROM_e);
typedef void(Write_fpt)(PREEPROM_e, int32_t);

struct PREEPROM_obj;

typedef struct PREEPROM_obj PREEPROM_t;

PREEPROM_t CreateRegister_PREEPROM(void);


#endif // _PREEPROM_h_

