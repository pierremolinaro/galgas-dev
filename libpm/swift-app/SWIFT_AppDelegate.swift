//--------------------------------------------------------------------------------------------------
//
//  Created by Pierre Molinaro on 11/12/2024.
//
//--------------------------------------------------------------------------------------------------

import Cocoa
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

@MainActor @main class SWIFT_AppDelegate : NSObject, NSApplicationDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

   override init () {
     super.init ()
     _ = SWIFT_DocumentController () // Create my own subclass of NSDocumentController
   }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   New Document
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSettingsWindow = NSWindow (
    contentRect: .zero,
    styleMask: [.titled, .resizable],
    backing: .buffered,
    defer: true
  )

  private var mBoolOptions = [(EBPreferenceProperty <Bool>, SWIFT_CommandLineOption)] ()
  private var mUIntOptions = [(EBPreferenceProperty <Int>, SWIFT_CommandLineOption)] ()
  private var mStringOptions = [(EBPreferenceProperty <String>, SWIFT_CommandLineOption)] ()

  private var mToolCommands = [URL] ()

  private let mToolPopUpButton = AutoLayoutPopUpButton (pullsDown: false, size: .regular)

  private let mToolPopUpButtonSelectedIndex = EBPreferenceProperty <Int> (defaultValue: 0, prefKey: "compiler-tool-index")

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

  func applicationDidFinishLaunching (_ aNotification : Notification) {
    instanciateDebugMenuObjectOnWillFinishLaunchingNotification ()
    setDebugMenuVisibility (true)
  //--- Create settings windows
    self.createSettingWindows ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func makeKeyAndOrderFrontSettingWindow (_ inSender : Any?) {
    self.mSettingsWindow.makeKeyAndOrderFront (inSender)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor func createSettingWindows () {
    let title = "Settings"
    self.mSettingsWindow.setFrameAutosaveName (title)
    self.mSettingsWindow.title = title
    self.mSettingsWindow.isReleasedWhenClosed = false

    let tabView = BaseTabView (size: .regular)

    self.populateFontAndColorsTab (tabView: tabView)
    self.populateBuildOptionsTab (tabView: tabView)

    let colorsAndFontsView = SimpleBlockView (.fill, .fill)
    _ = tabView.addTab (title: "Colors & Fonts", tooltip: "", contentView: colorsAndFontsView)

    self.mSettingsWindow.setRootView (tabView)

  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate "Font & colors" tab
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor private func populateFontAndColorsTab (tabView inTabView : BaseTabView) {
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
        let hStack = AutoLayoutHorizontalStackView()
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
      let hStack = AutoLayoutHorizontalStackView ().set (margins: .zero)
        .appendView (fontButton)
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

  @MainActor private func populateBuildOptionsTab (tabView inTabView : BaseTabView) {
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
    self.mToolPopUpButtonSelectedIndex.startsBeingObserved (by: self.mToolCommandLineObserver)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate tool pop up button
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateCommandLineTextView () {
    var s = ""
    if self.mPrefixByTimeUtility.propval {
      s += "/usr/bin/time "
    }
    s += self.mToolCommands [self.mToolPopUpButtonSelectedIndex.propval].lastPathComponent
    for (property, option) in self.mBoolOptions {
      if property.propval {
        s += " --" + option.commandString
      }
    }
    for (property, option) in self.mUIntOptions {
      if property.propval != 0 {
        s += " --" + option.commandString + "=\(property.propval)"
      }
    }
    for (property, option) in self.mStringOptions {
      if !property.propval.isEmpty {
        s += " --" + option.commandString + "=" + property.propval
      }
    }
    self.mCommandTextView.string = s
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Populate tool pop up button
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor private func populateToolPopupButtonInView () {
    _ = self.mToolPopUpButton.bind_selectedIndex (self.mToolPopUpButtonSelectedIndex)
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

}

//--------------------------------------------------------------------------------------------------
