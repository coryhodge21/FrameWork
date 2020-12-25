/**********************************
* Bit Field Enums for : RSCLKCFG.h 
************************************/

typedef enum { 

	PSYSDIV_S	=	0,	// PLL System Clock Divisor
	OSYSDIV_S	=	10,	// PLL System Clock Divisor
	PSYSDIV_M	=	0x000003FF,	// PLL System Clock Divisor
	OSYSDIV_M	=	0x000FFC00,	// Oscillator System Clock Divisor
	OSCSRC_RTC	=	0x00400000,	// Hibernation Module RTC
	OSCSRC_MOSC	=	0x00300000,	// MOSC is oscillator source
	OSCSRC_LFIOSC	=	0x00200000,	// LFIOSC is oscillator source
	OSCSRC_PIOSC	=	0x00000000,	// PIOSC is oscillator source
	OSCSRC_M	=	0x00F00000,	// Oscillator Source
	PLLSRC_MOSC	=	0x03000000,	// MOSC is the PLL input clock
	PLLSRC_PIOSC	=	0x00000000,	// PIOSC is PLL input clock source
	PLLSRC_M	=	0x0F000000,	// PLL Source
	USEPLL	=	0x10000000,	// Use PLL
	ACG	=	0x20000000,	// Auto Clock Gating
	NEWFREQ	=	0x40000000,	// New PLLFREQ Accept
	MEMTIMU	=	0x80000000,	// Memory Timing Register Update

} RSCLKCFG_e;
//*********************************

