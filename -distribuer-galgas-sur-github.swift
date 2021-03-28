#! /usr/bin/swift

//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------
// Product Kind
//--------------------------------------------------------------------------------------------------

enum ProductKind {
  case release
  case debug

  var string : String {
    switch self {
      case .release : return "Release"
      case .debug   : return "Debug"
    }
  }
}

//--------------------------------------------------------------------------------------------------

let BUILD_KIND = ProductKind.release

//--------------------------------------------------------------------------------------------------
// Infos de version
//--------------------------------------------------------------------------------------------------

let NOTES : [String] = []
let BUGFIXES : [String] = []
let CHANGES : [String] = ["C++ compilation requires C++11"]
let NEWS : [String] = [
  "Added optional methods to enumerations",
  "Added @string getter 'commandWithArguments'",
  "Added @string getter 'hiddenCommandWithArguments'"
]

//--------------------------------------------------------------------------------------------------
//   FOR PRINTING IN COLOR
//--------------------------------------------------------------------------------------------------

let BLACK   = "\u{001B}[0;30m"
let RED     = "\u{001B}[0;31m"
let GREEN   = "\u{001B}[0;32m"
let YELLOW  = "\u{001B}[0;33m"
let BLUE    = "\u{001B}[0;34m"
let MAGENTA = "\u{001B}[0;35m"
let CYAN    = "\u{001B}[0;36m"
let ENDC    = "\u{001B}[0;0m"
let BOLD    = "\u{001B}[0;1m"
//let UNDERLINE = "\033[4m"
let BOLD_MAGENTA = BOLD + MAGENTA
let BOLD_BLUE = BOLD + BLUE
let BOLD_GREEN = BOLD + GREEN
let BOLD_RED = BOLD + RED

//--------------------------------------------------------------------------------------------------
//   runCommand
//--------------------------------------------------------------------------------------------------

func runCommand (_ cmd : String, _ args : [String]) {
  var str = "+ " + cmd
  for s in args {
    str += " " + s
  }
  print (BOLD_MAGENTA + str + ENDC)
  let task = Process.launchedProcess (launchPath: cmd, arguments: args)
  task.waitUntilExit ()
  let status = task.terminationStatus
  if status != 0 {
    print (BOLD_RED + "Command line tool '\(cmd)' returns error \(status)" + ENDC)
    exit (status)
  }
}

//--------------------------------------------------------------------------------------------------
//   runHiddenCommand
//--------------------------------------------------------------------------------------------------

func runHiddenCommand (_ cmd : String, _ args : [String]) -> String {
  var str = "+ " + cmd
  for s in args {
    str += " " + s
  }
  print (BOLD_MAGENTA + str + ENDC)
//--- Define task
  let task = Process ()
  task.launchPath = cmd
  task.arguments = args
  let pipe = Pipe ()
  task.standardOutput = pipe
  task.standardError = pipe
  let fileHandle = pipe.fileHandleForReading
//--- Launch
  task.launch ()
  var data = Data ()
  var hasData = true
  while hasData {
    let newData = fileHandle.availableData
    hasData = newData.count > 0
    data.append (newData)
  }
  task.waitUntilExit ()
  let status = task.terminationStatus
  if status != 0 {
    print (BOLD_RED + "Error \(status)" + ENDC)
    exit (status)
  }
  return String (data: data, encoding: .ascii)!
}

//--------------------------------------------------------------------------------------------------
//   dictionaryFromJsonFile
//--------------------------------------------------------------------------------------------------

struct VersionDescriptor : Codable {
  var bugfixes = [String] ()
  var notes = [String] ()
  var length = ""
  var edSignature = ""
  var news = [String] ()
  var changes = [String] ()
  var build = ""
  var date = ""
}

//--------------------------------------------------------------------------------------------------
//   remplacerAnneeEtVersionGALGAS
//--------------------------------------------------------------------------------------------------

