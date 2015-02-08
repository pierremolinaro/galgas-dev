#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import subprocess, sys, os
import urllib, shutil
import subprocess, re
from time import time
import platform
import json
import threading

if sys.version_info >= (2, 6) :
  import multiprocessing

#----------------------------------------------------------------------------------------------------------------------*
#   processorCount                                                                                                     *
#----------------------------------------------------------------------------------------------------------------------*

def processorCount () :
  if sys.version_info >= (2, 6) :
    coreCount = multiprocessing.cpu_count ()
  else:
    coreCount = 1
  return coreCount

#----------------------------------------------------------------------------------------------------------------------*
#   FOR PRINTING IN COLOR                                                                                              *
#----------------------------------------------------------------------------------------------------------------------*

HEADER = '\033[95m'
BLUE = '\033[94m'
GREEN = '\033[92m'
WARNING = '\033[93m'
FAIL = '\033[91m'
ENDC = '\033[0m'
BOLD = '\033[1m'
UNDERLINE = '\033[4m'
BOLD_BLUE = '\033[1m' + '\033[94m'
BOLD_GREEN = '\033[1m' + '\033[92m'
BOLD_RED = '\033[1m' + '\033[91m'

#----------------------------------------------------------------------------------------------------------------------*
#   runCommand                                                                                                         *
#----------------------------------------------------------------------------------------------------------------------*

def runCommand (cmd, title = "") :
  if title == "":
    str = ""
    for s in cmd:
      str += s.replace (" ", "\\ ") + " "
    print BOLD_BLUE + str + ENDC
  else:
    print BOLD_BLUE + title + ENDC
  childProcess = subprocess.Popen (cmd)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#----------------------------------------------------------------------------------------------------------------------*
#   runInThread                                                                                                        *
#----------------------------------------------------------------------------------------------------------------------*

