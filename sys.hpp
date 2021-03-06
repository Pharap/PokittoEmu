#pragma once

#include "mmu.hpp"

namespace SYS {

    extern u32 VTOR;
    extern u32 SYSMEMREMAP, PRESETCTRL, SYSPLLCTRL, SYSPLLSTAT, USBPLLCTRL, USBPLLSTAT, RTCOSCCTRL, SYSOSCCTRL, WDTOSCCTRL, IRCCTRL, SYSRSTSTAT, SYSPLLCLKSEL, SYSPLLCLKUEN, USBPLLCLKSEL, USBPLLCLKUEN, MAINCLKSEL, MAINCLKUEN, SYSAHBCLKDIV, SYSAHBCLKCTRL, SSP0CLKDIV, USART0CLKDIV, SSP1CLKDIV, FRGCLKDIV, USBCLKSEL, USBCLKUEN, USBCLKDIV, CLKOUTSEL, CLKOUTUEN, CLKOUTDIV, UARTFRGDIV, UARTFRGMULT, EXTTRACECMD, PIOPORCAP0, PIOPORCAP1, PIOPORCAP2, IOCONCLKDIV6, IOCONCLKDIV5, IOCONCLKDIV4, IOCONCLKDIV3, IOCONCLKDIV2, IOCONCLKDIV1, IOCONCLKDIV0, BODCTRL, SYSTCKCAL, IRQLATENCY, NMISRC, PINTSEL0, PINTSEL1, PINTSEL2, PINTSEL3, PINTSEL4, PINTSEL5, PINTSEL6, PINTSEL7, USBCLKCTRL, USBCLKST, STARTERP0, STARTERP1, PDSLEEPCFG, PDAWAKECFG, PDRUNCFG, DEVICE_ID;

    void init();

    extern MMU::Layout layout;


}
