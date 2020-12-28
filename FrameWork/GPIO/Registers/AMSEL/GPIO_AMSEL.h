/**********************************
* \file : AMSEL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _AMSEL_h_
#define _AMSEL_h_

//! \brief Enumerations for this Register
#include "GPIO_AMSEL_enums.h" 

// Base Address for this Register
#define GPIO_AMSEL_BASE_ADDR	0x00000528

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*AMSEL_Set_fpt)(AMSEL_e);

typedef void(*AMSEL_Clear_fpt)(AMSEL_e);

typedef int(*AMSEL_Read_fpt)(AMSEL_e);

typedef void(*AMSEL_Write_fpt)(AMSEL_e, int);

// Structure Declaration
struct GPIO_AMSEL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	AMSEL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 AMSEL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	AMSEL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	AMSEL_Write_fpt	write;

};

typedef struct GPIO_AMSEL_obj GPIO_AMSEL_t;

// Initializer
GPIO_AMSEL_t init_GPIO_AMSEL(void);


#endif // _AMSEL_h_

