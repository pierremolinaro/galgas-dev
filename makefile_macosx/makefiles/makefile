#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building galgas LL1, SLR, LR1 command line tools *
#                                                               *
#---------------------------------------------------------------*

all:
	$(MAKE) -f makefiles/makefile_LL1 all
	$(MAKE) -f makefiles/makefile_SLR all
	$(MAKE) -f makefiles/ makefile_LR1 all

#---------------------------------------------------------------*

clean:
	$(MAKE) -f makefiles/makefile_LL1 clean
	$(MAKE) -f makefiles/makefile_SLR clean
	$(MAKE) -f makefiles/makefile_LR1 clean

#---------------------------------------------------------------*

install:
	$(MAKE) -f makefiles/makefile_LL1 install
	$(MAKE) -f makefiles/makefile_SLR install
	$(MAKE) -f makefiles/makefile_LR1 install

#---------------------------------------------------------------*

uninstall:
	$(MAKE) -f makefiles/makefile_LL1 uninstall
	$(MAKE) -f makefiles/makefile_SLR uninstall
	$(MAKE) -f makefile_LR1 uninstall

#---------------------------------------------------------------*

install_debug:
	$(MAKE) -f makefiles/makefile_LL1 install_debug
	$(MAKE) -f makefiles/makefile_SLR install_debug
	$(MAKE) -f makefiles/makefile_LR1 install_debug

#---------------------------------------------------------------*

uninstall_debug:
	$(MAKE) -f makefiles/makefile_LL1 uninstall_debug
	$(MAKE) -f makefiles/makefile_SLR uninstall_debug
	$(MAKE) -f makefiles/makefile_LR1 uninstall_debug

#---------------------------------------------------------------*

