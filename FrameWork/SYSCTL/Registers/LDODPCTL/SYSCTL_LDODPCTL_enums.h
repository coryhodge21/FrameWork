/**********************************
* Bit Field Enums for : LDODPCTL.h 
************************************/

typedef enum { 

	VLDO_1_35V	=	0x0000001B,	// 1.35 V
	VLDO_1_30V	=	0x0000001A,	// 1.30 V
	VLDO_1_25V	=	0x00000019,	// 1.25 V
	VLDO_1_20V	=	0x00000018,	// 1.20 V
	VLDO_1_15V	=	0x00000017,	// 1.15 V
	VLDO_1_10V	=	0x00000016,	// 1.10 V
	VLDO_1_05V	=	0x00000015,	// 1.05 V
	VLDO_1_00V	=	0x00000014,	// 1.00 V
	VLDO_0_95V	=	0x00000013,	// 0.95 V
	VLDO_0_90V	=	0x00000012,	// 0.90 V
	VLDO_M	=	0x000000FF,	// LDO Output Voltage
	VADJEN	=	0x80000000,	// Voltage Adjust Enable

} LDODPCTL_e;
//*********************************