func remplacerAnneeEtVersionGALGAS (_ annee : Int, _ versionGALGAS : String, file filePath : String) {
  let url = URL (fileURLWithPath: filePath)
  var contents = try! String (contentsOf: url, encoding: .utf8)
  contents = contents.replacingOccurrences (of: "!AN!", with: "\(annee)")
  contents = contents.replacingOccurrences (of: "GALGASBETAVERSION", with: versionGALGAS)
  let data = contents.data (using: .utf8, allowLossyConversion: false)!
  try! data.write (to: url)
}

//--------------------------------------------------------------------------------------------------

func remplacerAnneeEtVersionGALGAS (_ annee : Int, _ versionGALGAS : String, directory inPath : String) {
  let directoryEnumerator = fm.enumerator (atPath: inPath)
  let extensions = [".galgas", ".galgasProject", ".h", ".cpp", ".m", ".pbxproj"]
  while let filename = directoryEnumerator?.nextObject () as? String {
    var suffixFound = false
    for ext in extensions {
      suffixFound = filename.hasSuffix (ext)
      if suffixFound {
        break
      }
    }
    if suffixFound {
      remplacerAnneeEtVersionGALGAS (annee, versionGALGAS, file: inPath + "/" + filename)
    }
  }
}

//--------------------------------------------------------------------------------------------------

let débutConstruction = Date ()
let fm = FileManager ()
//-------------------- Get script absolute path
let scriptDir = URL (fileURLWithPath: CommandLine.arguments [0]).deletingLastPathComponent ().path
print ("scriptDir \(scriptDir)")
//-------------------- Supprimer une distribution existante
let DISTRIBUTION_DIR_TEMPORARY = scriptDir + "/../DISTRIBUTION_GALGAS_TEMPORARY"
while fm.fileExists (atPath: DISTRIBUTION_DIR_TEMPORARY) {
  runCommand ("/bin/rm", ["-fr", DISTRIBUTION_DIR_TEMPORARY])
}
//-------------------- Creer le repertoire contenant la distribution
runCommand ("/bin/mkdir", [DISTRIBUTION_DIR_TEMPORARY])
fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR_TEMPORARY)
//-------------------- Importer GALGAS
runCommand ("/bin/rm", ["-f", "archive.zip"])
runCommand ("/bin/rm", ["-fr", "galgas-dev-master"])
runCommand ("/usr/bin/curl", ["-L", "https://github.com/pierremolinaro/galgas-dev/archive/master.zip", "-o", "archive.zip"])
runCommand ("/usr/bin/unzip", ["archive.zip"])
runCommand ("/bin/rm", ["archive.zip"])
fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR_TEMPORARY + "/galgas-dev-master")
//-------------------- Obtenir l'année
let ANNÉE = Calendar.current.component (.year, from: Date ())
print ("ANNÉE : \(ANNÉE)")
//-------------------- Obtenir le numéro de version GALGAS
  let url = URL (fileURLWithPath: DISTRIBUTION_DIR_TEMPORARY + "/galgas-dev-master/build/output/project_header.h")
  let contents = try! String (contentsOf: url, encoding: .utf8)
  let components = contents.components (separatedBy: "\"")
  let VERSION_GALGAS = components [1]
  print ("Version GALGAS : '\(VERSION_GALGAS)'")
//-------------------- Renommer le répertoire de distribution
  let DISTRIBUTION_DIR = scriptDir + "/../DISTRIBUTION_GALGAS_" + VERSION_GALGAS
  while fm.fileExists (atPath: DISTRIBUTION_DIR) {
    runCommand ("/bin/rm", ["-fr", DISTRIBUTION_DIR])
  }
  runCommand ("/bin/mv", [DISTRIBUTION_DIR_TEMPORARY, DISTRIBUTION_DIR])
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR)
//-------------------- Fixer le numéro de version
  let plistFileFullPath = DISTRIBUTION_DIR + "/galgas-dev-master/project-xcode-galgas/Info-developer.plist"
  let data : Data = try Data (contentsOf: URL (fileURLWithPath: plistFileFullPath))
  var plistDictionary : [String : Any]
  if let d = try PropertyListSerialization.propertyList (from: data, format: nil) as? [String : Any] {
    plistDictionary = d
  }else{
    print (RED + "line \(#line) : object is not a dictionary" + ENDC)
    exit (1)
  }
