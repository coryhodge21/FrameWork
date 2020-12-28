/**********************************
* \file : DEN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DEN_h_
#define _DEN_h_

//! \brief Enumerations for this Register
#include "GPIO_DEN_enums.h" 

// Base Address for this Register
#define GPIO_DEN_BASE_ADDR	0x0000051C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DEN_Set_fpt)(DEN_e);

typedef void(*DEN_Clear_fpt)(DEN_e);

typedef int(*DEN_Read_fpt)(DEN_e);

typedef void(*DEN_Write_fpt)(DEN_e, int);

// Structure Declaration
struct GPIO_DEN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DEN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DEN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DEN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DEN_Write_fpt	write;

};

typedef struct GPIO_DEN_obj GPIO_DEN_t;

// Initializer
GPIO_DEN_t init_GPIO_DEN(void);


#endif // _DEN_h_

