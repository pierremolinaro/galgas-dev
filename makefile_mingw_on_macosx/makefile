#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building galgas_LL1 command line tools           *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of galgas
EXECUTABLE := galgas.exe
EXECUTABLE_DEBUG := galgas_debug.exe

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

include ../common_files_for_make/makefile.mke

#---------------------------------------------------------------*
#                                                               *
#     Include MinGW gcc tools definitions for MAC OS X          *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/mingw_on_macosx_gcc_tools_32.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*
