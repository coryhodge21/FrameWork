/**********************************
* \file : PCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCQEI_h_
#define _PCQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_PCQEI_BASE_ADDR	0x400FE944

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCQEI_Set_fpt)(PCQEI_e);

typedef void(*PCQEI_Clear_fpt)(PCQEI_e);

typedef int(*PCQEI_Read_fpt)(PCQEI_e);

typedef void(*PCQEI_Write_fpt)(PCQEI_e, int);

// Structure Declaration
struct SYSCTL_PCQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCQEI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCQEI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCQEI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCQEI_Write_fpt	write;

};

typedef struct SYSCTL_PCQEI_obj SYSCTL_PCQEI_t;

// Initializer
SYSCTL_PCQEI_t init_SYSCTL_PCQEI(void);


#endif // _PCQEI_h_

