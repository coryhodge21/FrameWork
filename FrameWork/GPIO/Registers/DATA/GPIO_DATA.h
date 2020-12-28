/**********************************
* \file : DATA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DATA_h_
#define _DATA_h_

//! \brief Enumerations for this Register
#include "GPIO_DATA_enums.h" 

// Base Address for this Register
#define GPIO_DATA_BASE_ADDR	0x00000000

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DATA_Set_fpt)(DATA_e);

typedef void(*DATA_Clear_fpt)(DATA_e);

typedef int(*DATA_Read_fpt)(DATA_e);

typedef void(*DATA_Write_fpt)(DATA_e, int);

// Structure Declaration
struct GPIO_DATA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DATA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DATA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DATA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DATA_Write_fpt	write;

};

typedef struct GPIO_DATA_obj GPIO_DATA_t;

// Initializer
GPIO_DATA_t init_GPIO_DATA(void);


#endif // _DATA_h_

