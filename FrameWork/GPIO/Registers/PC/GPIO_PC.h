/**********************************
* \file : PC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PC_h_
#define _PC_h_

//! \brief Enumerations for this Register
#include "GPIO_PC_enums.h" 

// Base Address for this Register
#define GPIO_PC_BASE_ADDR	0x00000FC4

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PC_Set_fpt)(PC_e);

typedef void(*PC_Clear_fpt)(PC_e);

typedef int(*PC_Read_fpt)(PC_e);

typedef void(*PC_Write_fpt)(PC_e, int);

// Structure Declaration
struct GPIO_PC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PC_Write_fpt	write;

};

typedef struct GPIO_PC_obj GPIO_PC_t;

// Initializer
GPIO_PC_t init_GPIO_PC(void);


#endif // _PC_h_

