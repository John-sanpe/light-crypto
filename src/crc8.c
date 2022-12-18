/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <crc.h>
#include <crc8-table.h>

uint8_t crc8(const uint8_t *src, size_t len, uint8_t crc)
{
    return crc8_inline(src, len, crc);
}
