#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building galgas command line tools               *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of common_sources_makefile.mke
EXECUTABLE := galgas
EXECUTABLE_DEBUG := galgas_debug

#---------------------------------------------------------------*
#                                                               *
#     Object files directory                                    *
#                                                               *
#---------------------------------------------------------------*

OBJECTS_DIR := objects
DEBUG_OBJECTS_DIR := debug_objects

#--- Install directory (for "install" goal)
INSTALL_DIR := /usr/local/bin

#---------------------------------------------------------------*

#--- Linker Options for this platform
PLATFORM_LINKER_OPTIONS :=

#---------------------------------------------------------------*

include ../galgas_sources/GALGAS_OUTPUT/file_list.mke

#---------------------------------------------------------------*
#                                                               *
#     Include gcc tools for Unix                                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/unix_gcc_tools_32.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*
