/**********************************
* \file : SREEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREEPROM_h_
#define _SREEPROM_h_

#include "SREEPROM_enums.h" 

typedef void(Set_fpt)(SREEPROM_e);
typedef void(Clear_fpt)(SREEPROM_e);
typedef int32_t(Set_fpt)(SREEPROM_e);
typedef void(Write_fpt)(SREEPROM_e, int32_t);

struct SREEPROM_obj;

typedef struct SREEPROM_obj SREEPROM_t;

SREEPROM_t CreateRegister_SREEPROM(void);


#endif // _SREEPROM_h_

