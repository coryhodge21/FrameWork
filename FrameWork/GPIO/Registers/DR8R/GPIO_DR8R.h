/**********************************
* \file : DR8R.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DR8R_h_
#define _DR8R_h_

//! \brief Enumerations for this Register
#include "GPIO_DR8R_enums.h" 

// Base Address for this Register
#define GPIO_DR8R_BASE_ADDR	0x00000508

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DR8R_Set_fpt)(DR8R_e);

typedef void(*DR8R_Clear_fpt)(DR8R_e);

typedef int(*DR8R_Read_fpt)(DR8R_e);

typedef void(*DR8R_Write_fpt)(DR8R_e, int);

// Structure Declaration
struct GPIO_DR8R_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DR8R_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DR8R_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DR8R_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DR8R_Write_fpt	write;

};

typedef struct GPIO_DR8R_obj GPIO_DR8R_t;

// Initializer
GPIO_DR8R_t init_GPIO_DR8R(void);


#endif // _DR8R_h_

