#
# Makefile for LPC-10
#
# Copyright (C) 2004 Post Increment, All Rights Reserved
#
# The contents of this file are subject to the Mozilla Public License
# Version 1.0 (the "License"); you may not use this file except in
# compliance with the License. You may obtain a copy of the License at
# http://www.mozilla.org/MPL/
#
# Software distributed under the License is distributed on an "AS IS"
# basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
# the License for the specific language governing rights and limitations
# under the License.
#
# The Original Code is Open H323 library.
#
# The Initial Developer of the Original Code is Post Increment
#
# Contributor(s): ______________________________________.
#
# $Revision: 30547 $
# $Author: rjongbloed $
# $Date: 2013-09-21 11:58:13 +0100 (Sat, 21 Sep 2013) $
#

BASENAME := lpc10

SRCDIR   := $(CURDIR)/src
SOURCES  := $(CURDIR)/lpc_10_codec.c \
            $(SRCDIR)/f2clib.c \
            $(SRCDIR)/analys.c \
            $(SRCDIR)/bsynz.c \
            $(SRCDIR)/chanwr.c \
            $(SRCDIR)/dcbias.c \
            $(SRCDIR)/decode_.c \
            $(SRCDIR)/deemp.c \
            $(SRCDIR)/difmag.c \
            $(SRCDIR)/dyptrk.c \
            $(SRCDIR)/encode_.c \
            $(SRCDIR)/energy.c \
            $(SRCDIR)/ham84.c \
            $(SRCDIR)/hp100.c \
            $(SRCDIR)/invert.c \
            $(SRCDIR)/irc2pc.c \
            $(SRCDIR)/ivfilt.c \
            $(SRCDIR)/lpcdec.c \
            $(SRCDIR)/lpcenc.c \
            $(SRCDIR)/lpcini.c \
            $(SRCDIR)/lpfilt.c \
            $(SRCDIR)/median.c \
            $(SRCDIR)/mload.c \
            $(SRCDIR)/onset.c \
            $(SRCDIR)/pitsyn.c \
            $(SRCDIR)/placea.c \
            $(SRCDIR)/placev.c \
            $(SRCDIR)/preemp.c \
            $(SRCDIR)/prepro.c \
            $(SRCDIR)/random.c \
            $(SRCDIR)/rcchk.c \
            $(SRCDIR)/synths.c \
            $(SRCDIR)/tbdm.c \
            $(SRCDIR)/voicin.c \
            $(SRCDIR)/vparms.c \

CPPFLAGS += -I$(CURDIR) -Wno-comment

INSTALL_DIR = $(AUD_PLUGIN_DIR)
include $(dir $(lastword $(MAKEFILE_LIST)))../../plugin_inc.mak


###########################################
