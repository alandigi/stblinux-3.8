/***************************************************************************
 *     Copyright (c) 1999-2014, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on              Sat Jan 18 03:35:52 2014
 *                 Full Compile MD5 Checksum c56f915ef854211bce6eecbdb263da2d
 *                   (minus title and desc)  
 *                 MD5 Checksum              71e6904f6189c5539d5e184b34424ea5
 *
 * Compiled with:  RDB Utility               combo_header.pl
 *                 RDB Parser                3.0
 *                 unknown                   unknown
 *                 Perl Interpreter          5.008008
 *                 Operating System          linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_AON_PIN_CTRL_H__
#define BCHP_AON_PIN_CTRL_H__

/***************************************************************************
 *AON_PIN_CTRL - AON Pinmux Control Registers
 ***************************************************************************/
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0         0x00410700 /* Pinmux control register 0 */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1         0x00410704 /* Pinmux control register 1 */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2         0x00410708 /* Pinmux control register 2 */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0     0x0041070c /* Pad pull-up/pull-down control register 0 */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1     0x00410710 /* Pad pull-up/pull-down control register 1 */
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0     0x00410714 /* Bypass clock unselect register 0 */

/***************************************************************************
 *PIN_MUX_CTRL_0 - Pinmux control register 0
 ***************************************************************************/
/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_07 [31:28] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_MASK          0xf0000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_SHIFT         28
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_AON_GPIO_07   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_LED_LS_3      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_I2S_LR0_OUT   2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_VO_656_7      3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_TP_OUT_05     4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_07_PM_AON_GPIO_07 5

/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_06 [27:24] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_MASK          0x0f000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_SHIFT         24
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_AON_GPIO_06   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_LED_LS_2      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_I2S_DATA0_OUT 2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_VO_656_6      3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_TP_OUT_31     4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_06_PM_AON_GPIO_06 5

/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_05 [23:20] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_MASK          0x00f00000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_SHIFT         20
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_AON_GPIO_05   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_LED_LS_1      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_I2S_CLK0_OUT  2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_MHL_POWERUPB  3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_VO_656_5      4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_TP_OUT_30     5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_05_PM_AON_GPIO_05 6

/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_04 [19:16] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_MASK          0x000f0000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_SHIFT         16
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_AON_GPIO_04   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_LED_LS_0      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_RO_OBSRV      2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_TSIO_VCTRL    3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_VO_656_4      4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_AUD_FS_CLK0   5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_TP_OUT_04     6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_04_PM_AON_GPIO_04 7

/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_03 [15:12] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_MASK          0x0000f000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_SHIFT         12
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_AON_GPIO_03   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_LED_KD_3      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_EXT_IRQB_0    2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_SC1_IO        3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_VO_656_3      4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_MTSIF1_RX_DATA_3 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_SD_CARD0_DAT3 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_RF4CE_SECO    7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_TP_OUT_03     8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_03_PM_AON_GPIO_03 9

/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_02 [11:08] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_MASK          0x00000f00
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_SHIFT         8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_AON_GPIO_02   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_LED_KD_2      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_PKT0_SYNC_ALT 2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_SC1_RST       3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_VO_656_2      4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_MTSIF1_RX_DATA_2 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_SD_CARD0_DAT2 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_RF4CE_SECI_2  7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_TP_OUT_02     8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_02_PM_AON_GPIO_02 9

/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_01 [07:04] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_MASK          0x000000f0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_SHIFT         4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_AON_GPIO_01   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_LED_KD_1      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_PKT0_DATA_ALT 2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_SC1_CLK_OUT   3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_VO_656_1      4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_MTSIF1_RX_DATA_1 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_SD_CARD0_DAT1 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_RF4CE_SECI_1  7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_TP_OUT_01     8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_01_PM_AON_GPIO_01 9

