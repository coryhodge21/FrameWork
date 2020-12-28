/**********************************
* Bit Field Enums for : PIOSCCAL.h 
************************************/

typedef enum { 

	UT_S	=	0,	// User Trim Value
	UT_M	=	0x0000007F,	// User Trim Value
	UPDATE	=	0x00000100,	// Update Trim
	CAL	=	0x00000200,	// Start Calibration
	UTEN	=	0x80000000,	// Use User Trim Value

} PIOSCCAL_e;
//*********************************

