#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import subprocess
import sys
import os

#------------------------------------------------------------------------------*

def runCommand (cmd) :
  print "+ " + cmd
  childProcess = subprocess.Popen (cmd.split ())
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#------------------------------------------------------------------------------*

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#--- Build
runCommand ("./-build.py")
#--- Remove libpm-project
runCommand ("rm -fr libpm-project")
runCommand ("rm -f libpm-project.tar")
#--- Uncompress
runCommand ("bunzip2 -k libpm-project.tar.bz2")
runCommand ("tar xf libpm-project.tar")
runCommand ("rm libpm-project.tar")
#--- Build for Linux32
runCommand ("libpm-project/makefile-linux32-on-macosx/build.command")
#--- Build for Linux64
runCommand ("libpm-project/makefile-linux64-on-macosx/build.command")
#--- Build for Win32
runCommand ("libpm-project/makefile-win32-on-macosx/build.command")
#--- Build for Mac OS
runCommand ("libpm-project/makefile-macosx/build.command")
#--- Build for Unix
runCommand ("libpm-project/makefile-unix/build.command")
print "****************************************** TEST 1 ****\n"
runCommand ("cp test/test1.cpp libpm-project/sources/main-for-libpm.cpp")
runCommand ("libpm-project/makefile-linux32-on-macosx/build.command")
runCommand ("libpm-project/makefile-linux64-on-macosx/build.command")
runCommand ("libpm-project/makefile-win32-on-macosx/build.command")
runCommand ("libpm-project/makefile-macosx/build.command")
runCommand ("libpm-project/makefile-unix/build.command")
runCommand ("libpm-project/makefile-macosx/product")
runCommand ("libpm-project/makefile-macosx/product_debug")
runCommand ("rm -fr libpm-project")

#------------------------------------------------------------------------------*
