/***************************************************************************
 *     Copyright (c) 1999-2013, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: $
 * $brcm_Revision: $
 * $brcm_Date: $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Wed May  1 03:09:29 2013
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

#ifndef BCHP_FPM_CTRL_FPM_H__
#define BCHP_FPM_CTRL_FPM_H__

/***************************************************************************
 *FPM_CTRL_FPM - FPM FPM Control Registers
 ***************************************************************************/
#define BCHP_FPM_CTRL_FPM_FPM_CTL                0x03a00000 /* FPM Control Register */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1               0x03a00004 /* FPM Configuration Register */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK         0x03a00010 /* POOL1 Interrupt Mask Register */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS         0x03a00014 /* POOL1 Interrupt Status Register */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK        0x03a00018 /* POOL1 Stall FPM mask */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1             0x03a00040 /* POOL1 Configuration Register 1 */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG2             0x03a00044 /* POOL1 Configuration Register 2 */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG3             0x03a00048 /* POOL1 Configuration Register 3 */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT1            0x03a00050 /* POOL1 Status Register 1 */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2            0x03a00054 /* POOL1 Status Register 2 */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT3            0x03a00058 /* POOL1 Status Register 3 */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT4            0x03a0005c /* POOL1 Status Register 4 */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT5            0x03a00060 /* POOL1 Status Register 5 */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT6            0x03a00064 /* POOL1 Status Register 6 */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT7            0x03a00068 /* POOL1 Status Register 7 */
#define BCHP_FPM_CTRL_FPM_POOL1_XON_XOFF_CFG     0x03a000c0 /* POOL1 XON/XOFF Threshold Configuration Register */
#define BCHP_FPM_CTRL_FPM_MEM_CTL                0x03a00100 /* Back door Memory Access Control Register */
#define BCHP_FPM_CTRL_FPM_MEM_DATA1              0x03a00104 /* Back door Memory Data1 Register */
#define BCHP_FPM_CTRL_FPM_MEM_DATA2              0x03a00108 /* Back door Memory Data2 Register */
#define BCHP_FPM_CTRL_FPM_SPARE                  0x03a00120 /* Spare Register for future use */

