/**********************************
* Bit Field Enums for : PIOSCSTAT.h 
************************************/

typedef enum { 

	CT_S	=	0,	// Calibration Trim Value
	DT_S	=	16,	// Calibration Trim Value
	CT_M	=	0x0000007F,	// Calibration Trim Value
	CRFAIL	=	0x00000200,	// The last calibration operation
	CRPASS	=	0x00000100,	// The last calibration operation
	CRNONE	=	0x00000000,	// Calibration has not been
	CR_M	=	0x00000300,	// Calibration Result
	DT_M	=	0x007F0000,	// Default Trim Value

} PIOSCSTAT_e;
//*********************************

