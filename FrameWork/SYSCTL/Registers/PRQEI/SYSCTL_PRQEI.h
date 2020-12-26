/**********************************
* \file : PRQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRQEI_h_
#define _PRQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_PRQEI_BASE_ADDR	0x400FEA44

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRQEI_Set_fpt)(PRQEI_e);

typedef void(*PRQEI_Clear_fpt)(PRQEI_e);

typedef int(*PRQEI_Read_fpt)(PRQEI_e);

typedef void(*PRQEI_Write_fpt)(PRQEI_e, int);

// Structure Declaration
struct SYSCTL_PRQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRQEI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRQEI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRQEI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRQEI_Write_fpt	write;

};

typedef struct SYSCTL_PRQEI_obj SYSCTL_PRQEI_t;

// Initializer
SYSCTL_PRQEI_t init_SYSCTL_PRQEI(void);


#endif // _PRQEI_h_

