/*
 * Copyright 2011 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */

#ifndef __ARCH_ARM_MACH_MX6_CCM_REGS_H__
#define __ARCH_ARM_MACH_MX6_CCM_REGS_H__

struct imx_ccm_reg {
	u32 ccr;	/* 0x0000 */
	u32 ccdr;
	u32 csr;
	u32 ccsr;
	u32 cacrr;	/* 0x0010*/
	u32 cbcdr;
	u32 cbcmr;
	u32 cscmr1;
	u32 cscmr2;	/* 0x0020 */
	u32 cscdr1;
	u32 cs1cdr;
	u32 cs2cdr;
	u32 cdcdr;	/* 0x0030 */
	u32 chscdr;
	u32 cscdr2;
	u32 cscdr3;
	u32 cscdr4;	/* 0x0040 */
	u32 resv0;
	u32 cdhipr;
	u32 cdcr;
	u32 ctor;	/* 0x0050 */
	u32 clpcr;
	u32 cisr;
	u32 cimr;
	u32 ccosr;	/* 0x0060 */
	u32 cgpr;
	u32 CCGR0;
	u32 CCGR1;
	u32 CCGR2;	/* 0x0070 */
	u32 CCGR3;
	u32 CCGR4;
	u32 CCGR5;
	u32 CCGR6;	/* 0x0080 */
	u32 CCGR7;
	u32 cmeor;
	u32 resv[0xfdd];
	u32 analog_pll_sys;			/* 0x4000 */
	u32 analog_pll_sys_set;
	u32 analog_pll_sys_clr;
	u32 analog_pll_sys_tog;
	u32 analog_usb1_pll_480_ctrl;		/* 0x4010 */
	u32 analog_usb1_pll_480_ctrl_set;
	u32 analog_usb1_pll_480_ctrl_clr;
	u32 analog_usb1_pll_480_ctrl_tog;
	u32 analog_reserved0[4];
	u32 analog_pll_528;			/* 0x4030 */
	u32 analog_pll_528_set;
	u32 analog_pll_528_clr;
	u32 analog_pll_528_tog;
	u32 analog_pll_528_ss;			/* 0x4040 */
	u32 analog_reserved1[3];
	u32 analog_pll_528_num;			/* 0x4050 */
	u32 analog_reserved2[3];
	u32 analog_pll_528_denom;		/* 0x4060 */
	u32 analog_reserved3[3];
	u32 analog_pll_audio;			/* 0x4070 */
	u32 analog_pll_audio_set;
	u32 analog_pll_audio_clr;
	u32 analog_pll_audio_tog;
	u32 analog_pll_audio_num;		/* 0x4080*/
	u32 analog_reserved4[3];
	u32 analog_pll_audio_denom;		/* 0x4090 */
	u32 analog_reserved5[3];
	u32 analog_pll_video;			/* 0x40a0 */
	u32 analog_pll_video_set;
	u32 analog_pll_video_clr;
	u32 analog_pll_video_tog;
	u32 analog_pll_video_num;		/* 0x40b0 */
	u32 analog_reserved6[3];
	u32 analog_pll_vedio_denon;		/* 0x40c0 */
	u32 analog_reserved7[7];
	u32 analog_pll_enet;			/* 0x40e0 */
	u32 analog_pll_enet_set;
	u32 analog_pll_enet_clr;
	u32 analog_pll_enet_tog;
	u32 analog_pfd_480;			/* 0x40f0 */
	u32 analog_pfd_480_set;
	u32 analog_pfd_480_clr;
	u32 analog_pfd_480_tog;
	u32 analog_pfd_528;			/* 0x4100 */
	u32 analog_pfd_528_set;
	u32 analog_pfd_528_clr;
	u32 analog_pfd_528_tog;
};

/* Define the bits in register CCR */
#define MXC_CCM_CCR_RBC_EN				(1 << 27)
#define MXC_CCM_CCR_REG_BYPASS_CNT_MASK			(0x3F << 21)
#define MXC_CCM_CCR_REG_BYPASS_CNT_OFFSET		21
#define MXC_CCM_CCR_WB_COUNT_MASK			0x7
#define MXC_CCM_CCR_WB_COUNT_OFFSET			(1 << 16)
#define MXC_CCM_CCR_COSC_EN				(1 << 12)
#define MXC_CCM_CCR_OSCNT_MASK				0xFF
#define MXC_CCM_CCR_OSCNT_OFFSET			0

/* Define the bits in register CCDR */
#define MXC_CCM_CCDR_MMDC_CH1_HS_MASK			(1 << 16)
#define MXC_CCM_CCDR_MMDC_CH0_HS_MASK			(1 << 17)

/* Define the bits in register CSR */
#define MXC_CCM_CSR_COSC_READY				(1 << 5)
#define MXC_CCM_CSR_REF_EN_B				(1 << 0)

/* Define the bits in register CCSR */
#define MXC_CCM_CCSR_PDF_540M_AUTO_DIS			(1 << 15)
#define MXC_CCM_CCSR_PDF_720M_AUTO_DIS			(1 << 14)
#define MXC_CCM_CCSR_PDF_454M_AUTO_DIS			(1 << 13)
#define MXC_CCM_CCSR_PDF_508M_AUTO_DIS			(1 << 12)
#define MXC_CCM_CCSR_PDF_594M_AUTO_DIS			(1 << 11)
#define MXC_CCM_CCSR_PDF_352M_AUTO_DIS			(1 << 10)
#define MXC_CCM_CCSR_PDF_400M_AUTO_DIS			(1 << 9)
#define MXC_CCM_CCSR_STEP_SEL				(1 << 8)
#define MXC_CCM_CCSR_PLL1_SW_CLK_SEL			(1 << 2)
#define MXC_CCM_CCSR_PLL2_SW_CLK_SEL			(1 << 1)
#define MXC_CCM_CCSR_PLL3_SW_CLK_SEL			(1 << 0)

/* Define the bits in register CACRR */
#define MXC_CCM_CACRR_ARM_PODF_OFFSET			0
#define MXC_CCM_CACRR_ARM_PODF_MASK			0x7

/* Define the bits in register CBCDR */
#define MXC_CCM_CBCDR_PERIPH_CLK2_PODF_MASK		(0x7 << 27)
#define MXC_CCM_CBCDR_PERIPH_CLK2_PODF_OFFSET		27
#define MXC_CCM_CBCDR_PERIPH2_CLK2_SEL			(1 << 26)
#define MXC_CCM_CBCDR_PERIPH_CLK_SEL			(1 << 25)
#define MXC_CCM_CBCDR_MMDC_CH0_PODF_MASK		(0x7 << 19)
#define MXC_CCM_CBCDR_MMDC_CH0_PODF_OFFSET		19
#define MXC_CCM_CBCDR_AXI_PODF_MASK			(0x7 << 16)
#define MXC_CCM_CBCDR_AXI_PODF_OFFSET			16
#define MXC_CCM_CBCDR_AHB_PODF_MASK			(0x7 << 10)
#define MXC_CCM_CBCDR_AHB_PODF_OFFSET			10
#define MXC_CCM_CBCDR_IPG_PODF_MASK			(0x3 << 8)
#define MXC_CCM_CBCDR_IPG_PODF_OFFSET			8
#define MXC_CCM_CBCDR_AXI_ALT_SEL			(1 << 7)
#define MXC_CCM_CBCDR_AXI_SEL				(1 << 6)
#define MXC_CCM_CBCDR_MMDC_CH1_PODF_MASK		(0x7 << 3)
#define MXC_CCM_CBCDR_MMDC_CH1_PODF_OFFSET		3
#define MXC_CCM_CBCDR_PERIPH2_CLK2_PODF_MASK		(0x7 << 0)
#define MXC_CCM_CBCDR_PERIPH2_CLK2_PODF_OFFSET		0

