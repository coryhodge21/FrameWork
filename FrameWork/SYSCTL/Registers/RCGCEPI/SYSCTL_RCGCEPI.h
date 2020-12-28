/**********************************
* \file : RCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEPI_h_
#define _RCGCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCEPI_BASE_ADDR	0x400FE610

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCEPI_Set_fpt)(RCGCEPI_e);

typedef void(*RCGCEPI_Clear_fpt)(RCGCEPI_e);

typedef int(*RCGCEPI_Read_fpt)(RCGCEPI_e);

typedef void(*RCGCEPI_Write_fpt)(RCGCEPI_e, int);

// Structure Declaration
struct SYSCTL_RCGCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCEPI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCEPI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCEPI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCEPI_Write_fpt	write;

};

typedef struct SYSCTL_RCGCEPI_obj SYSCTL_RCGCEPI_t;

// Initializer
SYSCTL_RCGCEPI_t init_SYSCTL_RCGCEPI(void);


#endif // _RCGCEPI_h_

