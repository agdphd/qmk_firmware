#----------------------------------------------------------------------------
# make gergo:argd:dfu
# Make sure you have dfu-programmer installed!
#----------------------------------------------------------------------------
# Firmware options
COMPOSE_ENABLE = yes
UNICODE_ENABLE = yes
EXTRAKEY_ENABLE = yes
OLED_DRIVER_ENABLE = yes

# Minify the firmware, but break macros and functions
EXTRAFLAGS += -flto

# Debug options
CONSOLE_ENABLE = no
VERBOSE = no
DEBUG_MATRIX_SCAN_RATE = no
DEBUG_BALLER = no
DEBUG_MATRIX = no

# A bunch of stuff that you shouldn't touch unless you
# know what you're doing.
#
# No touchy, capiche?
SRC += matrix.c i2c_master.c
ifneq ($(strip $(BALLSTEP)),)
OPT_DEFS += -DTRKSTEP=$(strip $(BALLSTEP))
endif
ifneq ($(strip $(SCROLLSTEP)),)
OPT_DEFS += -DSCROLLSTEP=$(strip $(SCROLLSTEP))
endif
ifeq ($(strip $(BALLER)), yes)
POINTING_DEVICE_ENABLE	= yes
OPT_DEFS += -DBALLER
endif
ifeq ($(strip $(DEBUG_BALLER)), yes)
OPT_DEFS += -DDEBUG_BALLER
endif
ifeq ($(strip $(DEBUG_MATRIX)), yes)
OPT_DEFS += -DDEBUG_MATRIX
endif
