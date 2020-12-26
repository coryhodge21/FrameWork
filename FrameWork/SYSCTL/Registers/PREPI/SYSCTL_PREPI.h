/**********************************
* \file : PREPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREPI_h_
#define _PREPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PREPI_enums.h" 

// Base Address for this Register
#define SYSCTL_PREPI_BASE_ADDR	0x400FEA10

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PREPI_Set_fpt)(PREPI_e);

typedef void(*PREPI_Clear_fpt)(PREPI_e);

typedef int(*PREPI_Read_fpt)(PREPI_e);

typedef void(*PREPI_Write_fpt)(PREPI_e, int);

// Structure Declaration
struct SYSCTL_PREPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PREPI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PREPI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PREPI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PREPI_Write_fpt	write;

};

typedef struct SYSCTL_PREPI_obj SYSCTL_PREPI_t;

// Initializer
SYSCTL_PREPI_t init_SYSCTL_PREPI(void);


#endif // _PREPI_h_

