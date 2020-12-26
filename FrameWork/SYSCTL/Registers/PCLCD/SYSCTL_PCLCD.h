/**********************************
* \file : PCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCLCD_h_
#define _PCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_PCLCD_BASE_ADDR	0x400FE990

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCLCD_Set_fpt)(PCLCD_e);

typedef void(*PCLCD_Clear_fpt)(PCLCD_e);

typedef int(*PCLCD_Read_fpt)(PCLCD_e);

typedef void(*PCLCD_Write_fpt)(PCLCD_e, int);

// Structure Declaration
struct SYSCTL_PCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCLCD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCLCD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCLCD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCLCD_Write_fpt	write;

};

typedef struct SYSCTL_PCLCD_obj SYSCTL_PCLCD_t;

// Initializer
SYSCTL_PCLCD_t init_SYSCTL_PCLCD(void);


#endif // _PCLCD_h_

