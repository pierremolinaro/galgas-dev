#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building galgas command line tools               *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of galgas
EXECUTABLE := galgas.exe
EXECUTABLE_DEBUG := galgas_debug.exe

#--- Install directory (for "install" goal)
INSTALL_DIR := /C/WINDOWS/system32

#---------------------------------------------------------------*
#                                                               *
#     Object files directory                                    *
#                                                               *
#---------------------------------------------------------------*

OBJECTS_DIR := objects
DEBUG_OBJECTS_DIR := debug_objects

#--- Linker Options for this platform
PLATFORM_LINKER_OPTIONS := -lcomdlg32

#---------------------------------------------------------------*

include ../galgas_sources/GALGAS_OUTPUT/file_list.mke

#---------------------------------------------------------------*
#                                                               *
#     Include MinGW gcc tools definitions for Win32             *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/msys_on_win32.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*
