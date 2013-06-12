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
 * Date:           Generated on         Sat Apr 20 03:07:42 2013
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

#ifndef BCHP_GIO_H__
#define BCHP_GIO_H__

/***************************************************************************
 *GIO - GPIO
 ***************************************************************************/
#define BCHP_GIO_ODEN_LO                         0x00406800 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[31:0] */
#define BCHP_GIO_DATA_LO                         0x00406804 /* GENERAL PURPOSE I/O DATA FOR  GPIO[31:0] */
#define BCHP_GIO_IODIR_LO                        0x00406808 /* GENERAL PURPOSE I/O DIRECTION FOR  GPIO[31:0] */
#define BCHP_GIO_EC_LO                           0x0040680c /* GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[31:0] */
#define BCHP_GIO_EI_LO                           0x00406810 /* GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[31:0] */
#define BCHP_GIO_MASK_LO                         0x00406814 /* GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[31:0] */
#define BCHP_GIO_LEVEL_LO                        0x00406818 /* GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[31:0] */
#define BCHP_GIO_STAT_LO                         0x0040681c /* GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[31:0] */
#define BCHP_GIO_ODEN_HI                         0x00406820 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[63:32] */
#define BCHP_GIO_DATA_HI                         0x00406824 /* GENERAL PURPOSE I/O DATA FOR  GPIO[63:32] */
#define BCHP_GIO_IODIR_HI                        0x00406828 /* GENERAL PURPOSE I/O DIRECTION FOR  GPIO[63:32] */
#define BCHP_GIO_EC_HI                           0x0040682c /* GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[63:32] */
#define BCHP_GIO_EI_HI                           0x00406830 /* GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[63:32] */
#define BCHP_GIO_MASK_HI                         0x00406834 /* GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[63:32] */
#define BCHP_GIO_LEVEL_HI                        0x00406838 /* GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[63:32] */
#define BCHP_GIO_STAT_HI                         0x0040683c /* GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[63:32] */
#define BCHP_GIO_ODEN_EXT_HI                     0x00406840 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[95:64] */
#define BCHP_GIO_DATA_EXT_HI                     0x00406844 /* GENERAL PURPOSE I/O DATA FOR  GPIO[95:64] */
#define BCHP_GIO_IODIR_EXT_HI                    0x00406848 /* GENERAL PURPOSE I/O DIRECTION FOR  GPIO[95:64] */
#define BCHP_GIO_EC_EXT_HI                       0x0040684c /* GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[95:64] */
#define BCHP_GIO_EI_EXT_HI                       0x00406850 /* GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[95:64] */
#define BCHP_GIO_MASK_EXT_HI                     0x00406854 /* GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[95:64] */
#define BCHP_GIO_LEVEL_EXT_HI                    0x00406858 /* GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[95:64] */
#define BCHP_GIO_STAT_EXT_HI                     0x0040685c /* GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[95:64] */
#define BCHP_GIO_ODEN_EXT2                       0x00406860 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[124:96] */
#define BCHP_GIO_DATA_EXT2                       0x00406864 /* GENERAL PURPOSE I/O DATA FOR  GPIO[124:96] */
#define BCHP_GIO_IODIR_EXT2                      0x00406868 /* GENERAL PURPOSE I/O DIRECTION FOR  GPIO[124:96] */
#define BCHP_GIO_EC_EXT2                         0x0040686c /* GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[124:96] */
#define BCHP_GIO_EI_EXT2                         0x00406870 /* GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[124:96] */
#define BCHP_GIO_MASK_EXT2                       0x00406874 /* GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[124:96] */
#define BCHP_GIO_LEVEL_EXT2                      0x00406878 /* GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[124:96] */
#define BCHP_GIO_STAT_EXT2                       0x0040687c /* GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[124:96] */
#define BCHP_GIO_ODEN_EXT                        0x00406880 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR AON_SGPIO[1:0] and SGPIO[5:0] */
#define BCHP_GIO_DATA_EXT                        0x00406884 /* GENERAL PURPOSE I/O DATA FOR AON_SGPIO[1:0] and SGPIO[5:0] */
#define BCHP_GIO_IODIR_EXT                       0x00406888 /* GENERAL PURPOSE I/O DIRECTION FOR AON_SGPIO[1:0] and SGPIO[5:0] */
#define BCHP_GIO_EC_EXT                          0x0040688c /* GENERAL PURPOSE I/O EDGE CONFIGURATION FOR AON_SGPIO[1:0] and SGPIO[5:0] */
#define BCHP_GIO_EI_EXT                          0x00406890 /* GENERAL PURPOSE I/O EDGE INSENSITIVE FOR AON_SGPIO[1:0] and SGPIO[5:0] */
#define BCHP_GIO_MASK_EXT                        0x00406894 /* GENERAL PURPOSE I/O INTERRUPT MASK FOR AON_SGPIO[1:0] and SGPIO[5:0] */
#define BCHP_GIO_LEVEL_EXT                       0x00406898 /* GENERAL PURPOSE I/O INTERRUPT TYPE FOR AON_SGPIO[1:0] and SGPIO[5:0] */
#define BCHP_GIO_STAT_EXT                        0x0040689c /* GENERAL PURPOSE I/O INTERRUPT STATUS FOR AON_SGPIO[1:0] and SGPIO[5:0] */

