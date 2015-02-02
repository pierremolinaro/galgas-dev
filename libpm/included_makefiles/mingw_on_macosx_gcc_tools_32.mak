#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
# MINGW32 tools on MAC OS X DEFINITION                                                                                 *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

GCC_VERSION := 4.9.2
TOOL_CHAIN_ARCHIVE := gcc-$(GCC_VERSION)-for-mingw32

#----------------------------------------------------------------------------------------------------------------------*

TOOL_CHAIN_INSTALL_PATH := $(HOME)/galgas-tools-for-cross-compilation/$(TOOL_CHAIN_ARCHIVE)

#----------------------------------------------------------------------------------------------------------------------*

MINGW_TOOL_PATH := $(TOOL_CHAIN_INSTALL_PATH)/bin
COMPILER_PATH := $(MINGW_TOOL_PATH)/i586-mingw32-gcc
COMPILER_TOOL := $(COMPILER_PATH) -m32 -D_WIN32_WINNT=0x501
LINKER_TOOL   := $(MINGW_TOOL_PATH)/i586-mingw32-g++ -m32 --enable-auto-import -Wl,--gc-sections
STRIP_TOOL    := $(MINGW_TOOL_PATH)/i586-mingw32-strip --strip-all

COMPILATION_MESSAGE := 32-Bit Compiling for Win32
LINKING_MESSAGE := 32-Bit Linking for Win32

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
