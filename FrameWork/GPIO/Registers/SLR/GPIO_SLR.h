/**********************************
* \file : SLR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SLR_h_
#define _SLR_h_

//! \brief Enumerations for this Register
#include "GPIO_SLR_enums.h" 

// Base Address for this Register
#define GPIO_SLR_BASE_ADDR	0x00000518

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SLR_Set_fpt)(SLR_e);

typedef void(*SLR_Clear_fpt)(SLR_e);

typedef int(*SLR_Read_fpt)(SLR_e);

typedef void(*SLR_Write_fpt)(SLR_e, int);

// Structure Declaration
struct GPIO_SLR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SLR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SLR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SLR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SLR_Write_fpt	write;

};

typedef struct GPIO_SLR_obj GPIO_SLR_t;

// Initializer
GPIO_SLR_t init_GPIO_SLR(void);


#endif // _SLR_h_

