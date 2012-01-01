#---------------------------------------------------------------*
#                                                               *
# 64-bit linux tools on MAC OS X                                *
#                                                               *
#---------------------------------------------------------------*

UNIX_COMPILER_PREFIX := /usr/local/gcc-4.5.2-for-linux64/bin/x86_64-pc-linux
COMPILER_TOOL := $(UNIX_COMPILER_PREFIX)-gcc
LINKER_TOOL   := $(UNIX_COMPILER_PREFIX)-g++
STRIP_TOOL    := $(UNIX_COMPILER_PREFIX)-strip --strip-all
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
