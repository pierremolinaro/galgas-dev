#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, time, os, json
import makefile

#----------------------------------------------------------------------------------------------------------------------*
#   displayDurationFromStartTime                                                                                       *
#----------------------------------------------------------------------------------------------------------------------*

def displayDurationFromStartTime (startTime) :
  totalDurationInSeconds = int (time.time () - startTime)
  durationInSecondes = totalDurationInSeconds % 60
  durationInMinutes = (totalDurationInSeconds / 60) % 60
  durationInHours = totalDurationInSeconds / 3600
  s = ""
  if durationInHours > 0:
    s += str (durationInHours) + "h"
  if durationInMinutes > 0:
    s += str (durationInMinutes) + "min"
  s += str (durationInSecondes) + "s"
  print "Done at +" + s

#----------------------------------------------------------------------------------------------------------------------*

def buildForMacOSX (dictionary, EXECUTABLE, GOAL, maxParallelJobs, useTitles) :
  startTime = time.time ()
  COMPILER_TOOL = "gcc"
  LINKER_TOOL   = "g++"
  STRIP_TOOL    = ["strip", "-A", "-n", "-r", "-u"]
  SUDO_TOOL     = "sudo"
  COMPILATION_MESSAGE = "Native Compiling for Mac OS X"
  LINKING_MESSAGE = "Native Linking for Mac OS X"
#--- Options for all compilers
  COMPILER_OPTIONS_FOR_THIS_CHAIN = ["-Wconversion"]
#--- Options for release mode
  COMPILER_OPTIONS_RELEASE_FOR_THIS_CHAIN = ["-O2"]
#--- Options for debug mode 
  COMPILER_OPTIONS_DEBUG_FOR_THIS_CHAIN = []
#--- Options for C compiling (.c extension)
  C_COMPILER_OPTIONS_FOR_THIS_CHAIN = []
#--- Options for C++ compiling (.cpp extension)
  CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN = ["-Weffc++", "-Wsign-promo"]
#--- Options for Objective-C compiling (.m extension)
  OC_COMPILER_OPTIONS_FOR_THIS_CHAIN = []
#--- Options for Objective-C++ compiling (.mm extension)
  OCPP_COMPILER_OPTIONS_FOR_THIS_CHAIN = []
#--- Source file list
  SOURCES = dictionary ["SOURCES"]
#--- LIBPM
  LIBPM_DIRECTORY_PATH = dictionary ["LIBPM_DIRECTORY_PATH"]
#--- Source directory list
  SOURCES_DIR = dictionary ["SOURCES_DIR"]
#--------------------------------------------------------------------------- Include dirs
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/bdd")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/command_line_interface")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/files")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/galgas")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/galgas2")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/streams")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/time")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/strings")
  SOURCES_DIR.append (LIBPM_DIRECTORY_PATH + "/utilities")
  includeDirs = []
  for d in SOURCES_DIR:
    includeDirs.append ("-I" + d)
#--- Make object
  make = makefile.Make ()
#--------------------------------------------------------------------------- Add Compile rule for sources
#--- Object file directory
  objectDirectory = os.path.normpath (os.getcwd () + "/../build/cli-objects/makefile-macosx-objects")
#---
  objectFileList = []
  for source in SOURCES:
    objectFile = objectDirectory + "/" + source + ".o"
    objectFileList.append (objectFile)
    sourcePath = make.searchFileInDirectories (source, SOURCES_DIR)
    if sourcePath != "" :
      command = [COMPILER_TOOL]
      command += COMPILER_OPTIONS_FOR_THIS_CHAIN
      command += COMPILER_OPTIONS_RELEASE_FOR_THIS_CHAIN
      command += CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN
      command.append ("-DDO_NOT_GENERATE_CHECKINGS")     
      command += ["-c", sourcePath]
      command += ["-o", objectFile]
      command += includeDirs
      command += ["-MD", "-MP", "-MF", objectFile + ".dep"]
      make.addRule (objectFile, [sourcePath], command, COMPILATION_MESSAGE + ": " + source, objectFile + ".dep")
