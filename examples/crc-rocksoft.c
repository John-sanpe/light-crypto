/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#define CRYPTO_FUNC(block, size, crc) crc_rocksoft(block, size, crc)
#include "common.c"
