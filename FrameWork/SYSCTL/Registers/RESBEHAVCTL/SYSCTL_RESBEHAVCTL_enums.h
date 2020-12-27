/**********************************
* Bit Field Enums for : RESBEHAVCTL.h 
************************************/

typedef enum { 

	EXTRES_POR	=	0x00000003,	// External RST assertion issues a
	EXTRES_SYSRST	=	0x00000002,	// External RST assertion issues a
	EXTRES_M	=	0x00000003,	// External RST Pin Operation
	BOR_POR	=	0x0000000C,	// Brown Out Reset issues a
	BOR_SYSRST	=	0x00000008,	// Brown Out Reset issues system
	BOR_M	=	0x0000000C,	// BOR Reset operation
	WDOG0_POR	=	0x00000030,	// Watchdog 0 issues a simulated
	WDOG0_SYSRST	=	0x00000020,	// Watchdog 0 issues a system
	WDOG0_M	=	0x00000030,	// Watchdog 0 Reset Operation
	WDOG1_POR	=	0x000000C0,	// Watchdog 1 issues a simulated
	WDOG1_SYSRST	=	0x00000080,	// Watchdog 1 issues a system
	WDOG1_M	=	0x000000C0,	// Watchdog 1 Reset Operation

} RESBEHAVCTL_e;
//*********************************

