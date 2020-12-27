/**********************************
* \file : PCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCCCM_h_
#define _PCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_PCCCM_BASE_ADDR	0x400FE974

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCCCM_Set_fpt)(PCCCM_e);

typedef void(*PCCCM_Clear_fpt)(PCCCM_e);

typedef int(*PCCCM_Read_fpt)(PCCCM_e);

typedef void(*PCCCM_Write_fpt)(PCCCM_e, int);

// Structure Declaration
struct SYSCTL_PCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCCCM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCCCM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCCCM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCCCM_Write_fpt	write;

};

typedef struct SYSCTL_PCCCM_obj SYSCTL_PCCCM_t;

// Initializer
SYSCTL_PCCCM_t init_SYSCTL_PCCCM(void);


#endif // _PCCCM_h_