/***************************************************************************
 *ODEN_LO - GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: ODEN_LO :: oden [31:00] */
#define BCHP_GIO_ODEN_LO_oden_MASK                                 0xffffffff
#define BCHP_GIO_ODEN_LO_oden_SHIFT                                0
#define BCHP_GIO_ODEN_LO_oden_DEFAULT                              0x00000000

/***************************************************************************
 *DATA_LO - GENERAL PURPOSE I/O DATA FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: DATA_LO :: data [31:00] */
#define BCHP_GIO_DATA_LO_data_MASK                                 0xffffffff
#define BCHP_GIO_DATA_LO_data_SHIFT                                0
#define BCHP_GIO_DATA_LO_data_DEFAULT                              0x00000000

/***************************************************************************
 *IODIR_LO - GENERAL PURPOSE I/O DIRECTION FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: IODIR_LO :: iodir [31:00] */
#define BCHP_GIO_IODIR_LO_iodir_MASK                               0xffffffff
#define BCHP_GIO_IODIR_LO_iodir_SHIFT                              0
#define BCHP_GIO_IODIR_LO_iodir_DEFAULT                            0x00000001

/***************************************************************************
 *EC_LO - GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: EC_LO :: edge_config [31:00] */
#define BCHP_GIO_EC_LO_edge_config_MASK                            0xffffffff
#define BCHP_GIO_EC_LO_edge_config_SHIFT                           0
#define BCHP_GIO_EC_LO_edge_config_DEFAULT                         0x00000000

/***************************************************************************
 *EI_LO - GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: EI_LO :: edge_insensitive [31:00] */
#define BCHP_GIO_EI_LO_edge_insensitive_MASK                       0xffffffff
#define BCHP_GIO_EI_LO_edge_insensitive_SHIFT                      0
#define BCHP_GIO_EI_LO_edge_insensitive_DEFAULT                    0x00000000

/***************************************************************************
 *MASK_LO - GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: MASK_LO :: irq_mask [31:00] */
#define BCHP_GIO_MASK_LO_irq_mask_MASK                             0xffffffff
#define BCHP_GIO_MASK_LO_irq_mask_SHIFT                            0
#define BCHP_GIO_MASK_LO_irq_mask_DEFAULT                          0x00000000

/***************************************************************************
 *LEVEL_LO - GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: LEVEL_LO :: level [31:00] */
#define BCHP_GIO_LEVEL_LO_level_MASK                               0xffffffff
#define BCHP_GIO_LEVEL_LO_level_SHIFT                              0
#define BCHP_GIO_LEVEL_LO_level_DEFAULT                            0x00000000

/***************************************************************************
 *STAT_LO - GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[31:0]
 ***************************************************************************/
/* GIO :: STAT_LO :: irq_status [31:00] */
#define BCHP_GIO_STAT_LO_irq_status_MASK                           0xffffffff
#define BCHP_GIO_STAT_LO_irq_status_SHIFT                          0
#define BCHP_GIO_STAT_LO_irq_status_DEFAULT                        0x00000000

/***************************************************************************
 *ODEN_HI - GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: ODEN_HI :: oden [31:00] */
