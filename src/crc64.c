/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <crc.h>
#include <crc64-table.h>

uint64_t crc64(const uint8_t *src, size_t len, uint64_t crc)
{
    return crc64_inline(src, len, crc);
}
