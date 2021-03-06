/**********************************
* Bit Field Enums for : USBPDS.h 
************************************/

typedef enum { 

	PWRSTAT_ON	=	0x00000003,	// ON
	PWRSTAT_OFF	=	0x00000000,	// OFF
	PWRSTAT_M	=	0x00000003,	// Power Domain Status
	MEMSTAT_ON	=	0x0000000C,	// Array On
	MEMSTAT_RETAIN	=	0x00000004,	// SRAM Retention
	MEMSTAT_OFF	=	0x00000000,	// Array OFF
	MEMSTAT_M	=	0x0000000C,	// Memory Array Power Status

} USBPDS_e;
//*********************************