/* AON_PIN_CTRL :: PIN_MUX_CTRL_0 :: aon_gpio_00 [03:00] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_MASK          0x0000000f
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_SHIFT         0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_AON_GPIO_00   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_LED_KD_0      1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_PKT0_CLK_ALT  2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_SC1_VCC       3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_VO_656_0      4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_MTSIF1_RX_DATA_0 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_SD_CARD0_DAT0 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_RF4CE_SECI_0  7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_TP_OUT_00     8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_0_aon_gpio_00_PM_AON_GPIO_00 9

/***************************************************************************
 *PIN_MUX_CTRL_1 - Pinmux control register 1
 ***************************************************************************/
/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_15 [31:28] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_MASK          0xf0000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_SHIFT         28
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_AON_GPIO_15   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_RF4CE_LNA_CTL 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_DSEC0_SELVTOP 2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_TTX_DATA      3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_PKT3_DATA_ALT1 4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_MTSIF1_RX_SYNC 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_SD_CARD0_CMD  6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_15_TP_IN_31      7

/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_14 [27:24] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_MASK          0x0f000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_SHIFT         24
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_AON_GPIO_14   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_RF4CE_ANT_SEL 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_DSEC0_VCTL    2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_TTX_REQ       3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_PKT3_CLK_ALT1 4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_MTSIF1_RX_CLK 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_SD_CARD0_WPROT 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_14_TP_IN_30      7

/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_13 [23:20] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_MASK          0x00f00000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_SHIFT         20
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_AON_GPIO_13   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_SPI_M_SS2B    1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_IR_INT        2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_SC1_VPP       3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_VO_656_CLK    4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_PWM2          5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_SD_CARD0_LED  6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_MPM_UART_TXD  7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_TP_OUT_08     8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_13_PM_AON_GPIO_13 9

/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_12 [19:16] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_MASK          0x000f0000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_SHIFT         16
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_AON_GPIO_12   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_SPI_M_SS1B    1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_EXT_IRQB_1    2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_SC1_AUX2      3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_PKT3_SYNC_ALT1 4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_MTSIF1_RX_DATA_7 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_SD_CARD0_CLK_IN 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_MPM_UART_RXD  7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_TP_OUT_07     8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_12_PM_AON_GPIO_12 9

/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_11 [15:12] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_MASK          0x0000f000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_SHIFT         12
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_AON_GPIO_11   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_SPI_M_SS0B    1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_IR_IN1        2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_EXT_IRQB_3    3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_MPM_SF_CSB    4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_MTSIF1_RX_DATA_6 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_SD_CARD0_PWR0 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_UART_CTS_1    7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_TP_OUT_06     8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_11_PM_AON_GPIO_11 9

/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_10 [11:08] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_MASK          0x00000f00
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_SHIFT         8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_AON_GPIO_10   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_SPI_M_MISO    1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_PKT1_SYNC_ALT 2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_EXT_IRQB_2    3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_MPM_SF_MISO   4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_SD_CARD0_PRES 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_UART_RXD_1    6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_ALT_TP_IN_04  7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_10_PM_AON_GPIO_10 8

/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_09 [07:04] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_MASK          0x000000f0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_SHIFT         4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_AON_GPIO_09   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_SPI_M_MOSI    1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_PKT1_DATA_ALT 2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_SC1_AUX1      3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_MPM_SF_MOSI   4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_MTSIF1_RX_DATA_5 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_SD_CARD0_CLK  6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_UART_RTS_1    7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_TP_IN_29      8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_09_PM_AON_GPIO_09 9

/* AON_PIN_CTRL :: PIN_MUX_CTRL_1 :: aon_gpio_08 [03:00] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_MASK          0x0000000f
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_SHIFT         0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_DEFAULT       0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_AON_GPIO_08   0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_SPI_M_SCK     1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_PKT1_CLK_ALT  2
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_SC1_PRES      3
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_MPM_SF_SCK    4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_MTSIF1_RX_DATA_4 5
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_SD_CARD0_VOLT 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_UART_TXD_1    7
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_ALT_TP_OUT_04 8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_1_aon_gpio_08_PM_AON_GPIO_08 9

/***************************************************************************
 *PIN_MUX_CTRL_2 - Pinmux control register 2
 ***************************************************************************/
