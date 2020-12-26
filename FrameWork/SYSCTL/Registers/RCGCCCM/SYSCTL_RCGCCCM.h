/**********************************
* \file : RCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCCCM_h_
#define _RCGCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCCCM_BASE_ADDR	0x400FE674

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCCCM_Set_fpt)(RCGCCCM_e);

typedef void(*RCGCCCM_Clear_fpt)(RCGCCCM_e);

typedef int(*RCGCCCM_Read_fpt)(RCGCCCM_e);

typedef void(*RCGCCCM_Write_fpt)(RCGCCCM_e, int);

// Structure Declaration
struct SYSCTL_RCGCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCCCM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCCCM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCCCM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCCCM_Write_fpt	write;

};

typedef struct SYSCTL_RCGCCCM_obj SYSCTL_RCGCCCM_t;

// Initializer
SYSCTL_RCGCCCM_t init_SYSCTL_RCGCCCM(void);


#endif // _RCGCCCM_h_