//--- Mettre à jour les numéros de version dans la plist
  plistDictionary ["CFBundleVersion"] = VERSION_GALGAS // + ", build " + buildString
  plistDictionary ["CFBundleShortVersionString"] = VERSION_GALGAS
  let plistNewData = try PropertyListSerialization.data (fromPropertyList: plistDictionary, format: .binary, options: 0)
  try plistNewData.write (to: URL (fileURLWithPath: plistFileFullPath), options: .atomic)
//-------------------- Mettre a jour les numéros de version
  remplacerAnneeEtVersionGALGAS (ANNÉE, VERSION_GALGAS, file: DISTRIBUTION_DIR + "/galgas-dev-master/project-xcode-galgas/en.lproj/InfoPlist.strings")
  remplacerAnneeEtVersionGALGAS (ANNÉE, VERSION_GALGAS, directory: DISTRIBUTION_DIR + "/galgas-dev-master/galgas-sources")
  remplacerAnneeEtVersionGALGAS (ANNÉE, VERSION_GALGAS, directory: DISTRIBUTION_DIR + "/galgas-dev-master/libpm/command_line_interface")
  remplacerAnneeEtVersionGALGAS (ANNÉE, VERSION_GALGAS, directory: DISTRIBUTION_DIR + "/galgas-dev-master/build")
//-------------------- Vérifier les programmes d'exemple
  runCommand (DISTRIBUTION_DIR + "/galgas-dev-master/sample_code/-build-all-macosx.command", [])
  runCommand ("/bin/rm", ["-fr", DISTRIBUTION_DIR + "/galgas-dev-master/sample_code"])
//-------------------- Exécuter les tests
  runCommand (DISTRIBUTION_DIR + "/galgas-dev-master/testsuite/_run_testsuite.command", [])
  runCommand ("/bin/rm", ["-fr", DISTRIBUTION_DIR + "/galgas-dev-master/testsuite"])
//-------------------- Vérifier la création de projet
  runCommand (DISTRIBUTION_DIR + "/galgas-dev-master/-verifier-create-galgas.command", [])
//-------------------- Construire la documentation Latex
  let latexDir = DISTRIBUTION_DIR + "/galgas-dev-master/galgas-documentation-latex-sources"
  let directoryEnumerator = fm.enumerator (atPath: latexDir)
  while let filename = directoryEnumerator?.nextObject () as? String {
    if filename.hasSuffix (".tex") {
      remplacerAnneeEtVersionGALGAS (ANNÉE, VERSION_GALGAS, file: latexDir + "/" + filename)
    }
  }
  runCommand (latexDir + "/-build.command", [])
  runCommand ("/bin/cp", [latexDir + "/galgas-book.pdf", "galgas-\(VERSION_GALGAS).pdf"])
  runCommand ("/bin/rm", ["-fr", latexDir])
//-------------------- Créer le répertoire rtecevant les outils ligne de commande
  let cliToolsDir = DISTRIBUTION_DIR + "/galgas-\(VERSION_GALGAS)-tools"
  runCommand ("/bin/mkdir", [cliToolsDir])
//-------------------- Créer l'archive de l'executable osx (release et debug)
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR + "/galgas-dev-master/makefile-macosx")
  runCommand ("/usr/local/bin/python", ["build.py"])
  runCommand ("/usr/bin/bzip2", ["-9", "galgas"])
  runCommand ("/usr/bin/bzip2", ["-9", "galgas-debug"])
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR)
  runCommand ("/bin/mv", [DISTRIBUTION_DIR + "/galgas-dev-master/makefile-macosx/galgas.bz2", cliToolsDir + "/galgas.osx.bz2"])
  runCommand ("/bin/mv", [DISTRIBUTION_DIR + "/galgas-dev-master/makefile-macosx/galgas-debug.bz2", cliToolsDir + "/galgas-debug.osx.bz2"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/makefile-macosx"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/build/cli-objects"])
