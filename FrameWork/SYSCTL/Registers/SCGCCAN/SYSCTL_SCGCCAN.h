/**********************************
* \file : SCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCCAN_h_
#define _SCGCCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCCAN_BASE_ADDR	0x400FE734

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCCAN_Set_fpt)(SCGCCAN_e);

typedef void(*SCGCCAN_Clear_fpt)(SCGCCAN_e);

typedef int(*SCGCCAN_Read_fpt)(SCGCCAN_e);

typedef void(*SCGCCAN_Write_fpt)(SCGCCAN_e, int);

// Structure Declaration
struct SYSCTL_SCGCCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCCAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCCAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCCAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCCAN_Write_fpt	write;

};

typedef struct SYSCTL_SCGCCAN_obj SYSCTL_SCGCCAN_t;

// Initializer
SYSCTL_SCGCCAN_t init_SYSCTL_SCGCCAN(void);


#endif // _SCGCCAN_h_

