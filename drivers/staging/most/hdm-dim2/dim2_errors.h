/*
 * dim2_errors.h - Definitions of errors for DIM2 HAL API
 * (MediaLB, Device Interface Macro IP, OS62420)
 *
 * Copyright (C) 2015, Microchip Technology Germany II GmbH & Co. KG
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * This file is licensed under GPLv2.
 */

#ifndef _MOST_DIM_ERRORS_H
#define _MOST_DIM_ERRORS_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * MOST DIM errors.
 */
enum dim_errors_t {
	/** Not an error */
	DIM_NO_ERROR = 0,

	/** Bad base address for DIM2 IP */
	DIM_INIT_ERR_DIM_ADDR = 0x10,

	/**< Bad MediaLB clock */
	DIM_INIT_ERR_MLB_CLOCK,

	/** Bad channel address */
	DIM_INIT_ERR_CHANNEL_ADDRESS,

	/** Out of DBR memory */
	DIM_INIT_ERR_OUT_OF_MEMORY,

	/** DIM API is called while DIM is not initialized successfully */
	DIM_ERR_DRIVER_NOT_INITIALIZED = 0x20,

	/**
	 * Configuration does not respect hardware limitations
	 * for isochronous or synchronous channels
	 */
	DIM_ERR_BAD_CONFIG,

	/**
	 * Buffer size does not respect hardware limitations
	 * for isochronous or synchronous channels
	 */
	DIM_ERR_BAD_BUFFER_SIZE,

	DIM_ERR_UNDERFLOW,

	DIM_ERR_OVERFLOW,
};

#ifdef __cplusplus
}
#endif

#endif /* _MOST_DIM_ERRORS_H */
