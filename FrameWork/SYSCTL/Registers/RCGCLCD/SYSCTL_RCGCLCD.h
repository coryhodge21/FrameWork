/**********************************
* \file : RCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCLCD_h_
#define _RCGCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCLCD_BASE_ADDR	0x400FE690

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCLCD_Set_fpt)(RCGCLCD_e);

typedef void(*RCGCLCD_Clear_fpt)(RCGCLCD_e);

typedef int(*RCGCLCD_Read_fpt)(RCGCLCD_e);

typedef void(*RCGCLCD_Write_fpt)(RCGCLCD_e, int);

// Structure Declaration
struct SYSCTL_RCGCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCLCD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCLCD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCLCD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCLCD_Write_fpt	write;

};

typedef struct SYSCTL_RCGCLCD_obj SYSCTL_RCGCLCD_t;

// Initializer
SYSCTL_RCGCLCD_t init_SYSCTL_RCGCLCD(void);


#endif // _RCGCLCD_h_

