#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*

import sys, os, subprocess, atexit, datetime

#------------------------------------------------------------------------------*
#   FOR PRINTING IN COLOR                                                      *
#------------------------------------------------------------------------------*

MAGENTA = '\033[95m'
BLUE = '\033[94m'
GREEN = '\033[92m'
RED = '\033[91m'
ENDC = '\033[0m'
BOLD = '\033[1m'
UNDERLINE = '\033[4m'
BOLD_MAGENTA = BOLD + MAGENTA
BOLD_BLUE = BOLD + BLUE
BOLD_GREEN = BOLD + GREEN
BOLD_RED = BOLD + RED

#------------------------------------------------------------------------------*
#   writeFile                                                                  *
#------------------------------------------------------------------------------*

def writeFile (contents, filename) :
  f = open (filename, "w")
  f.write (contents)
  f.close ()

#------------------------------------------------------------------------------*
#   remplacerAnneeEtVersionGALGAS                                              *
#------------------------------------------------------------------------------*

def remplacerAnneeEtVersionGALGAS (annee, versionGALGAS, filename) :
  f = open (filename, "r")
  contents = f.read ()
  f.close ()
  contents = contents.replace ("!AN!", annee)
  contents = contents.replace ("GALGASBETAVERSION", versionGALGAS)
  writeFile (contents, filename)

#------------------------------------------------------------------------------*
#   runCommand                                                                 *
#------------------------------------------------------------------------------*

def runCommand (cmd) :
  str = "+"
  for s in cmd:
    str += " " + s
  print BOLD_MAGENTA + str + ENDC
  childProcess = subprocess.Popen (cmd)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#------------------------------------------------------------------------------*
#   runHiddenCommand                                                           *
#------------------------------------------------------------------------------*

