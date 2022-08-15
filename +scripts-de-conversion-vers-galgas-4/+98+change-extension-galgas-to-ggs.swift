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

let fm = FileManager ()
//-------------------- Get script absolute path
let scriptDir = URL (fileURLWithPath: CommandLine.arguments [0]).deletingLastPathComponent ().path
print (BOLD_BLUE + "Inventaire des projets galgas dans \(scriptDir)…" + ENDC)
//--- Énumérer les fichiers galgas
let directoryEnumerator = fm.enumerator (atPath: scriptDir)
var galgasFiles = [String] ()
while let file = directoryEnumerator?.nextObject () as? String {
  if file.hasSuffix (".galgas") {
    let path = scriptDir.appending("/\(file)")
    galgasFiles.append (path)
    print ("  found \(path)")
  }
}
print (BOLD_BLUE + "\(galgasFiles.count) fichiers" + ENDC)
for f in galgasFiles {
  let srcURL = URL (fileURLWithPath: f)
  let tgtUTL = srcURL.deletingPathExtension ().appendingPathExtension ("ggs")
  try! fm.moveItem (at: srcURL, to: tgtUTL)
  print ("  \(srcURL) --> \(tgtUTL)")
}
print (BOLD_BLUE + "Fait !" + ENDC)

//--------------------------------------------------------------------------------------------------
