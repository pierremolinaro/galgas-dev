#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, time, os, json
import makefile, default_build_options

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

class GenericGalgasMakefile :
  mDictionary = {}
  mExecutable = ""
  mGoal = ""
  mMaxParallelJobs = 0
  mUseTitles = True
  mCompilerTool = []
  mLinkerTool = []
  mStripTool = []
  mSudoTool = ""
  mCompilationMessage = ""
  mLinkingMessage = ""
  mInstallationgMessage = ""
  mStripMessage = ""
  mAllCompilerOptions = []
  mCompilerReleaseOptions = []
  mCompilerDebugOptions = []
  m_C_CompilerOptions = []
  m_Cpp_CompilerOptions = []
  m_ObjectiveC_CompilerOptions = []
  m_ObjectiveCpp_CompilerOptions = []
  mTargetName = ""

  def run (self) :
    startTime = time.time ()
  #--- Source file list
    SOURCES = self.mDictionary ["SOURCES"]
  #--- LIBPM
    LIBPM_DIRECTORY_PATH = self.mDictionary ["LIBPM_DIRECTORY_PATH"]
  #--- Source directory list
    SOURCES_DIR = self.mDictionary ["SOURCES_DIR"]
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
    objectDirectory = os.path.normpath (os.getcwd () + "/../build/cli-objects/makefile-" + self.mTargetName + "-objects")
  #---
    objectFileList = []
    for source in SOURCES:
      objectFile = objectDirectory + "/" + source + ".o"
      objectFileList.append (objectFile)
      sourcePath = make.searchFileInDirectories (source, SOURCES_DIR)
      if sourcePath != "" :
        command = []
        command += self.mCompilerTool
        command += self.mCompilerReleaseOptions
        command += self.mAllCompilerOptions
        command += self.m_Cpp_CompilerOptions
        command += ["-c", sourcePath]
        command += ["-o", objectFile]
        command += includeDirs
        command += ["-MD", "-MP", "-MF", objectFile + ".dep"]
        make.addRule (objectFile, [sourcePath], command, self.mCompilationMessage + ": " + source, [], objectFile + ".dep")
  #--------------------------------------------------------------------------- Add Compile rule for sources debug
  #--- Object file directory
    debugObjectDirectory = os.path.normpath (os.getcwd () + "/../build/cli-objects/makefile-" + self.mTargetName + "-debug-objects")
  #---
    debugObjectFileList = []
    for source in SOURCES:
      objectFile = debugObjectDirectory + "/" + source + ".o"
      debugObjectFileList.append (objectFile)
      sourcePath = make.searchFileInDirectories (source, SOURCES_DIR)
      if sourcePath != "" :
        command = []
        command += self.mCompilerTool
        command += self.mCompilerDebugOptions
        command += self.mAllCompilerOptions
        command += self.m_Cpp_CompilerOptions
        command += ["-c", sourcePath]
        command += ["-o", objectFile]
        command += includeDirs
        command += ["-MD", "-MP", "-MF", objectFile + ".dep"]
        make.addRule (objectFile, [sourcePath], command, self.mCompilationMessage + " - debug: " + source, [], objectFile + ".dep")
  #--------------------------------------------------------------------------- Add EXECUTABLE file rule
    linkCommand = []
    linkCommand += self.mLinkerTool
    linkCommand += objectFileList
    linkCommand += ["-o", self.mExecutable]
    postCommand = []
    postCommand += self.mStripTool
    postCommand.append (self.mExecutable)
    postCommandList = [(postCommand, self.mStripMessage + " " + self.mExecutable)]
    #print '[%s]' % ', '.join(map(str, postCommandList))
    make.addRule (self.mExecutable, objectFileList, linkCommand, self.mLinkingMessage + ": " + self.mExecutable, postCommandList)
  #--------------------------------------------------------------------------- Add EXECUTABLE_DEBUG file rule
    EXECUTABLE_DEBUG = self.mExecutable + "-debug"
    linkCommand = []
    linkCommand += self.mLinkerTool
    linkCommand += debugObjectFileList
    linkCommand += ["-o", EXECUTABLE_DEBUG]
    make.addRule (EXECUTABLE_DEBUG, debugObjectFileList, linkCommand, self.mLinkingMessage + " - debug: " + EXECUTABLE_DEBUG, [])
  #--------------------------------------------------------------------------- Add install EXECUTABLE file rule
    INSTALL_EXECUTABLE = "/usr/local/bin/" + self.mExecutable
    command = []
    command += self.mSudoTool
    command += ["cp", self.mExecutable, INSTALL_EXECUTABLE]
    make.addRule (INSTALL_EXECUTABLE, [self.mExecutable], command, self.mInstallationgMessage + " " + self.mExecutable, [])
  #--------------------------------------------------------------------------- Add install EXECUTABLE-debug file rule
    INSTALL_EXECUTABLE_DEBUG = "/usr/local/bin/" + EXECUTABLE_DEBUG
    command = []
    command += self.mSudoTool
    command += ["cp", EXECUTABLE_DEBUG, INSTALL_EXECUTABLE_DEBUG]
    make.addRule (INSTALL_EXECUTABLE_DEBUG, [EXECUTABLE_DEBUG], command, self.mInstallationgMessage + " " + EXECUTABLE_DEBUG, [])
  #--------------------------------------------------------------------------- Compute jobs
    make.addGoal ("all", [self.mExecutable, EXECUTABLE_DEBUG], "Build " + self.mExecutable + " and " + EXECUTABLE_DEBUG)
    make.addGoal ("debug", [self.mExecutable, EXECUTABLE_DEBUG], "Build " + EXECUTABLE_DEBUG)
    make.addGoal ("release", [self.mExecutable], "Build " + self.mExecutable)
    make.addGoal ("install-release", [INSTALL_EXECUTABLE], "Build and install " + INSTALL_EXECUTABLE)
    make.addGoal ("install-debug", [INSTALL_EXECUTABLE_DEBUG], "Build and install " + INSTALL_EXECUTABLE_DEBUG)
#     if self.mGoal == "all":
#       make.makeJobs (self.mExecutable)
#       make.makeJobs (EXECUTABLE_DEBUG)
#     elif self.mGoal == "release":
#       make.makeJobs (self.mExecutable)
#     elif self.mGoal == "debug":
#       make.makeJobs (EXECUTABLE_DEBUG)
#     elif self.mGoal == "install-release":
#       make.makeJobs (INSTALL_EXECUTABLE)
#     elif self.mGoal == "install-debug":
#       make.makeJobs (INSTALL_EXECUTABLE_DEBUG)
#     else:
#       make.enterError ("Unknown '" + self.mGoal + "' goal; accepted: '', 'all', 'release', 'debug', 'install-release', 'install-debug'")
  #--------------------------------------------------------------------------- Run jobs
    make.runGoal (self.mGoal, self.mMaxParallelJobs, self.mUseTitles)
  #--------------------------------------------------------------------------- Ok ?
    make.printErrorCountAndExitOnError ()
    displayDurationFromStartTime (startTime)

#----------------------------------------------------------------------------------------------------------------------*
