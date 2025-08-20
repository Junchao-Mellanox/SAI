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
 * @file    saiswitchcustom.h
 *
 * @brief   This module defines switch custom of the Switch Abstraction Interface (SAI)
 */

#ifndef __SAISWITCHCUSTOM_H_
#define __SAISWITCHCUSTOM_H_

#include <saiswitch.h>

/**
 * @brief SAI switch attribute custom,
 *
 * @flags free
 */
typedef enum _sai_switch_attr_custom_t {
    /**
     * @brief SAI_SWITCH_ATTR_MAX_INGRESS_SAMPLED_MIRROR_SESSION
     *
     * @type sai_uint32_t
     * @flags READ_ONLY
     */
    SAI_SWITCH_ATTR_MAX_INGRESS_SAMPLED_MIRROR_SESSION = SAI_SWITCH_ATTR_CUSTOM_RANGE_START,

    /**
     * @brief SAI_SWITCH_ATTR_MAX_EGRESS_SAMPLED_MIRROR_SESSION
     *
     * @type sai_uint32_t
     * @flags READ_ONLY
     */
    SAI_SWITCH_ATTR_MAX_EGRESS_SAMPLED_MIRROR_SESSION,

    /**
     * @brief Disable SLL and HLL timeouts for the switch.
     *
     * @type bool
     * @flags CREATE_AND_SET
     * @default false
     */
    SAI_SWITCH_ATTR_DISABLE_SLL_AND_HLL_TIMEOUT,

    /**
     * @brief SAI_SWITCH_ATTR_WARM_BOOT_TARGET_VERSION
     *
     * @type sai_s8_list_t
     * @flags CREATE_AND_SET
     * @default empty
     */
    SAI_SWITCH_ATTR_WARM_BOOT_TARGET_VERSION,

    /**
     * @brief Trigger the generation of a simulated ECC correctable error
     *
     * @type bool
     * @flags CREATE_AND_SET
     * @default false
     */
    SAI_SWITCH_ATTR_TRIGGER_SIMULATED_ECC_CORRECTABLE_ERROR,

    /**
     * @brief Trigger the generation of a simulated ECC uncorrectable error
     *
     * @type bool
     * @flags CREATE_AND_SET
     * @default false
     */
    SAI_SWITCH_ATTR_TRIGGER_SIMULATED_ECC_UNCORRECTABLE_ERROR,
} sai_switch_attr_custom_t;

#endif /* __SAISWITCHCUSTOM_H_ */