/* Define the bits in register CBCMR */
#define MXC_CCM_CBCMR_GPU3D_SHADER_PODF_MASK		(0x7 << 29)
#define MXC_CCM_CBCMR_GPU3D_SHADER_PODF_OFFSET		29
#define MXC_CCM_CBCMR_GPU3D_CORE_PODF_MASK		(0x7 << 26)
#define MXC_CCM_CBCMR_GPU3D_CORE_PODF_OFFSET		26
#define MXC_CCM_CBCMR_GPU2D_CORE_PODF_MASK		(0x7 << 23)
#define MXC_CCM_CBCMR_GPU2D_CORE_PODF_OFFSET		23
#define MXC_CCM_CBCMR_PRE_PERIPH2_CLK_SEL_MASK		(0x3 << 21)
#define MXC_CCM_CBCMR_PRE_PERIPH2_CLK_SEL_OFFSET	21
#define MXC_CCM_CBCMR_PRE_PERIPH2_CLK2_SEL		(1 << 20)
#define MXC_CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK		(0x3 << 18)
#define MXC_CCM_CBCMR_PRE_PERIPH_CLK_SEL_OFFSET		18
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_MASK		(0x3 << 16)
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_OFFSET		16
#define MXC_CCM_CBCMR_VPU_AXI_CLK_SEL_MASK		(0x3 << 14)
#define MXC_CCM_CBCMR_VPU_AXI_CLK_SEL_OFFSET		14
#define MXC_CCM_CBCMR_PERIPH_CLK2_SEL_MASK		(0x3 << 12)
#define MXC_CCM_CBCMR_PERIPH_CLK2_SEL_OFFSET		12
#define MXC_CCM_CBCMR_VDOAXI_CLK_SEL			(1 << 11)
#define MXC_CCM_CBCMR_PCIE_AXI_CLK_SEL			(1 << 10)
#define MXC_CCM_CBCMR_GPU3D_SHADER_CLK_SEL_MASK		(0x3 << 8)
#define MXC_CCM_CBCMR_GPU3D_SHADER_CLK_SEL_OFFSET	8
#define MXC_CCM_CBCMR_GPU3D_CORE_CLK_SEL_MASK		(0x3 << 4)
#define MXC_CCM_CBCMR_GPU3D_CORE_CLK_SEL_OFFSET		4
#define MXC_CCM_CBCMR_GPU3D_AXI_CLK_SEL			(1 << 1)
#define MXC_CCM_CBCMR_GPU2D_AXI_CLK_SEL			(1 << 0)

/* Define the bits in register CSCMR1 */
#define MXC_CCM_CSCMR1_ACLK_EMI_SLOW_MASK		(0x3 << 29)
#define MXC_CCM_CSCMR1_ACLK_EMI_SLOW_OFFSET		29
#define MXC_CCM_CSCMR1_ACLK_EMI_MASK			(0x3 << 27)
#define MXC_CCM_CSCMR1_ACLK_EMI_OFFSET			27
#define MXC_CCM_CSCMR1_ACLK_EMI_SLOW_PODF_MASK		(0x7 << 23)
#define MXC_CCM_CSCMR1_ACLK_EMI_SLOW_PODF_OFFSET	23
#define MXC_CCM_CSCMR1_ACLK_EMI_PODF_MASK		(0x7 << 20)
#define MXC_CCM_CSCMR1_ACLK_EMI_PODF_OFFSET		20
#define MXC_CCM_CSCMR1_USDHC4_CLK_SEL			(1 << 19)
#define MXC_CCM_CSCMR1_USDHC3_CLK_SEL			(1 << 18)
#define MXC_CCM_CSCMR1_USDHC2_CLK_SEL			(1 << 17)
#define MXC_CCM_CSCMR1_USDHC1_CLK_SEL			(1 << 16)
#define MXC_CCM_CSCMR1_SSI3_CLK_SEL_MASK		(0x3 << 14)
#define MXC_CCM_CSCMR1_SSI3_CLK_SEL_OFFSET		14
#define MXC_CCM_CSCMR1_SSI2_CLK_SEL_MASK		(0x3 << 12)
#define MXC_CCM_CSCMR1_SSI2_CLK_SEL_OFFSET		12
#define MXC_CCM_CSCMR1_SSI1_CLK_SEL_MASK		(0x3 << 10)
#define MXC_CCM_CSCMR1_SSI1_CLK_SEL_OFFSET		10
#define MXC_CCM_CSCMR1_PERCLK_PODF_MASK			0x3F

/* Define the bits in register CSCMR2 */
#define MXC_CCM_CSCMR2_ESAI_PRE_SEL_MASK		(0x3 << 19)
#define MXC_CCM_CSCMR2_ESAI_PRE_SEL_OFFSET		19
#define MXC_CCM_CSCMR2_LDB_DI1_IPU_DIV			(1 << 11)
#define MXC_CCM_CSCMR2_LDB_DI0_IPU_DIV			(1 << 10)
#define MXC_CCM_CSCMR2_CAN_CLK_SEL_MASK			(0x3F << 2)
#define MXC_CCM_CSCMR2_CAN_CLK_SEL_OFFSET		2

/* Define the bits in register CSCDR1 */
#define MXC_CCM_CSCDR1_VPU_AXI_PODF_MASK		(0x7 << 25)
#define MXC_CCM_CSCDR1_VPU_AXI_PODF_OFFSET		25
#define MXC_CCM_CSCDR1_USDHC4_PODF_MASK			(0x7 << 22)
#define MXC_CCM_CSCDR1_USDHC4_PODF_OFFSET		22
#define MXC_CCM_CSCDR1_USDHC3_PODF_MASK			(0x7 << 19)
#define MXC_CCM_CSCDR1_USDHC3_PODF_OFFSET		19
#define MXC_CCM_CSCDR1_USDHC2_PODF_MASK			(0x7 << 16)
#define MXC_CCM_CSCDR1_USDHC2_PODF_OFFSET		16
#define MXC_CCM_CSCDR1_USDHC1_PODF_MASK			(0x7 << 11)
#define MXC_CCM_CSCDR1_USDHC1_PODF_OFFSET		11
#define MXC_CCM_CSCDR1_USBOH3_CLK_PRED_OFFSET		8
#define MXC_CCM_CSCDR1_USBOH3_CLK_PRED_MASK		(0x7 << 8)
#define MXC_CCM_CSCDR1_USBOH3_CLK_PODF_OFFSET		6
#define MXC_CCM_CSCDR1_USBOH3_CLK_PODF_MASK		(0x3 << 6)
#define MXC_CCM_CSCDR1_UART_CLK_PODF_MASK		0x3F
#define MXC_CCM_CSCDR1_UART_CLK_PODF_OFFSET		0

/* Define the bits in register CS1CDR */
#define MXC_CCM_CS1CDR_ESAI_CLK_PODF_MASK		(0x3F << 25)
#define MXC_CCM_CS1CDR_ESAI_CLK_PODF_OFFSET		25
#define MXC_CCM_CS1CDR_SSI3_CLK_PODF_MASK		(0x3F << 16)
#define MXC_CCM_CS1CDR_SSI3_CLK_PODF_OFFSET		16
#define MXC_CCM_CS1CDR_ESAI_CLK_PRED_MASK		(0x3 << 9)
#define MXC_CCM_CS1CDR_ESAI_CLK_PRED_OFFSET		9
#define MXC_CCM_CS1CDR_SSI1_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CS1CDR_SSI1_CLK_PRED_OFFSET		6
#define MXC_CCM_CS1CDR_SSI1_CLK_PODF_MASK		0x3F
#define MXC_CCM_CS1CDR_SSI1_CLK_PODF_OFFSET		0

