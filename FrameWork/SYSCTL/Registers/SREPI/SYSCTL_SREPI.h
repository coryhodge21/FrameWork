/**********************************
* \file : SREPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREPI_h_
#define _SREPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREPI_enums.h" 

// Base Address for this Register
#define SYSCTL_SREPI_BASE_ADDR	0x400FE510

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SREPI_Set_fpt)(SREPI_e);

typedef void(*SREPI_Clear_fpt)(SREPI_e);

typedef int(*SREPI_Read_fpt)(SREPI_e);

typedef void(*SREPI_Write_fpt)(SREPI_e, int);

// Structure Declaration
struct SYSCTL_SREPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SREPI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SREPI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SREPI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SREPI_Write_fpt	write;

};

typedef struct SYSCTL_SREPI_obj SYSCTL_SREPI_t;

// Initializer
SYSCTL_SREPI_t init_SYSCTL_SREPI(void);


#endif // _SREPI_h_

