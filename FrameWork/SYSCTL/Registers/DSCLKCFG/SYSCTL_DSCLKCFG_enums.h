/**********************************
* Bit Field Enums for : DSCLKCFG.h 
************************************/

typedef enum { 

	DSSYSDIV_S	=	0,	// Deep Sleep Clock Divisor
	DSSYSDIV_M	=	0x000003FF,	// Deep Sleep Clock Divisor
	DSOSCSRC_RTC	=	0x00400000,	// Hibernation Module RTCOSC
	DSOSCSRC_MOSC	=	0x00300000,	// MOSC
	DSOSCSRC_LFIOSC	=	0x00200000,	// LFIOSC
	DSOSCSRC_PIOSC	=	0x00000000,	// PIOSC
	DSOSCSRC_M	=	0x00F00000,	// Deep Sleep Oscillator Source
	MOSCDPD	=	0x40000000,	// MOSC Disable Power Down
	PIOSCPD	=	0x80000000,	// PIOSC Power Down

} DSCLKCFG_e;
//*********************************