/* Define the bits in register CS2CDR */
#define MXC_CCM_CS2CDR_ENFC_CLK_PODF_MASK		(0x3F << 21)
#define MXC_CCM_CS2CDR_ENFC_CLK_PODF_OFFSET		21
#define MXC_CCM_CS2CDR_ENFC_CLK_PRED_MASK		(0x7 << 18)
#define MXC_CCM_CS2CDR_ENFC_CLK_PRED_OFFSET		18
#define MXC_CCM_CS2CDR_ENFC_CLK_SEL_MASK		(0x3 << 16)
#define MXC_CCM_CS2CDR_ENFC_CLK_SEL_OFFSET		16
#define MXC_CCM_CS2CDR_LDB_DI1_CLK_SEL_MASK		(0x7 << 12)
#define MXC_CCM_CS2CDR_LDB_DI1_CLK_SEL_OFFSET		12
#define MXC_CCM_CS2CDR_LDB_DI0_CLK_SEL_MASK		(0x7 << 9)
#define MXC_CCM_CS2CDR_LDB_DI0_CLK_SEL_OFFSET		9
#define MXC_CCM_CS2CDR_SSI2_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CS2CDR_SSI2_CLK_PRED_OFFSET		6
#define MXC_CCM_CS2CDR_SSI2_CLK_PODF_MASK		0x3F
#define MXC_CCM_CS2CDR_SSI2_CLK_PODF_OFFSET		0

/* Define the bits in register CDCDR */
#define MXC_CCM_CDCDR_HSI_TX_PODF_MASK			(0x7 << 29)
#define MXC_CCM_CDCDR_HSI_TX_PODF_OFFSET		29
#define MXC_CCM_CDCDR_HSI_TX_CLK_SEL			(1 << 28)
#define MXC_CCM_CDCDR_SPDIF0_CLK_PRED_MASK		(0x7 << 25)
#define MXC_CCM_CDCDR_SPDIF0_CLK_PRED_OFFSET		25
#define MXC_CCM_CDCDR_SPDIF0_CLK_PODF_MASK		(0x7 << 19)
#define MXC_CCM_CDCDR_SPDIF0_CLK_PODF_OFFSET		19
#define MXC_CCM_CDCDR_SPDIF0_CLK_SEL_MASK		(0x3 << 20)
#define MXC_CCM_CDCDR_SPDIF0_CLK_SEL_OFFSET		20
#define MXC_CCM_CDCDR_SPDIF1_CLK_PRED_MASK		(0x7 << 12)
#define MXC_CCM_CDCDR_SPDIF1_CLK_PRED_OFFSET		12
#define MXC_CCM_CDCDR_SPDIF1_CLK_PODF_MASK		(0x7 << 9)
#define MXC_CCM_CDCDR_SPDIF1_CLK_PODF_OFFSET		9
#define MXC_CCM_CDCDR_SPDIF1_CLK_SEL_MASK		(0x3 << 7)
#define MXC_CCM_CDCDR_SPDIF1_CLK_SEL_OFFSET		7

/* Define the bits in register CHSCCDR */
#define MXC_CCM_CHSCCDR_IPU1_DI1_PRE_CLK_SEL_MASK	(0x7 << 15)
#define MXC_CCM_CHSCCDR_IPU1_DI1_PRE_CLK_SEL_OFFSET	15
#define MXC_CCM_CHSCCDR_IPU1_DI1_PODF_MASK		(0x7 << 12)
#define MXC_CCM_CHSCCDR_IPU1_DI1_PODF_OFFSET		12
#define MXC_CCM_CHSCCDR_IPU1_DI1_CLK_SEL_MASK		(0x7 << 9)
#define MXC_CCM_CHSCCDR_IPU1_DI1_CLK_SEL_OFFSET		9
#define MXC_CCM_CHSCCDR_IPU1_DI0_PRE_CLK_SEL_MASK	(0x7 << 6)
#define MXC_CCM_CHSCCDR_IPU1_DI0_PRE_CLK_SEL_OFFSET	6
#define MXC_CCM_CHSCCDR_IPU1_DI0_PODF_MASK		(0x7 << 3)
#define MXC_CCM_CHSCCDR_IPU1_DI0_PODF_OFFSET		3
#define MXC_CCM_CHSCCDR_IPU1_DI0_CLK_SEL_MASK		(0x7)
#define MXC_CCM_CHSCCDR_IPU1_DI0_CLK_SEL_OFFSET		0

/* Define the bits in register CSCDR2 */
#define MXC_CCM_CSCDR2_ECSPI_CLK_PODF_MASK		(0x3F << 19)
#define MXC_CCM_CSCDR2_ECSPI_CLK_PODF_OFFSET		19
#define MXC_CCM_CHSCCDR_IPU2_DI1_PRE_CLK_SEL_MASK	(0x7 << 15)
#define MXC_CCM_CHSCCDR_IPU2_DI1_PRE_CLK_SEL_OFFSET	15
#define MXC_CCM_CHSCCDR_IPU2_DI1_PODF_MASK		(0x7 << 12)
#define MXC_CCM_CHSCCDR_IPU2_DI1_PODF_OFFSET		12
#define MXC_CCM_CHSCCDR_IPU2_DI1_CLK_SEL_MASK		(0x7 << 9)
#define MXC_CCM_CHSCCDR_IPU2_DI1_CLK_SEL_OFFSET		9
#define MXC_CCM_CHSCCDR_IPU2_DI0_PRE_CLK_SEL_MASK	(0x7 << 6)
#define MXC_CCM_CHSCCDR_IPU2_DI0_PRE_CLK_SEL_OFFSET	6
#define MXC_CCM_CHSCCDR_IPU2_DI0_PODF_MASK		(0x7 << 3)
#define MXC_CCM_CHSCCDR_IPU2_DI0_PODF_OFFSET		3
#define MXC_CCM_CHSCCDR_IPU2_DI0_CLK_SEL_MASK		0x7
#define MXC_CCM_CHSCCDR_IPU2_DI0_CLK_SEL_OFFSET		0

/* Define the bits in register CSCDR3 */
#define MXC_CCM_CSCDR3_IPU2_HSP_PODF_MASK		(0x7 << 16)
#define MXC_CCM_CSCDR3_IPU2_HSP_PODF_OFFSET		16
#define MXC_CCM_CSCDR3_IPU2_HSP_CLK_SEL_MASK		(0x3 << 14)
#define MXC_CCM_CSCDR3_IPU2_HSP_CLK_SEL_OFFSET		14
#define MXC_CCM_CSCDR3_IPU1_HSP_PODF_MASK		(0x7 << 11)
#define MXC_CCM_CSCDR3_IPU1_HSP_PODF_OFFSET		11
#define MXC_CCM_CSCDR3_IPU1_HSP_CLK_SEL_MASK		(0x3 << 9)
#define MXC_CCM_CSCDR3_IPU1_HSP_CLK_SEL_OFFSET		9

/* Define the bits in register CDHIPR */
#define MXC_CCM_CDHIPR_ARM_PODF_BUSY			(1 << 16)
#define MXC_CCM_CDHIPR_PERIPH_CLK_SEL_BUSY		(1 << 5)
#define MXC_CCM_CDHIPR_MMDC_CH0_PODF_BUSY		(1 << 4)
#define MXC_CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY		(1 << 3)
#define MXC_CCM_CDHIPR_MMDC_CH1_PODF_BUSY		(1 << 2)
#define MXC_CCM_CDHIPR_AHB_PODF_BUSY			(1 << 1)
#define MXC_CCM_CDHIPR_AXI_PODF_BUSY			1

