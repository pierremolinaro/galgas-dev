#! /usr/bin/python3
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------

import sys, os, subprocess

#------------------------------------------------------------------------------

def runCommandInShell (command) :
  childProcess = subprocess.Popen (command, shell=True) # command should be a string
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#------------------------------------------------------------------------------

scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir + "/makefile-unix")
#---
runCommandInShell ("/usr/bin/python3 build.py")
#---
runCommandInShell ("file galgas")
#---
runCommandInShell ("/usr/bin/python3 build.py install-release")

#------------------------------------------------------------------------------
