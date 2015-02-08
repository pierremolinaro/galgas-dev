#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, time, os, json
import makefile, default_build_options
import generic_galgas_makefile
import tool_chain_installation_path 
import download_cross_compiler

#----------------------------------------------------------------------------------------------------------------------*

def buildForLinux32OnMacOSX (dictionary, EXECUTABLE, GOAL, maxParallelJobs, useTitles) :
#--- Too chain installation
  GCC_VERSION = "4.9.2"
  TOOL_CHAIN_NAME = "gcc-" + GCC_VERSION + "-for-linux32"
  installDir = tool_chain_installation_path.toolChainInstallationPath ()
  TOOL_CHAIN_INSTALL_PATH = installDir + "/" + TOOL_CHAIN_NAME
  if not os.path.exists (TOOL_CHAIN_INSTALL_PATH):
    download_cross_compiler.downloadToolChain (TOOL_CHAIN_NAME)
#---
  gmf = generic_galgas_makefile.GenericGalgasMakefile ()
  gmf.mDictionary = dictionary
  gmf.mExecutable = EXECUTABLE
  gmf.mGoal = GOAL
  gmf.mMaxParallelJobs = maxParallelJobs
  gmf.mUseTitles = useTitles
  gmf.mTargetName = "linux32"
#---
  UNIX_TOOL_PREFIX = TOOL_CHAIN_INSTALL_PATH + "/bin/i586-pc-linux"
  gmf.mCompilerTool = [UNIX_TOOL_PREFIX + "-gcc"]
  gmf.mLinkerTool = [UNIX_TOOL_PREFIX + "-g++"]
  gmf.mStripTool = [UNIX_TOOL_PREFIX + "-strip", "--strip-all"]
  gmf.mCompilationMessage = "Compiling for Linux32"
  gmf.mLinkingMessage = "Linking for Linux32"
  gmf.mStripMessage = "Stripping"
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
#--- Options for Objective-C compiling (.m extension)
  gmf.m_ObjectiveC_CompilerOptions = default_build_options.ObjectiveC_CompilerOptions ([])
#--- Options for Objective-C++ compiling (.mm extension)
  gmf.m_ObjectiveCpp_CompilerOptions = default_build_options.ObjectiveCpp_CompilerOptions ([])
#--- Run makefile
  gmf.run ()

#----------------------------------------------------------------------------------------------------------------------*

# #----------------------------------------------------------------------------------------------------------------------*
# #                                                                                                                      *
# # 32-bit linux tools on MAC OS X                                                                                       *
# #                                                                                                                      *
# #----------------------------------------------------------------------------------------------------------------------*
# 
# TOOL_CHAIN_VERSION := 4.9.2
# TOOL_CHAIN_ARCHIVE := gcc-$(TOOL_CHAIN_VERSION)-for-linux32
# 
# #----------------------------------------------------------------------------------------------------------------------*
# 
# TOOL_CHAIN_INSTALL_PATH := $(HOME)/galgas-tools-for-cross-compilation/$(TOOL_CHAIN_ARCHIVE)
# 
# #----------------------------------------------------------------------------------------------------------------------*
# 
# UNIX_TOOL_PREFIX := $(TOOL_CHAIN_INSTALL_PATH)/bin/i586-pc-linux
# COMPILER_PATH := $(UNIX_TOOL_PREFIX)-gcc
# COMPILER_TOOL := $(COMPILER_PATH)
# LINKER_TOOL   := $(UNIX_TOOL_PREFIX)-g++ -static-libgcc -Wl,--gc-sections
# STRIP_TOOL    := $(UNIX_TOOL_PREFIX)-strip --strip-all
# COMPILATION_MESSAGE := 32-Bit Compiling for Linux
# LINKING_MESSAGE := 32-Bit Linking for Linux
# 
# #----------------------------------------------------------------------------------------------------------------------*
# 
# #LINKER_TOOL   += -Wl,-rpath-link=$(TOOL_CHAIN_INSTALL_PATH)/i586-pc-linux/lib
# #LINKER_TOOL   += --sysroot=$(TOOL_CHAIN_INSTALL_PATH)/i586-pc-linux
# 
# #----------------------------------------------------------------------------------------------------------------------*
# 
# #--- Options for all compilers
# COMPILER_OPTIONS_FOR_THIS_CHAIN := -Wconversion
# 
# #--- Options for release mode
# COMPILER_OPTIONS_RELEASE_FOR_THIS_CHAIN := -O2
# 
# #--- Options for debug mode 
# COMPILER_OPTIONS_DEBUG_FOR_THIS_CHAIN :=
# 
# #--- Options for C compilation (.c extension)
# C_COMPILER_OPTIONS_FOR_THIS_CHAIN :=
# 
# #--- Options for C++ compilation (.cpp extension)
# CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN := -Weffc++
# CPP_COMPILER_OPTIONS_FOR_THIS_CHAIN += -Wsign-promo
# 
# #--- Options for Objective-C compilation (.m extension)
# OC_COMPILER_OPTIONS_FOR_THIS_CHAIN := 
# 
# #--- Options for Objective-C++ compilation (.mm extension)
# OCPP_COMPILER_OPTIONS_FOR_THIS_CHAIN := 

#----------------------------------------------------------------------------------------------------------------------*
