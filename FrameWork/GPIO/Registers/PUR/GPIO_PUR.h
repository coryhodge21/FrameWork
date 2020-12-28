/**********************************
* \file : PUR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PUR_h_
#define _PUR_h_

//! \brief Enumerations for this Register
#include "GPIO_PUR_enums.h" 

// Base Address for this Register
#define GPIO_PUR_BASE_ADDR	0x00000510

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PUR_Set_fpt)(PUR_e);

typedef void(*PUR_Clear_fpt)(PUR_e);

typedef int(*PUR_Read_fpt)(PUR_e);

typedef void(*PUR_Write_fpt)(PUR_e, int);

// Structure Declaration
struct GPIO_PUR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PUR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PUR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PUR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PUR_Write_fpt	write;

};

typedef struct GPIO_PUR_obj GPIO_PUR_t;

// Initializer
GPIO_PUR_t init_GPIO_PUR(void);


#endif // _PUR_h_

