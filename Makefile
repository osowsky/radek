# THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
# ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
# THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
# PARTICULAR PURPOSE.
#
# Copyright (c) Microsoft Corporation.  All Rights Reserved.
#
#
# Processor independent makefile
MKFILES := $(wildcard ./q*/Makefile)
MKDIRS := $(dir $(MKFILES))

#Define functions.
clr = cd $1; make clean; cd ..;
mke = cd $1; make; cd ..;

all: build

#--------------------------------------------------------------------#
# Build rules to compile all applications.

build:
	@$(foreach dir, $(MKDIRS), $(call mke, $(dir)))

#--------------------------------------------------------------------#
# Build rules for cleaning all.
clean:
	@$(foreach dir, $(MKDIRS), $(call clr, $(dir)))
	