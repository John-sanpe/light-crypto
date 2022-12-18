/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <crc.h>
#include <crc-t10dif-table.h>

uint16_t crc_t10dif(const uint8_t *src, size_t len, uint16_t crc)
{
    return crc_t10dif_inline(src, len, crc);
}
