/**********************************
* \file : PCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCI2C_h_
#define _PCI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_PCI2C_BASE_ADDR	0x400FE920

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCI2C_Set_fpt)(PCI2C_e);

typedef void(*PCI2C_Clear_fpt)(PCI2C_e);

typedef int(*PCI2C_Read_fpt)(PCI2C_e);

typedef void(*PCI2C_Write_fpt)(PCI2C_e, int);

// Structure Declaration
struct SYSCTL_PCI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCI2C_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCI2C_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCI2C_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCI2C_Write_fpt	write;

};

typedef struct SYSCTL_PCI2C_obj SYSCTL_PCI2C_t;

// Initializer
SYSCTL_PCI2C_t init_SYSCTL_PCI2C(void);


#endif // _PCI2C_h_

