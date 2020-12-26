/**********************************
* \file : SCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCHIB_h_
#define _SCGCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCHIB_BASE_ADDR	0x400FE714

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCHIB_Set_fpt)(SCGCHIB_e);

typedef void(*SCGCHIB_Clear_fpt)(SCGCHIB_e);

typedef int(*SCGCHIB_Read_fpt)(SCGCHIB_e);

typedef void(*SCGCHIB_Write_fpt)(SCGCHIB_e, int);

// Structure Declaration
struct SYSCTL_SCGCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCHIB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCHIB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCHIB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCHIB_Write_fpt	write;

};

typedef struct SYSCTL_SCGCHIB_obj SYSCTL_SCGCHIB_t;

// Initializer
SYSCTL_SCGCHIB_t init_SYSCTL_SCGCHIB(void);


#endif // _SCGCHIB_h_

