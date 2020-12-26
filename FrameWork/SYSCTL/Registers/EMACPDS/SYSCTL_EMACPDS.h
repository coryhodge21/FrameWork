/**********************************
* \file : EMACPDS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _EMACPDS_h_
#define _EMACPDS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_EMACPDS_enums.h" 

// Base Address for this Register
#define SYSCTL_EMACPDS_BASE_ADDR	0x400FE288

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*EMACPDS_Set_fpt)(EMACPDS_e);

typedef void(*EMACPDS_Clear_fpt)(EMACPDS_e);

typedef int(*EMACPDS_Read_fpt)(EMACPDS_e);

typedef void(*EMACPDS_Write_fpt)(EMACPDS_e, int);

// Structure Declaration
struct SYSCTL_EMACPDS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	EMACPDS_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 EMACPDS_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	EMACPDS_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	EMACPDS_Write_fpt	write;

};

typedef struct SYSCTL_EMACPDS_obj SYSCTL_EMACPDS_t;

// Initializer
SYSCTL_EMACPDS_t init_SYSCTL_EMACPDS(void);


#endif // _EMACPDS_h_

