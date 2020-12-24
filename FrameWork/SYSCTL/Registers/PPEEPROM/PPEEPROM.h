/**********************************
* \file : PPEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEEPROM_h_
#define _PPEEPROM_h_

#include "PPEEPROM_enums.h" 

typedef void(Set_fpt)(PPEEPROM_e);
typedef void(Clear_fpt)(PPEEPROM_e);
typedef int32_t(Set_fpt)(PPEEPROM_e);
typedef void(Write_fpt)(PPEEPROM_e, int32_t);

struct PPEEPROM_obj;

typedef struct PPEEPROM_obj PPEEPROM_t;

PPEEPROM_t CreateRegister_PPEEPROM(void);


#endif // _PPEEPROM_h_

