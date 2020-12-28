/**********************************
* \file : IM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _IM_h_
#define _IM_h_

//! \brief Enumerations for this Register
#include "GPIO_IM_enums.h" 

// Base Address for this Register
#define GPIO_IM_BASE_ADDR	0x00000410

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*IM_Set_fpt)(IM_e);

typedef void(*IM_Clear_fpt)(IM_e);

typedef int(*IM_Read_fpt)(IM_e);

typedef void(*IM_Write_fpt)(IM_e, int);

// Structure Declaration
struct GPIO_IM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	IM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 IM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	IM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	IM_Write_fpt	write;

};

typedef struct GPIO_IM_obj GPIO_IM_t;

// Initializer
GPIO_IM_t init_GPIO_IM(void);


#endif // _IM_h_

