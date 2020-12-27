/**********************************
* \file : PPCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPCCM_h_
#define _PPCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_PPCCM_BASE_ADDR	0x400FE374

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPCCM_Set_fpt)(PPCCM_e);

typedef void(*PPCCM_Clear_fpt)(PPCCM_e);

typedef int(*PPCCM_Read_fpt)(PPCCM_e);

typedef void(*PPCCM_Write_fpt)(PPCCM_e, int);

// Structure Declaration
struct SYSCTL_PPCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPCCM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPCCM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPCCM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPCCM_Write_fpt	write;

};

typedef struct SYSCTL_PPCCM_obj SYSCTL_PPCCM_t;

// Initializer
SYSCTL_PPCCM_t init_SYSCTL_PPCCM(void);


#endif // _PPCCM_h_

