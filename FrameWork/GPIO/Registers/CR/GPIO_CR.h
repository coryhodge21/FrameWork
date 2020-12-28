/**********************************
* \file : CR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _CR_h_
#define _CR_h_

//! \brief Enumerations for this Register
#include "GPIO_CR_enums.h" 

// Base Address for this Register
#define GPIO_CR_BASE_ADDR	0x00000524

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*CR_Set_fpt)(CR_e);

typedef void(*CR_Clear_fpt)(CR_e);

typedef int(*CR_Read_fpt)(CR_e);

typedef void(*CR_Write_fpt)(CR_e, int);

// Structure Declaration
struct GPIO_CR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	CR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 CR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	CR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	CR_Write_fpt	write;

};

typedef struct GPIO_CR_obj GPIO_CR_t;

// Initializer
GPIO_CR_t init_GPIO_CR(void);


#endif // _CR_h_

