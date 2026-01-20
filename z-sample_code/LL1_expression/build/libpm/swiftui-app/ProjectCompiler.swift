//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 08/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

final class ProjectCompiler : ObservableObject  {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published private var mIsCompilingProject = false
  @ObservationTracked var isCompilingProject : Bool { self.mIsCompilingProject }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published private var mCompileLog : NSAttributedString = NSAttributedString ()
  @ObservationTracked var compileLog : NSAttributedString { self.mCompileLog }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published private var mErrorCount = 0
  @ObservationTracked var errorCount : Int { self.mErrorCount }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published private var mWarningCount = 0
  @ObservationTracked var warningCount : Int { self.mWarningCount }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mFont = NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
  private var mProcess : Process? = nil
  private var mProcessOutputPipe : Pipe? = nil
  private var mResultData = Data ()
  private var mBuildHasBeenAborted = false
  private var mBuildOutputCurrentColor = NSColor.black
  private var mBuildOutputIsBold : Bool = false
  private var mAppendIssueCallBack : ((CompilationIssue) -> Void)? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func compile (projectURL inProjectURL : URL,
                appendIssueCallBack inAppendIssueCallBack : @escaping (CompilationIssue) -> Void ) {
    self.mIsCompilingProject = true
    self.mAppendIssueCallBack = inAppendIssueCallBack
    self.mCompileLog = NSAttributedString ("")
    self.mBuildHasBeenAborted = false
    self.mBuildOutputCurrentColor = .black
    self.mErrorCount = 0
    self.mWarningCount = 0
 //--- Create task
    let process = Process ()
    self.mProcess = process
  //--- Command and arguments
    let commandLineToolInvocation : CommandLineToolInvocation = commandLineToolInvocation ()
    process.executableURL = commandLineToolInvocation.tool
    process.arguments = commandLineToolInvocation.arguments + [inProjectURL.path, "--swift-app-json-output"]
  //--- Set standard output notification
    let pipe = Pipe ()
    self.mProcessOutputPipe = pipe
    process.standardOutput = pipe
    process.standardError = pipe
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (Self.getDataFromTaskOutput(_:)),
      name: FileHandle.readCompletionNotification,
      object: pipe.fileHandleForReading
    )
    pipe.fileHandleForReading.readInBackgroundAndNotify ()
  //---
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (Self.taskDidTerminate (_:)),
      name: Process.didTerminateNotification,
      object: process
    )
  //--- Start process
    try? process.run ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func getDataFromTaskOutput (_ inNotification : NSNotification) {
    if let dictionary = inNotification.userInfo as? [String : Any],
       let data = dictionary [NSFileHandleNotificationDataItem] as? Data,
       let fileHandle = inNotification.object as? FileHandle {
      if !data.isEmpty {
        self.appendBuildOutputData (data)
        fileHandle.readInBackgroundAndNotify ()
      }else{
        NotificationCenter.default.removeObserver (
          self,
          name: FileHandle.readCompletionNotification,
          object: self.mProcessOutputPipe?.fileHandleForReading
        )
        self.mProcessOutputPipe?.fileHandleForReading.closeFile ()
        self.mProcessOutputPipe = nil
        self.appendMessageString (
          string: self.mBuildHasBeenAborted ? "Aborted." : "Done.",
          color: .systemBlue,
          bold: true
        )
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func taskDidTerminate (_ inNotification : NSNotification) {
    if let process = self.mProcess {
      NotificationCenter.default.removeObserver (
        self,
        name: Process.didTerminateNotification,
        object: process
      )
      self.mProcess = nil
    }
    self.mIsCompilingProject = false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

 func cancelCompilation () {
    self.mBuildHasBeenAborted = true
    self.mProcess?.terminate ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendBuildOutputData (_ inData : Data) {
    self.mResultData.append (inData)
    var loop = true
    while loop {
    //--- Look for first line feed
      let endIndex = self.mResultData.endIndex
      var idx = self.mResultData.startIndex
      var ok = false
      while !ok, idx < endIndex {
        ok = self.mResultData [idx] == ASCII.lineFeed.rawValue
        idx += 1
      }
      if !ok {
        loop = false
      }else{
        let data = self.mResultData [self.mResultData.startIndex ..< idx]
        self.processBuildOutputString (data)
        self.mResultData.removeSubrange (self.mResultData.startIndex ..< idx)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func processBuildOutputString (_ inData : Data) {
    if let string = String (data: inData, encoding: .utf8) {
      if string.hasPrefix ("red:") {
        let str = String (string.dropFirst ("red:".count))
        self.appendMessageString (string: str, color: .systemRed, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("green:") {
        let str = String (string.dropFirst ("green:".count))
        self.appendMessageString (string: str, color: NSColor (calibratedRed: 0.0, green: 0.5, blue: 0.0, alpha: 1.0), bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("magenta:") {
        let str = String (string.dropFirst ("magenta:".count))
        self.appendMessageString (string: str, color: .magenta, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("orange:") {
        let str = String (string.dropFirst ("orange:".count))
        self.appendMessageString (string: str, color: .systemOrange, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("blue:") {
        let str = String (string.dropFirst ("blue:".count))
        self.appendMessageString (string: str, color: .systemBlue, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("json:") {
        let str = String (string.dropFirst ("json:".count))
        self.appendIssue (jsonString: str)
      }else{
        var str = string
        var displayString = ""
        var loop = true
        while loop {
          if str.hasPrefix ("\u{1B}[") {
            self.appendMessageString (string: displayString, color: self.mBuildOutputCurrentColor, bold: self.mBuildOutputIsBold)
            displayString = ""
            str = String (str.dropFirst ("\u{1B}[".count))
            if str.hasPrefix ("30m") {
              str = String (str.dropFirst ("30m".count))
              self.mBuildOutputCurrentColor = .black
            }else if str.hasPrefix ("31m") {
              str = String (str.dropFirst ("31m".count))
              self.mBuildOutputCurrentColor = .systemRed
            }else if str.hasPrefix ("32m") {
              str = String (str.dropFirst ("32m".count))
              self.mBuildOutputCurrentColor = .systemGreen
            }else if str.hasPrefix ("33m") {
              str = String (str.dropFirst ("33m".count))
              self.mBuildOutputCurrentColor = .systemYellow
            }else if str.hasPrefix ("34m") {
              str = String (str.dropFirst ("34m".count))
              self.mBuildOutputCurrentColor = .systemBlue
            }else if str.hasPrefix ("35m") {
              str = String (str.dropFirst ("35m".count))
              self.mBuildOutputCurrentColor = .magenta
            }else if str.hasPrefix ("36m") {
              str = String (str.dropFirst ("36m".count))
              self.mBuildOutputCurrentColor = .cyan
            }else if str.hasPrefix ("0m") {
              str = String (str.dropFirst ("0m".count))
              self.mBuildOutputCurrentColor = .black
              self.mBuildOutputIsBold = false
            }else if str.hasPrefix ("1m") {
              str = String (str.dropFirst ("1m".count))
              self.mBuildOutputIsBold = true
            }else{
              self.mBuildOutputCurrentColor = .black
            }
          }else if !str.isEmpty {
            let c = str.removeFirst ()
            displayString.append (c)
          }else{
            loop = false
          }
        }
        self.appendMessageString (
          string: displayString,
          color: self.mBuildOutputCurrentColor,
          bold: self.mBuildOutputIsBold
        )
      }
    }else{
      self.appendMessageString (
        string: "<<invalid output>>\n",
        color: self.mBuildOutputCurrentColor,
        bold: true
      )
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendIssue (jsonString inString : String) {
    if let issue = CompilationIssue (jsonString: inString) {
      self.appendMessageString (
        string: "\(issue.fileURL.path):\(issue.mLine):\(issue.mStartColumn)\n",
        color: issue.color,
        bold: true
     )
      for str in issue.messageArray {
        self.appendMessageString (string: str + "\n", color: issue.color, bold: true)
      }
      for fixit in issue.fixitArray {
        self.appendMessageString (string: "  " + fixit.messageString + "\n", color: .systemBrown, bold: false)
      }
    //--- Note issue on user interface
      self.mAppendIssueCallBack? (issue)
      switch issue.kind {
      case .warning :
        self.mWarningCount += 1
      case .error :
        self.mErrorCount += 1
      }
    }else{
      self.appendMessageString (string: "<<invalid json \(inString)>>\n", color: .systemRed, bold: true)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendToLog (string inString : String) {
    let mat = NSMutableAttributedString (attributedString: self.mCompileLog)
    mat.append (NSAttributedString (string: inString, attributes: [.font : self.mFont]))
    self.mCompileLog = NSAttributedString (attributedString: mat)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendMessageString (string inString : String,
                                    color inColor : NSColor,
                                    bold inBold : Bool) {
    var font = self.mFont
    if inBold {
      let fontManager = NSFontManager.shared
      font = fontManager.convert (font, toHaveTrait: .boldFontMask)
    }
    let mat = NSMutableAttributedString (attributedString: self.mCompileLog)
    mat.append (NSAttributedString (string: inString, attributes: [.font : font, .foregroundColor : inColor]))
    self.mCompileLog = NSAttributedString (attributedString: mat)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct CompilerTool : Identifiable {
  let id : Int
  let url : URL
}

//--------------------------------------------------------------------------------------------------

@MainActor func compilerTools () -> [CompilerTool] {
  var result = [CompilerTool] ()
  let resourcePath = Bundle.main.resourcePath!
  let fm = FileManager ()
  let contentArray = try! fm.contentsOfDirectory (atPath: resourcePath)
  for path in contentArray {
    let url = URL (fileURLWithPath: path)
    if url.pathExtension.isEmpty {
      let tool = CompilerTool (
        id: result.count,
        url: URL (fileURLWithPath: resourcePath + "/" + path)
      )
      result.append (tool)
    }
  }
  return result
}

//--------------------------------------------------------------------------------------------------
