/**********************************
* \file : DCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEPHY_h_
#define _DCGCEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEPHY_BASE_ADDR	0x400FE830

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCEPHY_Set_fpt)(DCGCEPHY_e);

typedef void(*DCGCEPHY_Clear_fpt)(DCGCEPHY_e);

typedef int(*DCGCEPHY_Read_fpt)(DCGCEPHY_e);

typedef void(*DCGCEPHY_Write_fpt)(DCGCEPHY_e, int);

// Structure Declaration
struct SYSCTL_DCGCEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCEPHY_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCEPHY_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCEPHY_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCEPHY_Write_fpt	write;

};

typedef struct SYSCTL_DCGCEPHY_obj SYSCTL_DCGCEPHY_t;

// Initializer
SYSCTL_DCGCEPHY_t init_SYSCTL_DCGCEPHY(void);


#endif // _DCGCEPHY_h_

