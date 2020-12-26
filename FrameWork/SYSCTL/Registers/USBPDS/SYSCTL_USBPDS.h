/**********************************
* \file : USBPDS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _USBPDS_h_
#define _USBPDS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_USBPDS_enums.h" 

// Base Address for this Register
#define SYSCTL_USBPDS_BASE_ADDR	0x400FE280

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*USBPDS_Set_fpt)(USBPDS_e);

typedef void(*USBPDS_Clear_fpt)(USBPDS_e);

typedef int(*USBPDS_Read_fpt)(USBPDS_e);

typedef void(*USBPDS_Write_fpt)(USBPDS_e, int);

// Structure Declaration
struct SYSCTL_USBPDS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	USBPDS_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 USBPDS_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	USBPDS_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	USBPDS_Write_fpt	write;

};

typedef struct SYSCTL_USBPDS_obj SYSCTL_USBPDS_t;

// Initializer
SYSCTL_USBPDS_t init_SYSCTL_USBPDS(void);


#endif // _USBPDS_h_

