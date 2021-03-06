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
  return (String (data: data, encoding: .ascii)!, status)
}

//--------------------------------------------------------------------------------------------------

  let débutConstruction = Date ()
  let fm = FileManager ()
//-------------------- Chemin absolu vers projet galgas
  let projetGALGAS = "/Volumes/dev-svn/galgas-dev/+galgas.galgasProject"
  print ("projetGALGAS \(projetGALGAS)")
//-------------------- Compiler
  var loop = true
  var nombreModifications = 0
  while loop {
    print ("----------------------------------------------------------------------------------------------------------")
    let (s, status) = runHiddenCommand ("/usr/local/bin/galgas", ["-p", "-q", "--no-color", "--max-errors=2", "--max-warnings=10000", projetGALGAS])
    if status == 0 {
      print (BOLD_GREEN + "Succès !" + ENDC)
      loop = false
    }else if status == 1 {
      let lines = s.components (separatedBy: "\n")
      let line1 = lines [0]
      let line2 = lines [1]
      print (line1)
      print (line2)
      loop = line2.hasPrefix ("semantic error #1: the '") && line2.hasSuffix ("' variable is not declared")
      if loop {
        let c = line1.components (separatedBy: ":")
        assert (c.count == 5)
        let fichier = c [0]
        let ligne = Int (c [1])!
        let colonne = Int (c[2])!
        print (BOLD_BLUE + "Erreur détectée dans '\(fichier)', ligne \(ligne), colonne \(colonne)" + ENDC)
        let contents = try! String (contentsOf: URL (fileURLWithPath: fichier))
        var lignesDuFichier = contents.components (separatedBy: "\n")
        var ligneConcernée = lignesDuFichier [ligne - 1]
        print ("line concernée '\(ligneConcernée)'")
        let idx = ligneConcernée.index (ligneConcernée.startIndex, offsetBy: colonne - 1)
        ligneConcernée.insert (contentsOf: "self.", at: idx)
        print ("ligne modifiée '\(ligneConcernée)'")
        lignesDuFichier [ligne - 1] = ligneConcernée
        let newContents = lignesDuFichier.joined (separator: "\n")
        let data : Data = newContents.data (using: .utf8, allowLossyConversion: false)!
        try data.write (to: URL (fileURLWithPath: fichier), options: .atomic)
        nombreModifications += 1
        print ("Nombre modifications: \(nombreModifications)")
      }
    }else{
      print (BOLD_RED + "Status \(status) non géré" + ENDC)
      loop = false
    }
  }
  print ("Nombre modifications: \(nombreModifications)")

//--------------------------------------------------------------------------------------------------
