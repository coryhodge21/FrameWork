/**********************************
* \file : IBE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _IBE_h_
#define _IBE_h_

//! \brief Enumerations for this Register
#include "GPIO_IBE_enums.h" 

// Base Address for this Register
#define GPIO_IBE_BASE_ADDR	0x00000408

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*IBE_Set_fpt)(IBE_e);

typedef void(*IBE_Clear_fpt)(IBE_e);

typedef int(*IBE_Read_fpt)(IBE_e);

typedef void(*IBE_Write_fpt)(IBE_e, int);

// Structure Declaration
struct GPIO_IBE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	IBE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 IBE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	IBE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	IBE_Write_fpt	write;

};

typedef struct GPIO_IBE_obj GPIO_IBE_t;

// Initializer
GPIO_IBE_t init_GPIO_IBE(void);


#endif // _IBE_h_

