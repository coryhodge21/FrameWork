/**********************************
* Bit Field Enums for : MEMTIM0.h 
************************************/

typedef enum { 

	FWS_S	=	0,	// Flash Wait State
	EWS_S	=	16,	// Flash Wait State
	FWS_M	=	0x0000000F,	// Flash Wait State
	FBCE	=	0x00000020,	// Flash Bank Clock Edge
	FBCHT_4_5	=	0x00000200,	// 4.5 system clock periods
	FBCHT_4	=	0x000001C0,	// 4 system clock periods
	FBCHT_3_5	=	0x00000180,	// 3.5 system clock periods
	FBCHT_3	=	0x00000140,	// 3 system clock periods
	FBCHT_2_5	=	0x00000100,	// 2.5 system clock periods
	FBCHT_2	=	0x000000C0,	// 2 system clock periods
	FBCHT_1_5	=	0x00000080,	// 1.5 system clock periods
	FBCHT_1	=	0x00000040,	// 1 system clock period
	FBCHT_0_5	=	0x00000000,	// 1/2 system clock period
	FBCHT_M	=	0x000003C0,	// Flash Bank Clock High Time
	EWS_M	=	0x000F0000,	// EEPROM Wait States
	MB1	=	0x00100010,	// Must be one
	EBCE	=	0x00200000,	// EEPROM Bank Clock Edge
	EBCHT_4_5	=	0x02000000,	// 4.5 system clock periods
	EBCHT_4	=	0x01C00000,	// 4 system clock periods
	EBCHT_3_5	=	0x01800000,	// 3.5 system clock periods
	EBCHT_3	=	0x01400000,	// 3 system clock periods
	EBCHT_2_5	=	0x01000000,	// 2.5 system clock periods
	EBCHT_2	=	0x00C00000,	// 2 system clock periods
	EBCHT_1_5	=	0x00800000,	// 1.5 system clock periods
	EBCHT_1	=	0x00400000,	// 1 system clock period
	EBCHT_0_5	=	0x00000000,	// 1/2 system clock period
	EBCHT_M	=	0x03C00000,	// EEPROM Clock High Time

} MEMTIM0_e;
//*********************************