/***************************************************************************
 *FPM_CTL - FPM Control Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: FPM_CTL :: TP_MUX_CNTRL [31:28] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_TP_MUX_CNTRL_MASK                0xf0000000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_TP_MUX_CNTRL_SHIFT               28
#define BCHP_FPM_CTRL_FPM_FPM_CTL_TP_MUX_CNTRL_DEFAULT             0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: reserved0 [27:27] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved0_MASK                   0x08000000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved0_SHIFT                  27

/* FPM_CTRL_FPM :: FPM_CTL :: ENABLE_HIGH_TOK_ALWAYS [26:26] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_ENABLE_HIGH_TOK_ALWAYS_MASK      0x04000000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_ENABLE_HIGH_TOK_ALWAYS_SHIFT     26
#define BCHP_FPM_CTRL_FPM_FPM_CTL_ENABLE_HIGH_TOK_ALWAYS_DEFAULT   0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: MEM_CORRUPT_CHECK_DISABLE [25:25] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_MEM_CORRUPT_CHECK_DISABLE_MASK   0x02000000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_MEM_CORRUPT_CHECK_DISABLE_SHIFT  25
#define BCHP_FPM_CTRL_FPM_FPM_CTL_MEM_CORRUPT_CHECK_DISABLE_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: STOP_ALLOC_CACHE_LOAD [24:24] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_STOP_ALLOC_CACHE_LOAD_MASK       0x01000000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_STOP_ALLOC_CACHE_LOAD_SHIFT      24
#define BCHP_FPM_CTRL_FPM_FPM_CTL_STOP_ALLOC_CACHE_LOAD_DEFAULT    0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: reserved1 [23:17] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved1_MASK                   0x00fe0000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved1_SHIFT                  17

/* FPM_CTRL_FPM :: FPM_CTL :: POOL1_ENABLE [16:16] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_POOL1_ENABLE_MASK                0x00010000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_POOL1_ENABLE_SHIFT               16
#define BCHP_FPM_CTRL_FPM_FPM_CTL_POOL1_ENABLE_DEFAULT             0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: STRICT_PRIORITY_REQUEST_TYPE [15:15] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_STRICT_PRIORITY_REQUEST_TYPE_MASK 0x00008000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_STRICT_PRIORITY_REQUEST_TYPE_SHIFT 15
#define BCHP_FPM_CTRL_FPM_FPM_CTL_STRICT_PRIORITY_REQUEST_TYPE_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: reserved2 [14:14] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved2_MASK                   0x00004000
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved2_SHIFT                  14

/* FPM_CTRL_FPM :: FPM_CTL :: WEIGHT_FOR_ROUND_ROBIN_POLICY [13:08] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_WEIGHT_FOR_ROUND_ROBIN_POLICY_MASK 0x00003f00
#define BCHP_FPM_CTRL_FPM_FPM_CTL_WEIGHT_FOR_ROUND_ROBIN_POLICY_SHIFT 8
#define BCHP_FPM_CTRL_FPM_FPM_CTL_WEIGHT_FOR_ROUND_ROBIN_POLICY_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: ARBITRATION_POLICY [07:05] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_ARBITRATION_POLICY_MASK          0x000000e0
#define BCHP_FPM_CTRL_FPM_FPM_CTL_ARBITRATION_POLICY_SHIFT         5
#define BCHP_FPM_CTRL_FPM_FPM_CTL_ARBITRATION_POLICY_DEFAULT       0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: INIT_MEM [04:04] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_INIT_MEM_MASK                    0x00000010
#define BCHP_FPM_CTRL_FPM_FPM_CTL_INIT_MEM_SHIFT                   4
#define BCHP_FPM_CTRL_FPM_FPM_CTL_INIT_MEM_DEFAULT                 0x00000000

/* FPM_CTRL_FPM :: FPM_CTL :: reserved3 [03:00] */
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved3_MASK                   0x0000000f
#define BCHP_FPM_CTRL_FPM_FPM_CTL_reserved3_SHIFT                  0

/***************************************************************************
 *FPM_CFG1 - FPM Configuration Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: FPM_CFG1 :: reserved0 [31:08] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_reserved0_MASK                  0xffffff00
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_reserved0_SHIFT                 8

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL4_CACHE_BYPASS_EN [07:07] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL4_CACHE_BYPASS_EN_MASK      0x00000080
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL4_CACHE_BYPASS_EN_SHIFT     7
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL4_CACHE_BYPASS_EN_DEFAULT   0x00000000

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL3_CACHE_BYPASS_EN [06:06] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL3_CACHE_BYPASS_EN_MASK      0x00000040
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL3_CACHE_BYPASS_EN_SHIFT     6
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL3_CACHE_BYPASS_EN_DEFAULT   0x00000000

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL2_CACHE_BYPASS_EN [05:05] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL2_CACHE_BYPASS_EN_MASK      0x00000020
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL2_CACHE_BYPASS_EN_SHIFT     5
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL2_CACHE_BYPASS_EN_DEFAULT   0x00000000

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL1_CACHE_BYPASS_EN [04:04] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL1_CACHE_BYPASS_EN_MASK      0x00000010
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL1_CACHE_BYPASS_EN_SHIFT     4
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL1_CACHE_BYPASS_EN_DEFAULT   0x00000000

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL4_SEARCH_MODE [03:03] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL4_SEARCH_MODE_MASK          0x00000008
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL4_SEARCH_MODE_SHIFT         3
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL4_SEARCH_MODE_DEFAULT       0x00000000

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL3_SEARCH_MODE [02:02] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL3_SEARCH_MODE_MASK          0x00000004
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL3_SEARCH_MODE_SHIFT         2
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL3_SEARCH_MODE_DEFAULT       0x00000000

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL2_SEARCH_MODE [01:01] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL2_SEARCH_MODE_MASK          0x00000002
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL2_SEARCH_MODE_SHIFT         1
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL2_SEARCH_MODE_DEFAULT       0x00000000

/* FPM_CTRL_FPM :: FPM_CFG1 :: POOL1_SEARCH_MODE [00:00] */
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL1_SEARCH_MODE_MASK          0x00000001
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL1_SEARCH_MODE_SHIFT         0
#define BCHP_FPM_CTRL_FPM_FPM_CFG1_POOL1_SEARCH_MODE_DEFAULT       0x00000000

