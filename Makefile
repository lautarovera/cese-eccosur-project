ifndef $(MSPGCCDIR)
	MSPGCCDIR = /root/ti/msp430-gcc
endif

# Paths
INCLUDES_DIRECTORY = $(MSPGCCDIR)/include
SRC_DIR = ./src
# Device
DEVICE = msp430fr5994

# Compiler options
CC = $(MSPGCCDIR)/bin/msp430-elf-gcc

CFLAGS = -I . -I $(INCLUDES_DIRECTORY) -mmcu=$(DEVICE) -g -mhwmult=f5series
LFLAGS = -L . -L $(INCLUDES_DIRECTORY)

# MSPDEBUG driver used for installation
DRIVER := tilib

# Compiling
all: blink.elf

%.elf: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(LFLAGS) $< -o $@

# Upload to board
install.%: %.elf
	mspdebug $(DRIVER) "prog $<" --allow-fw-update

clean:
	rm -f *.o *.elf