/* Define the bits in register CLPCR */
#define MXC_CCM_CLPCR_MASK_L2CC_IDLE			(1 << 27)
#define MXC_CCM_CLPCR_MASK_SCU_IDLE			(1 << 26)
#define MXC_CCM_CLPCR_MASK_CORE3_WFI			(1 << 25)
#define MXC_CCM_CLPCR_MASK_CORE2_WFI			(1 << 24)
#define MXC_CCM_CLPCR_MASK_CORE1_WFI			(1 << 23)
#define MXC_CCM_CLPCR_MASK_CORE0_WFI			(1 << 22)
#define MXC_CCM_CLPCR_BYP_MMDC_CH1_LPM_HS		(1 << 21)
#define MXC_CCM_CLPCR_BYP_MMDC_CH0_LPM_HS		(1 << 19)
#define MXC_CCM_CLPCR_WB_CORE_AT_LPM			(1 << 17)
#define MXC_CCM_CLPCR_WB_PER_AT_LPM			(1 << 17)
#define MXC_CCM_CLPCR_COSC_PWRDOWN			(1 << 11)
#define MXC_CCM_CLPCR_STBY_COUNT_MASK			(0x3 << 9)
#define MXC_CCM_CLPCR_STBY_COUNT_OFFSET			9
#define MXC_CCM_CLPCR_VSTBY				(1 << 8)
#define MXC_CCM_CLPCR_DIS_REF_OSC			(1 << 7)
#define MXC_CCM_CLPCR_SBYOS				(1 << 6)
#define MXC_CCM_CLPCR_ARM_CLK_DIS_ON_LPM		(1 << 5)
#define MXC_CCM_CLPCR_LPSR_CLK_SEL_MASK			(0x3 << 3)
#define MXC_CCM_CLPCR_LPSR_CLK_SEL_OFFSET		3
#define MXC_CCM_CLPCR_BYPASS_PMIC_VFUNC_READY		(1 << 2)
#define MXC_CCM_CLPCR_LPM_MASK				0x3
#define MXC_CCM_CLPCR_LPM_OFFSET			0

/* Define the bits in register CISR */
#define MXC_CCM_CISR_ARM_PODF_LOADED			(1 << 26)
#define MXC_CCM_CISR_MMDC_CH0_PODF_LOADED		(1 << 23)
#define MXC_CCM_CISR_PERIPH_CLK_SEL_LOADED		(1 << 22)
#define MXC_CCM_CISR_MMDC_CH1_PODF_LOADED		(1 << 21)
#define MXC_CCM_CISR_AHB_PODF_LOADED			(1 << 20)
#define MXC_CCM_CISR_PERIPH2_CLK_SEL_LOADED		(1 << 19)
#define MXC_CCM_CISR_AXI_PODF_LOADED			(1 << 17)
#define MXC_CCM_CISR_COSC_READY				(1 << 6)
#define MXC_CCM_CISR_LRF_PLL				1

/* Define the bits in register CIMR */
#define MXC_CCM_CIMR_MASK_ARM_PODF_LOADED		(1 << 26)
#define MXC_CCM_CIMR_MASK_MMDC_CH0_PODF_LOADED		(1 << 23)
#define MXC_CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED		(1 << 22)
#define MXC_CCM_CIMR_MASK_MMDC_CH1_PODF_LOADED		(1 << 21)
#define MXC_CCM_CIMR_MASK_AHB_PODF_LOADED		(1 << 20)
#define MXC_CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED	(1 << 22)
#define MXC_CCM_CIMR_MASK_AXI_PODF_LOADED		(1 << 17)
#define MXC_CCM_CIMR_MASK_COSC_READY			(1 << 6)
#define MXC_CCM_CIMR_MASK_LRF_PLL			1

/* Define the bits in register CCOSR */
#define MXC_CCM_CCOSR_CKO2_EN_OFFSET			(1 << 24)
#define MXC_CCM_CCOSR_CKO2_DIV_MASK			(0x7 << 21)
#define MXC_CCM_CCOSR_CKO2_DIV_OFFSET			21
#define MXC_CCM_CCOSR_CKO2_SEL_OFFSET			16
#define MXC_CCM_CCOSR_CKO2_SEL_MASK			(0x1F << 16)
#define MXC_CCM_CCOSR_CKOL_EN				(0x1 << 7)
#define MXC_CCM_CCOSR_CKOL_DIV_MASK			(0x7 << 4)
#define MXC_CCM_CCOSR_CKOL_DIV_OFFSET			4
#define MXC_CCM_CCOSR_CKOL_SEL_MASK			0xF
#define MXC_CCM_CCOSR_CKOL_SEL_OFFSET			0

/* Define the bits in registers CGPR */
#define MXC_CCM_CGPR_EFUSE_PROG_SUPPLY_GATE		(1 << 4)
#define MXC_CCM_CGPR_MMDC_EXT_CLK_DIS			(1 << 2)
#define MXC_CCM_CGPR_PMIC_DELAY_SCALER			1

/* Define the bits in registers CCGRx */
#define MXC_CCM_CCGR_CG_MASK				3

#define MXC_CCM_CCGR0_CG15_OFFSET			30
#define MXC_CCM_CCGR0_CG15_MASK			(0x3 << 30)
#define MXC_CCM_CCGR0_CG14_OFFSET			28
#define MXC_CCM_CCGR0_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR0_CG13_OFFSET			26
#define MXC_CCM_CCGR0_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR0_CG12_OFFSET			24
#define MXC_CCM_CCGR0_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR0_CG11_OFFSET			22
#define MXC_CCM_CCGR0_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR0_CG10_OFFSET			20
#define MXC_CCM_CCGR0_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR0_CG9_OFFSET			18
#define MXC_CCM_CCGR0_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR0_CG8_OFFSET			16
#define MXC_CCM_CCGR0_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR0_CG7_OFFSET			14
#define MXC_CCM_CCGR0_CG6_OFFSET			12
#define MXC_CCM_CCGR0_CG5_OFFSET			10
#define MXC_CCM_CCGR0_CG5_MASK			(0x3 << 10)
#define MXC_CCM_CCGR0_CG4_OFFSET			8
#define MXC_CCM_CCGR0_CG4_MASK			(0x3 << 8)
#define MXC_CCM_CCGR0_CG3_OFFSET			6
#define MXC_CCM_CCGR0_CG3_MASK			(0x3 << 6)
#define MXC_CCM_CCGR0_CG2_OFFSET			4
#define MXC_CCM_CCGR0_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR0_CG1_OFFSET			2
#define MXC_CCM_CCGR0_CG1_MASK			(0x3 << 2)
#define MXC_CCM_CCGR0_CG0_OFFSET			0
#define MXC_CCM_CCGR0_CG0_MASK				3

#define MXC_CCM_CCGR1_CG15_OFFSET			30
#define MXC_CCM_CCGR1_CG14_OFFSET			28
#define MXC_CCM_CCGR1_CG13_OFFSET			26
#define MXC_CCM_CCGR1_CG12_OFFSET			24
#define MXC_CCM_CCGR1_CG11_OFFSET			22
#define MXC_CCM_CCGR1_CG10_OFFSET			20
#define MXC_CCM_CCGR1_CG9_OFFSET			18
#define MXC_CCM_CCGR1_CG8_OFFSET			16
#define MXC_CCM_CCGR1_CG7_OFFSET			14
#define MXC_CCM_CCGR1_CG6_OFFSET			12
#define MXC_CCM_CCGR1_CG5_OFFSET			10
#define MXC_CCM_CCGR1_CG4_OFFSET			8
#define MXC_CCM_CCGR1_CG3_OFFSET			6
#define MXC_CCM_CCGR1_CG2_OFFSET			4
#define MXC_CCM_CCGR1_CG1_OFFSET			2
#define MXC_CCM_CCGR1_CG0_OFFSET			0

