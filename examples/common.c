/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <err.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <crc.h>

int main(int argc, char *argv[])
{
    struct stat stat;
    uint64_t value;
    void *block;
    int fd;

    if (argc != 3) {
        errno = EINVAL;
        err(errno, "usage: crc file");
    }

    if ((fd = open(argv[2], O_RDWR)) < 0)
        err(errno, "can not open file");

    if (fstat(fd, &stat) < 0)
        err(errno, "fstat error");

    block = mmap(NULL, stat.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (block == MAP_FAILED)
        err(errno, "mmap error");

    value = strtoull(argv[1], NULL, 0);
    value = CRYPTO_FUNC(block, stat.st_size, value);
    printf("%llu %lu %s\n", (unsigned long long)value, stat.st_size, argv[2]);

    close(fd);
    return 0;
}
