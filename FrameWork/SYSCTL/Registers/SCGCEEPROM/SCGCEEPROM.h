/**********************************
* \file : SCGCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEEPROM_h_
#define _SCGCEEPROM_h_

#include "SCGCEEPROM_enums.h" 

typedef void(Set_fpt)(SCGCEEPROM_e);
typedef void(Clear_fpt)(SCGCEEPROM_e);
typedef int32_t(Set_fpt)(SCGCEEPROM_e);
typedef void(Write_fpt)(SCGCEEPROM_e, int32_t);

struct SCGCEEPROM_obj;

typedef struct SCGCEEPROM_obj SCGCEEPROM_t;

SCGCEEPROM_t CreateRegister_SCGCEEPROM(void);


#endif // _SCGCEEPROM_h_

