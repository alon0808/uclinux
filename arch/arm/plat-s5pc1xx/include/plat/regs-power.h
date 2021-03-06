/* arch/arm/plat-s5pc1xx/include/plat/regs-clock.h
 *
 * Copyright 2009 Samsung Electronics Co.
 *	Jongse Won <jongse.won@samsung.com>
 *
 * S5PC1XX clock register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARM_REGS_PWR
#define __ASM_ARM_REGS_PWR __FILE__

#define S5PC1XX_PWRREG(x)			(S5PC1XX_VA_PWR + (x))

/* s5pc100 (0xE0108000) register for power management */
#define S5PC100_PWR_CFG				S5PC1XX_PWRREG(0x0)
#define S5PC100_EINT_WAKEUP_MASK		S5PC1XX_PWRREG(0x4)
#define S5PC100_NORMAL_CFG			S5PC1XX_PWRREG(0x10)
#define S5PC100_STOP_CFG			S5PC1XX_PWRREG(0x14)
#define S5PC100_SLEEP_CFG			S5PC1XX_PWRREG(0x18)
#define S5PC100_STOP_MEM_CFG			S5PC1XX_PWRREG(0x1C)
#define S5PC100_OSC_FREQ			S5PC1XX_PWRREG(0x100)
#define S5PC100_OSC_STABLE			S5PC1XX_PWRREG(0x104)
#define S5PC100_PWR_STABLE			S5PC1XX_PWRREG(0x108)
#define S5PC100_MTC_STABLE			S5PC1XX_PWRREG(0x110)
#define S5PC100_CLAMP_STABLE			S5PC1XX_PWRREG(0x114)
#define S5PC100_OTHERS				S5PC1XX_PWRREG(0x200)
#define S5PC100_RST_STAT			S5PC1XX_PWRREG(0x300)
#define S5PC100_WAKEUP_STAT			S5PC1XX_PWRREG(0x304)
#define S5PC100_BLK_PWR_STAT			S5PC1XX_PWRREG(0x308)
#define S5PC100_INFORM0				S5PC1XX_PWRREG(0x400)
#define S5PC100_INFORM1				S5PC1XX_PWRREG(0x404)
#define S5PC100_INFORM2				S5PC1XX_PWRREG(0x408)
#define S5PC100_INFORM3				S5PC1XX_PWRREG(0x40C)
#define S5PC100_INFORM4				S5PC1XX_PWRREG(0x410)
#define S5PC100_INFORM5				S5PC1XX_PWRREG(0x414)
#define S5PC100_INFORM6				S5PC1XX_PWRREG(0x418)
#define S5PC100_INFORM7				S5PC1XX_PWRREG(0x41C)
#define S5PC100_DCGIDX_MAP0			S5PC1XX_PWRREG(0x500)
#define S5PC100_DCGIDX_MAP1			S5PC1XX_PWRREG(0x504)
#define S5PC100_DCGIDX_MAP2			S5PC1XX_PWRREG(0x508)
#define S5PC100_DCGPERF_MAP0			S5PC1XX_PWRREG(0x50C)
#define S5PC100_DCGPERF_MAP1			S5PC1XX_PWRREG(0x510)
#define S5PC100_DVCIDX_MAP			S5PC1XX_PWRREG(0x514)
#define S5PC100_FREQ_CPU			S5PC1XX_PWRREG(0x518)
#define S5PC100_FREQ_DPM			S5PC1XX_PWRREG(0x51C)
#define S5PC100_DVSEMCLK_EN			S5PC1XX_PWRREG(0x520)
#define S5PC100_APLL_CON_L8			S5PC1XX_PWRREG(0x600)
#define S5PC100_APLL_CON_L7			S5PC1XX_PWRREG(0x604)
#define S5PC100_APLL_CON_L6			S5PC1XX_PWRREG(0x608)
#define S5PC100_APLL_CON_L5			S5PC1XX_PWRREG(0x60C)
#define S5PC100_APLL_CON_L4			S5PC1XX_PWRREG(0x610)
#define S5PC100_APLL_CON_L3			S5PC1XX_PWRREG(0x614)
#define S5PC100_APLL_CON_L2			S5PC1XX_PWRREG(0x618)
#define S5PC100_APLL_CON_L1			S5PC1XX_PWRREG(0x61C)
#define S5PC100_IEM_CONTROL			S5PC1XX_PWRREG(0x620)
#define S5PC100_CLKDIV_IEM_L8			S5PC1XX_PWRREG(0x700)
#define S5PC100_CLKDIV_IEM_L7			S5PC1XX_PWRREG(0x704)
#define S5PC100_CLKDIV_IEM_L6			S5PC1XX_PWRREG(0x708)
#define S5PC100_CLKDIV_IEM_L5			S5PC1XX_PWRREG(0x70C)
#define S5PC100_CLKDIV_IEM_L4			S5PC1XX_PWRREG(0x710)
#define S5PC100_CLKDIV_IEM_L3			S5PC1XX_PWRREG(0x714)
#define S5PC100_CLKDIV_IEM_L2			S5PC1XX_PWRREG(0x718)
#define S5PC100_CLKDIV_IEM_L1			S5PC1XX_PWRREG(0x71C)
#define S5PC100_IEM_HPMCLK_DIV			S5PC1XX_PWRREG(0x724)

/* PWR_CFG */
#define S5PC100_PWRCFG_CFG_DEEP_IDLE		(1 << 31)
#define S5PC100_PWRCFG_CFG_WFI_MASK		(3 << 5)
#define S5PC100_PWRCFG_CFG_WFI_IDLE		(0 << 5)
#define S5PC100_PWRCFG_CFG_WFI_DEEP_IDLE	(1 << 5)
#define S5PC100_PWRCFG_CFG_WFI_STOP		(2 << 5)
#define S5PC100_PWRCFG_CFG_WFI_SLEEP		(3 << 5)

/* SLEEP_CFG */
#define S5PC100_SLEEP_OSC_EN_SLEEP		(1 << 0)

/* OTHERS */
#define S5PC100_PMU_INT_DISABLE			(1 << 24)

#endif /* __ASM_ARM_REGS_PWR */