#define MXC_CCM_CCGR2_CG15_OFFSET			30
#define MXC_CCM_CCGR2_CG14_OFFSET			28
#define MXC_CCM_CCGR2_CG13_OFFSET			26
#define MXC_CCM_CCGR2_CG12_OFFSET			24
#define MXC_CCM_CCGR2_CG11_OFFSET			22
#define MXC_CCM_CCGR2_CG10_OFFSET			20
#define MXC_CCM_CCGR2_CG9_OFFSET			18
#define MXC_CCM_CCGR2_CG8_OFFSET			16
#define MXC_CCM_CCGR2_CG7_OFFSET			14
#define MXC_CCM_CCGR2_CG6_OFFSET			12
#define MXC_CCM_CCGR2_CG5_OFFSET			10
#define MXC_CCM_CCGR2_CG4_OFFSET			8
#define MXC_CCM_CCGR2_CG3_OFFSET			6
#define MXC_CCM_CCGR2_CG2_OFFSET			4
#define MXC_CCM_CCGR2_CG1_OFFSET			2
#define MXC_CCM_CCGR2_CG0_OFFSET			0

#define MXC_CCM_CCGR3_CG15_OFFSET			30
#define MXC_CCM_CCGR3_CG14_OFFSET			28
#define MXC_CCM_CCGR3_CG13_OFFSET			26
#define MXC_CCM_CCGR3_CG12_OFFSET			24
#define MXC_CCM_CCGR3_CG11_OFFSET			22
#define MXC_CCM_CCGR3_CG10_OFFSET			20
#define MXC_CCM_CCGR3_CG9_OFFSET			18
#define MXC_CCM_CCGR3_CG8_OFFSET			16
#define MXC_CCM_CCGR3_CG7_OFFSET			14
#define MXC_CCM_CCGR3_CG6_OFFSET			12
#define MXC_CCM_CCGR3_CG5_OFFSET			10
#define MXC_CCM_CCGR3_CG4_OFFSET			8
#define MXC_CCM_CCGR3_CG3_OFFSET			6
#define MXC_CCM_CCGR3_CG2_OFFSET			4
#define MXC_CCM_CCGR3_CG1_OFFSET			2
#define MXC_CCM_CCGR3_CG0_OFFSET			0

#define MXC_CCM_CCGR4_CG15_OFFSET			30
#define MXC_CCM_CCGR4_CG14_OFFSET			28
#define MXC_CCM_CCGR4_CG13_OFFSET			26
#define MXC_CCM_CCGR4_CG12_OFFSET			24
#define MXC_CCM_CCGR4_CG11_OFFSET			22
#define MXC_CCM_CCGR4_CG10_OFFSET			20
#define MXC_CCM_CCGR4_CG9_OFFSET			18
#define MXC_CCM_CCGR4_CG8_OFFSET			16
#define MXC_CCM_CCGR4_CG7_OFFSET			14
#define MXC_CCM_CCGR4_CG6_OFFSET			12
#define MXC_CCM_CCGR4_CG5_OFFSET			10
#define MXC_CCM_CCGR4_CG4_OFFSET			8
#define MXC_CCM_CCGR4_CG3_OFFSET			6
#define MXC_CCM_CCGR4_CG2_OFFSET			4
#define MXC_CCM_CCGR4_CG1_OFFSET			2
#define MXC_CCM_CCGR4_CG0_OFFSET			0

#define MXC_CCM_CCGR5_CG15_OFFSET			30
#define MXC_CCM_CCGR5_CG14_OFFSET			28
#define MXC_CCM_CCGR5_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR5_CG13_OFFSET			26
#define MXC_CCM_CCGR5_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR5_CG12_OFFSET			24
#define MXC_CCM_CCGR5_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR5_CG11_OFFSET			22
#define MXC_CCM_CCGR5_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR5_CG10_OFFSET			20
#define MXC_CCM_CCGR5_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR5_CG9_OFFSET			18
#define MXC_CCM_CCGR5_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR5_CG8_OFFSET			16
#define MXC_CCM_CCGR5_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR5_CG7_OFFSET			14
#define MXC_CCM_CCGR5_CG7_MASK			(0x3 << 14)
#define MXC_CCM_CCGR5_CG6_OFFSET			12
#define MXC_CCM_CCGR5_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR5_CG5_OFFSET			10
#define MXC_CCM_CCGR5_CG4_OFFSET			8
#define MXC_CCM_CCGR5_CG3_OFFSET			6
#define MXC_CCM_CCGR5_CG2_OFFSET			4
#define MXC_CCM_CCGR5_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR5_CG1_OFFSET			2
#define MXC_CCM_CCGR5_CG0_OFFSET			0

#define MXC_CCM_CCGR6_CG15_OFFSET			30
#define MXC_CCM_CCGR6_CG14_OFFSET			28
#define MXC_CCM_CCGR6_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR6_CG13_OFFSET			26
#define MXC_CCM_CCGR6_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR6_CG12_OFFSET			24
#define MXC_CCM_CCGR6_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR6_CG11_OFFSET			22
#define MXC_CCM_CCGR6_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR6_CG10_OFFSET			20
#define MXC_CCM_CCGR6_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR6_CG9_OFFSET			18
#define MXC_CCM_CCGR6_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR6_CG8_OFFSET			16
#define MXC_CCM_CCGR6_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR6_CG7_OFFSET			14
#define MXC_CCM_CCGR6_CG7_MASK			(0x3 << 14)
#define MXC_CCM_CCGR6_CG6_OFFSET			12
#define MXC_CCM_CCGR6_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR6_CG5_OFFSET			10
#define MXC_CCM_CCGR6_CG4_OFFSET			8
#define MXC_CCM_CCGR6_CG3_OFFSET			6
#define MXC_CCM_CCGR6_CG2_OFFSET			4
#define MXC_CCM_CCGR6_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR6_CG1_OFFSET			2
#define MXC_CCM_CCGR6_CG0_OFFSET			0

#define MXC_CCM_CCGR7_CG15_OFFSET			30
#define MXC_CCM_CCGR7_CG14_OFFSET			28
#define MXC_CCM_CCGR7_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR7_CG13_OFFSET			26
#define MXC_CCM_CCGR7_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR7_CG12_OFFSET			24
#define MXC_CCM_CCGR7_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR7_CG11_OFFSET			22
#define MXC_CCM_CCGR7_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR7_CG10_OFFSET			20
#define MXC_CCM_CCGR7_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR7_CG9_OFFSET			18
#define MXC_CCM_CCGR7_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR7_CG8_OFFSET			16
#define MXC_CCM_CCGR7_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR7_CG7_OFFSET			14
#define MXC_CCM_CCGR7_CG7_MASK			(0x3 << 14)
#define MXC_CCM_CCGR7_CG6_OFFSET			12
#define MXC_CCM_CCGR7_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR7_CG5_OFFSET			10
#define MXC_CCM_CCGR7_CG4_OFFSET			8
#define MXC_CCM_CCGR7_CG3_OFFSET			6
#define MXC_CCM_CCGR7_CG2_OFFSET			4
#define MXC_CCM_CCGR7_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR7_CG1_OFFSET			2
#define MXC_CCM_CCGR7_CG0_OFFSET			0
#define BM_ANADIG_PLL_SYS_LOCK 0x80000000
#define BP_ANADIG_PLL_SYS_RSVD0      20
#define BM_ANADIG_PLL_SYS_RSVD0 0x7FF00000
#define BF_ANADIG_PLL_SYS_RSVD0(v)  \
	(((v) << 20) & BM_ANADIG_PLL_SYS_RSVD0)
#define BM_ANADIG_PLL_SYS_PLL_SEL 0x00080000
#define BM_ANADIG_PLL_SYS_LVDS_24MHZ_SEL 0x00040000
#define BM_ANADIG_PLL_SYS_LVDS_SEL 0x00020000
#define BM_ANADIG_PLL_SYS_BYPASS 0x00010000
#define BP_ANADIG_PLL_SYS_BYPASS_CLK_SRC      14
#define BM_ANADIG_PLL_SYS_BYPASS_CLK_SRC 0x0000C000
#define BF_ANADIG_PLL_SYS_BYPASS_CLK_SRC(v)  \
	(((v) << 14) & BM_ANADIG_PLL_SYS_BYPASS_CLK_SRC)
