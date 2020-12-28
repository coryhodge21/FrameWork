/**********************************
* \file : WAKELVL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _WAKELVL_h_
#define _WAKELVL_h_

//! \brief Enumerations for this Register
#include "GPIO_WAKELVL_enums.h" 

// Base Address for this Register
#define GPIO_WAKELVL_BASE_ADDR	0x00000544

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*WAKELVL_Set_fpt)(WAKELVL_e);

typedef void(*WAKELVL_Clear_fpt)(WAKELVL_e);

typedef int(*WAKELVL_Read_fpt)(WAKELVL_e);

typedef void(*WAKELVL_Write_fpt)(WAKELVL_e, int);

// Structure Declaration
struct GPIO_WAKELVL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	WAKELVL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 WAKELVL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	WAKELVL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	WAKELVL_Write_fpt	write;

};

typedef struct GPIO_WAKELVL_obj GPIO_WAKELVL_t;

// Initializer
GPIO_WAKELVL_t init_GPIO_WAKELVL(void);


#endif // _WAKELVL_h_

