/**********************************
* \file : PCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCUSB_h_
#define _PCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_PCUSB_BASE_ADDR	0x400FE928

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCUSB_Set_fpt)(PCUSB_e);

typedef void(*PCUSB_Clear_fpt)(PCUSB_e);

typedef int(*PCUSB_Read_fpt)(PCUSB_e);

typedef void(*PCUSB_Write_fpt)(PCUSB_e, int);

// Structure Declaration
struct SYSCTL_PCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCUSB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCUSB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCUSB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCUSB_Write_fpt	write;

};

typedef struct SYSCTL_PCUSB_obj SYSCTL_PCUSB_t;

// Initializer
SYSCTL_PCUSB_t init_SYSCTL_PCUSB(void);


#endif // _PCUSB_h_

