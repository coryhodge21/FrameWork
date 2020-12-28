/**********************************
* Bit Field Enums for : RIS.h 
************************************/

typedef enum { 

	BORRIS	=	0x00000002,	// Brown-Out Reset Raw Interrupt
	BOR1RIS	=	0x00000002,	// VDD under BOR1 Raw Interrupt
	MOFRIS	=	0x00000008,	// Main Oscillator Failure Raw
	PLLLRIS	=	0x00000040,	// PLL Lock Raw Interrupt Status
	USBPLLLRIS	=	0x00000080,	// USB PLL Lock Raw Interrupt
	MOSCPUPRIS	=	0x00000100,	// MOSC Power Up Raw Interrupt
	VDDARIS	=	0x00000400,	// VDDA Power OK Event Raw
	BOR0RIS	=	0x00000800,	// VDD under BOR0 Raw Interrupt

} RIS_e;
//*********************************

