/**********************************
* Bit Field Enums for : DSLPCLKCFG.h 
************************************/

typedef enum { 

	D_S	=	23,	// PIOSC Power Down Request
	PIOSCPD	=	0x00000002,	// PIOSC Power Down Request
	O_32	=	0x00000070,	// 32.768 kHz
	O_30	=	0x00000030,	// LFIOSC
	O_IO	=	0x00000010,	// PIOSC
	O_IGN	=	0x00000000,	// MOSC
	O_M	=	0x00000070,	// Clock Source
	D_M	=	0x1F800000,	// Divider Field Override

} DSLPCLKCFG_e;
//*********************************

