/**********************************
* \file : DCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEPI_h_
#define _DCGCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEPI_BASE_ADDR	0x400FE810

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCEPI_Set_fpt)(DCGCEPI_e);

typedef void(*DCGCEPI_Clear_fpt)(DCGCEPI_e);

typedef int(*DCGCEPI_Read_fpt)(DCGCEPI_e);

typedef void(*DCGCEPI_Write_fpt)(DCGCEPI_e, int);

// Structure Declaration
struct SYSCTL_DCGCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCEPI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCEPI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCEPI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCEPI_Write_fpt	write;

};

typedef struct SYSCTL_DCGCEPI_obj SYSCTL_DCGCEPI_t;

// Initializer
SYSCTL_DCGCEPI_t init_SYSCTL_DCGCEPI(void);


#endif // _DCGCEPI_h_