#define BCHP_GIO_ODEN_HI_oden_MASK                                 0xffffffff
#define BCHP_GIO_ODEN_HI_oden_SHIFT                                0
#define BCHP_GIO_ODEN_HI_oden_DEFAULT                              0x00000000

/***************************************************************************
 *DATA_HI - GENERAL PURPOSE I/O DATA FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: DATA_HI :: data [31:00] */
#define BCHP_GIO_DATA_HI_data_MASK                                 0xffffffff
#define BCHP_GIO_DATA_HI_data_SHIFT                                0
#define BCHP_GIO_DATA_HI_data_DEFAULT                              0x00000000

/***************************************************************************
 *IODIR_HI - GENERAL PURPOSE I/O DIRECTION FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: IODIR_HI :: iodir [31:00] */
#define BCHP_GIO_IODIR_HI_iodir_MASK                               0xffffffff
#define BCHP_GIO_IODIR_HI_iodir_SHIFT                              0
#define BCHP_GIO_IODIR_HI_iodir_DEFAULT                            0x00000001

/***************************************************************************
 *EC_HI - GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: EC_HI :: edge_config [31:00] */
#define BCHP_GIO_EC_HI_edge_config_MASK                            0xffffffff
#define BCHP_GIO_EC_HI_edge_config_SHIFT                           0
#define BCHP_GIO_EC_HI_edge_config_DEFAULT                         0x00000000

/***************************************************************************
 *EI_HI - GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: EI_HI :: edge_insensitive [31:00] */
#define BCHP_GIO_EI_HI_edge_insensitive_MASK                       0xffffffff
#define BCHP_GIO_EI_HI_edge_insensitive_SHIFT                      0
#define BCHP_GIO_EI_HI_edge_insensitive_DEFAULT                    0x00000000

/***************************************************************************
 *MASK_HI - GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: MASK_HI :: irq_mask [31:00] */
#define BCHP_GIO_MASK_HI_irq_mask_MASK                             0xffffffff
#define BCHP_GIO_MASK_HI_irq_mask_SHIFT                            0
#define BCHP_GIO_MASK_HI_irq_mask_DEFAULT                          0x00000000

/***************************************************************************
 *LEVEL_HI - GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: LEVEL_HI :: level [31:00] */
#define BCHP_GIO_LEVEL_HI_level_MASK                               0xffffffff
#define BCHP_GIO_LEVEL_HI_level_SHIFT                              0
#define BCHP_GIO_LEVEL_HI_level_DEFAULT                            0x00000000

/***************************************************************************
 *STAT_HI - GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[63:32]
 ***************************************************************************/
/* GIO :: STAT_HI :: irq_status [31:00] */
#define BCHP_GIO_STAT_HI_irq_status_MASK                           0xffffffff
#define BCHP_GIO_STAT_HI_irq_status_SHIFT                          0
#define BCHP_GIO_STAT_HI_irq_status_DEFAULT                        0x00000000

/***************************************************************************
 *ODEN_EXT_HI - GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: ODEN_EXT_HI :: oden [31:00] */
#define BCHP_GIO_ODEN_EXT_HI_oden_MASK                             0xffffffff
#define BCHP_GIO_ODEN_EXT_HI_oden_SHIFT                            0
#define BCHP_GIO_ODEN_EXT_HI_oden_DEFAULT                          0x00000000

/***************************************************************************
 *DATA_EXT_HI - GENERAL PURPOSE I/O DATA FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: DATA_EXT_HI :: data [31:00] */
#define BCHP_GIO_DATA_EXT_HI_data_MASK                             0xffffffff
#define BCHP_GIO_DATA_EXT_HI_data_SHIFT                            0
#define BCHP_GIO_DATA_EXT_HI_data_DEFAULT                          0x00000000

/***************************************************************************
 *IODIR_EXT_HI - GENERAL PURPOSE I/O DIRECTION FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: IODIR_EXT_HI :: iodir [31:00] */
#define BCHP_GIO_IODIR_EXT_HI_iodir_MASK                           0xffffffff
#define BCHP_GIO_IODIR_EXT_HI_iodir_SHIFT                          0
#define BCHP_GIO_IODIR_EXT_HI_iodir_DEFAULT                        0x00000001

/***************************************************************************
 *EC_EXT_HI - GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: EC_EXT_HI :: edge_config [31:00] */
