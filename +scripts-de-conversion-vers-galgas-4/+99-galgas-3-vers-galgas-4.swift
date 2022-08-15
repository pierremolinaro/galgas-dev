#! /usr/bin/swift

//--------------------------------------------------------------------------------------------------

import Foundation

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

//--------------------------------------------------------------------------------------------------

func erreurSyntaxeRemplacement (errorMessageLines inLines : [String],
                                semanticErrorMessage inSemanticErrorMessage : String,
                                replacementString inReplacementString : String,
                                handled ioHandled : inout Bool) {
  var lineIndex = 0
  var found = false
  while (lineIndex < (inLines.count - 1)) && !found {
    found = inLines [lineIndex].hasPrefix ("semantic error #1: " + inSemanticErrorMessage)
    lineIndex += 1
  }
  if found {
    let errorMessageLine = inLines [lineIndex - 2]
    print ("  Message : '\(errorMessageLine)'")
    let c = errorMessageLine.components (separatedBy: ":")
    assert (c.count == 5)
    let fichier = c [0]
    let ligne = Int (c [1])!
    let premierCaractère = Int (c[2])! - 1
    let dernierCaractère = Int (c[3])! - 1
    print (BOLD_BLUE + "  Erreur détectée : ligne \(ligne), premier caractère \(premierCaractère), dernier \(dernierCaractère)" + ENDC)
    let contents = try! String (contentsOf: URL (fileURLWithPath: fichier), encoding: .utf8)
    var lignesDuFichier = contents.components (separatedBy: "\n")
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère + 1)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + inReplacementString + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
    let newContents = lignesDuFichier.joined (separator: "\n")
    let data : Data = newContents.data (using: .utf8, allowLossyConversion: false)!
    try! data.write (to: URL (fileURLWithPath: fichier), options: .atomic)
    ioHandled = true
  }
}

//--------------------------------------------------------------------------------------------------

func erreurSyntaxeInsérerChaîne (errorMessageLines inLines : [String],
                                 chaîneAttendue inExpectedString : String,
                                 handled ioHandled : inout Bool) {
  var lineIndex = 0
  var found = false
  var informativeLineIndex = 0
  while (lineIndex < inLines.count) && !found {
    found = inLines [lineIndex].hasPrefix ("syntax error #1: found ")
    informativeLineIndex = lineIndex - 1
    lineIndex += 1
  }
  if found {
    found = false
    while (lineIndex < inLines.count) && !found {
      found = inLines [lineIndex].hasPrefix ("-  the '\(inExpectedString)' delimitor")
      lineIndex += 1
    }
  }
  if found {
    found = false
    while (lineIndex < inLines.count) && !found {
      found = inLines [lineIndex].hasPrefix ("Previous token end location:")
      lineIndex += 1
    }
  }
  if found {
    let informativeLine = inLines [informativeLineIndex]
    print ("  Informative error message line : '\(informativeLine)'")
    var c = informativeLine.components (separatedBy: ":")
    assert (c.count == 5)
    let fichier = c [0]
    let errorMessageLine = inLines [lineIndex - 1]
    print ("  Previous token end location message line : '\(errorMessageLine)'")
    c = errorMessageLine.components (separatedBy: ":")
    assert (c.count == 3)
    let ligne = Int (c [1])!
    let dernierCaractère = Int (c[2])!
    print (BOLD_BLUE + "  Erreur détectée : ligne \(ligne), caractère \(dernierCaractère)" + ENDC)
    let contents = try! String (contentsOf: URL (fileURLWithPath: fichier), encoding: .utf8)
    var lignesDuFichier = contents.components (separatedBy: "\n")
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - dernierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (dernierCaractère)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + inExpectedString + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
    let newContents = lignesDuFichier.joined (separator: "\n")
    let data : Data = newContents.data (using: .utf8, allowLossyConversion: false)!
    try! data.write (to: URL (fileURLWithPath: fichier), options: .atomic)
    ioHandled = true
  }
}

//--------------------------------------------------------------------------------------------------

func traduire (projetGALGAS inCheminFichierGALGAS : String) -> (Bool, Int) {
  let débutConstruction = Date ()
//-------------------- Chemin absolu vers projet galgas
  print ("projetGALGAS \(inCheminFichierGALGAS)")
//-------------------- Compiler
  var ok = false
  var loop = true
  var nombreModifications = 0
  while loop {
    print (String (repeating: "-", count: 79))
    let (s, status) = runHiddenCommand ("/usr/local/bin/galgas", ["--no-color", "--max-errors=1", "--max-warnings=1", inCheminFichierGALGAS])
    if status == 0 {
      print (BOLD_GREEN + "Succès !" + ENDC)
      loop = false
      ok = true
    }else if status == 1 {
      let lines = s.components (separatedBy: "\n")
      var handled = false
      erreurSyntaxeInsérerChaîne (errorMessageLines: lines, chaîneAttendue: "(", handled: &handled)
      if !handled {
        erreurSyntaxeInsérerChaîne (errorMessageLines: lines, chaîneAttendue: ")", handled: &handled)
      }
      if !handled {
        erreurSyntaxeRemplacement (errorMessageLines: lines, semanticErrorMessage: "'{' is obsolete here, use '('", replacementString: "(", handled: &handled)
      }
      if !handled {
        erreurSyntaxeRemplacement (errorMessageLines: lines, semanticErrorMessage: "'}' is obsolete here, use ')'", replacementString: ")", handled: &handled)
      }
      if handled {
        nombreModifications += 1
        print ("Nombre modifications: \(nombreModifications)")
      }else{
        print (CYAN + s + ENDC)
        print (BOLD_RED + "Erreur non gérée" + ENDC)
        loop = false
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

//--------------------------------------------------------------------------------------------------

let fm = FileManager ()
//-------------------- Get script absolute path
let scriptDir = URL (fileURLWithPath: CommandLine.arguments [0]).deletingLastPathComponent ().path
print (BOLD_BLUE + "Inventaire des projets galgas dans \(scriptDir)…" + ENDC)
//--- Énumérer les fichiers galgas
let directoryEnumerator = fm.enumerator (atPath: scriptDir)
var galgasProjectFiles = [String] ()
while let file = directoryEnumerator?.nextObject () as? String {
  if file.hasSuffix (".galgasProject") {
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

//--------------------------------------------------------------------------------------------------
