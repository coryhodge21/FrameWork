/**********************************
* \file : IS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _IS_h_
#define _IS_h_

//! \brief Enumerations for this Register
#include "GPIO_IS_enums.h" 

// Base Address for this Register
#define GPIO_IS_BASE_ADDR	0x00000404

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*IS_Set_fpt)(IS_e);

typedef void(*IS_Clear_fpt)(IS_e);

typedef int(*IS_Read_fpt)(IS_e);

typedef void(*IS_Write_fpt)(IS_e, int);

// Structure Declaration
struct GPIO_IS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	IS_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 IS_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	IS_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	IS_Write_fpt	write;

};

typedef struct GPIO_IS_obj GPIO_IS_t;

// Initializer
GPIO_IS_t init_GPIO_IS(void);


#endif // _IS_h_