/***************************************************************************
 *POOL1_INTR_MSK - POOL1 Interrupt Mask Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: reserved0 [31:13] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_reserved0_MASK            0xffffe000
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_reserved0_SHIFT           13

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: ILLEGAL_ALLOC_REQUEST_MSK [12:12] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ILLEGAL_ALLOC_REQUEST_MSK_MASK 0x00001000
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ILLEGAL_ALLOC_REQUEST_MSK_SHIFT 12
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ILLEGAL_ALLOC_REQUEST_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: ILLEGAL_ADDRESS_ACCESS_MSK [11:11] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ILLEGAL_ADDRESS_ACCESS_MSK_MASK 0x00000800
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ILLEGAL_ADDRESS_ACCESS_MSK_SHIFT 11
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ILLEGAL_ADDRESS_ACCESS_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: XON_MSK [10:10] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_XON_MSK_MASK              0x00000400
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_XON_MSK_SHIFT             10
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_XON_MSK_DEFAULT           0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: XOFF_MSK [09:09] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_XOFF_MSK_MASK             0x00000200
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_XOFF_MSK_SHIFT            9
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_XOFF_MSK_DEFAULT          0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: MEMORY_CORRUPT_MSK [08:08] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MEMORY_CORRUPT_MSK_MASK   0x00000100
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MEMORY_CORRUPT_MSK_SHIFT  8
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MEMORY_CORRUPT_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: POOL_DIS_FREE_MULTI_MSK [07:07] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_POOL_DIS_FREE_MULTI_MSK_MASK 0x00000080
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_POOL_DIS_FREE_MULTI_MSK_SHIFT 7
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_POOL_DIS_FREE_MULTI_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: MULTI_TOKEN_INDEX_OUT_OF_RANGE_MSK [06:06] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MULTI_TOKEN_INDEX_OUT_OF_RANGE_MSK_MASK 0x00000040
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MULTI_TOKEN_INDEX_OUT_OF_RANGE_MSK_SHIFT 6
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MULTI_TOKEN_INDEX_OUT_OF_RANGE_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: MULTI_TOKEN_NO_VALID_MSK [05:05] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MULTI_TOKEN_NO_VALID_MSK_MASK 0x00000020
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MULTI_TOKEN_NO_VALID_MSK_SHIFT 5
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_MULTI_TOKEN_NO_VALID_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: FREE_TOKEN_INDEX_OUT_OF_RANGE_MSK [04:04] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_TOKEN_INDEX_OUT_OF_RANGE_MSK_MASK 0x00000010
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_TOKEN_INDEX_OUT_OF_RANGE_MSK_SHIFT 4
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_TOKEN_INDEX_OUT_OF_RANGE_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: FREE_TOKEN_NO_VALID_MSK [03:03] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_TOKEN_NO_VALID_MSK_MASK 0x00000008
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_TOKEN_NO_VALID_MSK_SHIFT 3
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_TOKEN_NO_VALID_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: POOL_FULL_MSK [02:02] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_POOL_FULL_MSK_MASK        0x00000004
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_POOL_FULL_MSK_SHIFT       2
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_POOL_FULL_MSK_DEFAULT     0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: FREE_FIFO_FULL_MSK [01:01] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_FIFO_FULL_MSK_MASK   0x00000002
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_FIFO_FULL_MSK_SHIFT  1
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_FREE_FIFO_FULL_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_MSK :: ALLOC_FIFO_FULL_MSK [00:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ALLOC_FIFO_FULL_MSK_MASK  0x00000001
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ALLOC_FIFO_FULL_MSK_SHIFT 0
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_MSK_ALLOC_FIFO_FULL_MSK_DEFAULT 0x00000000

/***************************************************************************
 *POOL1_INTR_STS - POOL1 Interrupt Status Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_INTR_STS :: reserved0 [31:13] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_reserved0_MASK            0xffffe000
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_reserved0_SHIFT           13

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: ILLEGAL_ALLOC_REQUEST_STS [12:12] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ILLEGAL_ALLOC_REQUEST_STS_MASK 0x00001000
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ILLEGAL_ALLOC_REQUEST_STS_SHIFT 12
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ILLEGAL_ALLOC_REQUEST_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: ILLEGAL_ADDRESS_ACCESS_STS [11:11] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ILLEGAL_ADDRESS_ACCESS_STS_MASK 0x00000800
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ILLEGAL_ADDRESS_ACCESS_STS_SHIFT 11
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ILLEGAL_ADDRESS_ACCESS_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: XON_STATE_STS [10:10] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_XON_STATE_STS_MASK        0x00000400
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_XON_STATE_STS_SHIFT       10
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_XON_STATE_STS_DEFAULT     0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: XOFF_STATE_STS [09:09] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_XOFF_STATE_STS_MASK       0x00000200
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_XOFF_STATE_STS_SHIFT      9
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_XOFF_STATE_STS_DEFAULT    0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: MEMORY_CORRUPT_STS [08:08] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MEMORY_CORRUPT_STS_MASK   0x00000100
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MEMORY_CORRUPT_STS_SHIFT  8
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MEMORY_CORRUPT_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: POOL_DIS_FREE_MULTI_STS [07:07] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_POOL_DIS_FREE_MULTI_STS_MASK 0x00000080
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_POOL_DIS_FREE_MULTI_STS_SHIFT 7
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_POOL_DIS_FREE_MULTI_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: MULTI_TOKEN_INDEX_OUT_OF_RANGE_STS [06:06] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MULTI_TOKEN_INDEX_OUT_OF_RANGE_STS_MASK 0x00000040
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MULTI_TOKEN_INDEX_OUT_OF_RANGE_STS_SHIFT 6
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MULTI_TOKEN_INDEX_OUT_OF_RANGE_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: MULTI_TOKEN_NO_VALID_STS [05:05] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MULTI_TOKEN_NO_VALID_STS_MASK 0x00000020
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MULTI_TOKEN_NO_VALID_STS_SHIFT 5
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_MULTI_TOKEN_NO_VALID_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: FREE_TOKEN_INDEX_OUT_OF_RANGE_STS [04:04] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_TOKEN_INDEX_OUT_OF_RANGE_STS_MASK 0x00000010
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_TOKEN_INDEX_OUT_OF_RANGE_STS_SHIFT 4
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_TOKEN_INDEX_OUT_OF_RANGE_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: FREE_TOKEN_NO_VALID_STS [03:03] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_TOKEN_NO_VALID_STS_MASK 0x00000008
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_TOKEN_NO_VALID_STS_SHIFT 3
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_TOKEN_NO_VALID_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: POOL_FULL_STS [02:02] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_POOL_FULL_STS_MASK        0x00000004
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_POOL_FULL_STS_SHIFT       2
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_POOL_FULL_STS_DEFAULT     0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: FREE_FIFO_FULL_STS [01:01] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_FIFO_FULL_STS_MASK   0x00000002
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_FIFO_FULL_STS_SHIFT  1
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_FREE_FIFO_FULL_STS_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_INTR_STS :: ALLOC_FIFO_FULL_STS [00:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ALLOC_FIFO_FULL_STS_MASK  0x00000001
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ALLOC_FIFO_FULL_STS_SHIFT 0
#define BCHP_FPM_CTRL_FPM_POOL1_INTR_STS_ALLOC_FIFO_FULL_STS_DEFAULT 0x00000000

/***************************************************************************
 *POOL1_STALL_MSK - POOL1 Stall FPM mask
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: reserved0 [31:09] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_reserved0_MASK           0xfffffe00
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_reserved0_SHIFT          9

/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: MEMORY_CORRUPT_STALL_MSK [08:08] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MEMORY_CORRUPT_STALL_MSK_MASK 0x00000100
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MEMORY_CORRUPT_STALL_MSK_SHIFT 8
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MEMORY_CORRUPT_STALL_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: reserved1 [07:07] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_reserved1_MASK           0x00000080
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_reserved1_SHIFT          7

/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: MULTI_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK [06:06] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MULTI_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK_MASK 0x00000040
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MULTI_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK_SHIFT 6
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MULTI_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: MULTI_TOKEN_NO_VALID_STALL_MSK [05:05] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MULTI_TOKEN_NO_VALID_STALL_MSK_MASK 0x00000020
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MULTI_TOKEN_NO_VALID_STALL_MSK_SHIFT 5
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_MULTI_TOKEN_NO_VALID_STALL_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: FREE_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK [04:04] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_FREE_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK_MASK 0x00000010
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_FREE_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK_SHIFT 4
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_FREE_TOKEN_INDEX_OUT_OF_RANGE_STALL_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: FREE_TOKEN_NO_VALID_STALL_MSK [03:03] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_FREE_TOKEN_NO_VALID_STALL_MSK_MASK 0x00000008
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_FREE_TOKEN_NO_VALID_STALL_MSK_SHIFT 3
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_FREE_TOKEN_NO_VALID_STALL_MSK_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STALL_MSK :: reserved2 [02:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_reserved2_MASK           0x00000007
#define BCHP_FPM_CTRL_FPM_POOL1_STALL_MSK_reserved2_SHIFT          0

/***************************************************************************
 *POOL1_CFG1 - POOL1 Configuration Register 1
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_CFG1 :: reserved0 [31:27] */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_reserved0_MASK                0xf8000000
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_reserved0_SHIFT               27

