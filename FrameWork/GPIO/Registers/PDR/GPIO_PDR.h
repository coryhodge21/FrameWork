/**********************************
* \file : PDR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PDR_h_
#define _PDR_h_

//! \brief Enumerations for this Register
#include "GPIO_PDR_enums.h" 

// Base Address for this Register
#define GPIO_PDR_BASE_ADDR	0x00000514

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PDR_Set_fpt)(PDR_e);

typedef void(*PDR_Clear_fpt)(PDR_e);

typedef int(*PDR_Read_fpt)(PDR_e);

typedef void(*PDR_Write_fpt)(PDR_e, int);

// Structure Declaration
struct GPIO_PDR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PDR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PDR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PDR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PDR_Write_fpt	write;

};

typedef struct GPIO_PDR_obj GPIO_PDR_t;

// Initializer
GPIO_PDR_t init_GPIO_PDR(void);


#endif // _PDR_h_