//-------------------- Creer l'archive de l'executable windows (release et debug)
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR + "/galgas-dev-master/makefile-win32-on-macosx")
  runCommand ("/usr/local/bin/python", ["build.py"])
  runCommand ("/usr/bin/bzip2", ["-9", "galgas.exe"])
  runCommand ("/usr/bin/bzip2", ["-9", "galgas-debug.exe"])
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR)
  runCommand ("/bin/mv", [DISTRIBUTION_DIR + "/galgas-dev-master/makefile-win32-on-macosx/galgas.exe.bz2", cliToolsDir + "/galgas.exe.bz2"])
  runCommand ("/bin/mv", [DISTRIBUTION_DIR + "/galgas-dev-master/makefile-win32-on-macosx/galgas-debug.exe.bz2", cliToolsDir + "/galgas-debug.exe.bz2"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/makefile-win32-on-macosx"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/build/cli-objects"])
//-------------------- Creer l'archive de l'executable x86 linux 32 (release et debug)
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR + "/galgas-dev-master/makefile-x86linux32-on-macosx")
  runCommand ("/usr/local/bin/python", ["build.py"])
  runCommand ("/usr/bin/zip", ["-9", "galgas.zip", "galgas"])
  runCommand ("/usr/bin/zip", ["-9", "galgas-debug.zip", "galgas-debug"])
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR)
  runCommand ("/bin/mv", [DISTRIBUTION_DIR + "/galgas-dev-master/makefile-x86linux32-on-macosx/galgas.zip", cliToolsDir + "/galgas-x86-linux32.zip"])
  runCommand ("/bin/mv", [DISTRIBUTION_DIR + "/galgas-dev-master/makefile-x86linux32-on-macosx/galgas-debug.zip", cliToolsDir + "/galgas-debug-x86-linux32.zip"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/makefile-x86linux32-on-macosx"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/build/cli-objects"])
