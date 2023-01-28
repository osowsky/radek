# THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
# ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
# THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
# PARTICULAR PURPOSE.
#
# Copyright (c) Microsoft Corporation.  All Rights Reserved.
#
#
# Processor independent makefile

APPNAME=q10

all: clean $(APPNAME)

#--------------------------------------------------------------------#
# Build rules for the application.

$(APPNAME):
	@echo Building console application $(APPNAME)...
	@gcc main.c -o $(APPNAME)
	@echo ...done.

#--------------------------------------------------------------------#
# Build rules for cleaning all.
clean:
	@echo Cleaning aux and exe files in $(APPNAME)...
	@rm -f $(APPNAME)*
