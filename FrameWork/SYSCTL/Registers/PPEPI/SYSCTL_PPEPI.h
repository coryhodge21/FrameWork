/**********************************
* \file : PPEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEPI_h_
#define _PPEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_PPEPI_BASE_ADDR	0x400FE310

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPEPI_Set_fpt)(PPEPI_e);

typedef void(*PPEPI_Clear_fpt)(PPEPI_e);

typedef int(*PPEPI_Read_fpt)(PPEPI_e);

typedef void(*PPEPI_Write_fpt)(PPEPI_e, int);

// Structure Declaration
struct SYSCTL_PPEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPEPI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPEPI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPEPI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPEPI_Write_fpt	write;

};

typedef struct SYSCTL_PPEPI_obj SYSCTL_PPEPI_t;

// Initializer
SYSCTL_PPEPI_t init_SYSCTL_PPEPI(void);


#endif // _PPEPI_h_

