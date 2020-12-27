/**********************************
* \file : DCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCTIMER_h_
#define _DCGCTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCTIMER_BASE_ADDR	0x400FE804

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCTIMER_Set_fpt)(DCGCTIMER_e);

typedef void(*DCGCTIMER_Clear_fpt)(DCGCTIMER_e);

typedef int(*DCGCTIMER_Read_fpt)(DCGCTIMER_e);

typedef void(*DCGCTIMER_Write_fpt)(DCGCTIMER_e, int);

// Structure Declaration
struct SYSCTL_DCGCTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCTIMER_Write_fpt	write;

};

typedef struct SYSCTL_DCGCTIMER_obj SYSCTL_DCGCTIMER_t;

// Initializer
SYSCTL_DCGCTIMER_t init_SYSCTL_DCGCTIMER(void);


#endif // _DCGCTIMER_h_

