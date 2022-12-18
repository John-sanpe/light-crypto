/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#define CRYPTO_FUNC(block, size, crc) crc4(block, size * __CHAR_BIT__, crc)
#include "common.c"
