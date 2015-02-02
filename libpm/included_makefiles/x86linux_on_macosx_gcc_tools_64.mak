#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
# 64-bit linux tools on MAC OS X                                                                                       *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

TOOL_CHAIN_VERSION := 4.9.2
TOOL_CHAIN_ARCHIVE := gcc-$(TOOL_CHAIN_VERSION)-for-linux64

#----------------------------------------------------------------------------------------------------------------------*

TOOL_CHAIN_INSTALL_PATH := $(HOME)/galgas-tools-for-cross-compilation/$(TOOL_CHAIN_ARCHIVE)

#----------------------------------------------------------------------------------------------------------------------*

UNIX_TOOL_PREFIX := $(TOOL_CHAIN_INSTALL_PATH)/bin/x86_64-pc-linux
COMPILER_PATH := $(UNIX_TOOL_PREFIX)-gcc
COMPILER_TOOL := $(COMPILER_PATH)
LINKER_TOOL   := $(UNIX_TOOL_PREFIX)-g++ -static-libgcc -Wl,--gc-sections
STRIP_TOOL    := $(UNIX_TOOL_PREFIX)-strip --strip-all
COMPILATION_MESSAGE := 64-Bit Compiling for Linux
LINKING_MESSAGE := 64-Bit Linking for Linux

#----------------------------------------------------------------------------------------------------------------------*

#LINKER_TOOL   += -Wl,-rpath-link=$(TOOL_CHAIN_INSTALL_PATH)/x86_64-pc-linux/lib64
#LINKER_TOOL   += --sysroot=$(TOOL_CHAIN_INSTALL_PATH)/x86_64-pc-linux

#----------------------------------------------------------------------------------------------------------------------*

#--- Options for all compilers
COMPILER_OPTIONS_FOR_THIS_CHAIN := -Wconversion

#--- Options for release mode
COMPILER_OPTIONS_RELEASE_FOR_THIS_CHAIN := -O2

#--- Options for debug mode 
COMPILER_OPTIONS_DEBUG_FOR_THIS_CHAIN :=

#--- Options for C compilation (.c extension)
C_COMPILER_OPTIONS_FOR_THIS_CHAIN :=

#--- Options for C++ compilation (.cpp extension)
CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN := -Weffc++
CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN += -Wsign-promo

#--- Options for Objective-C compilation (.m extension)
OC_COMPILER_OPTIONS_FOR_THIS_CHAIN := 

#--- Options for Objective-C++ compilation (.mm extension)
OCPP_COMPILER_OPTIONS_FOR_THIS_CHAIN := 

#----------------------------------------------------------------------------------------------------------------------*
