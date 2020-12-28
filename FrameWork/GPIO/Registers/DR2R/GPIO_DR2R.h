/**********************************
* \file : DR2R.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DR2R_h_
#define _DR2R_h_

//! \brief Enumerations for this Register
#include "GPIO_DR2R_enums.h" 

// Base Address for this Register
#define GPIO_DR2R_BASE_ADDR	0x00000500

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DR2R_Set_fpt)(DR2R_e);

typedef void(*DR2R_Clear_fpt)(DR2R_e);

typedef int(*DR2R_Read_fpt)(DR2R_e);

typedef void(*DR2R_Write_fpt)(DR2R_e, int);

// Structure Declaration
struct GPIO_DR2R_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DR2R_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DR2R_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DR2R_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DR2R_Write_fpt	write;

};

typedef struct GPIO_DR2R_obj GPIO_DR2R_t;

// Initializer
GPIO_DR2R_t init_GPIO_DR2R(void);


#endif // _DR2R_h_

