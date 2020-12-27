/**********************************
* \file : PPI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPI2C_h_
#define _PPI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_PPI2C_BASE_ADDR	0x400FE320

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPI2C_Set_fpt)(PPI2C_e);

typedef void(*PPI2C_Clear_fpt)(PPI2C_e);

typedef int(*PPI2C_Read_fpt)(PPI2C_e);

typedef void(*PPI2C_Write_fpt)(PPI2C_e, int);

// Structure Declaration
struct SYSCTL_PPI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPI2C_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPI2C_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPI2C_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPI2C_Write_fpt	write;

};

typedef struct SYSCTL_PPI2C_obj SYSCTL_PPI2C_t;

// Initializer
SYSCTL_PPI2C_t init_SYSCTL_PPI2C(void);


#endif // _PPI2C_h_

