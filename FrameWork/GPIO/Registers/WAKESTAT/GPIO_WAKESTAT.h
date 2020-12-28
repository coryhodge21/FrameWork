/**********************************
* \file : WAKESTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _WAKESTAT_h_
#define _WAKESTAT_h_

//! \brief Enumerations for this Register
#include "GPIO_WAKESTAT_enums.h" 

// Base Address for this Register
#define GPIO_WAKESTAT_BASE_ADDR	0x00000548

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*WAKESTAT_Set_fpt)(WAKESTAT_e);

typedef void(*WAKESTAT_Clear_fpt)(WAKESTAT_e);

typedef int(*WAKESTAT_Read_fpt)(WAKESTAT_e);

typedef void(*WAKESTAT_Write_fpt)(WAKESTAT_e, int);

// Structure Declaration
struct GPIO_WAKESTAT_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	WAKESTAT_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 WAKESTAT_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	WAKESTAT_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	WAKESTAT_Write_fpt	write;

};

typedef struct GPIO_WAKESTAT_obj GPIO_WAKESTAT_t;

// Initializer
GPIO_WAKESTAT_t init_GPIO_WAKESTAT(void);


#endif // _WAKESTAT_h_

