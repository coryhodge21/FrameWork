/**********************************
* \file : RCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCHIB_h_
#define _RCGCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCHIB_BASE_ADDR	0x400FE614

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCHIB_Set_fpt)(RCGCHIB_e);

typedef void(*RCGCHIB_Clear_fpt)(RCGCHIB_e);

typedef int(*RCGCHIB_Read_fpt)(RCGCHIB_e);

typedef void(*RCGCHIB_Write_fpt)(RCGCHIB_e, int);

// Structure Declaration
struct SYSCTL_RCGCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCHIB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCHIB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCHIB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCHIB_Write_fpt	write;

};

typedef struct SYSCTL_RCGCHIB_obj SYSCTL_RCGCHIB_t;

// Initializer
SYSCTL_RCGCHIB_t init_SYSCTL_RCGCHIB(void);


#endif // _RCGCHIB_h_

