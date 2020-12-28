/**********************************
* \file : DR4R.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DR4R_h_
#define _DR4R_h_

//! \brief Enumerations for this Register
#include "GPIO_DR4R_enums.h" 

// Base Address for this Register
#define GPIO_DR4R_BASE_ADDR	0x00000504

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DR4R_Set_fpt)(DR4R_e);

typedef void(*DR4R_Clear_fpt)(DR4R_e);

typedef int(*DR4R_Read_fpt)(DR4R_e);

typedef void(*DR4R_Write_fpt)(DR4R_e, int);

// Structure Declaration
struct GPIO_DR4R_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DR4R_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DR4R_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DR4R_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DR4R_Write_fpt	write;

};

typedef struct GPIO_DR4R_obj GPIO_DR4R_t;

// Initializer
GPIO_DR4R_t init_GPIO_DR4R(void);


#endif // _DR4R_h_

