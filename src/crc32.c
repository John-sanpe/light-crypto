/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <crc.h>
#include <crc32-table.h>

uint32_t crc32(const uint8_t *src, size_t len, uint32_t crc)
{
    return crc32_inline(src, len, crc);
}
