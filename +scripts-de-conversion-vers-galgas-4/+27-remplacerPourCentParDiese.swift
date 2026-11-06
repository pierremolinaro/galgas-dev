#! /usr/bin/swift
//----------------------------------------------------------------------------------------

import Foundation

//----------------------------------------------------------------------------------------
//   FOR PRINTING IN COLOR
//----------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------
//   runCommand
//----------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------
//   runHiddenCommand
//----------------------------------------------------------------------------------------

func runHiddenCommand (_ cmd : String, _ args : [String]) -> (String, Int32) {
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
  return (String (data: data, encoding: .utf8)!, status)
}

//----------------------------------------------------------------------------------------

extension String {
  var containsOnlySpaces : Bool {
    var s = self
    while !s.isEmpty {
      let c = s.removeLast ()
      if c != " " {
        return false
      }
    }
    return true
  }

}

//----------------------------------------------------------------------------------------

protocol Correcteur : AnyObject {
  var messageErreur : Set <String> { get }
  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int)
}

//----------------------------------------------------------------------------------------

class RemplacerPourCentParDiese : Correcteur {
  var messageErreur : Set <String> { ["lexical error #1: Unknown character: PERCENT SIGN (Unicode 0x25)"] }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    suffixe.removeFirst (1) // Remove "?"
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "#" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

class TerminalNonDéclaré : Correcteur {
  var messageErreur : Set <String> { [
    "semantic error #1: the '%applicationBundleBase' terminal is not declared",
    "semantic error #1: the '%clonable' terminal is not declared",
    "semantic error #1: the '%codeblocks-linux32' terminal is not declared",
    "semantic error #1: the '%codeblocks-linux64' terminal is not declared",
    "semantic error #1: the '%codeblocks-windows' terminal is not declared",
    "semantic error #1: the '%comparable' terminal is not declared",
    "semantic error #1: the '%equatable' terminal is not declared",
    "semantic error #1: the '%errorMessage' terminal is not declared",
    "semantic error #1: the '%from' terminal is not declared",
    "semantic error #1: the '%generatedInSeparateFile' terminal is not declared",
    "semantic error #1: the '%initArgLabel' terminal is not declared",
    "semantic error #1: the '%insertAfter' terminal is not declared",
    "semantic error #1: the '%insertBefore' terminal is not declared",
    "semantic error #1: the '%insertOrReplaceSetter' terminal is not declared",
    "semantic error #1: the '%insertSetter' terminal is not declared",
    "semantic error #1: the '%libpmAtPath' terminal is not declared",
    "semantic error #1: the '%macCodeSign' terminal is not declared",
    "semantic error #1: the '%makefile-macosx' terminal is not declared",
    "semantic error #1: the '%makefile-unix' terminal is not declared",
    "semantic error #1: the '%makefile-x86linux32-on-macosx' terminal is not declared",
    "semantic error #1: the '%makefile-x86linux64-on-macosx' terminal is not declared",
    "semantic error #1: the '%makefile-arm64-linux-on-macosx' terminal is not declared",
    "semantic error #1: the '%makefile-win32-on-macosx' terminal is not declared",
    "semantic error #1: the '%MacSwiftApp' terminal is not declared",
    "semantic error #1: the '%nonAtomicSelection' terminal is not declared",
    "semantic error #1: the '%once' terminal is not declared",
    "semantic error #1: the '%preserved' terminal is not declared",
    "semantic error #1: the '%quietOutputByDefault' terminal is not declared",
    "semantic error #1: the '%replaceBy' terminal is not declared",
    "semantic error #1: the '%remove' terminal is not declared",
    "semantic error #1: the '%removeSetter' terminal is not declared",
    "semantic error #1: the '%replaceSetter' terminal is not declared",
    "semantic error #1: the '%searchMethod' terminal is not declared",
    "semantic error #1: the '%searchSubscript' terminal is not declared",
    "semantic error #1: the '%searchString' terminal is not declared",
    "semantic error #1: the '%templateEndMark' terminal is not declared",
    "semantic error #1: the '%templateReplacement' terminal is not declared",
    "semantic error #1: the '%translate' terminal is not declared",
    "semantic error #1: the '%usefull' terminal is not declared",
  ] }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    suffixe.removeFirst (2) // Remove "$%"
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "$#" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

