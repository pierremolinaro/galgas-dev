#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#MAKEFILE for building "LR1_grammar" command line tools for Win32, built with MSYS                                 *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                               Executables                                                                            *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

EXECUTABLE := LR1_grammar.exe
EXECUTABLE_DEBUG := LR1_grammar_debug.exe

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#              Install directory (for "install" goal)                                                                  *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

INSTALL_DIR := /C/WINDOWS/system32

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                         Object files directories                                                                     *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

OBJECTS_DIR       := ../build/cli-objects/makefile-mys32-objects
DEBUG_OBJECTS_DIR := ../build/cli-objects/makefile-msys32-debug-objects

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                         Linker Options for Win32                                                                     *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

PLATFORM_LINKER_OPTIONS := -lcomdlg32 -lwinsock32

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                        Include Common Definitions                                                                    *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

include ../galgas_sources/GALGAS_OUTPUT/file_list.mak

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                       Include MinGW tools for MSYS                                                                   *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

include $(LIBPM_DIRECTORY_PATH)/included_makefiles/msys_on_win32.mak

#----------------------------------------------------------------------------------------------------------------------*
#                                                                                                                      *
#                Include makefile that performs actual work                                                            *
#                                                                                                                      *
#----------------------------------------------------------------------------------------------------------------------*

include $(LIBPM_DIRECTORY_PATH)/included_makefiles/generic-makefile-wo-download.mak

#----------------------------------------------------------------------------------------------------------------------*
