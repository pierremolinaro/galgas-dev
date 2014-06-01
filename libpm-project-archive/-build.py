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
#--- Remove build dir
buildDir = "build-dir"
runCommand ("rm -fr " + buildDir)
#--- Create build dir
runCommand ("mkdir -p " + buildDir + "/libpm-project")
#--- Copy libpm into build dir
runCommand ("cp -r ../libpm " + buildDir + "/libpm-project")
#--- Remove directories
runCommand ("rm -fr " + buildDir + "/libpm-project/libpm/galgas2")
runCommand ("rm -fr " + buildDir + "/libpm-project/libpm/cocoa_galgas")
runCommand ("rm -fr " + buildDir + "/libpm-project/libpm/cocoa_utilities")
#--- Copy additional files
runCommand ("cp -r files/ " + buildDir + "/libpm-project")
runCommand ("mv " + buildDir + "/libpm-project/libpm-file-list.mak " + buildDir + "/libpm-project/libpm")
#--- Compress archive
os.chdir (scriptDir + "/" + buildDir)
runCommand ("tar cf libpm-project.tar libpm-project")
runCommand ("bzip2 -9 libpm-project.tar")
#--- Move archive
os.chdir (scriptDir)
runCommand ("rm -f libpm-project.tar.bz2")
runCommand ("mv " + buildDir + "/libpm-project.tar.bz2 .")
#--- Remove build dir
runCommand ("rm -fr " + buildDir)

#------------------------------------------------------------------------------*