#define BV_ANADIG_PLL_SYS_BYPASS_CLK_SRC__OSC_24M  0x0
#define BV_ANADIG_PLL_SYS_BYPASS_CLK_SRC__ANACLK_1 0x1
#define BV_ANADIG_PLL_SYS_BYPASS_CLK_SRC__ANACLK_2 0x2
#define BV_ANADIG_PLL_SYS_BYPASS_CLK_SRC__XOR      0x3
#define BM_ANADIG_PLL_SYS_ENABLE 0x00002000
#define BM_ANADIG_PLL_SYS_POWERDOWN 0x00001000
#define BM_ANADIG_PLL_SYS_HOLD_RING_OFF 0x00000800
#define BM_ANADIG_PLL_SYS_DOUBLE_CP 0x00000400
#define BM_ANADIG_PLL_SYS_HALF_CP 0x00000200
#define BM_ANADIG_PLL_SYS_DOUBLE_LF 0x00000100
#define BM_ANADIG_PLL_SYS_HALF_LF 0x00000080
#define BP_ANADIG_PLL_SYS_DIV_SELECT      0
#define BM_ANADIG_PLL_SYS_DIV_SELECT 0x0000007F
#define BF_ANADIG_PLL_SYS_DIV_SELECT(v)  \
	(((v) << 0) & BM_ANADIG_PLL_SYS_DIV_SELECT)

#define BM_ANADIG_USB1_PLL_480_CTRL_LOCK 0x80000000
#define BP_ANADIG_USB1_PLL_480_CTRL_RSVD1      17
#define BM_ANADIG_USB1_PLL_480_CTRL_RSVD1 0x7FFE0000
#define BF_ANADIG_USB1_PLL_480_CTRL_RSVD1(v)  \
	(((v) << 17) & BM_ANADIG_USB1_PLL_480_CTRL_RSVD1)
#define BM_ANADIG_USB1_PLL_480_CTRL_BYPASS 0x00010000
#define BP_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC      14
#define BM_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC 0x0000C000
#define BF_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC(v)  \
	(((v) << 14) & BM_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC)
#define BV_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC__OSC_24M  0x0
#define BV_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC__ANACLK_1 0x1
#define BV_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC__ANACLK_2 0x2
#define BV_ANADIG_USB1_PLL_480_CTRL_BYPASS_CLK_SRC__XOR      0x3
#define BM_ANADIG_USB1_PLL_480_CTRL_ENABLE 0x00002000
#define BM_ANADIG_USB1_PLL_480_CTRL_POWER 0x00001000
#define BM_ANADIG_USB1_PLL_480_CTRL_HOLD_RING_OFF 0x00000800
#define BM_ANADIG_USB1_PLL_480_CTRL_DOUBLE_CP 0x00000400
#define BM_ANADIG_USB1_PLL_480_CTRL_HALF_CP 0x00000200
#define BM_ANADIG_USB1_PLL_480_CTRL_DOUBLE_LF 0x00000100
#define BM_ANADIG_USB1_PLL_480_CTRL_HALF_LF 0x00000080
#define BM_ANADIG_USB1_PLL_480_CTRL_EN_USB_CLKS 0x00000040
#define BM_ANADIG_USB1_PLL_480_CTRL_RSVD0 0x00000020
#define BP_ANADIG_USB1_PLL_480_CTRL_CONTROL0      2
#define BM_ANADIG_USB1_PLL_480_CTRL_CONTROL0 0x0000001C
#define BF_ANADIG_USB1_PLL_480_CTRL_CONTROL0(v)  \
	(((v) << 2) & BM_ANADIG_USB1_PLL_480_CTRL_CONTROL0)
#define BP_ANADIG_USB1_PLL_480_CTRL_DIV_SELECT      0
#define BM_ANADIG_USB1_PLL_480_CTRL_DIV_SELECT 0x00000003
#define BF_ANADIG_USB1_PLL_480_CTRL_DIV_SELECT(v)  \
	(((v) << 0) & BM_ANADIG_USB1_PLL_480_CTRL_DIV_SELECT)

#define BM_ANADIG_PLL_528_LOCK 0x80000000
#define BP_ANADIG_PLL_528_RSVD1      19
#define BM_ANADIG_PLL_528_RSVD1 0x7FF80000
#define BF_ANADIG_PLL_528_RSVD1(v)  \
	(((v) << 19) & BM_ANADIG_PLL_528_RSVD1)
#define BM_ANADIG_PLL_528_PFD_OFFSET_EN 0x00040000
#define BM_ANADIG_PLL_528_DITHER_ENABLE 0x00020000
#define BM_ANADIG_PLL_528_BYPASS 0x00010000
#define BP_ANADIG_PLL_528_BYPASS_CLK_SRC      14
#define BM_ANADIG_PLL_528_BYPASS_CLK_SRC 0x0000C000
#define BF_ANADIG_PLL_528_BYPASS_CLK_SRC(v)  \
	(((v) << 14) & BM_ANADIG_PLL_528_BYPASS_CLK_SRC)
#define BV_ANADIG_PLL_528_BYPASS_CLK_SRC__OSC_24M  0x0
#define BV_ANADIG_PLL_528_BYPASS_CLK_SRC__ANACLK_1 0x1
#define BV_ANADIG_PLL_528_BYPASS_CLK_SRC__ANACLK_2 0x2
#define BV_ANADIG_PLL_528_BYPASS_CLK_SRC__XOR      0x3
#define BM_ANADIG_PLL_528_ENABLE 0x00002000
#define BM_ANADIG_PLL_528_POWERDOWN 0x00001000
#define BM_ANADIG_PLL_528_HOLD_RING_OFF 0x00000800
#define BM_ANADIG_PLL_528_DOUBLE_CP 0x00000400
#define BM_ANADIG_PLL_528_HALF_CP 0x00000200
#define BM_ANADIG_PLL_528_DOUBLE_LF 0x00000100
#define BM_ANADIG_PLL_528_HALF_LF 0x00000080
#define BP_ANADIG_PLL_528_RSVD0      1
#define BM_ANADIG_PLL_528_RSVD0 0x0000007E
#define BF_ANADIG_PLL_528_RSVD0(v)  \
	(((v) << 1) & BM_ANADIG_PLL_528_RSVD0)
#define BM_ANADIG_PLL_528_DIV_SELECT 0x00000001

#define BP_ANADIG_PLL_528_SS_STOP      16
#define BM_ANADIG_PLL_528_SS_STOP 0xFFFF0000
#define BF_ANADIG_PLL_528_SS_STOP(v) \
	(((v) << 16) & BM_ANADIG_PLL_528_SS_STOP)
#define BM_ANADIG_PLL_528_SS_ENABLE 0x00008000
#define BP_ANADIG_PLL_528_SS_STEP      0
#define BM_ANADIG_PLL_528_SS_STEP 0x00007FFF
#define BF_ANADIG_PLL_528_SS_STEP(v)  \
	(((v) << 0) & BM_ANADIG_PLL_528_SS_STEP)

#define BP_ANADIG_PLL_528_NUM_RSVD0      30
#define BM_ANADIG_PLL_528_NUM_RSVD0 0xC0000000
#define BF_ANADIG_PLL_528_NUM_RSVD0(v) \
	(((v) << 30) & BM_ANADIG_PLL_528_NUM_RSVD0)
#define BP_ANADIG_PLL_528_NUM_A      0
#define BM_ANADIG_PLL_528_NUM_A 0x3FFFFFFF
#define BF_ANADIG_PLL_528_NUM_A(v)  \
	(((v) << 0) & BM_ANADIG_PLL_528_NUM_A)

#define BP_ANADIG_PLL_528_DENOM_RSVD0      30
#define BM_ANADIG_PLL_528_DENOM_RSVD0 0xC0000000
#define BF_ANADIG_PLL_528_DENOM_RSVD0(v) \
	(((v) << 30) & BM_ANADIG_PLL_528_DENOM_RSVD0)
