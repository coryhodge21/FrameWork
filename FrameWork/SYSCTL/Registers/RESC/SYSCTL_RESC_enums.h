/**********************************
* Bit Field Enums for : RESC.h 
************************************/

typedef enum { 

	HIB	=	0x00000040,	// HIB Reset
	EXT	=	0x00000001,	// External Reset
	POR	=	0x00000002,	// Power-On Reset
	BOR	=	0x00000004,	// Brown-Out Reset
	WDT0	=	0x00000008,	// Watchdog Timer 0 Reset
	SW	=	0x00000010,	// Software Reset
	WDT1	=	0x00000020,	// Watchdog Timer 1 Reset
	HSSR	=	0x00001000,	// HSSR Reset
	MOSCFAIL	=	0x00010000,	// MOSC Failure Reset

} RESC_e;
//*********************************

