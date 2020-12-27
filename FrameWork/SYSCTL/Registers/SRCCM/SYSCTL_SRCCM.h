/**********************************
* \file : SRCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCCM_h_
#define _SRCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCCM_BASE_ADDR	0x400FE574

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRCCM_Set_fpt)(SRCCM_e);

typedef void(*SRCCM_Clear_fpt)(SRCCM_e);

typedef int(*SRCCM_Read_fpt)(SRCCM_e);

typedef void(*SRCCM_Write_fpt)(SRCCM_e, int);

// Structure Declaration
struct SYSCTL_SRCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRCCM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRCCM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRCCM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRCCM_Write_fpt	write;

};

typedef struct SYSCTL_SRCCM_obj SYSCTL_SRCCM_t;

// Initializer
SYSCTL_SRCCM_t init_SYSCTL_SRCCM(void);


#endif // _SRCCM_h_

