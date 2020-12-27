/**********************************
* \file : PWRTC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PWRTC_h_
#define _PWRTC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PWRTC_enums.h" 

// Base Address for this Register
#define SYSCTL_PWRTC_BASE_ADDR	0x400FE060

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PWRTC_Set_fpt)(PWRTC_e);

typedef void(*PWRTC_Clear_fpt)(PWRTC_e);

typedef int(*PWRTC_Read_fpt)(PWRTC_e);

typedef void(*PWRTC_Write_fpt)(PWRTC_e, int);

// Structure Declaration
struct SYSCTL_PWRTC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PWRTC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PWRTC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PWRTC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PWRTC_Write_fpt	write;

};

typedef struct SYSCTL_PWRTC_obj SYSCTL_PWRTC_t;

// Initializer
SYSCTL_PWRTC_t init_SYSCTL_PWRTC(void);


#endif // _PWRTC_h_

