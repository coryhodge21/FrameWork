/**********************************
* \file : DIR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DIR_h_
#define _DIR_h_

//! \brief Enumerations for this Register
#include "GPIO_DIR_enums.h" 

// Base Address for this Register
#define GPIO_DIR_BASE_ADDR	0x00000400

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DIR_Set_fpt)(DIR_e);

typedef void(*DIR_Clear_fpt)(DIR_e);

typedef int(*DIR_Read_fpt)(DIR_e);

typedef void(*DIR_Write_fpt)(DIR_e, int);

// Structure Declaration
struct GPIO_DIR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DIR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DIR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DIR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DIR_Write_fpt	write;

};

typedef struct GPIO_DIR_obj GPIO_DIR_t;

// Initializer
GPIO_DIR_t init_GPIO_DIR(void);


#endif // _DIR_h_

