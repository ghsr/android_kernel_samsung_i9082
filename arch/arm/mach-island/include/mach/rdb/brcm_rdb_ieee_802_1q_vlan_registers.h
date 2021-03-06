/************************************************************************************************/
/*                                                                                              */
/*  Copyright 2011  Broadcom Corporation                                                        */
/*                                                                                              */
/*     Unless you and Broadcom execute a separate written software license agreement governing  */
/*     use of this software, this software is licensed to you under the terms of the GNU        */
/*     General Public License version 2 (the GPL), available at                                 */
/*                                                                                              */
/*          http://www.broadcom.com/licenses/GPLv2.php                                          */
/*                                                                                              */
/*     with the following added to such license:                                                */
/*                                                                                              */
/*     As a special exception, the copyright holders of this software give you permission to    */
/*     link this software with independent modules, and to copy and distribute the resulting    */
/*     executable under terms of your choice, provided that you also meet, for each linked      */
/*     independent module, the terms and conditions of the license of that module.              */
/*     An independent module is a module which is not derived from this software.  The special  */
/*     exception does not apply to any modifications of the software.                           */
/*                                                                                              */
/*     Notwithstanding the above, under no circumstances may you combine this software in any   */
/*     way with any other Broadcom software provided under a license other than the GPL,        */
/*     without Broadcom's express prior written consent.                                        */
/*                                                                                              */
/*     Date     : Generated on 4/25/2011 11:6:8                                             */
/*     RDB file : /projects/BIGISLAND/revA0                                                                   */
/************************************************************************************************/

#ifndef __BRCM_RDB_IEEE_802_1Q_VLAN_REGISTERS_H__
#define __BRCM_RDB_IEEE_802_1Q_VLAN_REGISTERS_H__

#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_OFFSET       0x00000000
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_TYPE         UInt8
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_RESERVED_MASK 0x00000014
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_EN_1QVLAN_SHIFT 7
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_EN_1QVLAN_MASK 0x00000080
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_VLAN_LEARNING_MODE_SHIFT 5
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_VLAN_LEARNING_MODE_MASK 0x00000060
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_CHANGE_1Q_VID_SHIFT 3
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_CHANGE_1Q_VID_MASK 0x00000008
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_CHANGE_1P_VID_OUTER_SHIFT 1
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_CHANGE_1P_VID_OUTER_MASK 0x00000002
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_CHANGE_1P_VID_INNER_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_0_REGISTER_CHANGE_1P_VID_INNER_MASK 0x00000001

#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_OFFSET       0x00000008
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_TYPE         UInt8
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_RESERVED_MASK 0x00000093
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_IPMC_BYPASS_V_UNTAGMAP_SHIFT 6
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_IPMC_BYPASS_V_UNTAGMAP_MASK 0x00000040
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_IPMC_BYPASS_V_FWDMAP_SHIFT 5
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_IPMC_BYPASS_V_FWDMAP_MASK 0x00000020
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_RSV_MCAST_V_UNTAGMAP_SHIFT 3
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_RSV_MCAST_V_UNTAGMAP_MASK 0x00000008
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_RSV_MCAST_V_FWDMAP_SHIFT 2
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_1_REGISTER_ENABLE_RSV_MCAST_V_FWDMAP_MASK 0x00000004

#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_OFFSET       0x00000010
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_TYPE         UInt8
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_RESERVED_MASK 0x000000AB
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_EN_GMRP_GVRP_UNTAGMAP_SHIFT 6
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_EN_GMRP_GVRP_UNTAGMAP_MASK 0x00000040
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_EN_GMRP_GVRP_V_FWDMAP_SHIFT 4
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_EN_GMRP_GVRP_V_FWDMAP_MASK 0x00000010
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_EN_MII_MANAGE_BYPASS_V_FWDMAP_SHIFT 2
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_2_REGISTER_EN_MII_MANAGE_BYPASS_V_FWDMAP_MASK 0x00000004

