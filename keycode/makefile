# @file makefile
# @brief build Makefile

OUTFILE	= bin/keycode

INCLUDE ?=
SFILES	?=

CFLAGS ?= 

INCLUDE	+= 
SFILES	+= keycode.c
SFILES	+= kb.c

#------------------------------------------------------------
# Default
all: build

# Build
build:
	gcc $(CFLAGS) $(SFILES) $(INCLUDE) -o $(OUTFILE)

# Clean up
clean:
	rm -f $(OUTFILE)
#
