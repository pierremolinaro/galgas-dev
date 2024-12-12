//
//  AppDelegate.swift
//  galgas-ide
//
//  Created by Pierre Molinaro on 11/12/2024.
//
//--------------------------------------------------------------------------------------------------

import Cocoa
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

@main class AppDelegate: NSObject, NSApplicationDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate var mSettingWindow : NSWindow? =  nil
  fileprivate var mBoolOptions = [EBPreferenceProperty <Bool>] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func applicationDidFinishLaunching (_ aNotification : Notification) {
    instanciateDebugMenuObjectOnWillFinishLaunchingNotification ()
    setDebugMenuVisibility (true)
  //--- Create settings windows
    self.createSettingWindows ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor func createSettingWindows () {
    let title = "tabView"
    let window = NSWindow (
      contentRect: .zero,
      styleMask: [.titled, .resizable],
      backing: .buffered,
      defer: true
    )
    window.setFrameAutosaveName (title)
    window.title = title
    window.isReleasedWhenClosed = false

    let editionView = AutoLayoutVerticalStackView ().set (rightMargin: .zero)
    let firstRow = AutoLayoutHorizontalStackView ()
      .appendView (AutoLayoutStaticLabel (title: "Compiler:", bold: false, size: .regular, alignment: .right))
      .appendView (BasePopUpButton (pullsDown: false, size: .regular).appendItem (title: "galgas").appendItem (title: "galgas_debug"))
      .appendView (AutoLayoutCheckbox (title: "Prefix by 'time' utility", size: .regular))
      .appendFlexibleSpace ()
    _ = editionView.appendView (firstRow)
    let vStack = AutoLayoutVerticalStackView ()
    let optionArray = enterOptions ()
    for option in optionArray.sorted (by: { $0.comment < $1.comment} ) {
      switch option.type {
      case .bool :
        let prefs = EBPreferenceProperty <Bool> (
          defaultValue: false,
          prefKey: option.domainName + ":" + option.identifier
        )
        self.mBoolOptions.append (prefs)
        _ = vStack.appendView (AutoLayoutCheckbox (title: option.comment, size: .regular).bind_value (prefs))
      case .uint :
        let hStack = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .appendView (AutoLayoutIntField (minWidth: 72, size: .regular))
          .appendView (AutoLayoutStaticLabel (title: option.comment, bold: false, size: .regular, alignment: .left))
          .appendFlexibleSpace ()
         _ = vStack.appendView (hStack)
      case .string :
        let hStack = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .appendView (AutoLayoutTextField (minWidth: 72, size: .regular))
          .appendView (AutoLayoutStaticLabel (title: option.comment, bold: false, size: .regular, alignment: .left))
          .appendFlexibleSpace ()
         _ = vStack.appendView (hStack)
      case .stringList :
        let hStack = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .appendView (AutoLayoutTextField (minWidth: 72, size: .regular))
          .appendView (AutoLayoutStaticLabel (title: option.comment, bold: false, size: .regular, alignment: .left))
          .appendFlexibleSpace ()
         _ = vStack.appendView (hStack)
      }
    }
    let vScroll = BaseScrollView (
      contentView: vStack,
      horizontalScroller: false,
      verticalScroller: true,
      minWidth: 100,
      minHeight: 100,
      hStretchingResistance: .low,
      vStretchingResistance: .low
    ).set (drawsBackground: true)
    _ = editionView.appendView (vScroll)

    let colorsAndFontsView = SimpleBlockView (.fill, .fill)
    let rootView = BaseTabView (size: .regular)
      .addTab (title: "Edition", tooltip: "", contentView: editionView)
      .addTab (title: "Colors & Fonts", tooltip: "", contentView: colorsAndFontsView)
    window.setRootView (rootView)

    window.makeKeyAndOrderFront (nil)
    self.mSettingWindow = window
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
