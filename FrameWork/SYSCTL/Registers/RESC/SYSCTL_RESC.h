/**********************************
* \file : RESC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RESC_h_
#define _RESC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RESC_enums.h" 

// Base Address for this Register
#define SYSCTL_RESC_BASE_ADDR	0x400FE05C

// Structure Declaration
struct SYSCTL_RESC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RESC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RESC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RESC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RESC_e, int32_t);

};

typedef struct SYSCTL_RESC_obj SYSCTL_RESC_t;

// Initializer
SYSCTL_RESC_t init_SYSCTL_RESC(void);


#endif // _RESC_h_

