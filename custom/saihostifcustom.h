/**
 * Copyright (c) 2018 Microsoft Open Technologies, Inc.
 * SPDX-FileCopyrightText: NVIDIA CORPORATION & AFFILIATES
 * Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 *    THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR
 *    CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 *    LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS
 *    FOR A PARTICULAR PURPOSE, MERCHANTABILITY OR NON-INFRINGEMENT.
 *
 *    See the Apache Version 2.0 License for specific language governing
 *    permissions and limitations under the License.
 *
 *    Microsoft would like to thank the following companies for their review and
 *    assistance with these files: Intel Corporation, Mellanox Technologies Ltd,
 *    Dell Products, L.P., Facebook, Inc., Marvell International Ltd.
 *
 * @file    saihostifcustom.h
 *
 * @brief   This module defines hostif custom of the Switch Abstraction Interface (SAI)
 */

#ifndef __SAIHOSTIFCUSTOM_H_
#define __SAIHOSTIFCUSTOM_H_

#include <saihostif.h>

/**
 * @brief Host interface trap attributes custom
 *
 * @flags free
 */
typedef enum _sai_hostif_trap_attr_custom_t {
    /**
     * @brief L4 port list for the trap
     *
     * @type sai_u16_list_t
     * @flags CREATE_AND_SET
     * @default empty
     * @validonly SAI_HOSTIF_TRAP_ATTR_TRAP_TYPE == SAI_HOSTIF_TRAP_TYPE_TACACS_CLIENT or SAI_HOSTIF_TRAP_ATTR_TRAP_TYPE == SAI_HOSTIF_TRAP_TYPE_GNMI_CLIENT
     */
    SAI_HOSTIF_TRAP_ATTR_L4_PORT_LIST = SAI_HOSTIF_TRAP_ATTR_CUSTOM_RANGE_START,
} sai_hostif_trap_attr_custom_t;

/**
 * @brief SAI hostif interface trap type custom,
 *
 * @flags ranges
 */
typedef enum _sai_hostif_trap_type_custom_t {
    /** default packet action is drop */
    SAI_HOSTIF_TRAP_TYPE_ICMP = 0x10000000,

    /** default packet action is drop */
    SAI_HOSTIF_TRAP_TYPE_ICMPV6,

    /** Default packet action is forward */
    SAI_HOSTIF_TRAP_TYPE_IPV6_ND_ROUTER_ADVERTISEMENT,

    /** Default packet action is forward */
    SAI_HOSTIF_TRAP_TYPE_IPV6_ND_ROUTER_SOLICITATION,

    /** Default packet action is forward */
    SAI_HOSTIF_TRAP_TYPE_IPV6_ND_REDIRECT,

    /** Default packet action is trap */
    SAI_HOSTIF_TRAP_TYPE_ARP_MISS,

    /** Default packet action is trap */
    SAI_HOSTIF_TRAP_TYPE_ND_MISS,

    /**
     * @brief TACACS traffic (TCP src port == 49) to local router IP address
     * (default packet action is drop)
     */
    SAI_HOSTIF_TRAP_TYPE_TACACS_CLIENT,

    /**
     * @brief GNMI traffic (TCP src port == 9339) to local router IP address
     * (default packet action is drop)
     */
    SAI_HOSTIF_TRAP_TYPE_GNMI_CLIENT,
} sai_hostif_trap_type_custom_t;

#endif /* __SAIHOSTIFCUSTOM_H_ */