/* FPM_CTRL_FPM :: POOL1_CFG1 :: FP_BUF_SIZE [26:24] */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_MASK              0x07000000
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_SHIFT             24
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_DEFAULT           0x00000006
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF512            0
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF768            1
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF1024           2
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF1280           3
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF1536           4
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF1792           5
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF2048           6
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_FP_BUF_SIZE_BUF2304           7

/* FPM_CTRL_FPM :: POOL1_CFG1 :: reserved1 [23:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_reserved1_MASK                0x00ffffff
#define BCHP_FPM_CTRL_FPM_POOL1_CFG1_reserved1_SHIFT               0

/***************************************************************************
 *POOL1_CFG2 - POOL1 Configuration Register 2
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_CFG2 :: POOL_BASE_ADDRESS [31:02] */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG2_POOL_BASE_ADDRESS_MASK        0xfffffffc
#define BCHP_FPM_CTRL_FPM_POOL1_CFG2_POOL_BASE_ADDRESS_SHIFT       2
#define BCHP_FPM_CTRL_FPM_POOL1_CFG2_POOL_BASE_ADDRESS_DEFAULT     0x00000000

/* FPM_CTRL_FPM :: POOL1_CFG2 :: reserved0 [01:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG2_reserved0_MASK                0x00000003
#define BCHP_FPM_CTRL_FPM_POOL1_CFG2_reserved0_SHIFT               0

/***************************************************************************
 *POOL1_CFG3 - POOL1 Configuration Register 3
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_CFG3 :: POOL_SEL [31:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_CFG3_POOL_SEL_MASK                 0xffffffff
#define BCHP_FPM_CTRL_FPM_POOL1_CFG3_POOL_SEL_SHIFT                0
#define BCHP_FPM_CTRL_FPM_POOL1_CFG3_POOL_SEL_DEFAULT              0x00000001

/***************************************************************************
 *POOL1_STAT1 - POOL1 Status Register 1
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STAT1 :: OVRFL [31:16] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT1_OVRFL_MASK                   0xffff0000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT1_OVRFL_SHIFT                  16
#define BCHP_FPM_CTRL_FPM_POOL1_STAT1_OVRFL_DEFAULT                0x00000000

/* FPM_CTRL_FPM :: POOL1_STAT1 :: UNDRFL [15:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT1_UNDRFL_MASK                  0x0000ffff
#define BCHP_FPM_CTRL_FPM_POOL1_STAT1_UNDRFL_SHIFT                 0
#define BCHP_FPM_CTRL_FPM_POOL1_STAT1_UNDRFL_DEFAULT               0x00000000

/***************************************************************************
 *POOL1_STAT2 - POOL1 Status Register 2
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STAT2 :: POOL_FULL [31:31] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_POOL_FULL_MASK               0x80000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_POOL_FULL_SHIFT              31
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_POOL_FULL_DEFAULT            0x00000000

/* FPM_CTRL_FPM :: POOL1_STAT2 :: reserved0 [30:30] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_reserved0_MASK               0x40000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_reserved0_SHIFT              30

/* FPM_CTRL_FPM :: POOL1_STAT2 :: FREE_FIFO_FULL [29:29] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_FREE_FIFO_FULL_MASK          0x20000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_FREE_FIFO_FULL_SHIFT         29
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_FREE_FIFO_FULL_DEFAULT       0x00000000

/* FPM_CTRL_FPM :: POOL1_STAT2 :: FREE_FIFO_EMPTY [28:28] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_FREE_FIFO_EMPTY_MASK         0x10000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_FREE_FIFO_EMPTY_SHIFT        28
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_FREE_FIFO_EMPTY_DEFAULT      0x00000001

/* FPM_CTRL_FPM :: POOL1_STAT2 :: ALLOC_FIFO_FULL [27:27] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_ALLOC_FIFO_FULL_MASK         0x08000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_ALLOC_FIFO_FULL_SHIFT        27
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_ALLOC_FIFO_FULL_DEFAULT      0x00000000

/* FPM_CTRL_FPM :: POOL1_STAT2 :: ALLOC_FIFO_EMPTY [26:26] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_ALLOC_FIFO_EMPTY_MASK        0x04000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_ALLOC_FIFO_EMPTY_SHIFT       26
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_ALLOC_FIFO_EMPTY_DEFAULT     0x00000001

/* FPM_CTRL_FPM :: POOL1_STAT2 :: reserved1 [25:18] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_reserved1_MASK               0x03fc0000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_reserved1_SHIFT              18

/* FPM_CTRL_FPM :: POOL1_STAT2 :: NUM_OF_TOKENS_AVAILABLE [17:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_NUM_OF_TOKENS_AVAILABLE_MASK 0x0003ffff
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_NUM_OF_TOKENS_AVAILABLE_SHIFT 0
#define BCHP_FPM_CTRL_FPM_POOL1_STAT2_NUM_OF_TOKENS_AVAILABLE_DEFAULT 0x00010000

/***************************************************************************
 *POOL1_STAT3 - POOL1 Status Register 3
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STAT3 :: reserved0 [31:18] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT3_reserved0_MASK               0xfffc0000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT3_reserved0_SHIFT              18

/* FPM_CTRL_FPM :: POOL1_STAT3 :: NUM_OF_NOT_VALID_TOKEN_FREES [17:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT3_NUM_OF_NOT_VALID_TOKEN_FREES_MASK 0x0003ffff
#define BCHP_FPM_CTRL_FPM_POOL1_STAT3_NUM_OF_NOT_VALID_TOKEN_FREES_SHIFT 0
#define BCHP_FPM_CTRL_FPM_POOL1_STAT3_NUM_OF_NOT_VALID_TOKEN_FREES_DEFAULT 0x00000000

/***************************************************************************
 *POOL1_STAT4 - POOL1 Status Register 4
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STAT4 :: reserved0 [31:18] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT4_reserved0_MASK               0xfffc0000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT4_reserved0_SHIFT              18

/* FPM_CTRL_FPM :: POOL1_STAT4 :: NUM_OF_NOT_VALID_TOKEN_MULTI [17:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT4_NUM_OF_NOT_VALID_TOKEN_MULTI_MASK 0x0003ffff
#define BCHP_FPM_CTRL_FPM_POOL1_STAT4_NUM_OF_NOT_VALID_TOKEN_MULTI_SHIFT 0
#define BCHP_FPM_CTRL_FPM_POOL1_STAT4_NUM_OF_NOT_VALID_TOKEN_MULTI_DEFAULT 0x00000000

/***************************************************************************
 *POOL1_STAT5 - POOL1 Status Register 5
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STAT5 :: MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN_VALID [31:31] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT5_MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN_VALID_MASK 0x80000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT5_MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN_VALID_SHIFT 31
#define BCHP_FPM_CTRL_FPM_POOL1_STAT5_MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN_VALID_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STAT5 :: MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN [30:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT5_MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN_MASK 0x7fffffff
#define BCHP_FPM_CTRL_FPM_POOL1_STAT5_MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN_SHIFT 0
#define BCHP_FPM_CTRL_FPM_POOL1_STAT5_MEM_CORRUPT_STS_RELATED_ALLOC_TOKEN_DEFAULT 0x00000000

/***************************************************************************
 *POOL1_STAT6 - POOL1 Status Register 6
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STAT6 :: INVALID_FREE_TOKEN_VALID [31:31] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT6_INVALID_FREE_TOKEN_VALID_MASK 0x80000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT6_INVALID_FREE_TOKEN_VALID_SHIFT 31
#define BCHP_FPM_CTRL_FPM_POOL1_STAT6_INVALID_FREE_TOKEN_VALID_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STAT6 :: INVALID_FREE_TOKEN [30:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT6_INVALID_FREE_TOKEN_MASK      0x7fffffff
#define BCHP_FPM_CTRL_FPM_POOL1_STAT6_INVALID_FREE_TOKEN_SHIFT     0
#define BCHP_FPM_CTRL_FPM_POOL1_STAT6_INVALID_FREE_TOKEN_DEFAULT   0x00000000

/***************************************************************************
 *POOL1_STAT7 - POOL1 Status Register 7
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_STAT7 :: INVALID_MCAST_TOKEN_VALID [31:31] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT7_INVALID_MCAST_TOKEN_VALID_MASK 0x80000000
#define BCHP_FPM_CTRL_FPM_POOL1_STAT7_INVALID_MCAST_TOKEN_VALID_SHIFT 31
#define BCHP_FPM_CTRL_FPM_POOL1_STAT7_INVALID_MCAST_TOKEN_VALID_DEFAULT 0x00000000

/* FPM_CTRL_FPM :: POOL1_STAT7 :: INVALID_MCAST_TOKEN [30:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_STAT7_INVALID_MCAST_TOKEN_MASK     0x7fffffff
#define BCHP_FPM_CTRL_FPM_POOL1_STAT7_INVALID_MCAST_TOKEN_SHIFT    0
#define BCHP_FPM_CTRL_FPM_POOL1_STAT7_INVALID_MCAST_TOKEN_DEFAULT  0x00000000

/***************************************************************************
 *POOL1_XON_XOFF_CFG - POOL1 XON/XOFF Threshold Configuration Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: POOL1_XON_XOFF_CFG :: XON_THRESHOLD [31:16] */
