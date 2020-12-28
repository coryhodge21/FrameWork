/**********************************
* \file : LOCK.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LOCK_h_
#define _LOCK_h_

//! \brief Enumerations for this Register
#include "GPIO_LOCK_enums.h" 

// Base Address for this Register
#define GPIO_LOCK_BASE_ADDR	0x00000520

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*LOCK_Set_fpt)(LOCK_e);

typedef void(*LOCK_Clear_fpt)(LOCK_e);

typedef int(*LOCK_Read_fpt)(LOCK_e);

typedef void(*LOCK_Write_fpt)(LOCK_e, int);

// Structure Declaration
struct GPIO_LOCK_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	LOCK_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 LOCK_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	LOCK_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	LOCK_Write_fpt	write;

};

typedef struct GPIO_LOCK_obj GPIO_LOCK_t;

// Initializer
GPIO_LOCK_t init_GPIO_LOCK(void);


#endif // _LOCK_h_

