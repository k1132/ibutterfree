/****************************************************************************
 * Copyright (C) 2017 by Renan Prata                                        *
 *                                                                          *
 * This file is part of IButterFree.                                        *
 *                                                                          *
 * This software may be modified and distributed under the terms			*
 * of the MIT license. See the LICENSE file for details.					*
 ****************************************************************************/

/**
 * @file ibutterfree_config.h
 * @author Renan Prata
 * @date 1 April 2017
 * @brief File containing functions for configure software in runtime.
 *
 * File File containing functions for configure software in 
 * runtime. You can specify outputs framebuffer file descriptor,
 * touchscreen filedescriptor, screen resolution and others. 
 * For more informations, see . file
 */

#ifndef __IBUTTERFREE_CONFIG_H__
#define __IBUTTERFREE_CONFIG_H__

#include "ibutterfree_log.h"

#define CONFIG 	".ibutterfreeconfig"
#define FB 	  	"/dev/fb0"
#define INPUT 	"/dev/input/event3"

/**
 * @brief Structure relative of configure.
 */
typedef struct {
	char fdfb[50];	/**< String related to framebuffer filedescriptor. */
	char fdev[50]; 	/**< String related to touchscreen filedescriptor */
} IButterFreeConfigStruct;

IButterFreeConfigStruct * m_bfcs;

/**
 * @brief Reads IButterFree configuration file.
 *
 * It's necessary if you want to setup graphic configuration in runtime.
 */
void ibutterfree_config_read(void);

/**
 * @brief get fdfb information (default is /dev/fb0).
 *
 * @return returns a const char * with fdfb information
 */
const char * ibutterfree_get_fdfb(void);

/**
 * @brief get fdev information (default is /dev/input/event3).
 *
 * @return returns a const char * with fdev information 
 */
const char * ibutterfree_get_fdev(void);

#endif
