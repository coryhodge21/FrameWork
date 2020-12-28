/**********************************
* \file : ICR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _ICR_h_
#define _ICR_h_

//! \brief Enumerations for this Register
#include "GPIO_ICR_enums.h" 

// Base Address for this Register
#define GPIO_ICR_BASE_ADDR	0x0000041C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*ICR_Set_fpt)(ICR_e);

typedef void(*ICR_Clear_fpt)(ICR_e);

typedef int(*ICR_Read_fpt)(ICR_e);

typedef void(*ICR_Write_fpt)(ICR_e, int);

// Structure Declaration
struct GPIO_ICR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	ICR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 ICR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	ICR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	ICR_Write_fpt	write;

};

typedef struct GPIO_ICR_obj GPIO_ICR_t;

// Initializer
GPIO_ICR_t init_GPIO_ICR(void);


#endif // _ICR_h_

