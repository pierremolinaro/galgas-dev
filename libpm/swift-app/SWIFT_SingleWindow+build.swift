//
//  GGS_SingleWindow-build.swift
//  essai-editeur-texte-swift
//
//  Created by Pierre Molinaro on 10/10/2023.
//
//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

extension GGS_SingleWindow  {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func buildAction (_ inUnusedArg : Any?) {
    GGS_DocumentController.mySaveAllDocuments ()
    self.mResultData.removeAll (keepingCapacity: true)
    self.mBuildButton.isEnabled = false
    self.mAbortButton.isEnabled = true
    self.mBuildOutputTextObserviewView.clear ()
 //--- Create task
    let process = Process ()
    self.mProcess = process
  //--- Command and arguments
    let (command, arguments) = commandLineForBuildProcess ()
    process.executableURL = URL (fileURLWithPath: command)
    let sourceFile = self.mTabArray [0].fileURL!.path
//    Swift.print (sourceFile)
    process.arguments = arguments + [sourceFile, "--cocoa"]
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
      }
    }
  }

 //----------------------------------------------------------------------------------------------------------------------

  @objc private func taskDidTerminate (_ inNotification : NSNotification) {
//    Swift.print ("taskDidTerminate")
    if let process = self.mProcess {
      NotificationCenter.default.removeObserver (
        self,
        name: Process.didTerminateNotification,
        object: process
      )
      self.mProcess = nil
    }
    self.mBuildButton.isEnabled = true
    self.mAbortButton.isEnabled = false
  }

  //----------------------------------------------------------------------------------------------------------------------

  func terminateBuildAction () {
    self.mProcess?.terminate ()
  }

  //----------------------------------------------------------------------------------------------------------------------

  private func appendBuildOutputData (_ inData : Data) {
    self.mResultData.append (inData)
  //--- Look for last line feed
    let startIndex = self.mResultData.startIndex
    var idx = self.mResultData.endIndex
    var ok = false
    while !ok, idx > 0 {
      idx -= 1
      ok = self.mResultData [idx] == ASCII.lineFeed.rawValue
    }
  //--- If found, extract data
    if ok {
      idx += 1
      let data = self.mResultData [startIndex ..< idx]
      if let string = String (data: data, encoding: .utf8) {
        self.processBuildOutputString (string)
        self.mResultData.removeSubrange (startIndex ..< idx)
     //   self.mResultData = self.mResultData.subdata (in: startIndex ..< idx)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func processBuildOutputString (_ inString : String) {
    let messageArray = inString.components (separatedBy: "\u{1B}")
  //--- Enter first component with current attributes
    let at = NSAttributedString (string: messageArray [0], attributes: self.mBuildOutputAttributeDictionary)
    self.mBuildOutputTextObserviewView.appendAttributedString (at)
  //--- Send next components
     var i = 1
     while i < messageArray.count {
       let component = messageArray [i] as NSString
       i += 1
      var idx = 0
      while idx < component.length, component.character (at: idx) == ASCII.leftBracket.rawValue {
        idx += 1
        var code = 0
        while idx < component.length, component.character (at: idx) >= ASCII.zero.rawValue, component.character (at: idx) <= ASCII.nine.rawValue {
          code *= 10
          code += Int (component.character (at: idx)) - Int (ASCII.zero.rawValue)
          idx += 1
        }
        if idx < component.length, component.character (at: idx) == ASCII.m.rawValue {
          idx += 1
        }
        switch code {
        case  0 : self.mBuildOutputAttributeDictionary = [.font : gBuildWindowFont.propval]
        case 30 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.black
        case 31 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.red
        case 32 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor (calibratedRed: 0.0, green:0.5, blue:0.0, alpha:1.0)
        case 33 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.orange
        case 34 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.blue
        case 35 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.magenta
        case 36 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.cyan
        case 37 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.white
        case 40 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.white
        case 41 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.red
        case 42 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor (calibratedRed: 0.0, green:0.5, blue:0.0, alpha:1.0)
        case 43 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.orange
        case 44 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.blue
        case 45 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.magenta
        case 46 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.cyan
        case 47 : self.mBuildOutputAttributeDictionary [.foregroundColor] = NSColor.white
        default: ()
        }
      }
      let s = component.substring (from: idx)
      if !s.isEmpty {
//      if (s.length > 0) {
//        const NSRange r = {mOutputTextView.textStorage.length + outputAttributedString.length, s.length - 1} ;
//        if ([s characterAtIndex:0] == COCOA_WARNING_ID) {
//          s = [s substringFromIndex:1] ;
//          [self
//            enterIssue:s
//            isError:NO
//            locationInOutputData:r
//          ] ;
//        }else if ([s characterAtIndex:0] == COCOA_ERROR_ID) {
//          s = [s substringFromIndex:1] ;
//          [self
//            enterIssue:s
//            isError:YES
//            locationInOutputData:r
//          ] ;
//        }
          let attributedString = NSAttributedString (string: s, attributes: self.mBuildOutputAttributeDictionary)
          self.mBuildOutputTextObserviewView.appendAttributedString (attributedString)
        }
//    NSArray * stringArray = [outputAttributedString.string componentsSeparatedByString:@"\r"] ;
//    if ([stringArray count] == 1) {
//      [mOutputTextView.textStorage appendAttributedString: outputAttributedString] ;
//    }else{
//      [mOutputTextView.textStorage beginEditing] ;
//      NSUInteger totalLength = 0 ;
//      for (NSUInteger idx = 0 ; idx < [stringArray count] ; idx ++) {
//        const NSUInteger length = [stringArray[idx] length] ;
//        NSAttributedString * at = [outputAttributedString attributedSubstringFromRange: NSMakeRange (totalLength, length)] ;
//        [mOutputTextView.textStorage appendAttributedString: at] ;
//        totalLength += length + 1 ; // Add '\r'
//      //--- Remove last line
//        if (idx < ([stringArray count] - 1)) {
//          NSRange lastLineRange = [mOutputTextView.textStorage.string lineRangeForRange: NSMakeRange (mOutputTextView.textStorage.string.length, 0)] ;
//          [mOutputTextView.textStorage deleteCharactersInRange: lastLineRange] ;
//  //        NSLog (@"[%lu, %lu]", lastLineRange.location, lastLineRange.length) ;
//        }
//      }
//      [mOutputTextView.textStorage endEditing] ;
    }
//    [mOutputTextView scrollRangeToVisible: NSMakeRange (mOutputTextView.textStorage.length, 0)] ;
  }

 //····················································································································

}

//--------------------------------------------------------------------------------------------------
