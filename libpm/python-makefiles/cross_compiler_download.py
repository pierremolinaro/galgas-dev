#!/usr/bin/python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
 
import urllib, os, sys, subprocess
import tool_chain_installation_path 

#----------------------------------------------------------------------------------------------------------------------*
#   ARCHIVE DOWNLOAD                                                                                                   *
#----------------------------------------------------------------------------------------------------------------------*

def downloadReportHook (a,b,fileSize): 
  # "," at the end of the line is important!
  if fileSize < (1 << 10):
    sizeString = str (fileSize)
  else:
    if fileSize < (1 << 20):
      sizeString = str (fileSize >> 10) + "Ki"
    else:
      sizeString = str (fileSize >> 20) + "Mi"
  print "% 3.1f%% of %sB\r" % (min(100.0, float(a * b) / fileSize * 100.0), sizeString),
  sys.stdout.flush()

#----------------------------------------------------------------------------------------------------------------------*

def downloadArchive (archiveURL, archivePath):
  print "Downloading..."
  urllib.urlretrieve (archiveURL,  archivePath, downloadReportHook)
  print ""

#----------------------------------------------------------------------------------------------------------------------*
#   runCommand                                                                                                         *
#----------------------------------------------------------------------------------------------------------------------*

def runCommand (cmd) :
  str = "+"
  for s in cmd:
    str += " " + s
  print str
  childProcess = subprocess.Popen (cmd)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*
#  MAIN                                                                                                                *
#----------------------------------------------------------------------------------------------------------------------*

def downloadToolChain (TOOL_CHAIN):
  #--------------------------------------------------------------------------- Get URL
  url = "http://crossgcc.rts-software.org/downloads/galgas-tools-for-cross-compilation/" + TOOL_CHAIN + ".tar.bz2"
  print "*** TOOL CHAIN IS NOT INSTALLED"
  print "Tool chain URL: " + url
  #--------------------------------------------------------------------------- Get installation directory
  installDir = tool_chain_installation_path.toolChainInstallationPath ()
  print "Intallation directory: " + installDir
  LOCAL_ARCHIVE = installDir + "/" + TOOL_CHAIN + ".tar.bz2"
  runCommand (["mkdir", "-p", installDir])
  #--------------------------------------------------------------------------- Save current dir and change it
  currentDir = os.getcwd ()
  os.chdir (installDir)
  print "+ cd " + installDir
  #--------------------------------------------------------------------------- Download
  runCommand (["rm", "-f", TOOL_CHAIN + ".tar.bz2"])
  runCommand (["rm", "-f", TOOL_CHAIN + ".tar"])
  downloadArchive (url, LOCAL_ARCHIVE)
  #--------------------------------------------------------------------------- Unzip
  runCommand (["bunzip2", TOOL_CHAIN + ".tar.bz2"])
  runCommand (["tar", "xf", TOOL_CHAIN + ".tar"])
  runCommand (["rm", TOOL_CHAIN + ".tar"])
  #--------------------------------------------------------------------------- Restore current dir
  os.chdir (currentDir)
  print "+ cd " + currentDir
  #--------------------------------------------------------------------------- Done
  print "*** DONE."

#----------------------------------------------------------------------------------------------------------------------*
