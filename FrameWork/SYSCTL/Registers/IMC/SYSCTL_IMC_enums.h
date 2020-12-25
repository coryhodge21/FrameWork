/**********************************
* Bit Field Enums for : IMC.h 
************************************/

typedef enum { 

	BOR1IM	=	0x00000002,	// VDD under BOR1 Interrupt Mask
	BORIM	=	0x00000002,	// Brown-Out Reset Interrupt Mask
	MOFIM	=	0x00000008,	// Main Oscillator Failure
	PLLLIM	=	0x00000040,	// PLL Lock Interrupt Mask
	USBPLLLIM	=	0x00000080,	// USB PLL Lock Interrupt Mask
	MOSCPUPIM	=	0x00000100,	// MOSC Power Up Interrupt Mask
	VDDAIM	=	0x00000400,	// VDDA Power OK Interrupt Mask
	BOR0IM	=	0x00000800,	// VDD under BOR0 Interrupt Mask

} IMC_e;
//*********************************