#define BCHP_GIO_EC_EXT_HI_edge_config_MASK                        0xffffffff
#define BCHP_GIO_EC_EXT_HI_edge_config_SHIFT                       0
#define BCHP_GIO_EC_EXT_HI_edge_config_DEFAULT                     0x00000000

/***************************************************************************
 *EI_EXT_HI - GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: EI_EXT_HI :: edge_insensitive [31:00] */
#define BCHP_GIO_EI_EXT_HI_edge_insensitive_MASK                   0xffffffff
#define BCHP_GIO_EI_EXT_HI_edge_insensitive_SHIFT                  0
#define BCHP_GIO_EI_EXT_HI_edge_insensitive_DEFAULT                0x00000000

/***************************************************************************
 *MASK_EXT_HI - GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: MASK_EXT_HI :: irq_mask [31:00] */
#define BCHP_GIO_MASK_EXT_HI_irq_mask_MASK                         0xffffffff
#define BCHP_GIO_MASK_EXT_HI_irq_mask_SHIFT                        0
#define BCHP_GIO_MASK_EXT_HI_irq_mask_DEFAULT                      0x00000000

/***************************************************************************
 *LEVEL_EXT_HI - GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: LEVEL_EXT_HI :: level [31:00] */
#define BCHP_GIO_LEVEL_EXT_HI_level_MASK                           0xffffffff
#define BCHP_GIO_LEVEL_EXT_HI_level_SHIFT                          0
#define BCHP_GIO_LEVEL_EXT_HI_level_DEFAULT                        0x00000000

/***************************************************************************
 *STAT_EXT_HI - GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[95:64]
 ***************************************************************************/
/* GIO :: STAT_EXT_HI :: irq_status [31:00] */
#define BCHP_GIO_STAT_EXT_HI_irq_status_MASK                       0xffffffff
#define BCHP_GIO_STAT_EXT_HI_irq_status_SHIFT                      0
#define BCHP_GIO_STAT_EXT_HI_irq_status_DEFAULT                    0x00000000

/***************************************************************************
 *ODEN_EXT2 - GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: ODEN_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_ODEN_EXT2_reserved0_MASK                          0xe0000000
#define BCHP_GIO_ODEN_EXT2_reserved0_SHIFT                         29

/* GIO :: ODEN_EXT2 :: oden [28:00] */
#define BCHP_GIO_ODEN_EXT2_oden_MASK                               0x1fffffff
#define BCHP_GIO_ODEN_EXT2_oden_SHIFT                              0
#define BCHP_GIO_ODEN_EXT2_oden_DEFAULT                            0x00000000

/***************************************************************************
 *DATA_EXT2 - GENERAL PURPOSE I/O DATA FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: DATA_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_DATA_EXT2_reserved0_MASK                          0xe0000000
#define BCHP_GIO_DATA_EXT2_reserved0_SHIFT                         29

/* GIO :: DATA_EXT2 :: data [28:00] */
#define BCHP_GIO_DATA_EXT2_data_MASK                               0x1fffffff
#define BCHP_GIO_DATA_EXT2_data_SHIFT                              0
#define BCHP_GIO_DATA_EXT2_data_DEFAULT                            0x00000000

/***************************************************************************
 *IODIR_EXT2 - GENERAL PURPOSE I/O DIRECTION FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: IODIR_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_IODIR_EXT2_reserved0_MASK                         0xe0000000
#define BCHP_GIO_IODIR_EXT2_reserved0_SHIFT                        29

/* GIO :: IODIR_EXT2 :: iodir [28:00] */
#define BCHP_GIO_IODIR_EXT2_iodir_MASK                             0x1fffffff
#define BCHP_GIO_IODIR_EXT2_iodir_SHIFT                            0
#define BCHP_GIO_IODIR_EXT2_iodir_DEFAULT                          0x00000001

/***************************************************************************
 *EC_EXT2 - GENERAL PURPOSE I/O EDGE CONFIGURATION FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: EC_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_EC_EXT2_reserved0_MASK                            0xe0000000
#define BCHP_GIO_EC_EXT2_reserved0_SHIFT                           29

/* GIO :: EC_EXT2 :: edge_config [28:00] */
#define BCHP_GIO_EC_EXT2_edge_config_MASK                          0x1fffffff
#define BCHP_GIO_EC_EXT2_edge_config_SHIFT                         0
#define BCHP_GIO_EC_EXT2_edge_config_DEFAULT                       0x00000000

