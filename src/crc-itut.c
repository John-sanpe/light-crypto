/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <crc.h>
#include <crc-itut-table.h>

uint16_t crc_itut(const uint8_t *src, size_t len, uint16_t crc)
{
    return crc_itut_inline(src, len, crc);
}
