/**********************************
* \file : WAKEPEN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _WAKEPEN_h_
#define _WAKEPEN_h_

//! \brief Enumerations for this Register
#include "GPIO_WAKEPEN_enums.h" 

// Base Address for this Register
#define GPIO_WAKEPEN_BASE_ADDR	0x00000540

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*WAKEPEN_Set_fpt)(WAKEPEN_e);

typedef void(*WAKEPEN_Clear_fpt)(WAKEPEN_e);

typedef int(*WAKEPEN_Read_fpt)(WAKEPEN_e);

typedef void(*WAKEPEN_Write_fpt)(WAKEPEN_e, int);

// Structure Declaration
struct GPIO_WAKEPEN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	WAKEPEN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 WAKEPEN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	WAKEPEN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	WAKEPEN_Write_fpt	write;

};

typedef struct GPIO_WAKEPEN_obj GPIO_WAKEPEN_t;

// Initializer
GPIO_WAKEPEN_t init_GPIO_WAKEPEN(void);


#endif // _WAKEPEN_h_

