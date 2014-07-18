#---------------------------------------------------------------*
#                                                               *
# 64-bit linux tools on MAC OS X                                *
#                                                               *
#---------------------------------------------------------------*

TOOL_CHAIN_VERSION := 4.9.1
TOOL_CHAIN_ARCHIVE := gcc-$(TOOL_CHAIN_VERSION)-for-linux64
TOOL_CHAIN_INSTALL_PATH := /usr/local/$(TOOL_CHAIN_ARCHIVE)

TOOL_CHAIN_URL := http://crossgcc.rts-software.org/download/gcc-$(TOOL_CHAIN_VERSION)-for-linux32-linux64/$(TOOL_CHAIN_ARCHIVE).tar.bz2

#---------------------------------------------------------------*

UNIX_TOOL_PREFIX := $(TOOL_CHAIN_INSTALL_PATH)/bin/x86_64-pc-linux
COMPILER_PATH := $(UNIX_TOOL_PREFIX)-gcc
COMPILER_TOOL := $(COMPILER_PATH)
LINKER_TOOL   := $(UNIX_TOOL_PREFIX)-g++ -static-libgcc -Wl,--gc-sections
STRIP_TOOL    := $(UNIX_TOOL_PREFIX)-strip --strip-all
SUDO_TOOL     := sudo
COMPILATION_MESSAGE := 64-Bit Compiling for Linux
LINKING_MESSAGE := 64-Bit Linking for Linux

#---------------------------------------------------------------*

#--- Options for all compilers
COMPILER_OPTIONS_FOR_THIS_CHAIN := -Wconversion

#--- Options for release mode
COMPILER_OPTIONS_RELEASE_FOR_THIS_CHAIN := -O2

#--- Options for debug mode 
COMPILER_OPTIONS_DEBUG_FOR_THIS_CHAIN :=

#--- Options for C compiling (.c extension)
C_COMPILER_OPTIONS_FOR_THIS_CHAIN :=

#--- Options for C++ compiling (.cpp extension)
CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN := -Weffc++
CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN += -Wsign-promo

#--- Options for Objective-C compiling (.m extension)
OC_COMPILER_OPTIONS_FOR_THIS_CHAIN := 

#--- Options for Objective-C++ compiling (.mm extension)
OCPP_COMPILER_OPTIONS_FOR_THIS_CHAIN := 

#---------------------------------------------------------------*
