#! /usr/bin/python3
# -*- coding: UTF-8 -*-
#-------------------------------------------------------------------------------

import sys, os, subprocess, shutil

#-------------------------------------------------------------------------------
#   FOR PRINTING IN COLOR
#-------------------------------------------------------------------------------

class bcolors:
    HEADER = '\033[35m'
    BLUE = '\033[34m'
    GREEN = '\033[32m'
    WARNING = '\033[33m'
    FAIL = '\033[31m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
    BOLD_BLUE = '\033[1m' + '\033[34m'
    BOLD_GREEN = '\033[1m' + '\033[32m'
    BOLD_RED = '\033[1m' + '\033[31m'

#-------------------------------------------------------------------------------
#   myChDir
#-------------------------------------------------------------------------------

def myChDir (directory):
  print (bcolors.BOLD_BLUE + "+++ cd " + directory + bcolors.ENDC)
  os.chdir (directory)

#-------------------------------------------------------------------------------
#   runCommand
#-------------------------------------------------------------------------------

def runCommand (cmd, environnement=None) :
  str = "+++"
  for s in cmd:
    if " " in s :
      str += " '" + s + "'"
    else:
      str += " " + s
  print (bcolors.BOLD_BLUE + str + bcolors.ENDC)
  childProcess = subprocess.Popen (cmd, env=environnement)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#-------------------------------------------------------------------------------
#   myDeleteDir
#-------------------------------------------------------------------------------
# http://unix.stackexchange.com/questions/77127/rm-rf-all-files-and-all-hidden-files-without-error
# http://unix.stackexchange.com/questions/233576/recursively-delete-subdirectories-not-containing-pattern-on-osx

def myDeleteDir (directory):
  while os.path.exists (directory):
    print (bcolors.BOLD_BLUE + "Remove '" + directory + "' directory" + bcolors.ENDC)
    shutil.rmtree (directory, True) # Ignore errors

#-------------------------------------------------------------------------------

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#--- Test directory
TEST_DIR_NAME = "Z_TEST_CREATE_GALGAS_PROJECT"
TEST_DIR_PATH = scriptDir + "/" + TEST_DIR_NAME
myDeleteDir (TEST_DIR_PATH)
#--- Build galgas
runCommand (["/usr/bin/python3", scriptDir + "/makefile-unix/build.py"])
GALGAS = scriptDir + "/makefile-unix/galgas"
#--- Create project
runCommand ([GALGAS, "--create-project=" + TEST_DIR_PATH])
#--- galgas compile
runCommand ([GALGAS, "--output-html-grammar-file", "--Werror", TEST_DIR_PATH + "/+" + TEST_DIR_NAME + ".galgasProject"])
#--- XCODE BUILD
os.chdir (TEST_DIR_PATH + "/xcode-project")
runCommand (["/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild", "-alltargets"])
os.chdir (scriptDir)
#--- MAKE arm64 Linux
runCommand (["/usr/bin/python3", TEST_DIR_PATH + "/makefile-arm64-linux-on-macosx/build.py"])
#--- MAKE i386 Linux
runCommand (["/usr/bin/python3", TEST_DIR_PATH + "/makefile-x86linux32-on-macosx/build.py"])
#--- MAKE x86_64 Linux
runCommand (["/usr/bin/python3", TEST_DIR_PATH + "/makefile-x86linux64-on-macosx/build.py"])
#--- MAKE win32
runCommand (["/usr/bin/python3", TEST_DIR_PATH + "/makefile-win32-on-macosx/build.py"])
#--- MAKE Unix
runCommand (["/usr/bin/python3", TEST_DIR_PATH + "/makefile-unix/build.py"])
#--- EXECUTE NORMAL
runCommand ([TEST_DIR_PATH + "/makefile-unix/" + TEST_DIR_NAME, "--help"])
#--- EXECUTE DEBUG
runCommand ([TEST_DIR_PATH + "/makefile-unix/" + TEST_DIR_NAME + "-debug", "--help"])
#--- REMOVE PROJECT
myDeleteDir (TEST_DIR_PATH)
#---
