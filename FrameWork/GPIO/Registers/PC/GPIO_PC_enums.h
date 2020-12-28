/**********************************
* Bit Field Enums for : PC.h 
************************************/

typedef enum { 

	EDM1_S	=	2,	// A 2 mA driver is always enabled;
	EDM2_S	=	4,	// A 2 mA driver is always enabled;
	EDM3_S	=	6,	// A 2 mA driver is always enabled;
	EDM4_S	=	8,	// A 2 mA driver is always enabled;
	EDM5_S	=	10,	// A 2 mA driver is always enabled;
	EDM6_S	=	12,	// A 2 mA driver is always enabled;
	EDM7_S	=	14,	// A 2 mA driver is always enabled;
	EDM0_PLUS2MA	=	0x00000003,	// A 2 mA driver is always enabled;
	EDM0_6MA	=	0x00000001,	// An additional 6 mA option is
	EDM0_DISABLE	=	0x00000000,	// Drive values of 2, 4 and 8 mA
	EDM0_M	=	0x00000003,	// Extended Drive Mode Bit 0
	EDM1_M	=	0x0000000C,	// Extended Drive Mode Bit 1
	EDM2_M	=	0x00000030,	// Extended Drive Mode Bit 2
	EDM3_M	=	0x000000C0,	// Extended Drive Mode Bit 3
	EDM4_M	=	0x00000300,	// Extended Drive Mode Bit 4
	EDM5_M	=	0x00000C00,	// Extended Drive Mode Bit 5
	EDM6_M	=	0x00003000,	// Extended Drive Mode Bit 6
	EDM7_M	=	0x0000C000,	// Extended Drive Mode Bit 7

} PC_e;
//*********************************

