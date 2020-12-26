/**********************************
* \file : PRI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRI2C_h_
#define _PRI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_PRI2C_BASE_ADDR	0x400FEA20

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRI2C_Set_fpt)(PRI2C_e);

typedef void(*PRI2C_Clear_fpt)(PRI2C_e);

typedef int(*PRI2C_Read_fpt)(PRI2C_e);

typedef void(*PRI2C_Write_fpt)(PRI2C_e, int);

// Structure Declaration
struct SYSCTL_PRI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRI2C_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRI2C_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRI2C_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRI2C_Write_fpt	write;

};

typedef struct SYSCTL_PRI2C_obj SYSCTL_PRI2C_t;

// Initializer
SYSCTL_PRI2C_t init_SYSCTL_PRI2C(void);


#endif // _PRI2C_h_

