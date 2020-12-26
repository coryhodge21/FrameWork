/**********************************
* \file : GPIOHBCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _GPIOHBCTL_h_
#define _GPIOHBCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_GPIOHBCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_GPIOHBCTL_BASE_ADDR	0x400FE06C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*GPIOHBCTL_Set_fpt)(GPIOHBCTL_e);

typedef void(*GPIOHBCTL_Clear_fpt)(GPIOHBCTL_e);

typedef int(*GPIOHBCTL_Read_fpt)(GPIOHBCTL_e);

typedef void(*GPIOHBCTL_Write_fpt)(GPIOHBCTL_e, int);

// Structure Declaration
struct SYSCTL_GPIOHBCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	GPIOHBCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 GPIOHBCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	GPIOHBCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	GPIOHBCTL_Write_fpt	write;

};

typedef struct SYSCTL_GPIOHBCTL_obj SYSCTL_GPIOHBCTL_t;

// Initializer
SYSCTL_GPIOHBCTL_t init_SYSCTL_GPIOHBCTL(void);


#endif // _GPIOHBCTL_h_

