/**********************************
* \file : DCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCCCM_h_
#define _DCGCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCCCM_BASE_ADDR	0x400FE874

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCCCM_Set_fpt)(DCGCCCM_e);

typedef void(*DCGCCCM_Clear_fpt)(DCGCCCM_e);

typedef int(*DCGCCCM_Read_fpt)(DCGCCCM_e);

typedef void(*DCGCCCM_Write_fpt)(DCGCCCM_e, int);

// Structure Declaration
struct SYSCTL_DCGCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCCCM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCCCM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCCCM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCCCM_Write_fpt	write;

};

typedef struct SYSCTL_DCGCCCM_obj SYSCTL_DCGCCCM_t;

// Initializer
SYSCTL_DCGCCCM_t init_SYSCTL_DCGCCCM(void);


#endif // _DCGCCCM_h_

