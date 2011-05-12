#---------------------------------------------------------------*
#                                                               *
# MINGW32 tools on MAC OS X DEFINITION                          *
#                                                               *
#---------------------------------------------------------------*

ifeq ($(shell uname -p), powerpc)
  COMPILER_TOOL := /usr/local/ppc-mingw32-4.3.0/bin/i386-mingw32-gcc -m32 -D_WIN32_WINDOWS=0x410
  LINKER_TOOL   := /usr/local/ppc-mingw32-4.3.0/bin/i386-mingw32-g++ -m32 --enable-auto-import
  STRIP_TOOL    := /usr/local/ppc-mingw32-4.3.0/bin/i386-mingw32-strip --strip-all
else
  ifeq ($(shell uname -p), i386)
	  MINGW_TOOL_PATH := /Volumes/dev-svn/autres-developpements/cross-gcc-win32-qt/gcc-4.5.2-qt-4.7.2/PRODUCTS_i386-gcc-4.5.2-qt-4.7.2-for-win32/win32-gcc-4.5.2/bin
	  #MINGW_TOOL_PATH := /usr/local/i386-mingw32-4.5.2/bin
    COMPILER_TOOL := $(MINGW_TOOL_PATH)/i586-mingw32-gcc -m32 -D_WIN32_WINDOWS=0x410
    LINKER_TOOL   := $(MINGW_TOOL_PATH)/i586-mingw32-g++ -m32 --enable-auto-import
    #STRIP_TOOL    := $(MINGW_TOOL_PATH)/i586-mingw32msvc-strip --strip-all
    STRIP_TOOL    := $(MINGW_TOOL_PATH)/i586-mingw32-strip --strip-all
  else
    $(error Error: unknown Mac OS X platform, neither ppc, neither i386)
  endif
endif

SUDO_TOOL     := sudo
COMPILATION_MESSAGE := 32-Bit Compiling for Win32
LINKING_MESSAGE := 32-Bit Linking for Win32

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