#define BP_ANADIG_PLL_528_DENOM_B      0
#define BM_ANADIG_PLL_528_DENOM_B 0x3FFFFFFF
#define BF_ANADIG_PLL_528_DENOM_B(v)  \
	(((v) << 0) & BM_ANADIG_PLL_528_DENOM_B)

#define BM_ANADIG_PLL_AUDIO_LOCK 0x80000000
#define BP_ANADIG_PLL_AUDIO_RSVD0      22
#define BM_ANADIG_PLL_AUDIO_RSVD0 0x7FC00000
#define BF_ANADIG_PLL_AUDIO_RSVD0(v)  \
	(((v) << 22) & BM_ANADIG_PLL_AUDIO_RSVD0)
#define BM_ANADIG_PLL_AUDIO_SSC_EN 0x00200000
#define BP_ANADIG_PLL_AUDIO_TEST_DIV_SELECT      19
#define BM_ANADIG_PLL_AUDIO_TEST_DIV_SELECT 0x00180000
#define BF_ANADIG_PLL_AUDIO_TEST_DIV_SELECT(v)  \
	(((v) << 19) & BM_ANADIG_PLL_AUDIO_TEST_DIV_SELECT)
#define BM_ANADIG_PLL_AUDIO_PFD_OFFSET_EN 0x00040000
#define BM_ANADIG_PLL_AUDIO_DITHER_ENABLE 0x00020000
#define BM_ANADIG_PLL_AUDIO_BYPASS 0x00010000
#define BP_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC      14
#define BM_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC 0x0000C000
#define BF_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC(v)  \
	(((v) << 14) & BM_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC)
#define BV_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC__OSC_24M  0x0
#define BV_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC__ANACLK_1 0x1
#define BV_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC__ANACLK_2 0x2
#define BV_ANADIG_PLL_AUDIO_BYPASS_CLK_SRC__XOR      0x3
#define BM_ANADIG_PLL_AUDIO_ENABLE 0x00002000
#define BM_ANADIG_PLL_AUDIO_POWERDOWN 0x00001000
#define BM_ANADIG_PLL_AUDIO_HOLD_RING_OFF 0x00000800
#define BM_ANADIG_PLL_AUDIO_DOUBLE_CP 0x00000400
#define BM_ANADIG_PLL_AUDIO_HALF_CP 0x00000200
#define BM_ANADIG_PLL_AUDIO_DOUBLE_LF 0x00000100
#define BM_ANADIG_PLL_AUDIO_HALF_LF 0x00000080
#define BP_ANADIG_PLL_AUDIO_DIV_SELECT      0
#define BM_ANADIG_PLL_AUDIO_DIV_SELECT 0x0000007F
#define BF_ANADIG_PLL_AUDIO_DIV_SELECT(v)  \
	(((v) << 0) & BM_ANADIG_PLL_AUDIO_DIV_SELECT)

#define BP_ANADIG_PLL_AUDIO_NUM_RSVD0      30
#define BM_ANADIG_PLL_AUDIO_NUM_RSVD0 0xC0000000
#define BF_ANADIG_PLL_AUDIO_NUM_RSVD0(v) \
	(((v) << 30) & BM_ANADIG_PLL_AUDIO_NUM_RSVD0)
#define BP_ANADIG_PLL_AUDIO_NUM_A      0
#define BM_ANADIG_PLL_AUDIO_NUM_A 0x3FFFFFFF
#define BF_ANADIG_PLL_AUDIO_NUM_A(v)  \
	(((v) << 0) & BM_ANADIG_PLL_AUDIO_NUM_A)

#define BP_ANADIG_PLL_AUDIO_DENOM_RSVD0      30
#define BM_ANADIG_PLL_AUDIO_DENOM_RSVD0 0xC0000000
#define BF_ANADIG_PLL_AUDIO_DENOM_RSVD0(v) \
	(((v) << 30) & BM_ANADIG_PLL_AUDIO_DENOM_RSVD0)
#define BP_ANADIG_PLL_AUDIO_DENOM_B      0
#define BM_ANADIG_PLL_AUDIO_DENOM_B 0x3FFFFFFF
#define BF_ANADIG_PLL_AUDIO_DENOM_B(v)  \
	(((v) << 0) & BM_ANADIG_PLL_AUDIO_DENOM_B)

#define BM_ANADIG_PLL_VIDEO_LOCK 0x80000000
#define BP_ANADIG_PLL_VIDEO_RSVD0      22
#define BM_ANADIG_PLL_VIDEO_RSVD0 0x7FC00000
#define BF_ANADIG_PLL_VIDEO_RSVD0(v)  \
	(((v) << 22) & BM_ANADIG_PLL_VIDEO_RSVD0)
#define BM_ANADIG_PLL_VIDEO_SSC_EN 0x00200000
#define BP_ANADIG_PLL_VIDEO_TEST_DIV_SELECT      19
#define BM_ANADIG_PLL_VIDEO_TEST_DIV_SELECT 0x00180000
#define BF_ANADIG_PLL_VIDEO_TEST_DIV_SELECT(v)  \
	(((v) << 19) & BM_ANADIG_PLL_VIDEO_TEST_DIV_SELECT)
#define BM_ANADIG_PLL_VIDEO_PFD_OFFSET_EN 0x00040000
#define BM_ANADIG_PLL_VIDEO_DITHER_ENABLE 0x00020000
#define BM_ANADIG_PLL_VIDEO_BYPASS 0x00010000
#define BP_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC      14
#define BM_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC 0x0000C000
#define BF_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC(v)  \
	(((v) << 14) & BM_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC)
#define BV_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC__OSC_24M  0x0
#define BV_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC__ANACLK_1 0x1
#define BV_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC__ANACLK_2 0x2
#define BV_ANADIG_PLL_VIDEO_BYPASS_CLK_SRC__XOR      0x3
#define BM_ANADIG_PLL_VIDEO_ENABLE 0x00002000
#define BM_ANADIG_PLL_VIDEO_POWERDOWN 0x00001000
#define BM_ANADIG_PLL_VIDEO_HOLD_RING_OFF 0x00000800
#define BM_ANADIG_PLL_VIDEO_DOUBLE_CP 0x00000400
#define BM_ANADIG_PLL_VIDEO_HALF_CP 0x00000200
#define BM_ANADIG_PLL_VIDEO_DOUBLE_LF 0x00000100
#define BM_ANADIG_PLL_VIDEO_HALF_LF 0x00000080
#define BP_ANADIG_PLL_VIDEO_DIV_SELECT      0
#define BM_ANADIG_PLL_VIDEO_DIV_SELECT 0x0000007F
#define BF_ANADIG_PLL_VIDEO_DIV_SELECT(v)  \
	(((v) << 0) & BM_ANADIG_PLL_VIDEO_DIV_SELECT)

#define BP_ANADIG_PLL_VIDEO_NUM_RSVD0      30
#define BM_ANADIG_PLL_VIDEO_NUM_RSVD0 0xC0000000
#define BF_ANADIG_PLL_VIDEO_NUM_RSVD0(v) \
	(((v) << 30) & BM_ANADIG_PLL_VIDEO_NUM_RSVD0)
#define BP_ANADIG_PLL_VIDEO_NUM_A      0
#define BM_ANADIG_PLL_VIDEO_NUM_A 0x3FFFFFFF
#define BF_ANADIG_PLL_VIDEO_NUM_A(v)  \
	(((v) << 0) & BM_ANADIG_PLL_VIDEO_NUM_A)

#define BP_ANADIG_PLL_VIDEO_DENOM_RSVD0      30
#define BM_ANADIG_PLL_VIDEO_DENOM_RSVD0 0xC0000000
#define BF_ANADIG_PLL_VIDEO_DENOM_RSVD0(v) \
	(((v) << 30) & BM_ANADIG_PLL_VIDEO_DENOM_RSVD0)
