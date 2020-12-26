/**********************************
* \file : PPUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPUSB_h_
#define _PPUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_PPUSB_BASE_ADDR	0x400FE328

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPUSB_Set_fpt)(PPUSB_e);

typedef void(*PPUSB_Clear_fpt)(PPUSB_e);

typedef int(*PPUSB_Read_fpt)(PPUSB_e);

typedef void(*PPUSB_Write_fpt)(PPUSB_e, int);

// Structure Declaration
struct SYSCTL_PPUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPUSB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPUSB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPUSB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPUSB_Write_fpt	write;

};

typedef struct SYSCTL_PPUSB_obj SYSCTL_PPUSB_t;

// Initializer
SYSCTL_PPUSB_t init_SYSCTL_PPUSB(void);


#endif // _PPUSB_h_

