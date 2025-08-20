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

#ifndef __SAIQUEUECUSTOM_H_
#define __SAIQUEUECUSTOM_H_

#include <saiqueue.h>

/**
 * @brief SAI queue statistic custom,
 *
 * @flags free
 */
typedef enum _sai_queue_stat_custom_t {
    /** The amount of all dropped packets of a queue */
    SAI_QUEUE_STAT_MMU_DROPPED_PACKETS = SAI_QUEUE_STAT_CUSTOM_RANGE_BASE,
} sai_queue_stat_custom_t;

#endif /* __SAIQUEUECUSTOM_H_ */
