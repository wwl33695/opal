#
# Makefile for MPEG4 video plugin for Unix
#
# Copyright (C) 2007 Post Increment, All Rights Reserved
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
# $Revision: 32562 $
# $Author: rjongbloed $
# $Date: 2014-08-19 08:51:22 +0100 (Tue, 19 Aug 2014) $
#

BASENAME := mpeg4_ffmpeg

COMMONDIR := $(abspath ../common)
SRCDIR    := $(CURDIR)
SOURCES   := $(CURDIR)/mpeg4.cxx \
             $(COMMONDIR)/encframe.cxx \
             $(COMMONDIR)/ffmpeg.cxx

PLUGIN_CPPFLAGS = $(LIBAVCODEC_CFLAGS) -I$(COMMONDIR)
PLUGIN_LIBS     = $(LIBAVCODEC_LIBS) $(DLFCN_LIBS)

vpath   %.cxx $(COMMONDIR)

INSTALL_DIR = $(VID_PLUGIN_DIR)
include $(dir $(lastword $(MAKEFILE_LIST)))../../plugin_inc.mak


###########################################
