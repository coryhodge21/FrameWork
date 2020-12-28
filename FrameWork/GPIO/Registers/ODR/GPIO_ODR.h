/**********************************
* \file : ODR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _ODR_h_
#define _ODR_h_

//! \brief Enumerations for this Register
#include "GPIO_ODR_enums.h" 

// Base Address for this Register
#define GPIO_ODR_BASE_ADDR	0x0000050C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*ODR_Set_fpt)(ODR_e);

typedef void(*ODR_Clear_fpt)(ODR_e);

typedef int(*ODR_Read_fpt)(ODR_e);

typedef void(*ODR_Write_fpt)(ODR_e, int);

// Structure Declaration
struct GPIO_ODR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	ODR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 ODR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	ODR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	ODR_Write_fpt	write;

};

typedef struct GPIO_ODR_obj GPIO_ODR_t;

// Initializer
GPIO_ODR_t init_GPIO_ODR(void);


#endif // _ODR_h_

