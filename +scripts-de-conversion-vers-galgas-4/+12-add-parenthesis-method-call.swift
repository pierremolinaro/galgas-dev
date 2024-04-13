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

protocol Correcteur : AnyObject {
  var préfixeMessageErreur : String { get }
  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String)
}

//----------------------------------------------------------------------------------------

class InsererOuvertureParentheseAvantSelecteurIn : Correcteur {
  var préfixeMessageErreur : String { "syntax error #1: found the '?' or '?selector:' delimitor, expected:" }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "(" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

class InsererOuvertureParentheseAvantSelecteurInOut : Correcteur {
  var préfixeMessageErreur : String { "syntax error #1: found the '!?' or '!?selector:' delimitor, expected:" }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "(" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

class InsererOuvertureParentheseAvantSelecteurOut : Correcteur {
  var préfixeMessageErreur : String { "syntax error #1: found the '!' or '!selector:' delimitor, expected:" }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "(" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

class InsererOuvertureParentheseAvantIdentificateur : Correcteur {
  var préfixeMessageErreur : String { "syntax error #1: found an identifier, expected:" }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "(" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

class InsererOuvertureParentheseAvantChaine : Correcteur {
  var préfixeMessageErreur : String { "syntax error #1: found a character string constant \"...\", expected:" }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "(" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}
//----------------------------------------------------------------------------------------

class InsererOuvertureParentheseSelf : Correcteur {
  var préfixeMessageErreur : String { "syntax error #1: found the 'self' keyword, expected:" }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (premierCaractère)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + "(" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

class RemplacerFermetureParenthese : Correcteur {
  var préfixeMessageErreur : String { "syntax error #1: found the ']' delimitor, expected:" }

  func corriger (_ lignesDuFichier : inout [String],
                 _ ligne : Int,
                 _ premierCaractère : Int,
                 _ dernierCaractère : Int,
                 _ firstFixItLine : String) {
    let ligneConcernée = lignesDuFichier [ligne - 1]
    print ("  line concernée '\(ligneConcernée)'")
    var préfixe = ligneConcernée
    préfixe.removeLast (ligneConcernée.count - premierCaractère)
    print ("  Préfixe '\(préfixe)'")
    var suffixe = ligneConcernée
    suffixe.removeFirst (dernierCaractère + 1)
    print ("  Suffixe '\(suffixe)'")
    let ligneModifiée = préfixe + ")" + suffixe
    print ("  ligne modifiée '\(ligneModifiée)'")
    lignesDuFichier [ligne - 1] = ligneModifiée
  }

}

//----------------------------------------------------------------------------------------

  func traduire (projetGALGAS inCheminFichierGALGAS : String) -> (Bool, Int) {
    let correcteurs : [Correcteur] = [
      InsererOuvertureParentheseAvantIdentificateur (),
      RemplacerFermetureParenthese (),
      InsererOuvertureParentheseAvantSelecteurIn (),
      InsererOuvertureParentheseAvantSelecteurInOut (),
      InsererOuvertureParentheseAvantSelecteurOut (),
      InsererOuvertureParentheseAvantChaine (),
      InsererOuvertureParentheseSelf ()
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
        "/usr/local/bin/galgas",
        ["--no-color", "--max-errors=1", "--max-warnings=1", inCheminFichierGALGAS]
      )
      if status == 0 {
        print (BOLD_GREEN + "Succès !" + ENDC)
        loop = false
        ok = true
      }else if status == 1 {
        let lines = s.components (separatedBy: "\n")
        var lineIndex = 0
        var indiceCorrecteur = 0
        var found = false
        while (indiceCorrecteur < correcteurs.count) && !found {
          lineIndex = 0
          while (lineIndex < lines.count) && !found {
            found = lines [lineIndex].hasPrefix (correcteurs [indiceCorrecteur].préfixeMessageErreur)
            lineIndex += 1
          }
          if !found {
            indiceCorrecteur += 1
          }
        }
        loop = found
        if !loop {
          print (CYAN + s + ENDC)
          print (BOLD_RED + "Erreur non gérée" + ENDC)
        }else{
          let errorMessageLine = lines [lineIndex - 2]
          let firstFixItLine = lines [lineIndex + 2]
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
          correcteurs [indiceCorrecteur].corriger (&lignesDuFichier, ligne, premierCaractère, dernierCaractère, firstFixItLine)
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

let fm = FileManager ()
//-------------------- Get script absolute path
let scriptDir = URL (fileURLWithPath: CommandLine.arguments [0]).deletingLastPathComponent ().path
print (BOLD_BLUE + "Inventaire des 'ggsproject' dans \(scriptDir)…" + ENDC)
//--- Énumérer les fichiers galgas
let directoryEnumerator = fm.enumerator (atPath: scriptDir)
var galgasProjectFiles = [String] ()
while let file = directoryEnumerator?.nextObject () as? String {
  if file.hasSuffix (".ggsproject") || file.hasSuffix (".galgasproject") || file.hasSuffix (".galgasProject") {
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

//----------------------------------------------------------------------------------------
