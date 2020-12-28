/**********************************
* Bit Field Enums for : NMIC.h 
************************************/

typedef enum { 

	EXTERNAL	=	0x00000001,	// External Pin NMI
	POWER	=	0x00000004,	// Power/Brown Out Event NMI
	WDT0	=	0x00000008,	// Watch Dog Timer (WDT) 0 NMI
	WDT1	=	0x00000020,	// Watch Dog Timer (WDT) 1 NMI
	TAMPER	=	0x00000200,	// Tamper Event NMI
	MOSCFAIL	=	0x00010000,	// MOSC Failure NMI

} NMIC_e;
//*********************************