def runHiddenCommand (cmd) :
  str = "+"
  for s in cmd:
    str += " " + s
  print BOLD_MAGENTA + str + ENDC
  result = ""
  childProcess = subprocess.Popen (cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
  while True:
    line = childProcess.stdout.readline ()
    if line != "":
      result += line
      sys.stdout.write (".") # Print without newline
    else:
      print ""
      childProcess.wait ()
      if childProcess.returncode != 0 :
        sys.exit (childProcess.returncode)
      return result

#------------------------------------------------------------------------------*
#  ENTRY POINT                                                                 *
#------------------------------------------------------------------------------*

#-------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)


#-------------------- Supprimer une distribution existante
TEMP_DIR= os.path.normpath (scriptDir + "/../DISTRIBUTION_GALGAS")
runCommand (["rm", "-fr", TEMP_DIR])
#-------------------- Creer le repertoire contenant la distribution
runCommand (["mkdir", TEMP_DIR])
#-------------------- Importer galgas
texteSurConsole = runHiddenCommand (["svn", "export", "https://galgas.rts-software.org/svn/", TEMP_DIR + "/galgas"])
components = texteSurConsole.split ("Exported revision")
#print "'" + components [1] + "'"
components = components [1].split (".")
numeroRevisionSVN = components [0].strip ()
print "Révision SVN : '" + numeroRevisionSVN + "'"
#-------------------- Obtenir l'année
ANNEE = str (datetime.datetime.now().year)
print "ANNÉE : '" + ANNEE + "'"
#-------------------- Obtenir le numéro de version GALGAS
f = open (TEMP_DIR + "/galgas/build/output/project_header.h", "r")
text = f.read ()
f.close ()
components = text.split ('"')
versionGALGAS = components [1]
print "Version GALGAS : '" + versionGALGAS + "'"
#--- Renommer le répertoire de construction
DIR= os.path.normpath (scriptDir + "/../DISTRIBUTION_GALGAS_" + versionGALGAS)
runCommand (["rm", "-fr", DIR])
os.rename (TEMP_DIR, DIR)
#-------------------- Mettre a jour les numéros de version
writeFile (versionGALGAS, DIR + "/version-galgas.txt")
remplacerAnneeEtVersionGALGAS (ANNEE, versionGALGAS, DIR + "/galgas/project-xcode-galgas/Info.plist")
remplacerAnneeEtVersionGALGAS (ANNEE, versionGALGAS, DIR + "/galgas/project-xcode-galgas/English.lproj/InfoPlist.strings")
for root, dirs, files in os.walk (DIR + "/galgas/galgas-sources"):
  for filename in files:
    (base, extension) = os.path.splitext (filename)
    ok = extension == ".galgas"
    if not ok:
      ok = extension == ".galgasProject"
    if not ok:
      ok = extension == ".h"
    if not ok:
      ok = extension == ".cpp"
    if not ok:
      ok = extension == ".m"
    remplacerAnneeEtVersionGALGAS (ANNEE, versionGALGAS, root + "/" + filename)

# VERSION_GALGAS=`cat ${TEMP_DIR}/version-galgas.txt` &&
# DIR=`dirname $0`/../DISTRIBUTION_GALGAS_${VERSION_GALGAS} &&
# rm -fr ${DIR} &&
# mv ${TEMP_DIR} ${DIR} &&
# sed "s/!AN!/${ANNEE}/g" ${DIR}/galgas/project-xcode-galgas/Info.plist > ${DIR}/temp &&
# sed "s/GALGAS_BETA_VERSION/${VERSION_GALGAS}/g" ${DIR}/temp > ${DIR}/galgas/project-xcode-galgas/Info.plist &&
# sed "s/!AN!/${ANNEE}/g" ${DIR}/galgas/project-xcode-galgas/English.lproj/InfoPlist.strings > ${DIR}/temp &&
# sed "s/GALGAS_BETA_VERSION/${VERSION_GALGAS}/g" ${DIR}/temp > ${DIR}/galgas/project-xcode-galgas/English.lproj/InfoPlist.strings &&
# { 
#   for fichier in ${DIR}/galgas/galgas-sources/*.galgas \
#       ${DIR}/galgas/*.galgasProject \
#       ${DIR}/galgas/build/output/*.h \
#       ${DIR}/galgas/build/output/*.cpp \
#       ${DIR}/galgas/build/output/*.m \
#       ${DIR}/galgas/hand_coded_sources/*.h \
#       ${DIR}/galgas/hand_coded_sources/*.cpp
#   do
#     echo $fichier
#     sed "s/GALGAS_BETA_VERSION/${VERSION_GALGAS}/g" $fichier > ${DIR}/temp
#     sed "s/!AN!/${ANNEE}/g" ${DIR}/temp > $fichier
#   done
# } &&
# rm ${DIR}/temp &&
#-------------------- Creer l'archive des sources de galgas
runCommand (["eolc", "-unix", "-D" + DIR + "/galgas", "-Eh", "-Ec", "-Ecpp", "-Em", "-Emm", "-Epy", "-Ebat"])
os.chdir (DIR)
runCommand (["tar", "-cf", "galgas-sources-lf.tar", "galgas"])
runCommand (["bzip2", "-9", "galgas-sources-lf.tar"])
runCommand (["eolc", "-dos", "-D" + DIR + "/galgas", "-Eh", "-Ec", "-Ecpp", "-Em", "-Emm", "-Epy", "-Ebat"])
os.chdir (DIR)
runCommand (["tar", "-cf", "galgas-sources-crlf.tar", "galgas"])
runCommand (["bzip2", "-9", "galgas-sources-crlf.tar"])
# cd ${DIR} && tar cv galgas | bzip2 -9 > galgas-sources-lf.tar.bz2 &&
# eolc -dos -D${DIR}/galgas -Eh -Ec -Ecpp -Em -Emm -Epy -Ebat -Emke -Fmakefile &&
# cd ${DIR} && tar cv galgas | bzip2 -9 > galgas-sources-crlf.tar.bz2 &&
#-------------------- Copier changeLog
runCommand (["mv", DIR + "/galgas/changeLog.html", DIR + "/changeLog.html"])
#-------------------- Vérifier les programmes d'exemple
runCommand ([DIR + "/galgas/sample_code/-build-all-macosx.command"])
# ${DIR}/galgas/sample_code/-build-all-macosx.command &&
# rm -fr ${DIR}/galgas/sample_code &&
runCommand (["rm", "-fr", DIR + "/galgas/sample_code"])
#-------------------- Exécuter les tests
runCommand ([DIR + "/galgas/testsuite/_run_testsuite.command"])
runCommand (["rm", "-fr", DIR + "/galgas/testsuite"])
# ${DIR}/galgas/testsuite/_run_testsuite.command &&
# rm -fr ${DIR}/galgas/testsuite &&
#-------------------- Vérifier la création de projet
runCommand ([DIR + "/galgas/-verifier-create-galgas.command"])
# GALGAS_DEBUG_TOOL=${DIR}/galgas/makefile-macosx/galgas-debug &&
# TEST_PROJECT_NAME=TEST &&
# CREATE_PROJECT_TEST_DIR=${DIR}/galgas/${TEST_PROJECT_NAME} &&
# echo "---------------- CREATE PROJECT --------------------------" &&
# cd ${DIR} && ${GALGAS_DEBUG_TOOL} --create-project=${CREATE_PROJECT_TEST_DIR} &&
# echo "---------------- GALGAS COMPILE --------------------------" &&
# ${GALGAS_DEBUG_TOOL} -v --Werror ${CREATE_PROJECT_TEST_DIR}/+${TEST_PROJECT_NAME}.galgasProject &&
# echo "---------------- XCODE BUILD --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/xcode-project && xcodebuild -alltargets &&
# echo "---------------- MAKE i386 Linux --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/makefile-x86linux32-on-macosx && python ./build.py &&
# echo "---------------- MAKE x86_64 Linux --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/makefile-x86linux64-on-macosx && python ./build.py &&
# echo "---------------- MAKE Unix --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/makefile-unix && python ./build.py &&
# echo "---------------- MAKE win32 --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/makefile-win32-on-macosx && python ./build.py &&
# echo "---------------- MAKE --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/makefile-macosx && python ./build.py &&
# echo "---------------- EXECUTE NORMAL --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/makefile-macosx && ./${TEST_PROJECT_NAME} --help &&
# echo "---------------- EXECUTE DEBUG --------------------------" &&
# cd ${CREATE_PROJECT_TEST_DIR}/makefile-macosx && ./${TEST_PROJECT_NAME}-debug --help &&
# echo "---------------- REMOVE PROJECT --------------------------" &&
# cd ${DIR} &&
# rm -fr ${CREATE_PROJECT_TEST_DIR} &&
# echo "---------------- SUCCES --------------------------"
#-------------------- Construire la documentation Latex
remplacerAnneeEtVersionGALGAS (ANNEE, versionGALGAS, DIR + "/galgas/galgas-documentation-latex-sources/galgas-book.tex")
# sed "s/GALGASCURRENTVERSION/${VERSION_GALGAS}/g" ${DIR}/galgas/galgas-documentation-latex-sources/galgas-book.tex > ${DIR}/temp &&
# cp ${DIR}/temp ${DIR}/galgas/galgas-documentation-latex-sources/galgas-book.tex &&
# rm ${DIR}/temp &&
# ${DIR}/galgas/galgas-documentation-latex-sources/-build.command &&
# cd ${DIR} && cp galgas/galgas-documentation-latex-sources/galgas-book.pdf galgas-book.pdf &&
# rm -fr ${DIR}/galgas/galgas-documentation-latex-sources &&
runCommand ([DIR + "/galgas/galgas-documentation-latex-sources/-build.command"])
runCommand (["cp", "galgas/galgas-documentation-latex-sources/galgas-book.pdf", "galgas-book.pdf"])
runCommand (["rm", "-fr", "galgas/galgas-documentation-latex-sources"])
#-------------------- Creer l'archive de l'executable windows (release et debug)
os.chdir (DIR + "/galgas/makefile-win32-on-macosx")
runCommand (["python", "build.py"])
runCommand (["bzip2", "-9", "galgas.exe"])
runCommand (["bzip2", "-9", "galgas-debug.exe"])
os.chdir (DIR)
runCommand (["cp", DIR + "/galgas/makefile-win32-on-macosx/galgas.exe", "galgas.exe"])
runCommand (["cp", DIR + "/galgas/makefile-win32-on-macosx/galgas-debug.exe", "galgas-debug.exe"])
runCommand (["rm", "-fr", "galgas/makefile-win32-on-macosx"])
runCommand (["rm", "-fr", "galgas/build/cli-objects"])
# cd ${DIR}/galgas/makefile-win32-on-macosx/ && python ./build.py &&
# cp ${DIR}/galgas/makefile-win32-on-macosx/galgas.exe ${DIR}/galgas.exe &&
# cd ${DIR} && bzip2 -9 galgas.exe &&
# cp ${DIR}/galgas/makefile-win32-on-macosx/galgas-debug.exe ${DIR}/galgas-debug.exe &&
# cd ${DIR} && bzip2 -9 galgas-debug.exe &&
# rm -fr ${DIR}/galgas/makefile-win32-on-macosx &&
# rm -fr ${DIR}/galgas/build/cli-objects &&
#-------------------- Creer l'archive de l'executable x86 linux 32 (release et debug)
os.chdir (DIR + "/galgas/makefile-x86linux32-on-macosx")
runCommand (["python", "build.py"])
runCommand (["bzip2", "-9", "galgas.exe"])
runCommand (["bzip2", "-9", "galgas-debug.exe"])
os.chdir (DIR)
runCommand (["cp", DIR + "/galgas/makefile-x86linux32-on-macosx/galgas.exe", "galgas.exe"])
runCommand (["cp", DIR + "/galgas/makefile-x86linux32-on-macosx/galgas-debug.exe", "galgas-debug.exe"])
runCommand (["rm", "-fr", "galgas/makefile-x86linux32-on-macosx"])
runCommand (["rm", "-fr", "galgas/build/cli-objects"])
# cd ${DIR}/galgas/makefile-x86linux32-on-macosx/ && python ./build.py &&
# cd ${DIR}/galgas/makefile-x86linux32-on-macosx && zip -9 galgas.zip galgas &&
# cp ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas.zip ${DIR}/galgas-x86-linux32.zip &&
# cd ${DIR}/galgas/makefile-x86linux32-on-macosx && zip -9 galgas-debug.zip galgas-debug &&
# cp ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas-debug.zip ${DIR}/galgas-debug-x86-linux32.zip &&
# rm -fr ${DIR}/galgas/makefile-x86linux32-on-macosx &&
# rm -fr ${DIR}/galgas/build/cli-objects &&
#-------------------- Creer l'archive de l'executable x86 linux 64 (release et debug)
os.chdir (DIR + "/galgas/makefile-x86linux64-on-macosx")
runCommand (["python", "build.py"])
runCommand (["bzip2", "-9", "galgas.exe"])
runCommand (["bzip2", "-9", "galgas-debug.exe"])
os.chdir (DIR)
runCommand (["cp", DIR + "/galgas/makefile-x86linux64-on-macosx/galgas.exe", "galgas.exe"])
runCommand (["cp", DIR + "/galgas/makefile-x86linux64-on-macosx/galgas-debug.exe", "galgas-debug.exe"])
runCommand (["rm", "-fr", "galgas/makefile-x86linux64-on-macosx"])
runCommand (["rm", "-fr", "galgas/build/cli-objects"])
# cd ${DIR}/galgas/makefile-x86linux64-on-macosx/ && python ./build.py &&
# cd ${DIR}/galgas/makefile-x86linux64-on-macosx && zip -9 galgas.zip galgas &&
# cp ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas.zip ${DIR}/galgas-x86-linux64.zip &&
# cd ${DIR}/galgas/makefile-x86linux64-on-macosx && zip -9 galgas-debug.zip galgas-debug &&
# cp ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas-debug.zip ${DIR}/galgas-debug-x86-linux64.zip &&
# rm -fr ${DIR}/galgas/makefile-x86linux64-on-macosx &&
# rm -fr ${DIR}/galgas/build/cli-objects &&
#-------------------- Recompiler le projet Xcode
os.chdir (DIR + "/galgas/mproject-xcode-galgas")
runCommand (["xcodebuild", "-project", "galgas-distribution.xcodeproj", "-target", "GALGAS Cocoa", "-configuration", "Default"])
os.chdir (DIR)
# cd ${DIR}/galgas/project-xcode-galgas && xcodebuild -project galgas-distribution.xcodeproj -target "GALGAS Cocoa" -configuration Default &&
#-------------------- Creer l'archive BZ2 de cocoa galgas
runCommand (["cp", "-r", DIR + "/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app", DIR])
runCommand (["tar", "-cf", "cocoaGalgas.app.tar", "cocoaGalgas.app"])
runCommand (["bzip2", "-9", "cocoaGalgas.app.tar"])
# cp -r ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app ${DIR} &&
# cd ${DIR} && tar cv cocoaGalgas.app | bzip2 -9 > cocoaGalgas.app.tar.bz2 &&
# rm -r ${DIR}/cocoaGalgas.app &&
#-------------------- Creer l'archive de Cocoa Galgas
runCommand (["mkdir", DIR + "/COCOA-GALGAS"])
runCommand (["cp", DIR + "/galgas/AUTHORS", DIR + "/COCOA-GALGAS"])
runCommand (["cp", DIR + "/galgas/COPYING", DIR + "/COCOA-GALGAS"])
runCommand (["cp", "-r", DIR + "/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app", DIR + "/COCOA-GALGAS"])
runCommand (["hdiutil", "create", "-srcfolder", DIR + "/COCOA-GALGAS", DIR + "/cocoa-galgas.dmg"])
# mkdir ${DIR}/COCOA-GALGAS &&
# cp ${DIR}/galgas/AUTHORS ${DIR}/COCOA-GALGAS &&
# cp ${DIR}/galgas/COPYING ${DIR}/COCOA-GALGAS &&
# cp -r ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app ${DIR}/COCOA-GALGAS &&
# hdiutil create -srcfolder ${DIR}/COCOA-GALGAS ${DIR}/cocoa-galgas.dmg &&
# rm -fr ${DIR}/COCOA-GALGAS &&
#-------------------- Creer l'archive de l'outil ligne de commande pour mac
runCommand (["mkdir", DIR + "/COCOA-TOOL"])
runCommand (["cp", DIR + "/galgas/AUTHORS", DIR + "/COCOA-TOOL"])
runCommand (["cp", DIR + "/galgas/COPYING", DIR + "/COCOA-TOOL"])
runCommand (["cp", "-r", DIR + "/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app/Contents/Resources/galgas", DIR + "/COCOA-TOOL/galgas"])
runCommand (["cp", "-r", DIR + "/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app/Contents/Resources/galgas-debug", DIR + "/COCOA-TOOL/galgas-debug"])
runCommand (["hdiutil", "create", "-srcfolder", DIR + "/COCOA-TOOL", DIR + "/cocoa-tool.dmg"])
# mkdir ${DIR}/GALGAS-TOOL &&
# cp ${DIR}/galgas/AUTHORS ${DIR}/GALGAS-TOOL &&
# cp ${DIR}/galgas/COPYING ${DIR}/GALGAS-TOOL &&
# cp ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app/Contents/Resources/galgas ${DIR}/GALGAS-TOOL/galgas &&
# cp ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app/Contents/Resources/galgas ${DIR}/GALGAS-TOOL/galgasDebug &&
# hdiutil create -srcfolder ${DIR}/GALGAS-TOOL ${DIR}/galgas-tool.dmg &&
# rm -fr ${DIR}/GALGAS-TOOL &&
#-------------------- Supprimer les repertoires sources
runCommand (["cp", "-fr", DIR + "/galgas"])
print BOLD_GREEN + "-------------- SUCCES ---------------" + ENDC
# cd ${DIR} &&
# rm -fr ${DIR}/galgas &&
# echo "-------------- SUCCES ---------------" ||
# echo "-------------- ECHEC ----------------"

#------------------------------------------------------------------------------*
