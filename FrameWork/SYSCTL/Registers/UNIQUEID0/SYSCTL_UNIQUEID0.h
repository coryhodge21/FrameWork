/**********************************
* \file : UNIQUEID0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID0_h_
#define _UNIQUEID0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID0_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID0_BASE_ADDR	0x400FEF20

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*UNIQUEID0_Set_fpt)(UNIQUEID0_e);

typedef void(*UNIQUEID0_Clear_fpt)(UNIQUEID0_e);

typedef int(*UNIQUEID0_Read_fpt)(UNIQUEID0_e);

typedef void(*UNIQUEID0_Write_fpt)(UNIQUEID0_e, int);

// Structure Declaration
struct SYSCTL_UNIQUEID0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	UNIQUEID0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 UNIQUEID0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	UNIQUEID0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	UNIQUEID0_Write_fpt	write;

};

typedef struct SYSCTL_UNIQUEID0_obj SYSCTL_UNIQUEID0_t;

// Initializer
SYSCTL_UNIQUEID0_t init_SYSCTL_UNIQUEID0(void);


#endif // _UNIQUEID0_h_