#define BCHP_FPM_CTRL_FPM_POOL1_XON_XOFF_CFG_XON_THRESHOLD_MASK    0xffff0000
#define BCHP_FPM_CTRL_FPM_POOL1_XON_XOFF_CFG_XON_THRESHOLD_SHIFT   16
#define BCHP_FPM_CTRL_FPM_POOL1_XON_XOFF_CFG_XON_THRESHOLD_DEFAULT 0x00000040

/* FPM_CTRL_FPM :: POOL1_XON_XOFF_CFG :: XOFF_THRESHOLD [15:00] */
#define BCHP_FPM_CTRL_FPM_POOL1_XON_XOFF_CFG_XOFF_THRESHOLD_MASK   0x0000ffff
#define BCHP_FPM_CTRL_FPM_POOL1_XON_XOFF_CFG_XOFF_THRESHOLD_SHIFT  0
#define BCHP_FPM_CTRL_FPM_POOL1_XON_XOFF_CFG_XOFF_THRESHOLD_DEFAULT 0x00000030

/***************************************************************************
 *MEM_CTL - Back door Memory Access Control Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: MEM_CTL :: MEM_WR [31:31] */
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_WR_MASK                      0x80000000
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_WR_SHIFT                     31
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_WR_DEFAULT                   0x00000000

