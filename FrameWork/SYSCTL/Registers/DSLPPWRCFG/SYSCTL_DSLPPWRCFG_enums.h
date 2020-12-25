/**********************************
* Bit Field Enums for : DSLPPWRCFG.h 
************************************/

typedef enum { 

	SRAMPM_LP	=	0x00000003,	// Low Power Mode
	SRAMPM_SBY	=	0x00000001,	// Standby Mode
	SRAMPM_NRM	=	0x00000000,	// Active Mode
	SRAMPM_M	=	0x00000003,	// SRAM Power Modes
	FLASHPM_SLP	=	0x00000020,	// Low Power Mode
	FLASHPM_NRM	=	0x00000000,	// Active Mode
	FLASHPM_M	=	0x00000030,	// Flash Power Modes
	TSPD	=	0x00000100,	// Temperature Sense Power Down
	LDOSM	=	0x00000200,	// LDO Sleep Mode

} DSLPPWRCFG_e;
//*********************************

