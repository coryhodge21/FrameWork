/**********************************
* \file : PPWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPWD_h_
#define _PPWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPWD_enums.h" 

// Base Address for this Register
#define SYSCTL_PPWD_BASE_ADDR	0x400FE300

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPWD_Set_fpt)(PPWD_e);

typedef void(*PPWD_Clear_fpt)(PPWD_e);

typedef int(*PPWD_Read_fpt)(PPWD_e);

typedef void(*PPWD_Write_fpt)(PPWD_e, int);

// Structure Declaration
struct SYSCTL_PPWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPWD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPWD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPWD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPWD_Write_fpt	write;

};

typedef struct SYSCTL_PPWD_obj SYSCTL_PPWD_t;

// Initializer
SYSCTL_PPWD_t init_SYSCTL_PPWD(void);


#endif // _PPWD_h_

