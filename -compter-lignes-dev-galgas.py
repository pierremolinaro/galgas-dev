#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#----------------------------------------------------------------------------------------------------------------------*

import sys, os, fnmatch

#----------------------------------------------------------------------------------------------------------------------*

def compterLignesFichier (nomFichier) :
  fd = open (nomFichier, 'r')
  n = 0
  while fd.readline ():
    n += 1
  fd.close ()
  return n

#----------------------------------------------------------------------------------------------------------------------*

def compterLignes (repertoire, extension) :
  n = 0
  for root, dirnames, filenames in os.walk (repertoire):
    for filename in fnmatch.filter (filenames, '*.' + extension):
      n += compterLignesFichier (os.path.join (root, filename))
  return n

#----------------------------------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#----------------------------------------------------------------- Get goal as first argument
print ("Sources GALGAS : " + str (compterLignes (scriptDir + "/galgas-sources", "galgas")) + " lignes")

print ("Templates GALGAS : " + str (compterLignes (scriptDir + "/generation_templates", "galgasTemplate")) + " lignes")

n = compterLignes (scriptDir + "/hand_coded_sources", "cpp") + compterLignes (scriptDir + "/hand_coded_sources", "h")
print ("Sources C++ compilateur GALGAS : " + str (n) + " lignes")

n = compterLignes (scriptDir + "/libpm", "py")
print ("Sources Python compilateur GALGAS : " + str (n) + " lignes")

n = compterLignes (scriptDir + "/libpm/cocoa_galgas", "m") + compterLignes (scriptDir + "/libpm/cocoa_utilities", "m")
nh_oc = compterLignes (scriptDir + "/libpm/cocoa_galgas", "h") + compterLignes (scriptDir + "/libpm/cocoa_utilities", "h")

print ("Sources Objective C LIBPM : " + str (n + nh_oc) + " lignes")

n_libpm = compterLignes (scriptDir + "/libpm", "cpp") + compterLignes (scriptDir + "/libpm", "h") - nh_oc
print ("Sources C++ LIBPM : " + str (n_libpm) + " lignes")

n = compterLignes (scriptDir + "/build/output", "cpp") + compterLignes (scriptDir + "/build/output", "h")
print ("Sources C++ engendrés par GALGAS : " + str (n) + " lignes")

print ("Tous les sources C++ du projet compilateur GALGAS : " + str (n + n_libpm) + " lignes")

#----------------------------------------------------------------------------------------------------------------------*