#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_3_REGISTER_OFFSET       0x00000018
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_3_REGISTER_TYPE         UInt16
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_3_REGISTER_RESERVED_MASK 0x0000FE00
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_3_REGISTER_TYPE_TYPE_GLOBAL_CONTROL_2_REGISTER_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_3_REGISTER_TYPE_TYPE_GLOBAL_CONTROL_2_REGISTER_MASK 0x000001FF

#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_OFFSET       0x00000028
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_TYPE         UInt8
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_RESERVED_MASK 0x00000001
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_INGRESS_VID_CHECK_SHIFT 6
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_INGRESS_VID_CHECK_MASK 0x000000C0
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_EN_MANAGE_RECEIVE_GVRP_SHIFT 5
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_EN_MANAGE_RECEIVE_GVRP_MASK 0x00000020
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_EN_MANAGE_RECEIVE_GMRP_SHIFT 4
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_EN_MANAGE_RECEIVE_GMRP_MASK 0x00000010
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_EN_DT_MODE_SHIFT 2
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_EN_DT_MODE_MASK 0x0000000C
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_RESV_MCAST_FLOOD_SHIFT 1
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_4_REGISTER_RESV_MCAST_FLOOD_MASK 0x00000002

#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_OFFSET       0x00000030
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_TYPE         UInt8
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_RESERVED_MASK 0x000000A2
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_EN_PRESERV_NON_1Q_FRAME_SHIFT 6
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_EN_PRESERV_NON_1Q_FRAME_MASK 0x00000040
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_EGRESS_DIR_FRM_BYPASS_TRUNK_EN_SHIFT 4
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_EGRESS_DIR_FRM_BYPASS_TRUNK_EN_MASK 0x00000010
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_DROP_VTABLE_MISS_SHIFT 3
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_DROP_VTABLE_MISS_MASK 0x00000008
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_ENABLE_VID_FFF_FWDING_SHIFT 2
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_ENABLE_VID_FFF_FWDING_MASK 0x00000004
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_BYPASS_MANAGE_RX__CRCCHK_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_5_REGISTER_BYPASS_MANAGE_RX__CRCCHK_MASK 0x00000001

#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_6_REGISTER_OFFSET       0x00000038
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_6_REGISTER_TYPE         UInt8
#define IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_6_REGISTER_RESERVED_MASK 0x000000FC
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_6_REGISTER_USE_STRICT_SFD_DETECT_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_GLOBAL_CONTROL_6_REGISTER_USE_STRICT_SFD_DETECT_MASK 0x00000003

#define IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_OFFSET 0x00000050
#define IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_TYPE UInt16
#define IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_RESERVED_MASK 0x0000F000
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT5_UNTAGMAP_SHIFT 11
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT5_UNTAGMAP_MASK 0x00000800
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT5_V_FWDMAP_SHIFT 10
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT5_V_FWDMAP_MASK 0x00000400
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT4_UNTAGMAP_SHIFT 9
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT4_UNTAGMAP_MASK 0x00000200
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT4_V_FWDMAP_SHIFT 8
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT4_V_FWDMAP_MASK 0x00000100
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT3_UNTAGMAP_SHIFT 7
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT3_UNTAGMAP_MASK 0x00000080
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT3_V_FWDMAP_SHIFT 6
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT3_V_FWDMAP_MASK 0x00000040
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT2_UNTAGMAP_SHIFT 5
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT2_UNTAGMAP_MASK 0x00000020
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT2_V_FWDMAP_SHIFT 4
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT2_V_FWDMAP_MASK 0x00000010
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT1_UNTAGMAP_SHIFT 3
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT1_UNTAGMAP_MASK 0x00000008
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT1_V_FWDMAP_SHIFT 2
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT1_V_FWDMAP_MASK 0x00000004
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT0_UNTAGMAP_SHIFT 1
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT0_UNTAGMAP_MASK 0x00000002
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT0_V_FWDMAP_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_VLAN_MULTIPORT_ADDRESS_CONTROL_REGISTER_EN_MPORT0_V_FWDMAP_MASK 0x00000001

