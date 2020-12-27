/**********************************
* \file : SCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCCCM_h_
#define _SCGCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCCCM_BASE_ADDR	0x400FE774

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCCCM_Set_fpt)(SCGCCCM_e);

typedef void(*SCGCCCM_Clear_fpt)(SCGCCCM_e);

typedef int(*SCGCCCM_Read_fpt)(SCGCCCM_e);

typedef void(*SCGCCCM_Write_fpt)(SCGCCCM_e, int);

// Structure Declaration
struct SYSCTL_SCGCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCCCM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCCCM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCCCM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCCCM_Write_fpt	write;

};

typedef struct SYSCTL_SCGCCCM_obj SYSCTL_SCGCCCM_t;

// Initializer
SYSCTL_SCGCCCM_t init_SYSCTL_SCGCCCM(void);


#endif // _SCGCCCM_h_

