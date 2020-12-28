/**********************************
* Bit Field Enums for : MISC.h 
************************************/

typedef enum { 

	BOR1MIS	=	0x00000002,	// VDD under BOR1 Masked Interrupt
	BORMIS	=	0x00000002,	// BOR Masked Interrupt Status
	MOFMIS	=	0x00000008,	// Main Oscillator Failure Masked
	PLLLMIS	=	0x00000040,	// PLL Lock Masked Interrupt Status
	USBPLLLMIS	=	0x00000080,	// USB PLL Lock Masked Interrupt
	MOSCPUPMIS	=	0x00000100,	// MOSC Power Up Masked Interrupt
	VDDAMIS	=	0x00000400,	// VDDA Power OK Masked Interrupt
	BOR0MIS	=	0x00000800,	// VDD under BOR0 Masked Interrupt

} MISC_e;
//*********************************

