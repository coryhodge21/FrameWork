/**********************************
* \file : AFSEL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _AFSEL_h_
#define _AFSEL_h_

//! \brief Enumerations for this Register
#include "GPIO_AFSEL_enums.h" 

// Base Address for this Register
#define GPIO_AFSEL_BASE_ADDR	0x00000420

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*AFSEL_Set_fpt)(AFSEL_e);

typedef void(*AFSEL_Clear_fpt)(AFSEL_e);

typedef int(*AFSEL_Read_fpt)(AFSEL_e);

typedef void(*AFSEL_Write_fpt)(AFSEL_e, int);

// Structure Declaration
struct GPIO_AFSEL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	AFSEL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 AFSEL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	AFSEL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	AFSEL_Write_fpt	write;

};

typedef struct GPIO_AFSEL_obj GPIO_AFSEL_t;

// Initializer
GPIO_AFSEL_t init_GPIO_AFSEL(void);


#endif // _AFSEL_h_

