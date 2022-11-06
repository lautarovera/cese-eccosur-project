ifndef $(MSPGCCDIR)
	MSPGCCDIR = /opt/msp430-gcc-9.3.1.11_linux64
endif

# Paths
INCLUDES_DIRECTORY = /opt/msp430-gcc-support-files-1.212/msp430-gcc-support-files/include
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