//-------------------- Creer l'archive de l'executable x86 linux 64 (release et debug)
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR + "/galgas-dev-master/makefile-x86linux64-on-macosx")
  runCommand ("/usr/local/bin/python", ["build.py"])
  runCommand ("/usr/bin/zip", ["-9", "galgas.zip", "galgas"])
  runCommand ("/usr/bin/zip", ["-9", "galgas-debug.zip", "galgas-debug"])
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR)
  runCommand ("/bin/mv", [DISTRIBUTION_DIR + "/galgas-dev-master/makefile-x86linux64-on-macosx/galgas.zip", cliToolsDir + "/galgas-x86-linux64.zip"])
  runCommand ("/bin/mv", [ DISTRIBUTION_DIR + "/galgas-dev-master/makefile-x86linux64-on-macosx/galgas-debug.zip", cliToolsDir + "/galgas-debug-x86-linux64.zip"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/makefile-x86linux64-on-macosx"])
  runCommand ("/bin/rm", ["-fr", "galgas-dev-master/build/cli-objects"])
//-------------------- Compiler le projet Xcode
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR + "/galgas-dev-master/project-xcode-galgas")
  runCommand ("/bin/rm", ["-fr", "build"])
  runCommand ("/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild", ["-target", "GALGAS Cocoa"])
  let PRODUCT_NAME : String
  switch BUILD_KIND {
  case .debug :
    PRODUCT_NAME = "galgas-Debug"
  case .release:
    PRODUCT_NAME = "galgas"
  }
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR + "/galgas-dev-master")
//-------------------- Vérifier GMP
  runCommand (DISTRIBUTION_DIR + "/galgas-dev-master/project-xcode-galgas/build-developer-v3/Default/galgas", ["--check-gmp"])
  runCommand (DISTRIBUTION_DIR + "/galgas-dev-master/project-xcode-galgas/build-developer-v3/Default/galgas-debug", ["--check-gmp"])
  //-------------------- Construction package
  let packageFile = PRODUCT_NAME + "-" + VERSION_GALGAS + ".pkg"
  runCommand ("/usr/bin/productbuild", ["--component-compression", "auto", "--component", "project-xcode-galgas/build-developer-v3/Default/cocoaGalgas.app", "/Applications", packageFile])
  runCommand ("/bin/cp", [packageFile, DISTRIBUTION_DIR])
  //-------------------- Créer l'archive de Cocoa canari
  let nomArchive = PRODUCT_NAME + "-" + VERSION_GALGAS
  runCommand ("/bin/mkdir", [nomArchive])
  runCommand ("/bin/cp", [packageFile, nomArchive])
  runCommand ("/usr/bin/hdiutil", ["create", "-srcfolder", nomArchive, nomArchive + ".dmg", "-fs", "HFS+"])
  runCommand ("/bin/mv", [nomArchive + ".dmg", "../" + nomArchive + ".dmg"])
  //-------------------- Supprimer le fichier .pkg
  runCommand ("/bin/rm", [DISTRIBUTION_DIR + "/" + packageFile])
  //-------------------- Calculer la clé de la somme de contrôle de l'archive DMG pour Sparkle
  let signature = runHiddenCommand ("./distribution-galgas-sign-update/sign_update", ["../" + nomArchive + ".dmg"])
  // print ("cleArchive '\(signature)'")
  var edSignature = ""
  var dmgLength = ""
  var ok = false
  let c1 = signature.components (separatedBy: "sparkle:edSignature=\"")
  if (c1.count == 2) && (c1 [0] == "") {
    let c2 = c1 [1].components (separatedBy: "\" length=\"")
    if c2.count == 2 {
      edSignature = c2 [0]
      let c3 = c2 [1].components (separatedBy: "\"\n")
      if c3.count == 2 {
        dmgLength = c3 [0]
        ok = true
      }
    }
  }
  if ok {
    print ("edSignature: \(edSignature) ")
    print ("length: \(dmgLength) ")
  }else{
    print (RED + "Error line \(#line)" + ENDC)
    exit (1)
  }
  //-------------------- Construire le fichier json
  var versionDescriptor = VersionDescriptor ()
  versionDescriptor.edSignature = edSignature
  versionDescriptor.length = dmgLength
  versionDescriptor.build = "" // buildString
  versionDescriptor.notes = NOTES
  versionDescriptor.bugfixes = BUGFIXES
  versionDescriptor.changes = CHANGES
  versionDescriptor.news = NEWS
  versionDescriptor.date = ISO8601DateFormatter ().string (from: Date ())
  let encoder = JSONEncoder ()
  encoder.outputFormatting = .prettyPrinted
  let jsonData = try encoder.encode (versionDescriptor)
  let nomJSON = DISTRIBUTION_DIR + "/" + PRODUCT_NAME + "-" + VERSION_GALGAS + ".json"
  try jsonData.write (to: URL (fileURLWithPath: nomJSON), options: .atomic)
//--- Vérifier la signature
  runCommand ("/usr/bin/codesign", ["-dv", "--verbose=4", DISTRIBUTION_DIR + "/galgas-dev-master/project-xcode-galgas/build-developer-v3/Default/cocoaGalgas.app"])
//--- Supprimer les répertoires intermédiaires
  fm.changeCurrentDirectoryPath (DISTRIBUTION_DIR)
  while fm.fileExists (atPath: DISTRIBUTION_DIR + "/galgas-dev-master") {
    runCommand ("/bin/rm", ["-fr", DISTRIBUTION_DIR + "/galgas-dev-master"])
  }
  //---
  let duréeConstruction = Date ().timeIntervalSince (débutConstruction)
  let durée = Int (duréeConstruction)
  print ("Durée de compilation : \(durée / 60) min \(durée % 60) s")

//--------------------------------------------------------------------------------------------------
