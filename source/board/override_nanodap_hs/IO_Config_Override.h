/**
 * @file    IO_Config_Override.c
 * @brief   Alternative IO for LPC11U35 based Hardware Interface Circuit
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __IO_CONFIG_OVERRIDE_H__
#define __IO_CONFIG_OVERRIDE_H__

// This GPIO configuration is only valid for the SAM3U2C HIC
COMPILER_ASSERT(DAPLINK_HIC_ID == DAPLINK_HIC_ID_SAM3U2C);

// DAP LED
#define PIN_DAP_LED_PORT        PIOA
#define PIN_DAP_LED_BIT         29
#define PIN_DAP_LED             (1UL << PIN_DAP_LED_BIT)

// MSD LED
#define PIN_MSD_LED_PORT        PIOA
#define PIN_MSD_LED_BIT         29
#define PIN_MSD_LED             (1UL << PIN_MSD_LED_BIT)

// CDC LED
#define PIN_CDC_LED_PORT        PIOA
#define PIN_CDC_LED_BIT         29
#define PIN_CDC_LED             (1UL << PIN_CDC_LED_BIT)

// nRESET OUT Pin
#define PIN_nRESET_PORT         PIOA
#define PIN_nRESET_BIT          25
#define PIN_nRESET              (1UL << PIN_nRESET_BIT)

// JTAG-TDI
#define PIN_TDI_PORT          PIOB
#define PIN_TDI_BIT           16
#define PIN_TDI               (1UL << PIN_TDI_BIT)

// JTAG-TDO
#define PIN_TDO_PORT          PIOB
#define PIN_TDO_BIT           15
#define PIN_TDO               (1UL << PIN_TDO_BIT)

#endif