#define BP_ANADIG_PLL_VIDEO_DENOM_B      0
#define BM_ANADIG_PLL_VIDEO_DENOM_B 0x3FFFFFFF
#define BF_ANADIG_PLL_VIDEO_DENOM_B(v)  \
	(((v) << 0) & BM_ANADIG_PLL_VIDEO_DENOM_B)

#define BM_ANADIG_PLL_ENET_LOCK 0x80000000
#define BP_ANADIG_PLL_ENET_RSVD1      21
#define BM_ANADIG_PLL_ENET_RSVD1 0x7FE00000
#define BF_ANADIG_PLL_ENET_RSVD1(v)  \
	(((v) << 21) & BM_ANADIG_PLL_ENET_RSVD1)
#define BM_ANADIG_PLL_ENET_ENABLE_SATA 0x00100000
#define BM_ANADIG_PLL_ENET_ENABLE_PCIE 0x00080000
#define BM_ANADIG_PLL_ENET_PFD_OFFSET_EN 0x00040000
#define BM_ANADIG_PLL_ENET_DITHER_ENABLE 0x00020000
#define BM_ANADIG_PLL_ENET_BYPASS 0x00010000
#define BP_ANADIG_PLL_ENET_BYPASS_CLK_SRC      14
#define BM_ANADIG_PLL_ENET_BYPASS_CLK_SRC 0x0000C000
#define BF_ANADIG_PLL_ENET_BYPASS_CLK_SRC(v)  \
	(((v) << 14) & BM_ANADIG_PLL_ENET_BYPASS_CLK_SRC)
#define BV_ANADIG_PLL_ENET_BYPASS_CLK_SRC__OSC_24M  0x0
#define BV_ANADIG_PLL_ENET_BYPASS_CLK_SRC__ANACLK_1 0x1
#define BV_ANADIG_PLL_ENET_BYPASS_CLK_SRC__ANACLK_2 0x2
#define BV_ANADIG_PLL_ENET_BYPASS_CLK_SRC__XOR      0x3
#define BM_ANADIG_PLL_ENET_ENABLE 0x00002000
#define BM_ANADIG_PLL_ENET_POWERDOWN 0x00001000
#define BM_ANADIG_PLL_ENET_HOLD_RING_OFF 0x00000800
#define BM_ANADIG_PLL_ENET_DOUBLE_CP 0x00000400
#define BM_ANADIG_PLL_ENET_HALF_CP 0x00000200
#define BM_ANADIG_PLL_ENET_DOUBLE_LF 0x00000100
#define BM_ANADIG_PLL_ENET_HALF_LF 0x00000080
#define BP_ANADIG_PLL_ENET_RSVD0      2
#define BM_ANADIG_PLL_ENET_RSVD0 0x0000007C
#define BF_ANADIG_PLL_ENET_RSVD0(v)  \
	(((v) << 2) & BM_ANADIG_PLL_ENET_RSVD0)
#define BP_ANADIG_PLL_ENET_DIV_SELECT      0
#define BM_ANADIG_PLL_ENET_DIV_SELECT 0x00000003
#define BF_ANADIG_PLL_ENET_DIV_SELECT(v)  \
	(((v) << 0) & BM_ANADIG_PLL_ENET_DIV_SELECT)

#define BM_ANADIG_PFD_480_PFD3_CLKGATE 0x80000000
#define BM_ANADIG_PFD_480_PFD3_STABLE 0x40000000
#define BP_ANADIG_PFD_480_PFD3_FRAC      24
#define BM_ANADIG_PFD_480_PFD3_FRAC 0x3F000000
#define BF_ANADIG_PFD_480_PFD3_FRAC(v)  \
	(((v) << 24) & BM_ANADIG_PFD_480_PFD3_FRAC)
#define BM_ANADIG_PFD_480_PFD2_CLKGATE 0x00800000
#define BM_ANADIG_PFD_480_PFD2_STABLE 0x00400000
#define BP_ANADIG_PFD_480_PFD2_FRAC      16
#define BM_ANADIG_PFD_480_PFD2_FRAC 0x003F0000
#define BF_ANADIG_PFD_480_PFD2_FRAC(v)  \
	(((v) << 16) & BM_ANADIG_PFD_480_PFD2_FRAC)
#define BM_ANADIG_PFD_480_PFD1_CLKGATE 0x00008000
#define BM_ANADIG_PFD_480_PFD1_STABLE 0x00004000
#define BP_ANADIG_PFD_480_PFD1_FRAC      8
#define BM_ANADIG_PFD_480_PFD1_FRAC 0x00003F00
#define BF_ANADIG_PFD_480_PFD1_FRAC(v)  \
	(((v) << 8) & BM_ANADIG_PFD_480_PFD1_FRAC)
#define BM_ANADIG_PFD_480_PFD0_CLKGATE 0x00000080
#define BM_ANADIG_PFD_480_PFD0_STABLE 0x00000040
#define BP_ANADIG_PFD_480_PFD0_FRAC      0
#define BM_ANADIG_PFD_480_PFD0_FRAC 0x0000003F
#define BF_ANADIG_PFD_480_PFD0_FRAC(v)  \
	(((v) << 0) & BM_ANADIG_PFD_480_PFD0_FRAC)

#define BM_ANADIG_PFD_528_PFD3_CLKGATE 0x80000000
#define BM_ANADIG_PFD_528_PFD3_STABLE 0x40000000
#define BP_ANADIG_PFD_528_PFD3_FRAC      24
#define BM_ANADIG_PFD_528_PFD3_FRAC 0x3F000000
#define BF_ANADIG_PFD_528_PFD3_FRAC(v)  \
	(((v) << 24) & BM_ANADIG_PFD_528_PFD3_FRAC)
#define BM_ANADIG_PFD_528_PFD2_CLKGATE 0x00800000
#define BM_ANADIG_PFD_528_PFD2_STABLE 0x00400000
#define BP_ANADIG_PFD_528_PFD2_FRAC      16
#define BM_ANADIG_PFD_528_PFD2_FRAC 0x003F0000
#define BF_ANADIG_PFD_528_PFD2_FRAC(v)  \
	(((v) << 16) & BM_ANADIG_PFD_528_PFD2_FRAC)
#define BM_ANADIG_PFD_528_PFD1_CLKGATE 0x00008000
#define BM_ANADIG_PFD_528_PFD1_STABLE 0x00004000
#define BP_ANADIG_PFD_528_PFD1_FRAC      8
#define BM_ANADIG_PFD_528_PFD1_FRAC 0x00003F00
#define BF_ANADIG_PFD_528_PFD1_FRAC(v)  \
	(((v) << 8) & BM_ANADIG_PFD_528_PFD1_FRAC)
#define BM_ANADIG_PFD_528_PFD0_CLKGATE 0x00000080
#define BM_ANADIG_PFD_528_PFD0_STABLE 0x00000040
#define BP_ANADIG_PFD_528_PFD0_FRAC      0
#define BM_ANADIG_PFD_528_PFD0_FRAC 0x0000003F
#define BF_ANADIG_PFD_528_PFD0_FRAC(v)  \
	(((v) << 0) & BM_ANADIG_PFD_528_PFD0_FRAC)

#define PLL2_PFD0_FREQ		352000000
#define PLL2_PFD1_FREQ		594000000
#define PLL2_PFD2_FREQ		400000000
#define PLL2_PFD2_DIV_FREQ	200000000
#define PLL3_PFD0_FREQ		720000000
#define PLL3_PFD1_FREQ		540000000
#define PLL3_PFD2_FREQ		508200000
#define PLL3_PFD3_FREQ		454700000
#define PLL3_80M		80000000
#define PLL3_60M		60000000

#endif /*__ARCH_ARM_MACH_MX6_CCM_REGS_H__ */