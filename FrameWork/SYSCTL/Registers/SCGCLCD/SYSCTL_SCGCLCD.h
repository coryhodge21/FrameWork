/**********************************
* \file : SCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCLCD_h_
#define _SCGCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCLCD_BASE_ADDR	0x400FE790

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCLCD_Set_fpt)(SCGCLCD_e);

typedef void(*SCGCLCD_Clear_fpt)(SCGCLCD_e);

typedef int(*SCGCLCD_Read_fpt)(SCGCLCD_e);

typedef void(*SCGCLCD_Write_fpt)(SCGCLCD_e, int);

// Structure Declaration
struct SYSCTL_SCGCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCLCD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCLCD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCLCD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCLCD_Write_fpt	write;

};

typedef struct SYSCTL_SCGCLCD_obj SYSCTL_SCGCLCD_t;

// Initializer
SYSCTL_SCGCLCD_t init_SYSCTL_SCGCLCD(void);


#endif // _SCGCLCD_h_

