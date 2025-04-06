//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 11/12/2024.
//--------------------------------------------------------------------------------------------------

import Cocoa

//--------------------------------------------------------------------------------------------------

@MainActor let gEditorBackgroundColor = EBPreferenceProperty <NSColor> (defaultValue: .white, prefKey: "editor-back-color")

@MainActor let gShowPageGuide = EBPreferenceProperty <Bool> (defaultValue: true, prefKey: "show-page-guide")

@MainActor let gPageGuideColumn = EBPreferenceProperty <Int> (defaultValue: 100, prefKey: "page-guide-column")

@MainActor let gSpacesForHTab = EBPreferenceProperty <Int> (defaultValue: 2, prefKey: "spaces-for-htab")

@MainActor let gToolPopUpButtonSelectedIndex = EBPreferenceProperty <Int> (defaultValue: 0, prefKey: "compiler-tool-index")

//--------------------------------------------------------------------------------------------------

@MainActor func commandLineForBuildProcess () -> (String, [String]) {
  let app = NSApp.delegate as! SWIFT_AppDelegate
  return app.commandLineString (commandFullPath: true)
}

//--------------------------------------------------------------------------------------------------

@MainActor @main class SWIFT_AppDelegate : NSObject, NSApplicationDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

   override init () {
     _ = SWIFT_DocumentController () // Create my own subclass of NSDocumentController
     self.mSettingsWindow = NSWindow (
      contentRect: .zero,
      styleMask: [.titled, .resizable, .closable],
      backing: .buffered,
      defer: true
    )
    super.init ()
    self.mSettingsWindow.setFrameAutosaveName ("SettingsWindowFrame")
    self.mSettingsWindow.title = "Settings"
    self.mSettingsWindow.isReleasedWhenClosed = false

    let tabView = AutoLayoutBorderLessTabView (size: .regular)
    self.populateEditionTab (tabView: tabView)
    self.populateFontAndColorsTab (tabView: tabView)
    self.populateBuildOptionsTab (tabView: tabView)
    self.mSettingsWindow.setRootView (tabView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  DO NOT OPEN A NEW DOCUMENT ON LAUNCH
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated func applicationShouldOpenUntitledFile (_ inApplication : NSApplication) -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func applicationShouldTerminate (_ sender: NSApplication) -> NSApplication.TerminateReply {
    SWIFT_DocumentController.mySaveAllDocuments ()
    return .terminateNow
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Settings Window
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mSettingsWindow : NSWindow

  private var mBoolOptions = [(EBPreferenceProperty <Bool>, SWIFT_CommandLineOption)] ()
  private var mUIntOptions = [(EBPreferenceProperty <Int>, SWIFT_CommandLineOption)] ()
  private var mStringOptions = [(EBPreferenceProperty <String>, SWIFT_CommandLineOption)] ()

  private var mToolCommands = [URL] ()
  var compilerToolPath : String { self.mToolCommands [gToolPopUpButtonSelectedIndex.propval].path }

  private let mToolPopUpButton = AutoLayoutPopUpButton (size: .regular)

  private let mPrefixByTimeUtility = EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "prefix-with-time-utility")

  private let mToolCommandLineObserver = EBObservedObserver ()

  private let mCommandTextView = BaseTextView (
    drawsBackground: true,
    editable: false,
    horizontalScroller: false,
    verticalScroller: false,
    minWidth: 100,
    minHeight: 50,
    hStretchingResistance: .low,
    vStretchingResistance: .highest
  ).setFont (.monospacedSystemFont (ofSize: NSFont.systemFontSize, weight: .bold))


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func applicationDidFinishLaunching (_ inUnusedNotification : Notification) {
    instanciateDebugMenuObjectOnWillFinishLaunchingNotification ()
    setDebugMenuVisibility (true)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func makeKeyAndOrderFrontSettingWindow (_ inSender : Any?) {
    self.mSettingsWindow.makeKeyAndOrderFront (inSender)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate "Edition" tab
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor private func populateEditionTab (tabView inTabView : AutoLayoutBorderLessTabView) {
    let firstRow = AutoLayoutHorizontalStackView ()
      .appendView (AutoLayoutCheckbox (title: "Page Guide at Column:", size: .regular).bind_value (gShowPageGuide))
      .appendView (AutoLayoutIntField (minWidth: 48, size: .regular).bind_enabled (.prop (gShowPageGuide)).bind_value (gPageGuideColumn, sendContinously: true))
      .appendView (AutoLayoutStaticLabel (title: "Editor Background Color", bold: false, size: .regular, alignment: .left))
      .appendView (AutoLayoutColorWell (minWidth: 64, size: .regular).bind_color (gEditorBackgroundColor))
      .appendFlexibleSpace ()
    let editionView = AutoLayoutVerticalStackView ()
      .appendView (firstRow)
      .appendFlexibleSpace ()
    _ = inTabView.addTab (title: "Edition", tooltip: "", contentView: editionView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate "Font & colors" tab
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor private func populateFontAndColorsTab (tabView inTabView : AutoLayoutBorderLessTabView) {
    let fontAndColorTabView = BaseTabView (size: .small)

    for tokenizer in tokenizers () {
      let vSettingsStack = AutoLayoutVerticalStackView ().set (spacing: .zero)
      for i : UInt8 in 0 ... tokenizer.styleCount () {
        let boldCheckbox = AutoLayoutCheckbox (title: "B", size: .regular, adoptPushButtonStyle: true)
          .bind_value (tokenizer.bold (forStyle: i))
        let italicCheckbox = AutoLayoutCheckbox (title: "I", size: .regular, adoptPushButtonStyle: true)
          .bind_value (tokenizer.italic (forStyle: i))
        let colorWell = AutoLayoutColorWell (minWidth: 48, size: .small)
          .bind_color (tokenizer.color (forStyle: i))
        let hStack = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .set (spacing: .zero)
          .appendView (boldCheckbox)
          .appendView (italicCheckbox)
          .appendView (colorWell)
          .appendView (AutoLayoutStaticLabel (title: tokenizer.styleNameFor (styleIndex: i), bold: false, size: .regular, alignment: .left))
          .appendFlexibleSpace ()
        _ = vSettingsStack.appendView(hStack)
      }
      let scrollView = BaseScrollView (
        contentView: vSettingsStack,
        horizontalScroller: true,
        verticalScroller: true,
        minWidth: 300,
        minHeight: 300,
        hStretchingResistance: .low,
        vStretchingResistance: .low
      ).set (drawsBackground: true)

      let fontButton = AutoLayoutFontButton (size: .regular)
        .setMinWidth (100)
        .bind_fontValue (tokenizer.font)
      let lineHeightPopUpButton = AutoLayoutTaggedPopUpButton (size: .regular)
         .add (title: "1.0", withTag: 10)
         .add (title: "1.1", withTag: 11)
         .add (title: "1.2", withTag: 12)
         .add (title: "1.3", withTag: 13)
         .add (title: "1.4", withTag: 14)
         .add (title: "1.5", withTag: 15)
         .add (title: "1.7", withTag: 17)
         .add (title: "2.0", withTag: 20)
         .bind_selectedTag (tokenizer.lineHeight)
      let hStack = AutoLayoutHorizontalStackView ().set (margins: .zero)
        .appendView (fontButton)
        .appendView (AutoLayoutStaticLabel (title: "Line Spacing", bold: false, size: .regular, alignment: .left))
        .appendView (lineHeightPopUpButton)
        .appendFlexibleSpace ()

       let vStack = AutoLayoutVerticalStackView ()
         .appendView (hStack)
         .appendView (scrollView)

      _ = fontAndColorTabView.addTab (title: tokenizer.tabItemTitle (), tooltip: "", contentView: vStack)
    }
    _ = inTabView.addTab (title: "Fonts & Colors", tooltip: "", contentView: fontAndColorTabView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate "Build Options" tab
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor private func populateBuildOptionsTab (tabView inTabView : AutoLayoutBorderLessTabView) {
    self.populateToolPopupButtonInView ()
    let prefixByTimeUtilityCheckbox = AutoLayoutCheckbox (title: "Prefix by 'time' utility", size: .regular)
      .bind_value (self.mPrefixByTimeUtility)

    let firstRow = AutoLayoutHorizontalStackView ()
      .appendView (AutoLayoutStaticLabel (title: "Compiler:", bold: false, size: .regular, alignment: .right))
      .appendView (self.mToolPopUpButton)
      .appendView (prefixByTimeUtilityCheckbox)
      .appendFlexibleSpace ()

    let vStack = AutoLayoutVerticalStackView ()
    let optionArray = enterOptions () + commonCommandLineOptions ()
    for option in optionArray.sorted (by: { $0.comment < $1.comment} ) {
      switch option.type {
      case .bool :
        let prefs = EBPreferenceProperty <Bool> (
          defaultValue: false,
          prefKey: option.domainName + ":" + option.identifier
        )
        _ = vStack.appendView (AutoLayoutCheckbox (title: option.comment, size: .regular).bind_value (prefs))
        prefs.startsBeingObserved (by: self.mToolCommandLineObserver)
        self.mBoolOptions.append ((prefs, option))
      case .uint :
        let prefs = EBPreferenceProperty <Int> (
          defaultValue: 0,
          prefKey: option.domainName + ":" + option.identifier
        )
        let hStack = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .appendView (AutoLayoutIntField (minWidth: 72, size: .regular).bind_value (prefs, sendContinously: true))
          .appendView (AutoLayoutStaticLabel (title: option.comment, bold: false, size: .regular, alignment: .left))
          .appendFlexibleSpace ()
         _ = vStack.appendView (hStack)
        prefs.startsBeingObserved (by: self.mToolCommandLineObserver)
        self.mUIntOptions.append ((prefs, option))
      case .string :
        let prefs = EBPreferenceProperty <String> (
          defaultValue: "",
          prefKey: option.domainName + ":" + option.identifier
        )
        let hStack = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .appendView (AutoLayoutTextField (minWidth: 72, size: .regular).bind_value (prefs, sendContinously: true))
          .appendView (AutoLayoutStaticLabel (title: option.comment, bold: false, size: .regular, alignment: .left))
          .appendFlexibleSpace ()
         _ = vStack.appendView (hStack)
        prefs.startsBeingObserved (by: self.mToolCommandLineObserver)
        self.mStringOptions.append ((prefs, option))
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

    let contentView = AutoLayoutVerticalStackView ()
      .set (rightMargin: .zero)
      .appendView (firstRow)
      .appendView (vScroll)
      .appendView (AutoLayoutStaticLabel (title: "Build Command:", bold: false, size: .regular, alignment: .left))
      .appendView (self.mCommandTextView)

    _ = inTabView.addTab (title: "Build Options", tooltip: "", contentView: contentView)

    self.mToolCommandLineObserver.mObserverCallback = {
      [weak self] in self?.updateCommandLineTextView ()
    }
    self.mPrefixByTimeUtility.startsBeingObserved (by: self.mToolCommandLineObserver)
    gToolPopUpButtonSelectedIndex.startsBeingObserved (by: self.mToolCommandLineObserver)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate tool pop up button
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateCommandLineTextView () {
    let (command, arguments) = self.commandLineString (commandFullPath: false)
    var s = command
    for arg in arguments {
      s += " " + arg
    }
//    if self.mPrefixByTimeUtility.propval {
//      s += "/usr/bin/time "
//    }
//    s += self.mToolCommands [self.mToolPopUpButtonSelectedIndex.propval].lastPathComponent
//    for (property, option) in self.mBoolOptions {
//      if property.propval {
//        s += " --" + option.commandString
//      }
//    }
//    for (property, option) in self.mUIntOptions {
//      if property.propval != 0 {
//        s += " --" + option.commandString + "=\(property.propval)"
//      }
//    }
//    for (property, option) in self.mStringOptions {
//      if !property.propval.isEmpty {
//        s += " --" + option.commandString + "=" + property.propval
//      }
//    }
    self.mCommandTextView.string = s
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate tool pop up button
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor private func populateToolPopupButtonInView () {
    _ = self.mToolPopUpButton.bind_selectedIndex (gToolPopUpButtonSelectedIndex)
  //--- Populate
    self.mToolPopUpButton.removeAllItems ()
    let resourcePath = Bundle.main.resourcePath!
    let fm = FileManager ()
    let contentArray = try! fm.contentsOfDirectory (atPath: resourcePath)
    for path in contentArray {
      let url = URL (fileURLWithPath: path)
      if url.pathExtension.isEmpty {
        _ = self.mToolPopUpButton.appendItem (title: path)
        self.mToolCommands.append (URL (fileURLWithPath: resourcePath + "/" + path))
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // commandLineString
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func commandLineString (commandFullPath inFlag : Bool) -> (String, [String]) {
    var command : String
    var arguments = [String] ()
    if self.mPrefixByTimeUtility.propval {
      command = "/usr/bin/time"
      if inFlag {
        arguments.append (self.compilerToolPath)
      }else{
        arguments.append (self.compilerToolPath.lastPathComponent)
      }
    }else if inFlag {
      command = self.compilerToolPath
    }else{
      command = self.compilerToolPath.lastPathComponent
    }
    for (property, option) in self.mBoolOptions {
      if property.propval {
        arguments.append ("--" + option.commandString)
      }
    }
    for (property, option) in self.mUIntOptions {
      if property.propval != 0 {
        arguments.append ("--" + option.commandString + "=\(property.propval)")
      }
    }
    for (property, option) in self.mStringOptions {
      if !property.propval.isEmpty {
        arguments.append ("--" + option.commandString + "=" + property.propval)
      }
    }
    return (command, arguments)
//  let defaults = UserDefaults.standard
//  var arguments = [String] ()
////--- Add tool path
//  let toolIndex = self.mToolPopUpButtonSelectedIndex.propval
//  if let toolPath = self.mToolPopUpButton.item (at: toolIndex)?.representedObject as? String {
//    arguments.append (toolPath)
//  }else{
//    arguments.append ("???")
//  }
////--- Add boolean options
//  for option in self.mBoolOptionArray {
//    let optionValue = defaults.integer (forKey: GGS_bool_build_option + "_" + option.identifier) != 0
//    if optionValue {
//      let c = option.commandChar
//      if !c.isEmpty {
//        arguments.append ("-" + c)
//      }else{
//        let s = option.commandString
//        if !s.isEmpty {
//          arguments.append ("--" + s)
//        }
//      }
//    }
//  }
////--- Add integer options
//  for option in self.mUIntOptionArray {
//    let optionValue = defaults.integer (forKey: GGS_uint_build_option + "_" + option.identifier)
//    if optionValue != 0 {
//      let c = option.commandChar
//      if !c.isEmpty {
//        arguments.append ("-" + c + "=\(optionValue)")
//      }else{
//        let s = option.commandString
//        if !s.isEmpty {
//          arguments.append ("--" + s + "=\(optionValue)")
//        }
//      }
//    }
//  }
////--- Add string options
//  for option in self.mStringOptionArray {
//    let optionValue = defaults.string (forKey: GGS_string_build_option + "_" + option.identifier) ?? ""
//    if !optionValue.isEmpty {
//      let c = option.commandChar
//      if !c.isEmpty {
//        arguments.append ("-" + c + "=\(optionValue)")
//      }else{
//        let s = option.commandString
//        if !s.isEmpty {
//          arguments.append ("--" + s + "=\(optionValue)")
//        }
//      }
//    }
//  }
//
////--- Assign command line option array attribute
////  mCommandLineItemArray = arguments ;
//////---- Build string for displaying
////  NSMutableString * s = [NSMutableString new] ;
//  if self.prefixByToolUtility () {
//    arguments.insert (self.toolUtilityPrefix, at: 0)
//  }
////  for (NSUInteger i=0 ; i<[arguments count] ; i++) {
////    [s appendString:[arguments objectAtIndex:i]] ;
////    [s appendString:@" "] ;
////  }
////---
//   let command = arguments.remove (at: 0)
//   return (command, arguments)
 }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  func prefixByToolUtility () -> Bool {
//    return UserDefaults.standard.bool (forKey: GGS_prefix_by_tool_utility)
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

// var toolUtilityPrefix : String { return "/usr/bin/time" }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
