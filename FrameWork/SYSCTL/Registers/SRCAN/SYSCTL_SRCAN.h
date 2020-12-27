/**********************************
* \file : SRCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCAN_h_
#define _SRCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCAN_BASE_ADDR	0x400FE534

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRCAN_Set_fpt)(SRCAN_e);

typedef void(*SRCAN_Clear_fpt)(SRCAN_e);

typedef int(*SRCAN_Read_fpt)(SRCAN_e);

typedef void(*SRCAN_Write_fpt)(SRCAN_e, int);

// Structure Declaration
struct SYSCTL_SRCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRCAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRCAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRCAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRCAN_Write_fpt	write;

};

typedef struct SYSCTL_SRCAN_obj SYSCTL_SRCAN_t;

// Initializer
SYSCTL_SRCAN_t init_SYSCTL_SRCAN(void);


#endif // _SRCAN_h_

