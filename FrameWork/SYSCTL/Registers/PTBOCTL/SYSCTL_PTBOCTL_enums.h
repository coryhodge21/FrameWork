/**********************************
* Bit Field Enums for : PTBOCTL.h 
************************************/

typedef enum { 

	VDD_UBOR_RST	=	0x00000003,	// Reset
	VDD_UBOR_NMI	=	0x00000002,	// NMI
	VDD_UBOR_SYSINT	=	0x00000001,	// System control interrupt
	VDD_UBOR_NONE	=	0x00000000,	// No Action
	VDD_UBOR_M	=	0x00000003,	// VDD (VDDS) under BOR Event
	VDDA_UBOR_RST	=	0x00000300,	// Reset
	VDDA_UBOR_NMI	=	0x00000200,	// NMI
	VDDA_UBOR_SYSINT	=	0x00000100,	// System control interrupt
	VDDA_UBOR_NONE	=	0x00000000,	// No Action
	VDDA_UBOR_M	=	0x00000300,	// VDDA under BOR Event Action

} PTBOCTL_e;
//*********************************

