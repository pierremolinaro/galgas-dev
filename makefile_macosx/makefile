#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building galgas command line tools               *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of common_sources_makefile.mke
EXECUTABLE := galgas
EXECUTABLE_DEBUG := galgas_debug

#--- Install directory (for "install" goal)
INSTALL_DIR := /usr/local/bin

#---------------------------------------------------------------*
#                                                               *
#     Object files directory                                    *
#                                                               *
#---------------------------------------------------------------*

OBJECTS_DIR := allObjects/objects
DEBUG_OBJECTS_DIR := allObjects/debug_objects

#---------------------------------------------------------------*

#--- Linker Options for this platform
PLATFORM_LINKER_OPTIONS :=

#---------------------------------------------------------------*

include ../common_files_for_make/makefile.mke

#---------------------------------------------------------------*
#                                                               *
#     Include gcc tools for MAC OS X                            *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/macosx_gcc_tools_32.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*