/* AON_PIN_CTRL :: PIN_MUX_CTRL_2 :: reserved0 [31:24] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_reserved0_MASK            0xff000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_reserved0_SHIFT           24

/* AON_PIN_CTRL :: PIN_MUX_CTRL_2 :: aon_sgpio_05 [23:20] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_05_MASK         0x00f00000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_05_SHIFT        20
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_05_DEFAULT      0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_05_AON_SGPIO_05 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_05_AON_BSC_M2_SDA 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_05_HDMI_RX_BSC_SDA 2

/* AON_PIN_CTRL :: PIN_MUX_CTRL_2 :: aon_sgpio_04 [19:16] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_04_MASK         0x000f0000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_04_SHIFT        16
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_04_DEFAULT      0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_04_AON_SGPIO_04 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_04_AON_BSC_M2_SCL 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_04_HDMI_RX_BSC_SCL 2

/* AON_PIN_CTRL :: PIN_MUX_CTRL_2 :: aon_sgpio_03 [15:12] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_03_MASK         0x0000f000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_03_SHIFT        12
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_03_DEFAULT      0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_03_AON_SGPIO_03 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_03_AON_BSC_M1_SDA 1

/* AON_PIN_CTRL :: PIN_MUX_CTRL_2 :: aon_sgpio_02 [11:08] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_02_MASK         0x00000f00
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_02_SHIFT        8
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_02_DEFAULT      0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_02_AON_SGPIO_02 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_02_AON_BSC_M1_SCL 1

/* AON_PIN_CTRL :: PIN_MUX_CTRL_2 :: aon_sgpio_01 [07:04] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_01_MASK         0x000000f0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_01_SHIFT        4
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_01_DEFAULT      0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_01_AON_SGPIO_01 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_01_AON_BSC_M0_SDA 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_01_HDMI_TX_BSC_SDA 2

/* AON_PIN_CTRL :: PIN_MUX_CTRL_2 :: aon_sgpio_00 [03:00] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_00_MASK         0x0000000f
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_00_SHIFT        0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_00_DEFAULT      0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_00_AON_SGPIO_00 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_00_AON_BSC_M0_SCL 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_CTRL_2_aon_sgpio_00_HDMI_TX_BSC_SCL 2

/***************************************************************************
 *PIN_MUX_PAD_CTRL_0 - Pad pull-up/pull-down control register 0
 ***************************************************************************/
/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: spare_pad_ctrl_0 [31:30] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_spare_pad_ctrl_0_MASK 0xc0000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_spare_pad_ctrl_0_SHIFT 30
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_spare_pad_ctrl_0_DEFAULT 0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_spare_pad_ctrl_0_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_spare_pad_ctrl_0_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_spare_pad_ctrl_0_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_11_pad_ctrl [29:28] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_11_pad_ctrl_MASK 0x30000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_11_pad_ctrl_SHIFT 28
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_11_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_11_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_11_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_11_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_10_pad_ctrl [27:26] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_10_pad_ctrl_MASK 0x0c000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_10_pad_ctrl_SHIFT 26
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_10_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_10_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_10_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_10_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_09_pad_ctrl [25:24] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_09_pad_ctrl_MASK 0x03000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_09_pad_ctrl_SHIFT 24
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_09_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_09_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_09_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_09_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_08_pad_ctrl [23:22] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_08_pad_ctrl_MASK 0x00c00000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_08_pad_ctrl_SHIFT 22
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_08_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_08_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_08_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_08_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: reserved0 [21:14] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_reserved0_MASK        0x003fc000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_reserved0_SHIFT       14

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_03_pad_ctrl [13:12] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_03_pad_ctrl_MASK 0x00003000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_03_pad_ctrl_SHIFT 12
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_03_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_03_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_03_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_03_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_02_pad_ctrl [11:10] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_02_pad_ctrl_MASK 0x00000c00
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_02_pad_ctrl_SHIFT 10
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_02_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_02_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_02_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_02_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_01_pad_ctrl [09:08] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_01_pad_ctrl_MASK 0x00000300
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_01_pad_ctrl_SHIFT 8
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_01_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_01_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_01_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_01_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: aon_gpio_00_pad_ctrl [07:06] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_00_pad_ctrl_MASK 0x000000c0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_00_pad_ctrl_SHIFT 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_00_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_00_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_00_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_aon_gpio_00_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_0 :: reserved1 [05:00] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_reserved1_MASK        0x0000003f
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_0_reserved1_SHIFT       0

