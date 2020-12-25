/**********************************
* Bit Field Enums for : RCC2.h 
************************************/

typedef enum { 

	SYSDIV2_S	=	23,	// 32.768 kHz
	OSCSRC2_32	=	0x00000070,	// 32.768 kHz
	OSCSRC2_30	=	0x00000030,	// LFIOSC
	OSCSRC2_IO4	=	0x00000020,	// PIOSC/4
	OSCSRC2_IO	=	0x00000010,	// PIOSC
	OSCSRC2_MO	=	0x00000000,	// MOSC
	OSCSRC2_M	=	0x00000070,	// Oscillator Source 2
	BYPASS2	=	0x00000800,	// PLL Bypass 2
	PWRDN2	=	0x00002000,	// Power-Down PLL 2
	USBPWRDN	=	0x00004000,	// Power-Down USB PLL
	SYSDIV2LSB	=	0x00400000,	// Additional LSB for SYSDIV2
	SYSDIV2_M	=	0x1F800000,	// System Clock Divisor 2
	DIV400	=	0x40000000,	// Divide PLL as 400 MHz vs. 200
	USERCC2	=	0x80000000,	// Use RCC2

} RCC2_e;
//*********************************

