/**********************************
* \file : DCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCHIB_h_
#define _DCGCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCHIB_BASE_ADDR	0x400FE814

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCHIB_Set_fpt)(DCGCHIB_e);

typedef void(*DCGCHIB_Clear_fpt)(DCGCHIB_e);

typedef int(*DCGCHIB_Read_fpt)(DCGCHIB_e);

typedef void(*DCGCHIB_Write_fpt)(DCGCHIB_e, int);

// Structure Declaration
struct SYSCTL_DCGCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCHIB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCHIB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCHIB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCHIB_Write_fpt	write;

};

typedef struct SYSCTL_DCGCHIB_obj SYSCTL_DCGCHIB_t;

// Initializer
SYSCTL_DCGCHIB_t init_SYSCTL_DCGCHIB(void);


#endif // _DCGCHIB_h_