  func traduire (projetGALGAS inCheminFichierGALGAS : String) -> (Bool, Int) {
    let correcteurs : [Correcteur] = [
      RemplacerPourCentParDiese (),
      TerminalNonDéclaré ()
    ]
    let débutConstruction = Date ()
  //-------------------- Chemin absolu vers projet galgas
    print ("projetGALGAS \(inCheminFichierGALGAS)")
  //-------------------- Compiler
    var ok = false
    var loop = true
    var nombreModifications = 0
    while loop {
      print (String (repeating: "-", count: 79))
      let (s, status) = runHiddenCommand (
        "/usr/local/bin/galgas4",
        ["--no-color", "--max-errors=1", "--max-warnings=1", inCheminFichierGALGAS]
      )
      if status == 0 {
        print (BOLD_GREEN + "Succès !" + ENDC)
        loop = false
        ok = true
      }else if status == 1 {
        print (CYAN + s + ENDC)
        let lines = s.components (separatedBy: "\n")
        var lineIndex = 0
        var indiceCorrecteur = 0
        var found = false
        while (indiceCorrecteur < correcteurs.count) && !found {
          lineIndex = 0
          while (lineIndex < lines.count) && !found {
            found = correcteurs [indiceCorrecteur].messageErreur.contains (lines [lineIndex])
            lineIndex += 1
          }
          if !found {
            indiceCorrecteur += 1
          }
        }
        loop = found
        if !loop {
          print (BOLD_RED + "Erreur non gérée" + ENDC)
        }else{
          let errorMessageLine = lines [lineIndex - 2]
          let c = errorMessageLine.components (separatedBy: ":")
          assert (c.count == 5)
          let fichier = c [0]
          let ligne = Int (c [1])!
          let premierCaractère = Int (c[2])! - 1
          let dernierCaractère = Int (c[3])! - 1
          print (BOLD_BLUE + "  Erreur détectée : ligne \(ligne), premier caractère \(premierCaractère), dernier \(dernierCaractère)" + ENDC)
          let contents = try! String (contentsOf: URL (fileURLWithPath: fichier), encoding: .utf8)
          var lignesDuFichier = contents.components (separatedBy: "\n")
          let referenceLignesDuFichier = lignesDuFichier
          correcteurs [indiceCorrecteur].corriger (&lignesDuFichier, ligne, premierCaractère, dernierCaractère)
          loop = referenceLignesDuFichier != lignesDuFichier
          if loop {
            let newContents = lignesDuFichier.joined (separator: "\n")
            let data : Data = newContents.data (using: .utf8, allowLossyConversion: false)!
            try! data.write (to: URL (fileURLWithPath: fichier), options: .atomic)
            nombreModifications += 1
            print ("Nombre modifications: \(nombreModifications)")
          }
        }
      }else{
        print (BOLD_RED + "Status \(status) non géré" + ENDC)
        loop = false
      }
    }
    let duréeConstruction = Date ().timeIntervalSince (débutConstruction)
    let durée = Int (duréeConstruction)
    print ("Durée : \(durée / 60) min \(durée % 60) s")
    print ("Nombre modifications: \(nombreModifications)")
    return (ok, nombreModifications)
}

//----------------------------------------------------------------------------------------

autoreleasepool {
  let fm = FileManager ()
  //-------------------- Get script absolute path
  let scriptDir = URL (fileURLWithPath: CommandLine.arguments [0]).deletingLastPathComponent ().path
  print (BOLD_BLUE + "Inventaire des 'galgas4project' dans \(scriptDir)…" + ENDC)
  //--- Énumérer les fichiers galgas
  let directoryEnumerator = fm.enumerator (atPath: scriptDir)
  var galgasProjectFiles = [String] ()
  while let file = directoryEnumerator?.nextObject () as? String {
    if file.hasSuffix (".galgas4project") {
      let path = scriptDir.appending("/\(file)")
      galgasProjectFiles.append (path)
      print ("  found \(path)")
    }
  }
  var totalCorrections = 0
  print (BOLD_BLUE + "\(galgasProjectFiles.count) projet(s) à examiner" + ENDC)
  for f in galgasProjectFiles {
    let (ok, nombreModifications) = traduire (projetGALGAS: f)
    totalCorrections += nombreModifications
    if !ok {
      exit (1)
    }
  }
  print (BOLD_BLUE + "Total corrections : \(totalCorrections)" + ENDC)
}

//----------------------------------------------------------------------------------------