#--------------------------------------------------------------------------- Add Compile rule for sources debug
#--- Object file directory
  debugObjectDirectory = os.path.normpath (os.getcwd () + "/../build/cli-objects/makefile-macosx-debug-objects")
#---
  debugObjectFileList = []
  for source in SOURCES:
    objectFile = debugObjectDirectory + "/" + source + ".o"
    debugObjectFileList.append (objectFile)
    sourcePath = make.searchFileInDirectories (source, SOURCES_DIR)
    if sourcePath != "" :
      command = [COMPILER_TOOL]
      command += COMPILER_OPTIONS_FOR_THIS_CHAIN
      command += CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN
      command += ["-c", sourcePath]
      command += ["-o", objectFile]
      command += includeDirs
      command += ["-MD", "-MP", "-MF", objectFile + ".dep"]
      make.addRule (objectFile, [sourcePath], command, COMPILATION_MESSAGE + " - debug: " + source, objectFile + ".dep")
#--------------------------------------------------------------------------- Add EXECUTABLE file rule
  linkCommand = [LINKER_TOOL]
  linkCommand += objectFileList
  linkCommand += ["-o", EXECUTABLE]
  make.addRule (EXECUTABLE, objectFileList, linkCommand, LINKING_MESSAGE + ": " + EXECUTABLE)
#--------------------------------------------------------------------------- Add EXECUTABLE_DEBUG file rule
  EXECUTABLE_DEBUG = EXECUTABLE + "-debug"
  linkCommand = [LINKER_TOOL]
  linkCommand += debugObjectFileList
  linkCommand += ["-o", EXECUTABLE_DEBUG]
  make.addRule (EXECUTABLE_DEBUG, debugObjectFileList, linkCommand, LINKING_MESSAGE + " - debug: " + EXECUTABLE_DEBUG)
#--------------------------------------------------------------------------- Add install EXECUTABLE file rule
  INSTALL_EXECUTABLE = "/usr/local/bin/" + EXECUTABLE
  command = [SUDO_TOOL, "cp", EXECUTABLE, INSTALL_EXECUTABLE]
  make.addRule (INSTALL_EXECUTABLE, [EXECUTABLE], command, "Installing " + EXECUTABLE)
#--------------------------------------------------------------------------- Add install EXECUTABLE-debug file rule
  INSTALL_EXECUTABLE_DEBUG = "/usr/local/bin/" + EXECUTABLE_DEBUG
  command = [SUDO_TOOL, "cp", EXECUTABLE_DEBUG, INSTALL_EXECUTABLE_DEBUG]
  make.addRule (INSTALL_EXECUTABLE_DEBUG, [EXECUTABLE_DEBUG], command, "Installing " + EXECUTABLE_DEBUG)
#--------------------------------------------------------------------------- Compute jobs
  if (GOAL == "") or (GOAL == "all"):
    make.makeJobs (EXECUTABLE)
    make.makeJobs (EXECUTABLE_DEBUG)
  elif GOAL == "release":
    make.makeJobs (EXECUTABLE)
  elif GOAL == "debug":
    make.makeJobs (EXECUTABLE_DEBUG)
  elif GOAL == "install-release":
    make.makeJobs (INSTALL_EXECUTABLE)
  elif GOAL == "install-debug":
    make.makeJobs (INSTALL_EXECUTABLE_DEBUG)
  else:
    make.enterError ("Unknown '" + GOAL + "' goal; accepted: '', 'all', 'release', 'debug', 'install-release', 'install-debug'")
#--------------------------------------------------------------------------- Run jobs
  make.runJobs (maxParallelJobs, useTitles)
#--------------------------------------------------------------------------- Ok ?
  make.printErrorCountAndExitOnError ()
  displayDurationFromStartTime (startTime)
#----------------------------------------------------------------------------------------------------------------------*

#----------------------------------------------------------------------------------------------------------------------*
