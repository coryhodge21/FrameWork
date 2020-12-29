#include "SYSCTL/SYSCTL.h"
#include "SYSCTL/Registers/DID0/DID0.h" 
#include "SYSCTL/Registers/DID1/DID1.h" 
#include "SYSCTL/Registers/DC0/DC0.h" 
#include "SYSCTL/Registers/DC1/DC1.h" 
#include "SYSCTL/Registers/DC2/DC2.h" 
#include "SYSCTL/Registers/DC3/DC3.h" 
#include "SYSCTL/Registers/DC4/DC4.h" 
#include "SYSCTL/Registers/DC5/DC5.h" 
#include "SYSCTL/Registers/DC6/DC6.h" 
#include "SYSCTL/Registers/DC7/DC7.h" 
#include "SYSCTL/Registers/DC8/DC8.h" 
#include "SYSCTL/Registers/PBORCTL/PBORCTL.h" 
#include "SYSCTL/Registers/PTBOCTL/PTBOCTL.h" 
#include "SYSCTL/Registers/SRCR0/SRCR0.h" 
#include "SYSCTL/Registers/SRCR1/SRCR1.h" 
#include "SYSCTL/Registers/SRCR2/SRCR2.h" 
#include "SYSCTL/Registers/RIS/RIS.h" 
#include "SYSCTL/Registers/IMC/IMC.h" 
#include "SYSCTL/Registers/MISC/MISC.h" 
#include "SYSCTL/Registers/RESC/RESC.h" 
#include "SYSCTL/Registers/PWRTC/PWRTC.h" 
#include "SYSCTL/Registers/RCC/RCC.h" 
#include "SYSCTL/Registers/NMIC/NMIC.h" 
#include "SYSCTL/Registers/GPIOHBCTL/GPIOHBCTL.h" 
#include "SYSCTL/Registers/RCC2/RCC2.h" 
#include "SYSCTL/Registers/MOSCCTL/MOSCCTL.h" 
#include "SYSCTL/Registers/RSCLKCFG/RSCLKCFG.h" 
#include "SYSCTL/Registers/MEMTIM0/MEMTIM0.h" 
#include "SYSCTL/Registers/RCGC0/RCGC0.h" 
#include "SYSCTL/Registers/RCGC1/RCGC1.h" 
#include "SYSCTL/Registers/RCGC2/RCGC2.h" 
#include "SYSCTL/Registers/SCGC0/SCGC0.h" 
#include "SYSCTL/Registers/SCGC1/SCGC1.h" 
#include "SYSCTL/Registers/SCGC2/SCGC2.h" 
#include "SYSCTL/Registers/DCGC0/DCGC0.h" 
#include "SYSCTL/Registers/DCGC1/DCGC1.h" 
#include "SYSCTL/Registers/DCGC2/DCGC2.h" 
#include "SYSCTL/Registers/ALTCLKCFG/ALTCLKCFG.h" 
#include "SYSCTL/Registers/DSLPCLKCFG/DSLPCLKCFG.h" 
#include "SYSCTL/Registers/DSCLKCFG/DSCLKCFG.h" 
#include "SYSCTL/Registers/DIVSCLK/DIVSCLK.h" 
#include "SYSCTL/Registers/SYSPROP/SYSPROP.h" 
#include "SYSCTL/Registers/PIOSCCAL/PIOSCCAL.h" 
#include "SYSCTL/Registers/PIOSCSTAT/PIOSCSTAT.h" 
#include "SYSCTL/Registers/PLLFREQ0/PLLFREQ0.h" 
#include "SYSCTL/Registers/PLLFREQ1/PLLFREQ1.h" 
#include "SYSCTL/Registers/PLLSTAT/PLLSTAT.h" 
#include "SYSCTL/Registers/SLPPWRCFG/SLPPWRCFG.h" 
#include "SYSCTL/Registers/DSLPPWRCFG/DSLPPWRCFG.h" 
#include "SYSCTL/Registers/DC9/DC9.h" 
#include "SYSCTL/Registers/NVMSTAT/NVMSTAT.h" 
#include "SYSCTL/Registers/LDOSPCTL/LDOSPCTL.h" 
#include "SYSCTL/Registers/LDODPCTL/LDODPCTL.h" 
#include "SYSCTL/Registers/RESBEHAVCTL/RESBEHAVCTL.h" 
#include "SYSCTL/Registers/HSSR/HSSR.h" 
#include "SYSCTL/Registers/USBPDS/USBPDS.h" 
#include "SYSCTL/Registers/USBMPC/USBMPC.h" 
#include "SYSCTL/Registers/EMACPDS/EMACPDS.h" 
#include "SYSCTL/Registers/EMACMPC/EMACMPC.h" 
#include "SYSCTL/Registers/LCDMPC/LCDMPC.h" 
#include "SYSCTL/Registers/PPWD/PPWD.h" 
#include "SYSCTL/Registers/PPTIMER/PPTIMER.h" 
#include "SYSCTL/Registers/PPGPIO/PPGPIO.h" 
#include "SYSCTL/Registers/PPDMA/PPDMA.h" 
#include "SYSCTL/Registers/PPEPI/PPEPI.h" 
#include "SYSCTL/Registers/PPHIB/PPHIB.h" 
#include "SYSCTL/Registers/PPUART/PPUART.h" 
#include "SYSCTL/Registers/PPSSI/PPSSI.h" 
#include "SYSCTL/Registers/PPI2C/PPI2C.h" 
#include "SYSCTL/Registers/PPUSB/PPUSB.h" 
#include "SYSCTL/Registers/PPEPHY/PPEPHY.h" 
#include "SYSCTL/Registers/PPCAN/PPCAN.h" 
#include "SYSCTL/Registers/PPADC/PPADC.h" 
#include "SYSCTL/Registers/PPACMP/PPACMP.h" 
#include "SYSCTL/Registers/PPPWM/PPPWM.h" 
#include "SYSCTL/Registers/PPQEI/PPQEI.h" 
#include "SYSCTL/Registers/PPLPC/PPLPC.h" 
#include "SYSCTL/Registers/PPPECI/PPPECI.h" 
#include "SYSCTL/Registers/PPFAN/PPFAN.h" 
#include "SYSCTL/Registers/PPEEPROM/PPEEPROM.h" 
#include "SYSCTL/Registers/PPWTIMER/PPWTIMER.h" 
#include "SYSCTL/Registers/PPRTS/PPRTS.h" 
#include "SYSCTL/Registers/PPCCM/PPCCM.h" 
#include "SYSCTL/Registers/PPLCD/PPLCD.h" 
#include "SYSCTL/Registers/PPOWIRE/PPOWIRE.h" 
#include "SYSCTL/Registers/PPEMAC/PPEMAC.h" 
#include "SYSCTL/Registers/PPHIM/PPHIM.h" 
#include "SYSCTL/Registers/SRWD/SRWD.h" 
#include "SYSCTL/Registers/SRTIMER/SRTIMER.h" 
#include "SYSCTL/Registers/SRGPIO/SRGPIO.h" 
#include "SYSCTL/Registers/SRDMA/SRDMA.h" 
#include "SYSCTL/Registers/SREPI/SREPI.h" 
#include "SYSCTL/Registers/SRHIB/SRHIB.h" 
#include "SYSCTL/Registers/SRUART/SRUART.h" 
#include "SYSCTL/Registers/SRSSI/SRSSI.h" 
#include "SYSCTL/Registers/SRI2C/SRI2C.h" 
#include "SYSCTL/Registers/SRUSB/SRUSB.h" 
#include "SYSCTL/Registers/SREPHY/SREPHY.h" 
#include "SYSCTL/Registers/SRCAN/SRCAN.h" 
#include "SYSCTL/Registers/SRADC/SRADC.h" 
#include "SYSCTL/Registers/SRACMP/SRACMP.h" 
#include "SYSCTL/Registers/SRPWM/SRPWM.h" 
#include "SYSCTL/Registers/SRQEI/SRQEI.h" 
#include "SYSCTL/Registers/SREEPROM/SREEPROM.h" 
#include "SYSCTL/Registers/SRWTIMER/SRWTIMER.h" 
#include "SYSCTL/Registers/SRCCM/SRCCM.h" 
#include "SYSCTL/Registers/SRLCD/SRLCD.h" 
#include "SYSCTL/Registers/SROWIRE/SROWIRE.h" 
#include "SYSCTL/Registers/SREMAC/SREMAC.h" 
#include "SYSCTL/Registers/RCGCWD/RCGCWD.h" 
#include "SYSCTL/Registers/RCGCTIMER/RCGCTIMER.h" 
#include "SYSCTL/Registers/RCGCGPIO/RCGCGPIO.h" 
#include "SYSCTL/Registers/RCGCDMA/RCGCDMA.h" 
#include "SYSCTL/Registers/RCGCEPI/RCGCEPI.h" 
#include "SYSCTL/Registers/RCGCHIB/RCGCHIB.h" 
#include "SYSCTL/Registers/RCGCUART/RCGCUART.h" 
#include "SYSCTL/Registers/RCGCSSI/RCGCSSI.h" 
#include "SYSCTL/Registers/RCGCI2C/RCGCI2C.h" 
#include "SYSCTL/Registers/RCGCUSB/RCGCUSB.h" 
#include "SYSCTL/Registers/RCGCEPHY/RCGCEPHY.h" 
#include "SYSCTL/Registers/RCGCCAN/RCGCCAN.h" 
#include "SYSCTL/Registers/RCGCADC/RCGCADC.h" 
#include "SYSCTL/Registers/RCGCACMP/RCGCACMP.h" 
#include "SYSCTL/Registers/RCGCPWM/RCGCPWM.h" 
#include "SYSCTL/Registers/RCGCQEI/RCGCQEI.h" 
#include "SYSCTL/Registers/RCGCEEPROM/RCGCEEPROM.h" 
#include "SYSCTL/Registers/RCGCWTIMER/RCGCWTIMER.h" 
#include "SYSCTL/Registers/RCGCCCM/RCGCCCM.h" 
#include "SYSCTL/Registers/RCGCLCD/RCGCLCD.h" 
#include "SYSCTL/Registers/RCGCOWIRE/RCGCOWIRE.h" 
#include "SYSCTL/Registers/RCGCEMAC/RCGCEMAC.h" 
#include "SYSCTL/Registers/SCGCWD/SCGCWD.h" 
#include "SYSCTL/Registers/SCGCTIMER/SCGCTIMER.h" 
#include "SYSCTL/Registers/SCGCGPIO/SCGCGPIO.h" 
#include "SYSCTL/Registers/SCGCDMA/SCGCDMA.h" 
#include "SYSCTL/Registers/SCGCEPI/SCGCEPI.h" 
#include "SYSCTL/Registers/SCGCHIB/SCGCHIB.h" 
#include "SYSCTL/Registers/SCGCUART/SCGCUART.h" 
#include "SYSCTL/Registers/SCGCSSI/SCGCSSI.h" 
#include "SYSCTL/Registers/SCGCI2C/SCGCI2C.h" 
#include "SYSCTL/Registers/SCGCUSB/SCGCUSB.h" 
#include "SYSCTL/Registers/SCGCEPHY/SCGCEPHY.h" 
#include "SYSCTL/Registers/SCGCCAN/SCGCCAN.h" 
#include "SYSCTL/Registers/SCGCADC/SCGCADC.h" 
#include "SYSCTL/Registers/SCGCACMP/SCGCACMP.h" 
#include "SYSCTL/Registers/SCGCPWM/SCGCPWM.h" 
#include "SYSCTL/Registers/SCGCQEI/SCGCQEI.h" 
#include "SYSCTL/Registers/SCGCEEPROM/SCGCEEPROM.h" 
#include "SYSCTL/Registers/SCGCWTIMER/SCGCWTIMER.h" 
#include "SYSCTL/Registers/SCGCCCM/SCGCCCM.h" 
#include "SYSCTL/Registers/SCGCLCD/SCGCLCD.h" 
#include "SYSCTL/Registers/SCGCOWIRE/SCGCOWIRE.h" 
#include "SYSCTL/Registers/SCGCEMAC/SCGCEMAC.h" 
#include "SYSCTL/Registers/DCGCWD/DCGCWD.h" 
#include "SYSCTL/Registers/DCGCTIMER/DCGCTIMER.h" 
#include "SYSCTL/Registers/DCGCGPIO/DCGCGPIO.h" 
#include "SYSCTL/Registers/DCGCDMA/DCGCDMA.h" 
#include "SYSCTL/Registers/DCGCEPI/DCGCEPI.h" 
#include "SYSCTL/Registers/DCGCHIB/DCGCHIB.h" 
#include "SYSCTL/Registers/DCGCUART/DCGCUART.h" 
#include "SYSCTL/Registers/DCGCSSI/DCGCSSI.h" 
#include "SYSCTL/Registers/DCGCI2C/DCGCI2C.h" 
#include "SYSCTL/Registers/DCGCUSB/DCGCUSB.h" 
#include "SYSCTL/Registers/DCGCEPHY/DCGCEPHY.h" 
#include "SYSCTL/Registers/DCGCCAN/DCGCCAN.h" 
#include "SYSCTL/Registers/DCGCADC/DCGCADC.h" 
#include "SYSCTL/Registers/DCGCACMP/DCGCACMP.h" 
#include "SYSCTL/Registers/DCGCPWM/DCGCPWM.h" 
#include "SYSCTL/Registers/DCGCQEI/DCGCQEI.h" 
#include "SYSCTL/Registers/DCGCEEPROM/DCGCEEPROM.h" 
#include "SYSCTL/Registers/DCGCWTIMER/DCGCWTIMER.h" 
#include "SYSCTL/Registers/DCGCCCM/DCGCCCM.h" 
#include "SYSCTL/Registers/DCGCLCD/DCGCLCD.h" 
#include "SYSCTL/Registers/DCGCOWIRE/DCGCOWIRE.h" 
#include "SYSCTL/Registers/DCGCEMAC/DCGCEMAC.h" 
#include "SYSCTL/Registers/PCWD/PCWD.h" 
#include "SYSCTL/Registers/PCTIMER/PCTIMER.h" 
#include "SYSCTL/Registers/PCGPIO/PCGPIO.h" 
#include "SYSCTL/Registers/PCDMA/PCDMA.h" 
#include "SYSCTL/Registers/PCEPI/PCEPI.h" 
#include "SYSCTL/Registers/PCHIB/PCHIB.h" 
#include "SYSCTL/Registers/PCUART/PCUART.h" 
#include "SYSCTL/Registers/PCSSI/PCSSI.h" 
#include "SYSCTL/Registers/PCI2C/PCI2C.h" 
#include "SYSCTL/Registers/PCUSB/PCUSB.h" 
#include "SYSCTL/Registers/PCEPHY/PCEPHY.h" 
#include "SYSCTL/Registers/PCCAN/PCCAN.h" 
#include "SYSCTL/Registers/PCADC/PCADC.h" 
#include "SYSCTL/Registers/PCACMP/PCACMP.h" 
#include "SYSCTL/Registers/PCPWM/PCPWM.h" 
#include "SYSCTL/Registers/PCQEI/PCQEI.h" 
#include "SYSCTL/Registers/PCEEPROM/PCEEPROM.h" 
#include "SYSCTL/Registers/PCCCM/PCCCM.h" 
#include "SYSCTL/Registers/PCLCD/PCLCD.h" 
#include "SYSCTL/Registers/PCOWIRE/PCOWIRE.h" 
#include "SYSCTL/Registers/PCEMAC/PCEMAC.h" 
#include "SYSCTL/Registers/PRWD/PRWD.h" 
#include "SYSCTL/Registers/PRTIMER/PRTIMER.h" 
#include "SYSCTL/Registers/PRGPIO/PRGPIO.h" 
#include "SYSCTL/Registers/PRDMA/PRDMA.h" 
#include "SYSCTL/Registers/PREPI/PREPI.h" 
#include "SYSCTL/Registers/PRHIB/PRHIB.h" 
#include "SYSCTL/Registers/PRUART/PRUART.h" 
#include "SYSCTL/Registers/PRSSI/PRSSI.h" 
#include "SYSCTL/Registers/PRI2C/PRI2C.h" 
#include "SYSCTL/Registers/PRUSB/PRUSB.h" 
#include "SYSCTL/Registers/PREPHY/PREPHY.h" 
#include "SYSCTL/Registers/PRCAN/PRCAN.h" 
#include "SYSCTL/Registers/PRADC/PRADC.h" 
#include "SYSCTL/Registers/PRACMP/PRACMP.h" 
#include "SYSCTL/Registers/PRPWM/PRPWM.h" 
#include "SYSCTL/Registers/PRQEI/PRQEI.h" 
#include "SYSCTL/Registers/PREEPROM/PREEPROM.h" 
#include "SYSCTL/Registers/PRWTIMER/PRWTIMER.h" 
#include "SYSCTL/Registers/PRCCM/PRCCM.h" 
#include "SYSCTL/Registers/PRLCD/PRLCD.h" 
#include "SYSCTL/Registers/PROWIRE/PROWIRE.h" 
#include "SYSCTL/Registers/PREMAC/PREMAC.h" 
#include "SYSCTL/Registers/UNIQUEID0/UNIQUEID0.h" 
#include "SYSCTL/Registers/UNIQUEID1/UNIQUEID1.h" 
#include "SYSCTL/Registers/UNIQUEID2/UNIQUEID2.h" 
#include "SYSCTL/Registers/UNIQUEID3/UNIQUEID3.h" 
#include "SYSCTL/Registers/CCMCGREQ/CCMCGREQ.h" 