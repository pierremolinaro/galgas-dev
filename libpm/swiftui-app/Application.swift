//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 11/09/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

let AUTOMATIC_SAVE_DELAY : TimeInterval = 5.0

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let projectDocument = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".projectDocument")
}

//--------------------------------------------------------------------------------------------------

@main struct Application : App {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static var readableContentTypes : [UTType] { [.projectDocument] }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Environment(\.openWindow) private var openWindow
  @State private var mAllocationWindowIsPresented = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some Scene {
    DocumentGroup (newDocument: ProjectDocument ()) { file in
      ProjectWindowManagerView (document: file.$document, projectFileURL: file.fileURL!)
    }
    Settings {
      SettingsView ()
    }
    WindowGroup (id: "AllocationDebug") {
      AllocationDebugView ()
      .navigationTitle ("Allocation Debug")
      .frame (minWidth: 800, minHeight: 400)
    }
  //--- Undo / Redo commands
    .commands { UndoRedoCommands () }
  //--- Quit COMMAND
    .commands {
      CommandGroup (replacing: .appTermination) {
        Divider ()
        Button ("Quit \(NSRunningApplication.current.localizedName ?? "??")") { self.handleQuitCommand () }
        .keyboardShortcut ("q", modifiers: .command)
      }
    }
  //--- Save All Command
    .commands {
      CommandGroup (before: .saveItem) {
        Button ("Save All") { self.handleSaveAllCommand () }
        .keyboardShortcut ("s", modifiers: [.shift, .command])
      }
    }
  //--- Find Menu
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
        .keyboardShortcut ("e", modifiers: .command)
        Divider()
        Button ("Find and Replace…") { self.sendTextFinderAction (.showReplaceInterface) }
        .keyboardShortcut ("r", modifiers: .command)
      }
    }
  //--- Action Menu
    .commands { ActionMenuCommands () }
  //--- Debug Menu
    .commands {
      CommandMenu ("Debug") {
        Button ("Show Allocation Debug") {
          if !self.mAllocationWindowIsPresented {
            self.mAllocationWindowIsPresented = true
            self.openWindow (id: "AllocationDebug")
          }
        }
        .keyboardShortcut (",", modifiers: [.command, .option])
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func handleQuitCommand () {
    self.handleSaveAllCommand ()
  //--- L'instruction suivante va diffuser la notification NSApplication.willTerminateNotification
    NSApplication.shared.terminate (nil)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func handleSaveAllCommand () {
    for document in NSDocumentController.shared.documents {
      document.save (nil) // Sauve les projets
    }
    NotificationCenter.default.post (name: .mySaveAllCommand, object: nil)
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

}

//--------------------------------------------------------------------------------------------------

struct ActionMenuCommands : Commands {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @FocusedValue(\.activeDocument) var activeDocument
  @FocusedValue(\.activeView) var activeView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some Commands {
    CommandMenu ("Action") {
      Button ("Build") {
        NotificationCenter.default.post (name: .myCompileProjectCommand, object: self.activeDocument?.projectURL)
      }
      .keyboardShortcut ("b", modifiers: .command)
      .disabled (self.activeDocument == nil)
      Button ("Goto Line…") {
        self.activeView?.presentGotoLineSheet ()
      }
      .keyboardShortcut ("g", modifiers: [.option, .command])
      .disabled (self.activeView == nil)
      Button ("Comment") {
        self.activeView?.commentSelection ()
      }
      .keyboardShortcut ("k", modifiers: [.command])
      .disabled (self.activeView == nil)
      Button ("Uncomment") {
        self.activeView?.uncommentSelection ()
      }
      .keyboardShortcut ("k", modifiers: [.option, .command])
      .disabled (self.activeView == nil)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct UndoRedoCommands : Commands {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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
