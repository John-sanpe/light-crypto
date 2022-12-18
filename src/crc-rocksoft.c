/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <crc.h>
#include <crc-rocksoft-table.h>

uint64_t crc_rocksoft(const uint8_t *src, size_t len, uint64_t crc)
{
    return crc_rocksoft_inline(src, len, crc);
}
