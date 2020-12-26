/**********************************
* \file : CCMCGREQ.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _CCMCGREQ_h_
#define _CCMCGREQ_h_

//! \brief Enumerations for this Register
#include "SYSCTL_CCMCGREQ_enums.h" 

// Base Address for this Register
#define SYSCTL_CCMCGREQ_BASE_ADDR	0x44030204

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*CCMCGREQ_Set_fpt)(CCMCGREQ_e);

typedef void(*CCMCGREQ_Clear_fpt)(CCMCGREQ_e);

typedef int(*CCMCGREQ_Read_fpt)(CCMCGREQ_e);

typedef void(*CCMCGREQ_Write_fpt)(CCMCGREQ_e, int);

// Structure Declaration
struct SYSCTL_CCMCGREQ_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	CCMCGREQ_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 CCMCGREQ_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	CCMCGREQ_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	CCMCGREQ_Write_fpt	write;

};

typedef struct SYSCTL_CCMCGREQ_obj SYSCTL_CCMCGREQ_t;

// Initializer
SYSCTL_CCMCGREQ_t init_SYSCTL_CCMCGREQ(void);


#endif // _CCMCGREQ_h_

