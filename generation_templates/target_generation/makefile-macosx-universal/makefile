#---------------------------------------------------------------------------*
#                                                                           *
# MAKEFILE for building "%!PROJECT_NAME%" 32-bits command line tools for Mac OS X   *
#                                                                           *
#---------------------------------------------------------------------------*

#---------------------------------------------------------------------------*
#                                                                           *
#                               Executables                                 *
#                                                                           *
#---------------------------------------------------------------------------*

EXECUTABLE := %!PROJECT_NAME%
EXECUTABLE_DEBUG := %!PROJECT_NAME%_debug

#---------------------------------------------------------------------------*
#                                                                           *
#                  Install directory (for "install" goal)                   *
#                                                                           *
#---------------------------------------------------------------------------*

INSTALL_DIR := /usr/local/bin

#---------------------------------------------------------------------------*
#                                                                           *
#                        'all' goal                                         *
#                                                                           *
#---------------------------------------------------------------------------*

all:
	$(MAKE) -C ../makefile-macosx-ppc $(EXECUTABLE)
	$(MAKE) -C ../makefile-macosx-intel $(EXECUTABLE)
	lipo -create ../makefile-macosx-ppc/$(EXECUTABLE) ../makefile-macosx-intel/$(EXECUTABLE) -output $(EXECUTABLE)
	lipo -info $(EXECUTABLE)
	$(MAKE) -C ../makefile-macosx-ppc $(EXECUTABLE_DEBUG)
	$(MAKE) -C ../makefile-macosx-intel $(EXECUTABLE_DEBUG)
	lipo -create ../makefile-macosx-ppc/$(EXECUTABLE_DEBUG) ../makefile-macosx-intel/$(EXECUTABLE_DEBUG) -output $(EXECUTABLE_DEBUG)
	lipo -info $(EXECUTABLE_DEBUG)

#---------------------------------------------------------------------------*
#                                                                           *
#                        'clean' goal                                       *
#                                                                           *
#---------------------------------------------------------------------------*

clean:
	rm -f $(EXECUTABLE) $(EXECUTABLE_DEBUG)

#---------------------------------------------------------------------------*
