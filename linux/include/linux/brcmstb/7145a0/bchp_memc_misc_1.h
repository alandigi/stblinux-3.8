/***************************************************************************
 *     Copyright (c) 1999-2013, Broadcom Corporation
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
 * Date:           Generated on         Sat Apr  6 03:07:49 2013
 *                 MD5 Checksum         d41d8cd98f00b204e9800998ecf8427e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_MEMC_MISC_1_H__
#define BCHP_MEMC_MISC_1_H__

/***************************************************************************
 *MEMC_MISC_1 - 1 MEMSYS Misc (Soft-Resets/Configuration) Registers
 ***************************************************************************/
#define BCHP_MEMC_MISC_1_SOFT_RESET              0x203c5000 /* MEMC_TOP layout block Soft Reset */
#define BCHP_MEMC_MISC_1_MEMC_STRAP_DDR_CONFIG   0x203c5004 /* MEMC_STRAP_DDR_CONFIG Control Register */
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL       0x203c5008 /* MEMC MBIST TM Control Register */
#define BCHP_MEMC_MISC_1_FSBL_STATE              0x203c500c /* Firmware State Scratchpad */
#define BCHP_MEMC_MISC_1_SCRATCH_0               0x203c5010 /* Scratch Register */

/***************************************************************************
 *SOFT_RESET - MEMC_TOP layout block Soft Reset
 ***************************************************************************/
/* MEMC_MISC_1 :: SOFT_RESET :: reserved0 [31:05] */
#define BCHP_MEMC_MISC_1_SOFT_RESET_reserved0_MASK                 0xffffffe0
#define BCHP_MEMC_MISC_1_SOFT_RESET_reserved0_SHIFT                5

/* MEMC_MISC_1 :: SOFT_RESET :: MEMC_IOBUF_RBUS [04:04] */
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_IOBUF_RBUS_MASK           0x00000010
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_IOBUF_RBUS_SHIFT          4
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_IOBUF_RBUS_DEFAULT        0x00000000

/* MEMC_MISC_1 :: SOFT_RESET :: MEMC_IOBUF [03:03] */
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_IOBUF_MASK                0x00000008
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_IOBUF_SHIFT               3
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_IOBUF_DEFAULT             0x00000000

/* MEMC_MISC_1 :: SOFT_RESET :: MEMC_DRAM_INIT [02:02] */
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_DRAM_INIT_MASK            0x00000004
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_DRAM_INIT_SHIFT           2
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_DRAM_INIT_DEFAULT         0x00000000

/* MEMC_MISC_1 :: SOFT_RESET :: MEMC_RBUS [01:01] */
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_RBUS_MASK                 0x00000002
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_RBUS_SHIFT                1
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_RBUS_DEFAULT              0x00000000

/* MEMC_MISC_1 :: SOFT_RESET :: MEMC_CORE [00:00] */
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_CORE_MASK                 0x00000001
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_CORE_SHIFT                0
#define BCHP_MEMC_MISC_1_SOFT_RESET_MEMC_CORE_DEFAULT              0x00000000

/***************************************************************************
 *MEMC_STRAP_DDR_CONFIG - MEMC_STRAP_DDR_CONFIG Control Register
 ***************************************************************************/
/* MEMC_MISC_1 :: MEMC_STRAP_DDR_CONFIG :: reserved_for_eco0 [31:00] */
#define BCHP_MEMC_MISC_1_MEMC_STRAP_DDR_CONFIG_reserved_for_eco0_MASK 0xffffffff
#define BCHP_MEMC_MISC_1_MEMC_STRAP_DDR_CONFIG_reserved_for_eco0_SHIFT 0
#define BCHP_MEMC_MISC_1_MEMC_STRAP_DDR_CONFIG_reserved_for_eco0_DEFAULT 0x00000000

/***************************************************************************
 *MEMC_TOP_TM_CNTRL - MEMC MBIST TM Control Register
 ***************************************************************************/
/* MEMC_MISC_1 :: MEMC_TOP_TM_CNTRL :: reserved0 [31:06] */
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_reserved0_MASK          0xffffffc0
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_reserved0_SHIFT         6

/* MEMC_MISC_1 :: MEMC_TOP_TM_CNTRL :: MEMC_PFRI_FIFO_2 [05:04] */
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_2_MASK   0x00000030
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_2_SHIFT  4
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_2_DEFAULT 0x00000000

/* MEMC_MISC_1 :: MEMC_TOP_TM_CNTRL :: MEMC_PFRI_FIFO_1 [03:02] */
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_1_MASK   0x0000000c
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_1_SHIFT  2
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_1_DEFAULT 0x00000000

/* MEMC_MISC_1 :: MEMC_TOP_TM_CNTRL :: MEMC_PFRI_FIFO_0 [01:00] */
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_0_MASK   0x00000003
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_0_SHIFT  0
#define BCHP_MEMC_MISC_1_MEMC_TOP_TM_CNTRL_MEMC_PFRI_FIFO_0_DEFAULT 0x00000000

/***************************************************************************
 *FSBL_STATE - Firmware State Scratchpad
 ***************************************************************************/
/* MEMC_MISC_1 :: FSBL_STATE :: STATE [31:00] */
#define BCHP_MEMC_MISC_1_FSBL_STATE_STATE_MASK                     0xffffffff
#define BCHP_MEMC_MISC_1_FSBL_STATE_STATE_SHIFT                    0
#define BCHP_MEMC_MISC_1_FSBL_STATE_STATE_DEFAULT                  0x00000000

/***************************************************************************
 *SCRATCH_0 - Scratch Register
 ***************************************************************************/
/* MEMC_MISC_1 :: SCRATCH_0 :: VALUE [31:00] */
#define BCHP_MEMC_MISC_1_SCRATCH_0_VALUE_MASK                      0xffffffff
#define BCHP_MEMC_MISC_1_SCRATCH_0_VALUE_SHIFT                     0
#define BCHP_MEMC_MISC_1_SCRATCH_0_VALUE_DEFAULT                   0x00000000

#endif /* #ifndef BCHP_MEMC_MISC_1_H__ */

/* End of File */
