/**********************************
* \file : PRCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRCCM_h_
#define _PRCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_PRCCM_BASE_ADDR	0x400FEA74

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRCCM_Set_fpt)(PRCCM_e);

typedef void(*PRCCM_Clear_fpt)(PRCCM_e);

typedef int(*PRCCM_Read_fpt)(PRCCM_e);

typedef void(*PRCCM_Write_fpt)(PRCCM_e, int);

// Structure Declaration
struct SYSCTL_PRCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRCCM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRCCM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRCCM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRCCM_Write_fpt	write;

};

typedef struct SYSCTL_PRCCM_obj SYSCTL_PRCCM_t;

// Initializer
SYSCTL_PRCCM_t init_SYSCTL_PRCCM(void);


#endif // _PRCCM_h_

