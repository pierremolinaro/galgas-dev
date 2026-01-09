//
//  ProjectDocumentView+compile.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 08/01/2026.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

@Observable final class ProjectCompiler {

  private var mIsCompilingProject = false
  var isCompilingProject : Bool { self.mIsCompilingProject }

  var mCompileLog : IdentifiableAttributedString = IdentifiableAttributedString (string: AttributedString ("... compile log..."))
//  @ObservationTracked var compileLog : NSAttributedString { self.mCompileLog }
//  @Published private var mCompileLog : String = ""
//  @ObservationTracked var compileLog : String { self.mCompileLog }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mProcess : Process? = nil
  private var mProcessOutputPipe : Pipe? = nil
  private var mResultData = Data ()
  private var mBuildHasBeenAborted = false
  private var mBuildOutputCurrentColor = NSColor.black
  private var mBuildOutputIsBold : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func compile (projectURL inProjectURL : URL) {
    self.mIsCompilingProject = true
    self.mCompileLog = IdentifiableAttributedString (string: AttributedString ("compile "))
    self.appendToLog (string: "project")
    self.mBuildHasBeenAborted = false
    self.mBuildOutputCurrentColor = .black
//    SWIFT_DocumentController.mySaveAllDocuments ()
//    self.mResultData.removeAll (keepingCapacity: true)
//    _ = self.mBuildButton.set (enabled: false)
//    self.mProgressIndicator.startAnimation ()
//    self.mAbortButton.setHidden (false)
//    self.mIssueArray.removeAll (keepingCapacity: true)
//    self.mBuildLogTextViewRuler.setIssueArray ([])
//    for document in SWIFT_DocumentController.myDocuments () {
//      document.removeAllIssues ()
//    }
//    self.mBuildLogTextView.clear ()
//    _ = self.mBuildLogTextView.setFont (self.mBuildWindowFont.propval)
//    self.mInspectorTabView.selectTab (atIndex: 1)
//    self.mCurrentBuildOutputColor = .black
//    self.mBuildHasBeenAborted = false
//    self.mWarningCount = 0
//    self.mErrorCount = 0
//    self.mWarningCountTextField.setHidden (true)
//    self.mErrorCountTextField.setHidden (true)
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
    process.launch ()
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
        if self.mBuildHasBeenAborted {
          self.appendToLog (string: "Aborted.")
        }else{
          self.appendToLog (string: "Done.")
        }
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
//    self.mBuildButton.setHidden (false)
//    _ = self.mBuildButton.set (enabled: true)
//    self.mAbortButton.setHidden (true)
//    self.mProgressIndicator.stopAnimation ()
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
        self.appendToLog (string:  str)
//        self.mCompileLog.append (NSAttributedString (string: str, attributes: [.foregroundColor : NSColor.systemRed]))
//        self.mCompileLog.appendMessageString (str, color: .systemRed, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("green:") {
        let str = String (string.dropFirst ("green:".count))
        self.appendToLog (string:  str)
//        self.mCompileLog.append (NSAttributedString (string: str, attributes: [.foregroundColor : NSColor (calibratedRed: 0.0, green: 0.5, blue: 0.0, alpha: 1.0)]))
//        self.mBuildLogTextView.appendMessageString (str, color: NSColor (calibratedRed: 0.0, green: 0.5, blue: 0.0, alpha: 1.0), bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("magenta:") {
        let str = String (string.dropFirst ("magenta:".count))
        self.appendToLog (string:  str)
//        self.mCompileLog.append (NSAttributedString (string: str, attributes: [.foregroundColor : NSColor.magenta]))
//        self.mBuildLogTextView.appendMessageString (str, color: .magenta, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("orange:") {
        let str = String (string.dropFirst ("orange:".count))
        self.appendToLog (string:  str)
//        self.mCompileLog.append (NSAttributedString (string: str, attributes: [.foregroundColor : NSColor.orange]))
//        self.mBuildLogTextView.appendMessageString (str, color: .systemOrange, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("blue:") {
        let str = String (string.dropFirst ("blue:".count))
        self.appendToLog (string:  str)
//        self.mCompileLog.append (NSAttributedString (string: str, attributes: [.foregroundColor : NSColor.blue]))
//        self.mBuildLogTextView.appendMessageString (str, color: .systemBlue, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("json:") {
        let str = String (string.dropFirst ("json:".count))
//        let locationInBuildTextView = (self.mCompileLog.string as NSString).length
//        self.appendIssue (jsonString: str, locationInBuildTextView)
      }else{
        var str = string
        var displayString = ""
        var loop = true
        while loop {
          if str.hasPrefix ("\u{1B}[") {
//            self.mCompileLog.appendMessageString (displayString, color: self.mBuildOutputCurrentColor, bold: self.mBuildOutputIsBold)
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
        self.appendToLog (string: displayString)
//        self.mCompileLog.appendMessageString (displayString, color: self.mBuildOutputCurrentColor, bold: self.mBuildOutputIsBold)
      }
    }else{
//      self.mCompileLog.appendMessageString ("<<invalid output>>\n", color: self.mCurrentBuildOutputColor, bold: true)
    }
//    self.mCompileLog.scrollToEndOfText ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendToLog (string inString : String) {
//    self.mCompileLog = self.mCompileLog + AttributedString (inString)
//    let mat = NSMutableAttributedString (self.mCompileLog)
//    mat.append (NSAttributedString (string: inString))
//    self.mCompileLog = AttributedString (mat)
    let s = self.mCompileLog.string + AttributedString (inString)
    self.mCompileLog = IdentifiableAttributedString (string: s)
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
