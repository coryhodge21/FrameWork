/**********************************
* \file : SCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEPI_h_
#define _SCGCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCEPI_BASE_ADDR	0x400FE710

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCEPI_Set_fpt)(SCGCEPI_e);

typedef void(*SCGCEPI_Clear_fpt)(SCGCEPI_e);

typedef int(*SCGCEPI_Read_fpt)(SCGCEPI_e);

typedef void(*SCGCEPI_Write_fpt)(SCGCEPI_e, int);

// Structure Declaration
struct SYSCTL_SCGCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCEPI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCEPI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCEPI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCEPI_Write_fpt	write;

};

typedef struct SYSCTL_SCGCEPI_obj SYSCTL_SCGCEPI_t;

// Initializer
SYSCTL_SCGCEPI_t init_SYSCTL_SCGCEPI(void);


#endif // _SCGCEPI_h_

