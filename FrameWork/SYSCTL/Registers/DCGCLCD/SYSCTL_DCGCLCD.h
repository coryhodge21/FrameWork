/**********************************
* \file : DCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCLCD_h_
#define _DCGCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCLCD_BASE_ADDR	0x400FE890

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCLCD_Set_fpt)(DCGCLCD_e);

typedef void(*DCGCLCD_Clear_fpt)(DCGCLCD_e);

typedef int(*DCGCLCD_Read_fpt)(DCGCLCD_e);

typedef void(*DCGCLCD_Write_fpt)(DCGCLCD_e, int);

// Structure Declaration
struct SYSCTL_DCGCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCLCD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCLCD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCLCD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCLCD_Write_fpt	write;

};

typedef struct SYSCTL_DCGCLCD_obj SYSCTL_DCGCLCD_t;

// Initializer
SYSCTL_DCGCLCD_t init_SYSCTL_DCGCLCD(void);


#endif // _DCGCLCD_h_

