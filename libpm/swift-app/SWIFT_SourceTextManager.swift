//
//  SWIFT_SourceTextManager.swift
//  galgas-ide
//
//  Created by Pierre Molinaro on 15/12/2024.
//
//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------
// SWIFT_SourceTextManager
//--------------------------------------------------------------------------------------------------

@MainActor final class SWIFT_SourceTextManager : NSObject, NSTextStorageDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mDocument : SWIFT_SourceTextDocument? = nil
  let mTextStorage = NSTextStorage (string: "")
  private var mViews = [AutoLayoutSourceTextPresentationView] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override init () {
    super.init ()
    noteObjectAllocation (self)
    self.mTextStorage.delegate = self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setDocument (_ inDocument : SWIFT_SourceTextDocument) {
    self.mDocument = inDocument
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func addView (_ inView : AutoLayoutSourceTextPresentationView) {
    self.mViews.append (inView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setContentString (_ inString : String) {
    self.setTextWithoutActivatingTimer (inString)
//    self.mTextStorage.beginEditing ()
//    self.mTextStorage.
//    self.mTextStorage.endEditing ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func setTextWithoutActivatingTimer (_ inString : String) {
    if self.mTextStorage.string != inString {
//      self.releaseTimer ()
//      self.mActivateTimerOnChange = false
      self.mTextStorage.beginEditing ()
      self.mTextStorage.replaceCharacters (
        in: NSRange (location: 0, length: self.mTextStorage.length),
        with: inString
      )
      self.mTextStorage.endEditing ()
      for view in self.mViews {
        view.invalidateSimpleLayout ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated func textStorage (_ textStorage: NSTextStorage,
                                didProcessEditing inEditedMask : NSTextStorageEditActions,
                                range inEditedRange: NSRange,
                                changeInLength inDelta : Int) {  // NSTextStorageDelegate
    if inEditedMask.contains (.editedCharacters) {
//      DispatchQueue.main.async {
//        self.mTextStorage.beginEditing ()
//        self.computeLexicalColoring (inEditedRange, inDelta)
//        self.mTextStorage.endEditing ()
//        if self.mActivateTimerOnChange && (nil == self.mTimerForAutosaving) {
//          let timer = Timer (
//            timeInterval: 5.0,
//            target: self,
//            selector: #selector (Self.autosaveTimerDidFire (_:)),
//            userInfo: nil,
//            repeats: false
//          )
//          self.mTimerForAutosaving = timer
//          RunLoop.main.add (timer, forMode: .default)
//          SWIFT_SingleWindow.documentEditionStateDidChange ()
//        }
//        self.mActivateTimerOnChange = true
//      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
