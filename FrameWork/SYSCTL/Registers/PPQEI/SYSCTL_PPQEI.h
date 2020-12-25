/**********************************
* \file : PPQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPQEI_h_
#define _PPQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_PPQEI_BASE_ADDR	0x400FE344

// Structure Declaration
struct SYSCTL_PPQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPQEI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPQEI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPQEI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPQEI_e, int32_t);

};

typedef struct SYSCTL_PPQEI_obj SYSCTL_PPQEI_t;

// Initializer
SYSCTL_PPQEI_t init_SYSCTL_PPQEI(void);


#endif // _PPQEI_h_

