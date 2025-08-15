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
 * @file    saiaclcustom.h
 *
 * @brief   This module defines ACL custom of the Switch Abstraction Interface (SAI)
 */

#ifndef __SAIACLCUSTOM_H_
#define __SAIACLCUSTOM_H_

#include <saiacl.h>

/*
 * @brief Custom ACL Action Type
 *
 * @flags free
 */
typedef enum _sai_custom_acl_action_type_t {
    /** Start of custom action type. */
    SAI_CUSTOM_ACL_ACTION_TYPE_START,

    /** Enable ARS forwarding for a given match condition. */
    SAI_CUSTOM_ACL_ACTION_TYPE_ARS_ENABLE = SAI_CUSTOM_ACL_ACTION_TYPE_START,

    /** End of custom action type. */
    SAI_CUSTOM_ACL_ACTION_TYPE_END = SAI_CUSTOM_ACL_ACTION_TYPE_ARS_ENABLE,
} sai_custom_acl_action_type_t;

/**
 * @brief SAI ACL table attribute custom
 *
 * @flags free
 */
typedef enum _sai_acl_table_attr_custom_t {
    /**
     * @brief Start of ACL table custom field attributes
     */
    SAI_ACL_TABLE_ATTR_FIELD_CUSTOM_RANGE_START = SAI_ACL_TABLE_ATTR_CUSTOM_RANGE_START,

    /**
     * @brief table attribute field ecmp hash, 12 bits
     *
     * @type bool
     * @flags CREATE_ONLY
     * @default false
     */
    SAI_ACL_TABLE_ATTR_FIELD_ECMP_HASH = SAI_ACL_TABLE_ATTR_FIELD_CUSTOM_RANGE_START,

    /**
     * @brief table attribute field lag hash, 12 bits
     *
     * @type bool
     * @flags CREATE_ONLY
     * @default false
     */
    SAI_ACL_TABLE_ATTR_FIELD_LAG_HASH,

    /**
     * @brief Base Transport Header reserved field AckReq and Reserved7 bits.
     *
     * Byte 8 of BTH header, includes ack req flag (leading bit) and following 7 reserved bits.
     *
     * @type bool
     * @flags CREATE_ONLY
     * @default false
     */
    SAI_ACL_TABLE_ATTR_FIELD_BTH_ACKREQ_RESV7,

    /** @ignore - alias of SAI_ACL_TABLE_ATTR_FIELD_BTH_ACKREQ_RESV7*/
    SAI_ACL_TABLE_ATTR_FIELD_BTH_RESERVED = SAI_ACL_TABLE_ATTR_FIELD_BTH_ACKREQ_RESV7,

    /** End of custom range base */
    SAI_ACL_TABLE_ATTR_FIELD_CUSTOM_RANGE_END = SAI_ACL_TABLE_ATTR_FIELD_BTH_ACKREQ_RESV7
} sai_acl_table_attr_custom_t;

/**
 * @brief SAI ACL entry attribute custom,
 *
 * @flags free
 */
typedef enum _sai_acl_entry_attr_custom_t {
    /**
     * @brief Start of ACL entry custom field attributes
     */
    SAI_ACL_ENTRY_ATTR_FIELD_CUSTOM_RANGE_START = SAI_ACL_ENTRY_ATTR_CUSTOM_RANGE_START,

    /**
     * @brief ECMP hash
     *
     * @type sai_acl_field_data_t sai_uint16_t
     * @flags CREATE_AND_SET
     * @isvlan false
     * @default 0
     */
    SAI_ACL_ENTRY_ATTR_FIELD_ECMP_HASH = SAI_ACL_ENTRY_ATTR_FIELD_CUSTOM_RANGE_START,

    /**
     * @brief LAG hash
     *
     * @type sai_acl_field_data_t sai_uint16_t
     * @flags CREATE_AND_SET
     * @isvlan false
     * @default 0
     */
    SAI_ACL_ENTRY_ATTR_FIELD_LAG_HASH,

    /**
     * @brief Base Transport Header reserved field AckReq and Reserved7 bits.
     *
     * Byte 8 of BTH header, includes ack req flag (leading bit) and following 7 reserved bits.
     *
     * @type sai_acl_field_data_t sai_uint8_t
     * @flags CREATE_AND_SET
     * @isvlan false
     * @default disabled
     */
    SAI_ACL_ENTRY_ATTR_FIELD_BTH_ACKREQ_RESV7,

    /** @ignore - alias of SAI_ACL_ENTRY_ATTR_FIELD_BTH_ACKREQ_RESV7*/
    SAI_ACL_ENTRY_ATTR_FIELD_BTH_RESERVED = SAI_ACL_ENTRY_ATTR_FIELD_BTH_ACKREQ_RESV7,

    /** End of custom range base */
    SAI_ACL_ENTRY_ATTR_FIELD_CUSTOM_RANGE_END = SAI_ACL_ENTRY_ATTR_FIELD_BTH_ACKREQ_RESV7,

    /**
     * @brief Start of ACL entry custom action attributes
     */
    SAI_ACL_ENTRY_ATTR_ACTION_CUSTOM_RANGE_START,

    /**
     * @brief Enable ARS forwarding for a given match condition.
     * This rule takes effect only when global ARS profile object is created and has binding to the switch
     *
     * @type sai_acl_action_data_t bool
     * @flags CREATE_AND_SET
     * @default disabled
     */
    SAI_ACL_ENTRY_ATTR_ACTION_ARS_ENABLE = SAI_ACL_ENTRY_ATTR_ACTION_CUSTOM_RANGE_START,

    /** End of ACL entry custom action attributes */
    SAI_ACL_ENTRY_ATTR_ACTION_CUSTOM_RANGE_END = SAI_ACL_ENTRY_ATTR_ACTION_ARS_ENABLE,
} sai_acl_entry_attr_custom_t;

#endif /* __SAIACLCUSTOM_H_ */
