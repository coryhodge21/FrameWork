/**********************************
* \file : DR12R.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DR12R_h_
#define _DR12R_h_

//! \brief Enumerations for this Register
#include "GPIO_DR12R_enums.h" 

// Base Address for this Register
#define GPIO_DR12R_BASE_ADDR	0x0000053C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DR12R_Set_fpt)(DR12R_e);

typedef void(*DR12R_Clear_fpt)(DR12R_e);

typedef int(*DR12R_Read_fpt)(DR12R_e);

typedef void(*DR12R_Write_fpt)(DR12R_e, int);

// Structure Declaration
struct GPIO_DR12R_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DR12R_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DR12R_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DR12R_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DR12R_Write_fpt	write;

};

typedef struct GPIO_DR12R_obj GPIO_DR12R_t;

// Initializer
GPIO_DR12R_t init_GPIO_DR12R(void);


#endif // _DR12R_h_

