/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <fsl_clock.h>
#include <soc.h>
#include <errno.h>
#include <zephyr/irq.h>
#include <zephyr/dt-bindings/clock/imx_ccm_rev2.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(imx95_common_clock_set, CONFIG_SOC_LOG_LEVEL);

uint32_t common_clock_set_freq(uint32_t clock_name, uint32_t rate)
{
	return 0;
}
