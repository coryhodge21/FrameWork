/**********************************
* \file : PRLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRLCD_h_
#define _PRLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_PRLCD_BASE_ADDR	0x400FEA90

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRLCD_Set_fpt)(PRLCD_e);

typedef void(*PRLCD_Clear_fpt)(PRLCD_e);

typedef int(*PRLCD_Read_fpt)(PRLCD_e);

typedef void(*PRLCD_Write_fpt)(PRLCD_e, int);

// Structure Declaration
struct SYSCTL_PRLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRLCD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRLCD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRLCD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRLCD_Write_fpt	write;

};

typedef struct SYSCTL_PRLCD_obj SYSCTL_PRLCD_t;

// Initializer
SYSCTL_PRLCD_t init_SYSCTL_PRLCD(void);


#endif // _PRLCD_h_

