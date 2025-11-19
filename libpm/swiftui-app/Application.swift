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

let AUTOMATIC_SAVE_DELAY : TimeInterval = 5.0

//--------------------------------------------------------------------------------------------------

extension Notification.Name {
  static let mySaveAllCommand = Notification.Name ("my.save.all.command")
}

//--------------------------------------------------------------------------------------------------

@main struct Application : App {

//  @NSApplicationDelegateAdaptor(AppDelegate.self) private var appDelegate

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Environment(\.openWindow) private var openWindow
//  @Environment(\.scenePhase) private var scenePhase

//  private let mAllocationWindowVisibleAtLaunch : Bool
  @State private var mAllocationWindowIsPresented = false

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
    DocumentGroup (newDocument: ProjectDocument ()) { file in
      ProjectDocumentView (document: file.$document, fileURL: file.fileURL!)
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
    .commands { MyUndoRedoCommands () }
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

//final class AppDelegate : NSObject, NSApplicationDelegate {
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  func applicationDidFinishLaunching (_ inNotification : Notification) {
//    print ("Finish Launching")
////    NSApp.openWindow (id: "AllocationDebug")
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  func applicationShouldTerminate (_ inSender : NSApplication) -> NSApplication.TerminateReply {
//    print ("Terminate")
//        // Récupérer la fenêtre active et son document
//    return .terminateNow
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//}

//--------------------------------------------------------------------------------------------------

struct MyUndoRedoCommands : Commands {

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