/* FPM_CTRL_FPM :: MEM_CTL :: MEM_RD [30:30] */
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_RD_MASK                      0x40000000
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_RD_SHIFT                     30
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_RD_DEFAULT                   0x00000000

/* FPM_CTRL_FPM :: MEM_CTL :: MEM_SEL [29:28] */
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_SEL_MASK                     0x30000000
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_SEL_SHIFT                    28
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_SEL_DEFAULT                  0x00000000

/* FPM_CTRL_FPM :: MEM_CTL :: reserved0 [27:18] */
#define BCHP_FPM_CTRL_FPM_MEM_CTL_reserved0_MASK                   0x0ffc0000
#define BCHP_FPM_CTRL_FPM_MEM_CTL_reserved0_SHIFT                  18

/* FPM_CTRL_FPM :: MEM_CTL :: MEM_ADDR [17:02] */
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_ADDR_MASK                    0x0003fffc
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_ADDR_SHIFT                   2
#define BCHP_FPM_CTRL_FPM_MEM_CTL_MEM_ADDR_DEFAULT                 0x00000000

/* FPM_CTRL_FPM :: MEM_CTL :: reserved1 [01:00] */
#define BCHP_FPM_CTRL_FPM_MEM_CTL_reserved1_MASK                   0x00000003
#define BCHP_FPM_CTRL_FPM_MEM_CTL_reserved1_SHIFT                  0

