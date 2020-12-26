/**********************************
* \file : PCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCCAN_h_
#define _PCCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PCCAN_BASE_ADDR	0x400FE934

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCCAN_Set_fpt)(PCCAN_e);

typedef void(*PCCAN_Clear_fpt)(PCCAN_e);

typedef int(*PCCAN_Read_fpt)(PCCAN_e);

typedef void(*PCCAN_Write_fpt)(PCCAN_e, int);

// Structure Declaration
struct SYSCTL_PCCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCCAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCCAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCCAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCCAN_Write_fpt	write;

};

typedef struct SYSCTL_PCCAN_obj SYSCTL_PCCAN_t;

// Initializer
SYSCTL_PCCAN_t init_SYSCTL_PCCAN(void);


#endif // _PCCAN_h_

