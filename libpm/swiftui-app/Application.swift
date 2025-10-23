//
//  Application.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 11/09/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine
import AppKit

//--------------------------------------------------------------------------------------------------

extension Notification.Name {
  static let myUndoCommand = Notification.Name ("my.undo.command")
  static let myRedoCommand = Notification.Name ("my.redo.command")
}

//--------------------------------------------------------------------------------------------------

@main struct Application : App {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Environment(\.openWindow) private var openWindow
  @Environment(\.scenePhase) private var scenePhase

//  private let mAllocationWindowVisibleAtLaunch : Bool

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
//    self.mAllocationWindowVisibleAtLaunch = UserDefaults.standard.bool (forKey: ENABLE_ALLOCATION_VISIBLE_AT_LAUNCH)
//    if self.mAllocationWindowVisibleAtLaunch {
////      DispatchQueue.main.async {
////        self.openWindow (id: "AllocationDebug")
////      }
//    }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some Scene {
    DocumentGroup (newDocument: ProjectDocument()) { file in
      ProjectDocumentView (document: file.$document, fileURL: file.fileURL!)
    }
    .commands { MyUndoRedoCommands () }
    .commands {
      CommandMenu ("Find") {
        Button ("Find…") { self.sendTextFinderAction (.showFindInterface) }
        .keyboardShortcut("f", modifiers: .command)
        Button ("Find Next") { self.sendTextFinderAction (.nextMatch) }
        .keyboardShortcut("g", modifiers: .command)
        Button ("Find Previous") { self.sendTextFinderAction (.previousMatch) }
        .keyboardShortcut ("g", modifiers: [.shift, .command])
        Divider()
        Button ("Enter Selection") { self.sendTextFinderAction (.setSearchString) }
        .keyboardShortcut("e", modifiers: .command)
        Divider()
        Button ("Find and Replace…") { self.sendTextFinderAction (.showReplaceInterface) }
        .keyboardShortcut("r", modifiers: .command)
      }
      CommandMenu ("Debug") {
        Button ("Show Allocation Debug") { self.openWindow (id: "AllocationDebug") }
        .keyboardShortcut(",", modifiers: [.command, .control])
      }
    }
    Settings {
      SettingViewFor_galgasScanner3 ()
    }
    WindowGroup (id: "AllocationDebug") {
      AllocationDebugView ()
      .navigationTitle ("Allocation Debug")
      .frame (minWidth: 800, minHeight: 400)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func sendTextFinderAction (_ inTextFinderAction : NSTextFinder.Action) {
    let item = NSMenuItem (title: "", action: nil, keyEquivalent: "")
    item.tag = inTextFinderAction.rawValue
    NSApp.sendAction (
      #selector (NSResponder.performTextFinderAction(_:)),
      to: nil,
      from: item
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func replaceUndoRedoCommands () -> some Commands {
    CommandGroup (replacing: .undoRedo) {
      Button ("Undo") { NotificationCenter.default.post (name: .myUndoCommand, object: nil) }
      .keyboardShortcut ("z", modifiers: .command)
      Button ("Redo") { NotificationCenter.default.post (name: .myRedoCommand, object: nil) }
      .keyboardShortcut ("z", modifiers: [.shift, .command])
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct MyUndoRedoCommands : Commands {
    @FocusedValue(\.activeView) var activeView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some Commands {
    CommandGroup (replacing: .undoRedo) {
      Button ((self.activeView != nil) ? "My Undo" : "Undo") { self.activeView?.sharedTextModel.undo () }
      .keyboardShortcut ("z", modifiers: .command)
      .disabled (!(self.activeView?.canUndo ?? false))
      Button ((self.activeView != nil) ? "My Redo" : "Redo") { self.activeView?.sharedTextModel.redo () }
      .keyboardShortcut ("z", modifiers: [.shift, .command])
      .disabled (!(self.activeView?.canRedo ?? false))
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct ActiveViewKeyStructValue {
  let sharedTextModel: SWIFT_SharedTextModel
  let canUndo : Bool
  let canRedo : Bool
}

//--------------------------------------------------------------------------------------------------

struct ActiveViewKey : FocusedValueKey {
  typealias Value = ActiveViewKeyStructValue
}

//--------------------------------------------------------------------------------------------------

extension FocusedValues {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var activeView : ActiveViewKeyStructValue? {
    get { self [ActiveViewKey.self] }
    set { self [ActiveViewKey.self] = newValue }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
