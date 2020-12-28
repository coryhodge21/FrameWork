/**********************************
* \file : SREEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREEPROM_h_
#define _SREEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_SREEPROM_BASE_ADDR	0x400FE558

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SREEPROM_Set_fpt)(SREEPROM_e);

typedef void(*SREEPROM_Clear_fpt)(SREEPROM_e);

typedef int(*SREEPROM_Read_fpt)(SREEPROM_e);

typedef void(*SREEPROM_Write_fpt)(SREEPROM_e, int);

// Structure Declaration
struct SYSCTL_SREEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SREEPROM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SREEPROM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SREEPROM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SREEPROM_Write_fpt	write;

};

typedef struct SYSCTL_SREEPROM_obj SYSCTL_SREEPROM_t;

// Initializer
SYSCTL_SREEPROM_t init_SYSCTL_SREEPROM(void);


#endif // _SREEPROM_h_