def runInThread (job, displayLock, terminationSemaphore):
  childProcess = subprocess.Popen (job.mCommand, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
  while True:
    line = childProcess.stdout.readline ()
    if line != "":
      displayLock.acquire ()
      sys.stdout.write (line) # Print without newline
      displayLock.release ()
    else:
      childProcess.wait ()
      job.mReturnCode = childProcess.returncode
      terminationSemaphore.release ()
      break

#----------------------------------------------------------------------------------------------------------------------*
#   modificationDateForFile                                                                                            *
#----------------------------------------------------------------------------------------------------------------------*

def modificationDateForFile (dateCacheDictionary, file):
  absFilePath = os.path.abspath (file)
  if dateCacheDictionary.has_key (absFilePath) :
    return dateCacheDictionary [absFilePath]
  elif not os.path.exists (absFilePath):
    date = sys.float_info.max # Very far in future
    dateCacheDictionary [absFilePath] = date
    return date
  else:
    date = os.path.getmtime (absFilePath)
    dateCacheDictionary [absFilePath] = date
    return date

#----------------------------------------------------------------------------------------------------------------------*
#   MAKE                                                                                                               *
#----------------------------------------------------------------------------------------------------------------------*

class Job:
  mTarget = ""
  mCommand = []
  mTitle = ""
  mRequiredFiles = []
  mPostCommands = []
  mReturnCode = None
  
  #--------------------------------------------------------------------------*

  def __init__ (self, target, requiredFiles, command, postCommands, title):
    self.mTarget = target
    self.mCommand = command
    self.mRequiredFiles = requiredFiles
    self.mTitle = title
    self.mPostCommands = postCommands

  #--------------------------------------------------------------------------*

  def run (self, displayLock, terminationSemaphore, useTitle):
    title = self.mTitle if useTitle else ""
    displayLock.acquire ()
    if title == "":
      cmdAsString = ""
      for s in self.mCommand:
        cmdAsString += s.replace (" ", "\\ ") + " "
      print BOLD_BLUE + cmdAsString + ENDC
    else:
      print BOLD_BLUE + title + ENDC
    displayLock.release ()
    thread = threading.Thread (target=runInThread, args=(self, displayLock, terminationSemaphore))
    thread.start()

#----------------------------------------------------------------------------------------------------------------------*

class Rule:
  mTarget = ""
  mSourceList = []
  mCommand = []
  mSecondaryMostRecentModificationDate = 0.0 # Far in the past
  mTitle = ""
  mPostCommands = []
  
  #--------------------------------------------------------------------------*

  def __init__ (self, dateCacheDictionary, target, sourceList, command, postCommands, title, optionalDependanceFile):
    self.mTarget = target
    self.mSourceList = sourceList
    self.mCommand = command
    self.mTitle = title
    self.mPostCommands = postCommands
    if optionalDependanceFile != "":
      filePath = os.path.abspath (optionalDependanceFile)
      if os.path.exists (filePath):
        f = open (filePath, "r")
        s = f.read ().replace ("\\ ", "\x01") # Read and replace escaped spaces by \0x01
        f.close ()
        s = s.replace ("\\\n", "")
        liste = s.split ("\n\n")
        for s in liste:
          components = s.split (':')
          target = components [0].replace ("\x01", " ")
          #print "------- Optional dependency rules for target '" + target + "'"
          #print "Secondary target '" + target + "'"
          for src in components [1].split ():
            secondarySource = src.replace ("\x01", " ")
            #print "  '" + secondarySource + "'"
            modifDate = modificationDateForFile (dateCacheDictionary, secondarySource)
            if self.mSecondaryMostRecentModificationDate < modifDate :
              self.mSecondaryMostRecentModificationDate = modifDate
              #print BOLD_BLUE + str (modifDate) + ENDC
  
#----------------------------------------------------------------------------------------------------------------------*

class Make:
  mRuleList = []
  mJobList = []
  mErrorCount = 0
  mModificationDateDictionary = {}
  mGoals = {}

  #--------------------------------------------------------------------------*

  def addRule (self, target, source, command, title, postCommands, optionalDependanceFile = ""):
    rule = Rule (self.mModificationDateDictionary, target, source, command, postCommands, title, optionalDependanceFile)
    self.mRuleList.append (rule)

  #--------------------------------------------------------------------------*

  def makeJobs (self, target):
    needToBeBuilt = False
    if self.mErrorCount == 0:
      absTarget = os.path.abspath (target)
      #--- Find a rule for making the target
      matchCount = 0
      for rule in self.mRuleList:
        if target == rule.mTarget:
          matchCount = matchCount + 1
      if matchCount == 0:
        if not os.path.exists (absTarget):
          print BOLD_RED + "No rule for making '" + target + "'" + ENDC
          self.mErrorCount = self.mErrorCount + 1
      elif matchCount > 1:
        print BOLD_RED + str (matchCount) + " rules for making '" + target + "'" + ENDC
        self.mErrorCount = self.mErrorCount + 1
      elif matchCount == 1:
        for rule in self.mRuleList:
          if target == rule.mTarget:
          #--- Target already in job list ?
            jobInJobList = False
            for job in self.mJobList:
              if job.mTarget == target:
                jobInJobList = True
                break
          #--- Not in job list ?
            if not jobInJobList:
              appendToJobList = not os.path.exists (absTarget)
            #--- Build primary file
              jobDependenceFiles = []
              for source in rule.mSourceList:
                built = self.makeJobs (source)
                if built:
                  jobDependenceFiles.append (source)
                  appendToJobList = True
            #--- Check primary file modification dates
              if not appendToJobList:
                targetDateModification = os.path.getmtime (absTarget)
                for source in rule.mSourceList:
                  sourceDateModification = os.path.getmtime (source)
                  if targetDateModification < sourceDateModification:
                    appendToJobList = True
                    break
            #--- Check for secondary dependancy files
              if not appendToJobList:
                targetDateModification = os.path.getmtime (absTarget)
                if targetDateModification < rule.mSecondaryMostRecentModificationDate:
                  appendToJobList = True
              if appendToJobList:
                self.mJobList.append (Job (target, jobDependenceFiles, rule.mCommand, rule.mPostCommands, rule.mTitle))
                needToBeBuilt = True
    return needToBeBuilt

  #--------------------------------------------------------------------------*

  def runJobs (self, maxConcurrentJobs, useTitle):
    if self.mErrorCount == 0:
      if len (self.mJobList) == 0:
        print BOLD_BLUE + "Nothing to make." + ENDC
      else:
        if maxConcurrentJobs <= 0:
          maxConcurrentJobs = processorCount () - maxConcurrentJobs
        jobCount = 0 ;
        terminationSemaphore = threading.Semaphore (0)
        displayLock = threading.Lock ()
        loop = True
        returnCode = 0
        while loop:
          #--- Launch jobs in parallel
          for job in self.mJobList:
            if (returnCode == 0) and (jobCount < maxConcurrentJobs) and (len (job.mRequiredFiles) == 0) and (job.mReturnCode == None):
              #--- Create target directory if does not exist
              absTargetDirectory = os.path.dirname (os.path.abspath (job.mTarget))
              if not os.path.exists (absTargetDirectory):
                displayLock.acquire ()
                runCommand (["mkdir", "-p", absTargetDirectory], "Making " + absTargetDirectory + " directory" if useTitle else "")
                displayLock.release ()
              job.run (displayLock, terminationSemaphore, useTitle)
              jobCount = jobCount + 1
              job.mReturnCode = -1 # Means is running
          #--- Wait for a job termination
          terminationSemaphore.acquire ()
          #--- Checks for terminated jobs
          index = 0
          while index < len (self.mJobList):
            job = self.mJobList [index]
            index = index + 1
            if job.mReturnCode == -1 : # Is running
              pass
            elif job.mReturnCode == 0 : # Terminated without error
              jobCount = jobCount - 1
              self.mJobList.pop (index - 1) # Remove terminated job
              index = 0 # For scanning for new job from the beginning of job list
              for aJob in self.mJobList:
                if any (x == job.mTarget for x in aJob.mRequiredFiles):
                  aJob.mRequiredFiles.remove (job.mTarget)
              #--- Run post commands
              for (postCommand, title) in job.mPostCommands :
                displayLock.acquire ()
                runCommand (postCommand, title)
                displayLock.release ()
            elif job.mReturnCode > 0 : # terminated with error : exit
              jobCount = jobCount - 1
              index = index - 1
              self.mJobList.pop (index) # Remove terminated job
              print BOLD_RED + "Return code: " + str (job.mReturnCode) + ENDC
              if (returnCode == 0) and (jobCount > 0) :
                print "Wait for job termination..."
              returnCode = job.mReturnCode
          loop = (len (self.mJobList) > 0) if returnCode == 0 else (jobCount > 0)
        if returnCode > 0 :
          sys.exit (returnCode)

  #--------------------------------------------------------------------------*

  def searchFileInDirectories (self, file, directoryList): # returns "" if not found, register error
    matchCount = 0
    result = ""
    for sourceDir in directoryList:
      sourcePath = sourceDir + "/" + file
      if os.path.exists (os.path.abspath (sourcePath)):
        matchCount = matchCount + 1
        result = sourcePath
    if matchCount == 0:
      print BOLD_RED + "Cannot find '" + file + "'" + ENDC
      self.mErrorCount = self.mErrorCount + 1
    elif matchCount > 1:
      print BOLD_RED + str (matchCount) + " source files for making '" + file + "'" + ENDC
      self.mErrorCount = self.mErrorCount + 1
      result = ""
    return result

  #--------------------------------------------------------------------------*

  def enterError (self, message):
    print BOLD_RED + message + ENDC
    self.mErrorCount = self.mErrorCount + 1

  #--------------------------------------------------------------------------*

  def addGoal (self, goal, targetList, message):
    self.mGoals [goal] = (targetList, message)
    #print '%s' % ', '.join(map(str, self.mGoals))

  #--------------------------------------------------------------------------*

  def runGoal (self, goal, maxConcurrentJobs, useTitle):
    if self.mGoals.has_key (goal) :
      (targetList, message) = self.mGoals [goal]
      for target in targetList:
        self.makeJobs (target)
      self.runJobs (maxConcurrentJobs, useTitle)
    else:
      errorMessage = "The '" + goal + "' goal is not defined; defined goals:"
      for key in self.mGoals:
        (targetList, message) = self.mGoals [key]
        errorMessage += "\n  '" + key + "': " + message
      print BOLD_RED + errorMessage + ENDC
      self.mErrorCount = self.mErrorCount + 1

  #--------------------------------------------------------------------------*

  def printErrorCountAndExitOnError (self):
    if self.mErrorCount == 1:
      print BOLD_RED + "1 error." + ENDC
      sys.exit (1)
    elif self.mErrorCount > 1:
      print BOLD_RED + str (self.mErrorCount) + " errors." + ENDC
      sys.exit (1)

#----------------------------------------------------------------------------------------------------------------------*
