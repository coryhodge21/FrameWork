/**********************************
* \file : PCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEPI_h_
#define _PCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_PCEPI_BASE_ADDR	0x400FE910

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCEPI_Set_fpt)(PCEPI_e);

typedef void(*PCEPI_Clear_fpt)(PCEPI_e);

typedef int(*PCEPI_Read_fpt)(PCEPI_e);

typedef void(*PCEPI_Write_fpt)(PCEPI_e, int);

// Structure Declaration
struct SYSCTL_PCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCEPI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCEPI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCEPI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCEPI_Write_fpt	write;

};

typedef struct SYSCTL_PCEPI_obj SYSCTL_PCEPI_t;

// Initializer
SYSCTL_PCEPI_t init_SYSCTL_PCEPI(void);


#endif // _PCEPI_h_