/***************************************************************************
 *MEM_DATA1 - Back door Memory Data1 Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: MEM_DATA1 :: MEM_DATA1 [31:00] */
#define BCHP_FPM_CTRL_FPM_MEM_DATA1_MEM_DATA1_MASK                 0xffffffff
#define BCHP_FPM_CTRL_FPM_MEM_DATA1_MEM_DATA1_SHIFT                0
#define BCHP_FPM_CTRL_FPM_MEM_DATA1_MEM_DATA1_DEFAULT              0x00000000

/***************************************************************************
 *MEM_DATA2 - Back door Memory Data2 Register
 ***************************************************************************/
/* FPM_CTRL_FPM :: MEM_DATA2 :: MEM_DATA2 [31:00] */
#define BCHP_FPM_CTRL_FPM_MEM_DATA2_MEM_DATA2_MASK                 0xffffffff
#define BCHP_FPM_CTRL_FPM_MEM_DATA2_MEM_DATA2_SHIFT                0
#define BCHP_FPM_CTRL_FPM_MEM_DATA2_MEM_DATA2_DEFAULT              0x00000000

/***************************************************************************
 *SPARE - Spare Register for future use
 ***************************************************************************/
/* FPM_CTRL_FPM :: SPARE :: SPARE_BITS [31:00] */
#define BCHP_FPM_CTRL_FPM_SPARE_SPARE_BITS_MASK                    0xffffffff
#define BCHP_FPM_CTRL_FPM_SPARE_SPARE_BITS_SHIFT                   0
#define BCHP_FPM_CTRL_FPM_SPARE_SPARE_BITS_DEFAULT                 0x00000000

#endif /* #ifndef BCHP_FPM_CTRL_FPM_H__ */

/* End of File */
