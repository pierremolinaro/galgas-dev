#! /usr/bin/python3
# -*- coding: UTF-8 -*-
#-------------------------------------------------------------------------------

import sys, time, os, json
import makefile, default_build_options
import generic_galgas_makefile

#-------------------------------------------------------------------------------

def buildForArm64LinuxOnMacOSX (dictionary, jsonFilePath, EXECUTABLE, BUILD_DIR_NAME, GOAL, maxParallelJobs, displayCommands) :
  executable = makefile.find_executable ("aarch64-linux-gnu-gcc")
  if executable == None:
    print (makefile.BOLD_RED () + "*** Cannot find 'aarch64-linux-gnu-gcc' executable ***" + makefile.ENDC ())
    print ("The arm64 Linux cross compiler can be installed under howebrew:")
    print ("  brew tap messense/macos-cross-toolchains")
    print ("  brew install aarch64-unknown-linux-gnu")
    print ("See: https://github.com/messense/homebrew-macos-cross-toolchains")
    sys.exit (1)
#---
  gmf = generic_galgas_makefile.GenericGalgasMakefile ()
  gmf.mJSONfilePath = jsonFilePath
  gmf.mDictionary = dictionary
  gmf.mExecutable = EXECUTABLE
  gmf.mGoal = GOAL
  gmf.mMaxParallelJobs = maxParallelJobs
  gmf.mDisplayCommands = displayCommands
  gmf.mTargetName = "arm64-linux"
  gmf.mBuildDirName = BUILD_DIR_NAME
#---
  gmf.mCompilerTool = ["aarch64-linux-gnu-gcc"]
  gmf.mLinkerTool = ["aarch64-linux-gnu-g++"]
  gmf.mStripTool = ["aarch64-linux-gnu-strip", "--strip-all"]
  gmf.mCompilationMessage = "Compiling for arm64 Linux"
  gmf.mLinkingMessage = "Linking for arm64 Linux"
  gmf.mStripMessage = "Stripping"
  gmf.mCrossCompilation = "arm64 Linux"
#--- Options for all compilers
  gmf.mAllCompilerOptions = default_build_options.allCompilerOptions (["-Wconversion"])
#--- Options for release mode
  gmf.mCompilerReleaseOptions = default_build_options.compilerReleaseOptions (["-O2"])
#--- Options for debug mode
  gmf.mCompilerDebugOptions = default_build_options.compilerDebugOptions ([])
#--- Options for C compiling (.c extension)
  gmf.m_C_CompilerOptions = default_build_options.C_CompilerOptions ([])
#--- Options for C++ compiling (.cpp extension)
  gmf.m_Cpp_CompilerOptions = default_build_options.Cpp_CompilerOptions (["-Weffc++", "-Wsign-promo"])
#--- Run makefile
  gmf.run ()

#-------------------------------------------------------------------------------