/***************************************************************************
 *PIN_MUX_PAD_CTRL_1 - Pad pull-up/pull-down control register 1
 ***************************************************************************/
/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_1 :: reserved0 [31:22] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_reserved0_MASK        0xffc00000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_reserved0_SHIFT       22

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_1 :: spare_pad_ctrl_1 [21:20] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_spare_pad_ctrl_1_MASK 0x00300000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_spare_pad_ctrl_1_SHIFT 20
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_spare_pad_ctrl_1_DEFAULT 0x00000000
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_spare_pad_ctrl_1_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_spare_pad_ctrl_1_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_spare_pad_ctrl_1_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_1 :: reserved1 [19:08] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_reserved1_MASK        0x000fff00
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_reserved1_SHIFT       8

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_1 :: aon_gpio_15_pad_ctrl [07:06] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_15_pad_ctrl_MASK 0x000000c0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_15_pad_ctrl_SHIFT 6
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_15_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_15_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_15_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_15_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_1 :: aon_gpio_14_pad_ctrl [05:04] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_14_pad_ctrl_MASK 0x00000030
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_14_pad_ctrl_SHIFT 4
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_14_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_14_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_14_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_14_pad_ctrl_PULL_UP 2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_1 :: reserved2 [03:02] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_reserved2_MASK        0x0000000c
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_reserved2_SHIFT       2

/* AON_PIN_CTRL :: PIN_MUX_PAD_CTRL_1 :: aon_gpio_12_pad_ctrl [01:00] */
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_12_pad_ctrl_MASK 0x00000003
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_12_pad_ctrl_SHIFT 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_12_pad_ctrl_DEFAULT 0x00000001
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_12_pad_ctrl_PULL_NONE 0
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_12_pad_ctrl_PULL_DOWN 1
#define BCHP_AON_PIN_CTRL_PIN_MUX_PAD_CTRL_1_aon_gpio_12_pad_ctrl_PULL_UP 2

/***************************************************************************
 *BYP_CLK_UNSELECT_0 - Bypass clock unselect register 0
 ***************************************************************************/
/* AON_PIN_CTRL :: BYP_CLK_UNSELECT_0 :: reserved0 [31:02] */
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_reserved0_MASK        0xfffffffc
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_reserved0_SHIFT       2

/* AON_PIN_CTRL :: BYP_CLK_UNSELECT_0 :: unsel_byp_clk_on_aon_reset_outb [01:01] */
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_unsel_byp_clk_on_aon_reset_outb_MASK 0x00000002
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_unsel_byp_clk_on_aon_reset_outb_SHIFT 1
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_unsel_byp_clk_on_aon_reset_outb_DEFAULT 0x00000000

/* AON_PIN_CTRL :: BYP_CLK_UNSELECT_0 :: unsel_byp_clk_on_aon_nmib [00:00] */
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_unsel_byp_clk_on_aon_nmib_MASK 0x00000001
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_unsel_byp_clk_on_aon_nmib_SHIFT 0
#define BCHP_AON_PIN_CTRL_BYP_CLK_UNSELECT_0_unsel_byp_clk_on_aon_nmib_DEFAULT 0x00000000

#endif /* #ifndef BCHP_AON_PIN_CTRL_H__ */

/* End of File */