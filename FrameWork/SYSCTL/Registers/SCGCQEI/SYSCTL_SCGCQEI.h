/**********************************
* \file : SCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCQEI_h_
#define _SCGCQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCQEI_BASE_ADDR	0x400FE744

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCQEI_Set_fpt)(SCGCQEI_e);

typedef void(*SCGCQEI_Clear_fpt)(SCGCQEI_e);

typedef int(*SCGCQEI_Read_fpt)(SCGCQEI_e);

typedef void(*SCGCQEI_Write_fpt)(SCGCQEI_e, int);

// Structure Declaration
struct SYSCTL_SCGCQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCQEI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCQEI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCQEI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCQEI_Write_fpt	write;

};

typedef struct SYSCTL_SCGCQEI_obj SYSCTL_SCGCQEI_t;

// Initializer
SYSCTL_SCGCQEI_t init_SYSCTL_SCGCQEI(void);


#endif // _SCGCQEI_h_

