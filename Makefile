# SPDX-License-Identifier: GPL-2.0-or-later
flags := -g -O2 -Wall -Werror -I include/
heads := $(shell find include/ -name "*.h") examples/common.c
srcs := $(patsubst ./%,%,$(shell find src/ -name "*.c"))
objs := $(addsuffix .o,$(basename $(srcs)))

demos := examples/crc-ccitt
demos += examples/crc-ccittf
demos += examples/crc-itut
demos += examples/crc-rocksoft
demos += examples/crc-t10dif
demos += examples/crc4
demos += examples/crc7
demos += examples/crc8
demos += examples/crc16
demos += examples/crc32
demos += examples/crc64

all: $(demos)

%.o:%.c $(heads)
	@ echo -e "\t\e[32mCC\e[0m\t" $@
	@ gcc -o $@ -c $< $(flags)

$(demos): $(objs) $(addsuffix .c,$(demos))
	@ echo -e "\t\e[34mMKELF\e[0m\t" $@
	@ gcc -o $@ $@.c $(objs)  $(flags)

clean: FORCE
	@ echo -e "\t\e[31mCLEAN\e[0m\t" $@
	@ rm -f $(demo) $(objs)

FORCE:
.PHONY: FORCE
