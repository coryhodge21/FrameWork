/*
 * Module.h
 *
 *  Created on: Dec 25, 2020
 *      Author: coryhodge
 */

#ifndef MODULE_H_
#define MODULE_H_

// Common Data Types and Definitons
#include "prj_common.h"

// Function Pointer Types
typedef void(*Set_fpt)(Reg_e, BF_e);

// Structure Type
typedef struct MODULE_obj {

	// Base Address
	int BASE_ADDRESS;

	// Function Pointers to
	// perform masked operations
	// with enumerations

};


#endif /* MODULE_H_ */