/***************************************************************************
 *EI_EXT2 - GENERAL PURPOSE I/O EDGE INSENSITIVE FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: EI_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_EI_EXT2_reserved0_MASK                            0xe0000000
#define BCHP_GIO_EI_EXT2_reserved0_SHIFT                           29

/* GIO :: EI_EXT2 :: edge_insensitive [28:00] */
#define BCHP_GIO_EI_EXT2_edge_insensitive_MASK                     0x1fffffff
#define BCHP_GIO_EI_EXT2_edge_insensitive_SHIFT                    0
#define BCHP_GIO_EI_EXT2_edge_insensitive_DEFAULT                  0x00000000

/***************************************************************************
 *MASK_EXT2 - GENERAL PURPOSE I/O INTERRUPT MASK FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: MASK_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_MASK_EXT2_reserved0_MASK                          0xe0000000
#define BCHP_GIO_MASK_EXT2_reserved0_SHIFT                         29

/* GIO :: MASK_EXT2 :: irq_mask [28:00] */
#define BCHP_GIO_MASK_EXT2_irq_mask_MASK                           0x1fffffff
#define BCHP_GIO_MASK_EXT2_irq_mask_SHIFT                          0
#define BCHP_GIO_MASK_EXT2_irq_mask_DEFAULT                        0x00000000

/***************************************************************************
 *LEVEL_EXT2 - GENERAL PURPOSE I/O INTERRUPT TYPE FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: LEVEL_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_LEVEL_EXT2_reserved0_MASK                         0xe0000000
#define BCHP_GIO_LEVEL_EXT2_reserved0_SHIFT                        29

/* GIO :: LEVEL_EXT2 :: level [28:00] */
#define BCHP_GIO_LEVEL_EXT2_level_MASK                             0x1fffffff
#define BCHP_GIO_LEVEL_EXT2_level_SHIFT                            0
#define BCHP_GIO_LEVEL_EXT2_level_DEFAULT                          0x00000000

/***************************************************************************
 *STAT_EXT2 - GENERAL PURPOSE I/O INTERRUPT STATUS FOR  GPIO[124:96]
 ***************************************************************************/
/* GIO :: STAT_EXT2 :: reserved0 [31:29] */
#define BCHP_GIO_STAT_EXT2_reserved0_MASK                          0xe0000000
#define BCHP_GIO_STAT_EXT2_reserved0_SHIFT                         29

/* GIO :: STAT_EXT2 :: irq_status [28:00] */
#define BCHP_GIO_STAT_EXT2_irq_status_MASK                         0x1fffffff
#define BCHP_GIO_STAT_EXT2_irq_status_SHIFT                        0
#define BCHP_GIO_STAT_EXT2_irq_status_DEFAULT                      0x00000000

/***************************************************************************
 *ODEN_EXT - GENERAL PURPOSE I/O OPEN DRAIN ENABLE FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: ODEN_EXT :: reserved0 [31:08] */
#define BCHP_GIO_ODEN_EXT_reserved0_MASK                           0xffffff00
#define BCHP_GIO_ODEN_EXT_reserved0_SHIFT                          8

/* GIO :: ODEN_EXT :: oden [07:00] */
#define BCHP_GIO_ODEN_EXT_oden_MASK                                0x000000ff
#define BCHP_GIO_ODEN_EXT_oden_SHIFT                               0
#define BCHP_GIO_ODEN_EXT_oden_DEFAULT                             0x00000000

/***************************************************************************
 *DATA_EXT - GENERAL PURPOSE I/O DATA FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: DATA_EXT :: reserved0 [31:08] */
#define BCHP_GIO_DATA_EXT_reserved0_MASK                           0xffffff00
#define BCHP_GIO_DATA_EXT_reserved0_SHIFT                          8

/* GIO :: DATA_EXT :: data [07:00] */
#define BCHP_GIO_DATA_EXT_data_MASK                                0x000000ff
#define BCHP_GIO_DATA_EXT_data_SHIFT                               0
#define BCHP_GIO_DATA_EXT_data_DEFAULT                             0x00000000

