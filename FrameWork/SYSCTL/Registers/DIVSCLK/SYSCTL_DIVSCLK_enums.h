/**********************************
* Bit Field Enums for : DIVSCLK.h 
************************************/

typedef enum { 

	DIV_S	=	0,	// Divisor Value
	DIV_M	=	0x000000FF,	// Divisor Value
	SRC_MOSC	=	0x00020000,	// MOSC
	SRC_PIOSC	=	0x00010000,	// PIOSC
	SRC_SYSCLK	=	0x00000000,	// System Clock
	SRC_M	=	0x00030000,	// Clock Source
	EN	=	0x80000000,	// DIVSCLK Enable

} DIVSCLK_e;
//*********************************