#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_OFFSET 0x00000080
#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_TYPE UInt16
#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_RESERVED_MASK 0x00000000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_PRI_SHIFT 13
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_PRI_MASK 0x0000E000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_CFI_SHIFT 12
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_CFI_MASK 0x00001000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_VID_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_0_VID_MASK 0x00000FFF

#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_OFFSET 0x00000090
#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_TYPE UInt16
#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_RESERVED_MASK 0x00000000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_PRI_SHIFT 13
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_PRI_MASK 0x0000E000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_CFI_SHIFT 12
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_CFI_MASK 0x00001000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_VID_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_1_VID_MASK 0x00000FFF

#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_OFFSET 0x00000100
#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_TYPE UInt16
#define IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_RESERVED_MASK 0x00000000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_PRI_SHIFT 13
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_PRI_MASK 0x0000E000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_CFI_SHIFT 12
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_CFI_MASK 0x00001000
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_VID_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_PORT_DEFAULT_802_1Q_TAG_REGISTER_IMP_VID_MASK 0x00000FFF

#define IEEE_802_1Q_VLAN_REGISTERS_DOUBLE_TAGGING_TPID_REGISTER_OFFSET    0x00000180
#define IEEE_802_1Q_VLAN_REGISTERS_DOUBLE_TAGGING_TPID_REGISTER_TYPE      UInt16
#define IEEE_802_1Q_VLAN_REGISTERS_DOUBLE_TAGGING_TPID_REGISTER_RESERVED_MASK 0x00000000
#define    IEEE_802_1Q_VLAN_REGISTERS_DOUBLE_TAGGING_TPID_REGISTER_ISP_TPID_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_DOUBLE_TAGGING_TPID_REGISTER_ISP_TPID_MASK 0x0000FFFF

#define IEEE_802_1Q_VLAN_REGISTERS_ISP_PORT_SELECTION_PORTMAP_REGISTER_OFFSET 0x00000190
#define IEEE_802_1Q_VLAN_REGISTERS_ISP_PORT_SELECTION_PORTMAP_REGISTER_TYPE UInt16
#define IEEE_802_1Q_VLAN_REGISTERS_ISP_PORT_SELECTION_PORTMAP_REGISTER_RESERVED_MASK 0x0000FE00
#define    IEEE_802_1Q_VLAN_REGISTERS_ISP_PORT_SELECTION_PORTMAP_REGISTER_ISP_PORT_PORTMAP_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_ISP_PORT_SELECTION_PORTMAP_REGISTER_ISP_PORT_PORTMAP_MASK 0x000001FF

#define IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_OFFSET 0x00000200
#define IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_TYPE UInt32
#define IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_RESERVED_MASK 0x7FFF0008
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_GLOBAL_WR_EN_SHIFT 31
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_GLOBAL_WR_EN_MASK 0x80000000
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_TABLE_ADDR_SHIFT 8
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_TABLE_ADDR_MASK 0x0000FF00
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_EGRESS_PRT_SHIFT 4
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_EGRESS_PRT_MASK 0x000000F0
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_EVT_CLEAR_SHIFT 2
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_EVT_CLEAR_MASK 0x00000004
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_OP_SHIFT 1
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_OP_MASK 0x00000002
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_OP_START_OP_DONE_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_EVT_ACCESS_REGISTER_OP_START_OP_DONE_MASK 0x00000001

#define IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_OFFSET 0x00000220
#define IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_TYPE UInt32
#define IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_RESERVED_MASK 0xC000C000
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_OUTER_OP_SHIFT 28
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_OUTER_OP_MASK 0x30000000
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_OUTER_VID_SHIFT 16
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_OUTER_VID_MASK 0x0FFF0000
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_INNER_OP_SHIFT 12
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_INNER_OP_MASK 0x00003000
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_INNER_VID_SHIFT 0
#define    IEEE_802_1Q_VLAN_REGISTERS_EGRESS_VID_REMARKING_TABLE_DATA_REGISTER_INNER_VID_MASK 0x00000FFF

#endif /* __BRCM_RDB_IEEE_802_1Q_VLAN_REGISTERS_H__ */