/***************************************************************************
 *IODIR_EXT - GENERAL PURPOSE I/O DIRECTION FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: IODIR_EXT :: reserved0 [31:08] */
#define BCHP_GIO_IODIR_EXT_reserved0_MASK                          0xffffff00
#define BCHP_GIO_IODIR_EXT_reserved0_SHIFT                         8

/* GIO :: IODIR_EXT :: iodir [07:00] */
#define BCHP_GIO_IODIR_EXT_iodir_MASK                              0x000000ff
#define BCHP_GIO_IODIR_EXT_iodir_SHIFT                             0
#define BCHP_GIO_IODIR_EXT_iodir_DEFAULT                           0x00000001

/***************************************************************************
 *EC_EXT - GENERAL PURPOSE I/O EDGE CONFIGURATION FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: EC_EXT :: reserved0 [31:08] */
#define BCHP_GIO_EC_EXT_reserved0_MASK                             0xffffff00
#define BCHP_GIO_EC_EXT_reserved0_SHIFT                            8

/* GIO :: EC_EXT :: edge_config [07:00] */
#define BCHP_GIO_EC_EXT_edge_config_MASK                           0x000000ff
#define BCHP_GIO_EC_EXT_edge_config_SHIFT                          0
#define BCHP_GIO_EC_EXT_edge_config_DEFAULT                        0x00000000

/***************************************************************************
 *EI_EXT - GENERAL PURPOSE I/O EDGE INSENSITIVE FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: EI_EXT :: reserved0 [31:08] */
#define BCHP_GIO_EI_EXT_reserved0_MASK                             0xffffff00
#define BCHP_GIO_EI_EXT_reserved0_SHIFT                            8

/* GIO :: EI_EXT :: edge_insensitive [07:00] */
#define BCHP_GIO_EI_EXT_edge_insensitive_MASK                      0x000000ff
#define BCHP_GIO_EI_EXT_edge_insensitive_SHIFT                     0
#define BCHP_GIO_EI_EXT_edge_insensitive_DEFAULT                   0x00000000

/***************************************************************************
 *MASK_EXT - GENERAL PURPOSE I/O INTERRUPT MASK FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: MASK_EXT :: reserved0 [31:08] */
#define BCHP_GIO_MASK_EXT_reserved0_MASK                           0xffffff00
#define BCHP_GIO_MASK_EXT_reserved0_SHIFT                          8

/* GIO :: MASK_EXT :: irq_mask [07:00] */
#define BCHP_GIO_MASK_EXT_irq_mask_MASK                            0x000000ff
#define BCHP_GIO_MASK_EXT_irq_mask_SHIFT                           0
#define BCHP_GIO_MASK_EXT_irq_mask_DEFAULT                         0x00000000

/***************************************************************************
 *LEVEL_EXT - GENERAL PURPOSE I/O INTERRUPT TYPE FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: LEVEL_EXT :: reserved0 [31:08] */
#define BCHP_GIO_LEVEL_EXT_reserved0_MASK                          0xffffff00
#define BCHP_GIO_LEVEL_EXT_reserved0_SHIFT                         8

/* GIO :: LEVEL_EXT :: level [07:00] */
#define BCHP_GIO_LEVEL_EXT_level_MASK                              0x000000ff
#define BCHP_GIO_LEVEL_EXT_level_SHIFT                             0
#define BCHP_GIO_LEVEL_EXT_level_DEFAULT                           0x00000000

/***************************************************************************
 *STAT_EXT - GENERAL PURPOSE I/O INTERRUPT STATUS FOR AON_SGPIO[1:0] and SGPIO[5:0]
 ***************************************************************************/
/* GIO :: STAT_EXT :: reserved0 [31:08] */
#define BCHP_GIO_STAT_EXT_reserved0_MASK                           0xffffff00
#define BCHP_GIO_STAT_EXT_reserved0_SHIFT                          8

/* GIO :: STAT_EXT :: irq_status [07:00] */
#define BCHP_GIO_STAT_EXT_irq_status_MASK                          0x000000ff
#define BCHP_GIO_STAT_EXT_irq_status_SHIFT                         0
#define BCHP_GIO_STAT_EXT_irq_status_DEFAULT                       0x00000000

#endif /* #ifndef BCHP_GIO_H__ */

/* End of File */
