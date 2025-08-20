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
 * @file    saiportcustom.h
 *
 * @brief   This module defines port custom of the Switch Abstraction Interface (SAI)
 */

#ifndef __SAIPORTCUSTOM_H_
#define __SAIPORTCUSTOM_H_

#include <saiport.h>

/**
 * @brief SAI port statistic custom,
 *
 * @flags free
 */
typedef enum _sai_port_stat_custom_t {
    /** The amount of all packets that were received by a port */
    SAI_PORT_STAT_IF_IN_RECEIVES = SAI_PORT_STAT_CUSTOM_RANGE_BASE,

    /** The amount of all packets that were sent by a port */
    SAI_PORT_STAT_IF_OUT_TRANSMITS,

    /** The amount of all ipv4 packets that were sent by a port */
    SAI_PORT_STAT_IP_OUT_TRANSMITS,

    /** The amount of all ipv6 packets that were sent by a port */
    SAI_PORT_STAT_IPV6_OUT_TRANSMITS,
} sai_port_stat_custom_t;

/**
 * @brief SAI port attribute custom,
 *
 * @flags free
 */
typedef enum _sai_port_attr_custom_t {
    /**
     * @brief Label port in mirror session header
     *
     * @type sai_uint32_t
     * @flags READ_ONLY
     * @isvlan false
     */
    SAI_PORT_ATTR_HW_PORT_ID = SAI_PORT_ATTR_CUSTOM_RANGE_START,
} sai_port_attr_custom_t;

#endif /* __SAIPORTCUSTOM_H_ */
