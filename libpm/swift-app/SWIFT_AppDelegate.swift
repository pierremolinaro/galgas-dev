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

@MainActor @main class SWIFT_AppDelegate : NSObject, NSApplicationDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

   override init () {
     super.init ()
     _ = SWIFT_DocumentController () // Create my own subclass of NSDocumentController
   }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   New Document
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mTempWindow = NSWindow (
    contentRect: .zero,
    styleMask: [.titled, .resizable],
    backing: .buffered,
    defer: true
  )

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
//    self.mSettingsWindow.makeKeyAndOrderFront (nil)
    self.createTempWindow ()
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

  func createTempWindow () {
    let title = "TEMPORARY"
    self.mTempWindow.setFrameAutosaveName (title)
    self.mTempWindow.title = title
    self.mTempWindow.isReleasedWhenClosed = false

    let textView = BaseTextView (
      drawsBackground: true,
      editable: true,
      horizontalScroller: true,
      verticalScroller: true,
      minWidth: 300,
      minHeight: 600,
      hStretchingResistance: .low,
      vStretchingResistance: .low
    )
    self.mTempWindow.setRootView (textView)

    textView.string = sss

    self.mTempWindow.makeKeyAndOrderFront (nil)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

let sss =
"""
//
//  MIT License
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//------------------------------------------------------------------------------------------------
//   SYNTAX
//------------------------------------------------------------------------------------------------

syntax extension galgas3DeclarationsSyntax {

  //······························································································

  rule <declaration_ggs3> ?!@galgasDeclarationAST ioDeclarations {
    let @bool isAbstract
    let @bool clonable
    select
      isAbstract = false
      clonable = false
    or
      $abstract$
      isAbstract = true
      clonable = false
    or
      $%clonable$
      isAbstract = false
      clonable = true
    end
    let @bool isReference
    select
      $class$
      isReference = true
    or
      $valueclass$
      isReference = false
    end
    $@type$ ?let @lstring className indexing classDefinition
    let @lstring superClassName // Empty if no super class
    select
      superClassName = ["" nowhere]
    or
      $:$
      $@type$ ? superClassName indexing classReferencedAsSuperClass
    end
    let @bool generateInSeparateFile
    select
      generateInSeparateFile = false
    or
      $%generatedInSeparateFile$
      generateInSeparateFile = true
    end
    ${$
  //--- Class properties
    var @propertyInCollectionListAST propertyList = @()
    repeat
    while
      <property_declaration_ggs3> !?ioDeclarations !? propertyList
    while
      <method_declaration_ggs3> !className !?ioDeclarations
    end
    $}$
    ioDeclarations.mDeclarationList += !@classDeclarationAST {
      !isPredefined: false // Is not predefined
      !isAbstract
      !isReference
      !className
      !superClassName // Empty if no super class
      !generateInSeparateFile
      !propertyList
      !clonable
    }
    if isReference then
      ioDeclarations.mDeclarationList += !@weakReferenceDeclarationAST {
        !isPredefined: false // Is not predefined
        !className
        !makeWeakTypeLName (!className)
        !if superClassName.string == ""
           then superClassName
           else makeWeakTypeLName (!superClassName)
         end
        !generateInSeparateFile
      }
    end
  }

  //······························································································

}

//------------------------------------------------------------------------------------------------

syntax extension galgas4DeclarationsSyntax {

  //······························································································

  rule <declaration> ?!@galgasDeclarationAST ioDeclarations {
    let @bool isAbstract
    let @bool clonable
    select
      isAbstract = false
      clonable = false
    or
      $abstract$
      isAbstract = true
      clonable = false
    or
      $%clonable$
      isAbstract = false
      clonable = true
    end
    $class$
    $@type$ ?let @lstring className indexing classDefinition
    let @lstring superClassName // Empty if no super class
    select
      superClassName = ["" nowhere]
    or
      $:$
      $@type$ ? superClassName indexing classReferencedAsSuperClass
    end
    let @bool generateInSeparateFile
    select
      generateInSeparateFile = false
    or
      $%generatedInSeparateFile$
      generateInSeparateFile = true
    end
    ${$
  //--- Class properties
    var @propertyInCollectionListAST propertyList = @()
    repeat
    while
      <property_declaration> !?ioDeclarations !?propertyList
    while
      <method_declaration> !className !?ioDeclarations
    end
    $}$
    ioDeclarations.mDeclarationList += !@classDeclarationAST {
      !isPredefined: false // Is not predefined
      !isAbstract
      !true
      !className
      !superClassName // Empty if no super class
      !generateInSeparateFile
      !propertyList
      !clonable
    }
  //--- Associated Weak Type
    ioDeclarations.mDeclarationList += !@weakReferenceDeclarationAST {
      !isPredefined: false // Is not predefined
      !className
      !makeWeakTypeLName (!className)
      !if superClassName.string == ""
         then superClassName
         else makeWeakTypeLName (!superClassName)
       end
      !generateInSeparateFile
    }
  }

  //······························································································

}

//------------------------------------------------------------------------------------------------
//   AST
//------------------------------------------------------------------------------------------------

class @classDeclarationAST : @semanticDeclarationAST {
  private let @bool mIsAbstract
  private let @bool mIsReference
  private let @lstring mClassTypeName
  private let @lstring mSuperClassName // Empty if no super class
  private let @bool mGenerateInSeparateFile
  private let @propertyInCollectionListAST mPropertyList
  private let @bool clonable

  //······························································································

  override getter keyRepresentation -> @string {
    result = "class @" + self.mClassTypeName
  }

  //······························································································

  override method enterDeclarationInGraph
            ?!@semanticTypePrecedenceGraph ioSemanticTypePrecedenceGraph
            ?!@equatableExtensionMap unused ioEquatableExtensionMap
            ?!@extensionInitializerForBuildingContext unused ioExtensionInitializerForBuildingContext
            ?!@extensionMethodMapForBuildingContext unused ioExtensionMethodMapForBuildingContext
            ?!@extensionGetterMapForBuildingContext unused ioExtensionGetterMapForBuildingContext
            ?!@extensionSetterMapForBuildingContext unused ioExtensionSetterMapForBuildingContext
            ?!@semanticDeclarationListAST unused ioExtensionOverrideDefinitionList {
    let key = @lstring {!"@" + self.mClassTypeName !self.mClassTypeName.location}
    [!?ioSemanticTypePrecedenceGraph addNode !key !self]
  //--- Add edge from super class
    if self.mSuperClassName.string != "" then
      [!?ioSemanticTypePrecedenceGraph addEdge
        !key
        !@{!"@" + self.mSuperClassName !self.mSuperClassName.location}
      ]
    end
  //--- Add edge from property types
    for (* propertyTypeName 4*) in self.mPropertyList do
      [!?ioSemanticTypePrecedenceGraph addEdge
        !key
        !@lstring {!"@" + propertyTypeName !self.mSuperClassName.location}
      ]
    end
  }

  //······························································································

  override method enterDeclarationInSemanticContext
    ?!@equatableExtensionMap ioEquatableExtensionMap
    ?let @extensionInitializerForBuildingContext inExtensionInitializerMapForBuildingContext
    ?let @extensionMethodMapForBuildingContext inExtensionMethodMapForBuildingContext
    ?let @extensionGetterMapForBuildingContext inExtensionGetterMapForBuildingContext
    ?let @extensionSetterMapForBuildingContext inExtensionSetterMapForBuildingContext
    ?!@unifiedTypeMap ioTypeMap
    ?!@semanticContext ioSemanticContext {
    var @getterMap getterMap
    var @setterMap setterMap
    var @instanceMethodMap instanceMethodMap
    let @typedPropertyList inheritedTypedPropertyList
    var @propertyMap attributeMap = @()
  //--- Handle super class
    let @unifiedTypeMapEntry superClassIndex
    let @bool generateHeaderInSeparateFile
    if self.mSuperClassName.string == "" then
      superClassIndex = .null
      commonGetterMapForAllTypes (!?ioTypeMap ?getterMap)
      setterMap = @()
      instanceMethodMap = @()
      inheritedTypedPropertyList = @()
      attributeMap = @()
      generateHeaderInSeparateFile = self.mGenerateInSeparateFile
    else
      [!?ioTypeMap makeEntry !self.mSuperClassName ?superClassIndex]
      let superTypeDefinition = [ioTypeMap typeDefinition !self.mSuperClassName]
      inheritedTypedPropertyList = superTypeDefinition.allTypedPropertyList
      attributeMap = superTypeDefinition.propertyMap
      generateHeaderInSeparateFile = superTypeDefinition.generateHeaderInSeparateFile
    //---
      if not [superTypeDefinition.typeKind isClassType] then
        error self.mSuperClassName : "the @" + self.mSuperClassName + " should be a class type"
      end
    //--- Mark all setters as inherited
      setterMap = @()
      for (lkey mKind mParameterList mHasCompilerArgument * *) in superTypeDefinition.setterMap do
        [!?setterMap insertKey
          !lkey
          !mKind
          !mParameterList
          !mHasCompilerArgument
          !.isInherited
          !"" // No error message
        ]
      end
    //--- Mark all getters as inherited
      getterMap = @()
      for theGetter in superTypeDefinition.getterMap do
        [!?getterMap insertKey
          !theGetter.lkey
          !theGetter.mKind
          !theGetter.mArgumentTypeList
          !theGetter.mDeclarationLocation
          !theGetter.mHasCompilerArgument
          !theGetter.mReturnedType
          !.isInherited
          !theGetter.mGetterNameThatObsoletesInvokationName
        ]
      end
    //--- Mark all methods as inherited
      instanceMethodMap = @()
      for instanceMethod in superTypeDefinition.instanceMethodMap do
        [!?instanceMethodMap insertKey
          !instanceMethod.lkey
          !instanceMethod.mKind
          !instanceMethod.mParameterList
          !instanceMethod.mDeclarationLocation
          !instanceMethod.mHasCompilerArgument
          !.isInherited
          !instanceMethod.mErrorMessage
        ]
      end
    end
  //--- Current class Index
    [!?ioTypeMap makeEntry !self.mClassTypeName ?let @unifiedTypeMapEntry classIndex]
  //--- Build attribute Map and constructor argument list
    var @functionSignature synthetizedInitializerArgumentList = @()
    for property in inheritedTypedPropertyList do
      if property.initialization == .none then
        synthetizedInitializerArgumentList +=
          !if property.hasSelector then property.name else ["" nowhere] end
          !property.typeEntry
          !property.name.string
          !true
      end
    end
    for property in self.mPropertyList do
      [!?ioTypeMap makeEntry !property.typeName ?let attributeTypeIndex]
      if property.initialization == .none then
        synthetizedInitializerArgumentList +=
          !if property.hasSelector then property.name else ["" nowhere] end
          !attributeTypeIndex
          !property.name.string
          !true
      end
      [!?attributeMap insertKey
        !property.name
        ![property.accessControl accessControl !forDeclaringType: classIndex]
        ![property.mutability isConstantProperty]
        !attributeTypeIndex
      ]
      if [getterMap hasKey !property.name.string] then
        error property.name
        : "'" + property.name + "' is the name of a prefefined or a user defined getter"
      end
    end
  //--- Class functions
    var @classFunctionMap classFunctionMap = @()
    if not self.mIsAbstract then
      [!?classFunctionMap insertKey
        !@lstring {!"new" !@location.here}
        !synthetizedInitializerArgumentList
        !true
        !classIndex
      ]
    end
  //--- Typed attribute list
    var @typedPropertyList currentClassTypedPropertyList = @()
    var @typedPropertyList allTypedAttributeList = inheritedTypedPropertyList
    for property in self.mPropertyList do
      [!?ioTypeMap makeEntry !property.typeName ?let attributeTypeIndex]
      currentClassTypedPropertyList +=
        !attributeTypeIndex
        !property.name
        !property.initialization
        !hasSetter: not [property.mutability isConstantProperty]
        !hasSelector: property.hasSelector
      allTypedAttributeList +=
        !attributeTypeIndex
        !property.name
        !property.initialization
        !hasSetter: not [property.mutability isConstantProperty]
        !hasSelector: property.hasSelector
    end
  //--- set...attribute setter
    if not self.mIsReference then
      for property in currentClassTypedPropertyList do
        if property.hasSetter then
          [!?setterMap insertKey
            !@{!"setProperty_"+ [property.name.string stringByCapitalizingFirstCharacter] !.here}
            !@methodKind.definedAsMember
            !@[@(["" nowhere], property.typeEntry, .argumentVarIn, property.name.string)]
            !true // Compiler argument
            !.isBasicFinal
            !"" // No error message
          ]
        end
      end
    end
  //--- Clonable ?
    var @initializerMap initializerMap = @()
    var @typeFeatures features = if self.mIsReference then .referenceEquatable else .comparable end
    if self.clonable then
      features |= .clonable
      var @functionSignature cloneInitializerArgumentList = @()
      cloneInitializerArgumentList +=
        !["cloned" nowhere]
        !classIndex
        !"inObject"
        !true
      [!?initializerMap insertKey
        !@{![cloneInitializerArgumentList initializerSignature] !self.mClassTypeName}
        !cloneInitializerArgumentList
      ]
    end
  //--- Add Extensions
    addExtensions (
      !inExtensionInitializerMapForBuildingContext
      !inExtensionMethodMapForBuildingContext
      !inExtensionGetterMapForBuildingContext
      !inExtensionSetterMapForBuildingContext
      !?ioSemanticContext
      !?ioTypeMap
      !self.mClassTypeName
      !isClass: true
      !?initializerMap
      !?getterMap
      !?setterMap
      !?instanceMethodMap
      !acceptSetters: not self.mIsReference
    )
  //--- Synthetize an initializer, if the structure defines none
    if [initializerMap count] == if self.clonable then 1 else 0 end then
      features |= .generateSynthetizedInitializer
      [!?initializerMap insertKey
        !@{![synthetizedInitializerArgumentList initializerSignature] !self.mClassTypeName}
        !synthetizedInitializerArgumentList
      ]
    end
    handleEquatableComparableExtension (
      !?ioEquatableExtensionMap
      !self.mClassTypeName
      !?features
      !acceptEquatable: false
      !acceptComparable: false
    )
  //--- Enter in type map
    let typeDefinition = @unifiedTypeDefinition {
      !typeName: self.mClassTypeName
      !isPredefined: self.isPredefined
      !isConcrete: not self.mIsAbstract // Concrete Type
      !superType: superClassIndex
      !typeKind: .classType {!isReference: self.mIsReference}
      !supportCollectionValue: false // Does not support collection value
      !allTypedPropertyList: allTypedAttributeList
      !propertyMap: attributeMap
      !currentTypedPropertyList: currentClassTypedPropertyList
      !initializerMap: initializerMap
      !classFunctionMap: classFunctionMap
      !getterMap: getterMap
      !setterMap: setterMap
      !instanceMethodMap: instanceMethodMap
      !classMethodMap: @()
      !unwrappedType: .null
      !readSubscriptMap: @()
      !enumerationDescriptorList: @()
      !features: features
      !addAssignOperatorArguments: @()
      !mapSearchMethodList: @()
      !generateHeaderInSeparateFile: generateHeaderInSeparateFile
      !typeForEnumeratedElement: .null
      !headerFileName: "class-" + [self.mClassTypeName fileNameRepresentation]
      !headerKind: .twoHeaders
    }
    [!?ioTypeMap insertType !typeDefinition.typeName !typeDefinition]
  }

  //······························································································

  override method semanticAnalysis ?!@lstringlist ioUsefulnessRootEntities
                ?!@usefulEntitiesGraph ioUsefulEntitiesGraph
                ?let @string unused inProductDirectory
                ?let @semanticContext inSemanticContext
                ?!@unifiedTypeMap ioTypeMap
                ?let @predefinedTypes inPredefinedTypes
                ?!@semanticDeclarationListForGeneration ioSemanticDeclarationListForGeneration {
  //--- Useful entities graph
    let classTypeNameForUsefulness = typeNameForUsefulEntitiesGraph (!self.mClassTypeName)
    [!?ioUsefulEntitiesGraph addNode !classTypeNameForUsefulness !classTypeNameForUsefulness]
    if self.isPredefined  then
      ioUsefulnessRootEntities += !classTypeNameForUsefulness
    end
    if self.mSuperClassName.string != "" then
      let superClassNameForUsefulness = typeNameForUsefulEntitiesGraph (!self.mSuperClassName)
      [!?ioUsefulEntitiesGraph addEdge !classTypeNameForUsefulness !superClassNameForUsefulness]
    end
    if self.mIsReference then
      let weakRefTypeNameForUsefulness = typeNameForUsefulEntitiesGraph (!makeWeakTypeLName (!self.mClassTypeName))
      [!?ioUsefulEntitiesGraph addEdge !classTypeNameForUsefulness !weakRefTypeNameForUsefulness]
      if self.isPredefined  then
        ioUsefulnessRootEntities += !weakRefTypeNameForUsefulness
      end
    end
  //----- Self type
    let @unifiedTypeMapEntry selfType = [ioTypeMap typeMapEntryForLKey !self.mClassTypeName]
  //--- Super class type
    let @unifiedTypeMapEntry superClassEntry = if self.mSuperClassName.string == ""
      then @unifiedTypeMapEntry.null
      else [ioTypeMap typeMapEntryForLKey !self.mSuperClassName]
    end
  //----- check "reference" status:
  // a base class can be freely declared as shared or not
  // a class should the same 'reference' status as its super class
    if superClassEntry != .null then
      [[superClassEntry definition].typeKind extractClassType ?isReference: let superClassIsReference]
      if superClassIsReference & not self.mIsReference then
        error self.mClassTypeName : "this class should be declared by 'refClass', as its super class"
      elsif not superClassIsReference & self.mIsReference then
        error self.mClassTypeName : "this class should be declared by 'valueclass', as its super class"
      end
    end
  //----- Super type, and class features
  // A class that has a super may not have any feature
  // A class without a super class admits the 'generatedInSeparateFile' feature
    var @typedPropertyList allAttributeList
    if superClassEntry == .null then
      allAttributeList = @()
    else
      allAttributeList = [superClassEntry definition].allTypedPropertyList
      if self.mGenerateInSeparateFile then
        error self.mClassTypeName : "a class that has a super class does not accept any feature"
      end
    end
    var @typedPropertyList synthetizedInheritedInitializerArgumentList = @()
    for property in allAttributeList do
      if property.initialization == .none then
        synthetizedInheritedInitializerArgumentList +=
          !property.typeEntry
          !property.name
          !property.initialization
          !hasSetter: property.hasSetter
          !hasSelector: property.hasSelector
      end
    end
  //----- Enter properties
    var @typedPropertyList typedAttributeList = @()
    var @propertyIndexMap attributeMap = @()
    for property in self.mPropertyList do
      let propertyTypeNameForUsefulness = typeNameForUsefulEntitiesGraph (!property.typeName)
      [!?ioUsefulEntitiesGraph addEdge !classTypeNameForUsefulness !propertyTypeNameForUsefulness]
      let t = [ioTypeMap typeMapEntryForLKey !property.typeName]
      typedAttributeList +=
        !t
        !property.name
        !property.initialization
        !hasSetter: not [property.mutability isConstantProperty]
        !hasSelector: property.hasSelector
      allAttributeList +=
        !t
        !property.name
        !property.initialization
        !hasSetter: not [property.mutability isConstantProperty]
        !hasSelector: property.hasSelector
      [!?attributeMap insertKey !property.name !t]
    end
  //--- Build property initialization code
    var @typedPropertyList synthetizedInitialzerArgumentList = @()
    for property in [selfType definition].allTypedPropertyList do
    if property.initialization == .none then
      synthetizedInitialzerArgumentList +=
        !property.typeEntry
        !property.name
        !property.initialization
        !hasSetter: property.hasSetter
        !hasSelector: property.hasSelector
     end
   end
   [self.mPropertyList buildPropertyInitializationCode
      !classTypeNameForUsefulness
      !inSemanticContext
      !inPredefinedTypes
      !?ioUsefulEntitiesGraph
      !?ioTypeMap
      ?let unusedVariableCppNameSet
      ?let initializationCode
    ]
  //-----
    let constructorNeedsCompilerVar = not [unusedVariableCppNameSet hasKey !compilerCppName ()]
    ioSemanticDeclarationListForGeneration +=
      !infoMessage: "class " + self.mClassTypeName
      !@classTypeForGeneration {
        !selfType
        !self.mIsAbstract
        !self.mIsReference
        !superClassEntry
        !allAttributeList
        !typedAttributeList
        ![selfType definition].generateHeaderInSeparateFile
        !constructorNeedsCompilerVar
        !initializationCode
        !synthetizedInitialzerArgumentList
        !synthetizedInheritedInitializerArgumentList
        ![selfType definition].initializerMap
        !self.clonable
      }
  //--- Add synthetized initializer ?
    if [[selfType definition].features contains !.generateSynthetizedInitializer] then
      let initializerForUsefulness = initializerNameForUsefulEntitiesGraph (
        !self.mClassTypeName
        ![synthetizedInitialzerArgumentList initializerSignature]
      )
      [!?ioUsefulEntitiesGraph addNode !initializerForUsefulness !initializerForUsefulness]
      if self.isPredefined then
        ioUsefulnessRootEntities += !initializerForUsefulness
        [!?ioUsefulEntitiesGraph addEdge !initializerForUsefulness !classTypeNameForUsefulness]
      elsif self.mIsAbstract then
        ioUsefulnessRootEntities += !initializerForUsefulness
      else
        [!?ioUsefulEntitiesGraph addEdge !initializerForUsefulness !classTypeNameForUsefulness]
      end
    end
  }

  //······························································································

}

//------------------------------------------------------------------------------------------------
//   CODE GENERATION
//------------------------------------------------------------------------------------------------

class @classTypeForGeneration : @semanticTypeForGeneration {
  private let @bool mIsAbstract
  private let @bool mIsReference
  private let @unifiedTypeMapEntry mSuperClass // Null if no super class
  private let @typedPropertyList mAllTypedAttributeList // Inherited followed by current attributes
  private let @typedPropertyList mCurrentTypedAttributeList
  private let @bool generateHeaderInSeparateFile // Significant only for classes
  private let @bool initializerNeedsCompilerVariable
  private let @string propertyInitializationCode
  private let @typedPropertyList synthetizedInitializerArgumentList
  private let @typedPropertyList inheritedSynthetizedInitializerArgumentList
  private let @initializerMap initializerMap
  private let @bool clonable

  //······························································································

  override method appendDeclaration1 ?!@stringset ioInclusionSet
                                     !@string outHeader {
    if not [self.mSuperClass isNull] then
      [self.mSuperClass addHeaderFileName !?ioInclusionSet]
    end
    let selfTypeDefinition = [self.mSelfTypeEntry definition]
    if self.mIsReference then
      outHeader = [filewrapper classGenerationTemplate.referenceClassTypeHeader1
        !selfTypeDefinition.typeName.string
        ![self.mSelfTypeEntry identifierRepresentation]
        !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
        !self.mIsAbstract
        !self.mCurrentTypedAttributeList
      ]
    else
      outHeader = [filewrapper classGenerationTemplate.valueClassTypeHeader1
        !selfTypeDefinition.typeName.string
        ![self.mSelfTypeEntry identifierRepresentation]
        !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
        !self.mIsAbstract
        !self.mCurrentTypedAttributeList
      ]
    end
    outHeader += [filewrapper typeGenerationTemplate.unifiedClassBodyForType
      !selfTypeDefinition.typeName.string
      ![self.mSelfTypeEntry identifierRepresentation]
      !selfTypeDefinition.isConcrete
      !selfTypeDefinition.initializerMap
      !selfTypeDefinition.classFunctionMap
      !selfTypeDefinition.getterMap
      !selfTypeDefinition.setterMap
      !selfTypeDefinition.instanceMethodMap
      !selfTypeDefinition.classMethodMap
      !selfTypeDefinition.readSubscriptMap
      !selfTypeDefinition.enumerationDescriptorList
      !selfTypeDefinition.features
      !selfTypeDefinition.addAssignOperatorArguments
      !selfTypeDefinition.typeForEnumeratedElement
      !selfTypeDefinition.supportCollectionValue
    ]
  }

  //······························································································

  override method appendDeclaration2 ?let @string inOutputDirectory
                                     ?!@stringset ioInclusionSet
                                     !@string outHeader {
    for (t 4*) in self.mCurrentTypedAttributeList do
      [t addHeaderFileName !?ioInclusionSet]
    end
    let selfTypeDefinition = [self.mSelfTypeEntry definition]
    if self.mIsReference then
      if self.generateHeaderInSeparateFile then
        let @string part1 = [filewrapper classGenerationTemplate.referenceClassTypeHeader2part1
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
          ![self.mSelfTypeEntry definition].getterMap
          ![self.mSelfTypeEntry definition].instanceMethodMap
          !self.initializerMap
        ]
        let @string part2 = [filewrapper classGenerationTemplate.referenceClassTypeHeader2part2
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
          !self.synthetizedInitializerArgumentList
        ]
        let @string headerFileName = "separateHeaderFor_" + [self.mSelfTypeEntry identifierRepresentation] + ".h"
        [@string generateFileWithPattern
          !startPath:inOutputDirectory + "/../user-headers"
          !fileName:headerFileName
          !lineComment:"//"
          !header:"" // Header
          !defaultUserZone1:"\n\n" // Defaut user zone1
          !generatedZone2:part1
          !defaultUserZone2:"\n\n" // Defaut user zone2
          !generatedZone3:part2
          !makeExecutable:false
        ]
        outHeader = "#include \"" + headerFileName + "\"\n\n"
      else
        outHeader = [filewrapper classGenerationTemplate.referenceClassTypeHeader2part1
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
          ![self.mSelfTypeEntry definition].getterMap
          ![self.mSelfTypeEntry definition].instanceMethodMap
          !self.initializerMap
        ]
        outHeader += [filewrapper classGenerationTemplate.referenceClassTypeHeader2part2
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
          !self.synthetizedInitializerArgumentList
        ]
      end
    else
      if self.generateHeaderInSeparateFile then
        let part1 = [filewrapper classGenerationTemplate.valueClassTypeHeader2part1
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
          ![self.mSelfTypeEntry definition].getterMap
          ![self.mSelfTypeEntry definition].instanceMethodMap
        ]
        let part2 = [filewrapper classGenerationTemplate.valueClassTypeHeader2part2
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
        ]
        let @string headerFileName = "separateHeaderFor_" + [self.mSelfTypeEntry identifierRepresentation] + ".h"
        [@string generateFileWithPattern
          !startPath:inOutputDirectory + "/../user-headers"
          !fileName:headerFileName
          !lineComment:"//"
          !header:"" // Header
          !defaultUserZone1:"\n\n" // Defaut user zone1
          !generatedZone2:part1
          !defaultUserZone2:"\n\n" // Defaut user zone2
          !generatedZone3:part2
          !makeExecutable:false
        ]
        outHeader = "#include \"" + headerFileName + "\"\n\n"
      else
        outHeader = [filewrapper classGenerationTemplate.valueClassTypeHeader2part1
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
          ![self.mSelfTypeEntry definition].getterMap
          ![self.mSelfTypeEntry definition].instanceMethodMap
        ]
        outHeader += [filewrapper classGenerationTemplate.valueClassTypeHeader2part2
          !selfTypeDefinition.typeName.string
          ![self.mSelfTypeEntry identifierRepresentation]
          !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
          !self.mCurrentTypedAttributeList
          !self.mAllTypedAttributeList
          !self.mIsAbstract
        ]
      end
    end
  }

  //······························································································

  override method appendSpecificImplementation ?let @unifiedTypeMap unused inTypeMap
                                               ?!@stringset ioInclusionSet
                                               !@string outImplementation {
    [self.mSelfTypeEntry addHeaderFileName !?ioInclusionSet]
    let selfTypeDefinition = [self.mSelfTypeEntry definition]
    let at = [self.mAllTypedAttributeList subListWithRange
      !@{!0 ![self.mAllTypedAttributeList count] - [self.mCurrentTypedAttributeList count]}
    ]
    if self.mIsReference then
      outImplementation = [filewrapper classGenerationTemplate.referenceClassTypeSpecificImplementation
        !selfTypeDefinition.typeName.string
        ![self.mSelfTypeEntry identifierRepresentation]
        !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
        !currentPropertyList: self.mCurrentTypedAttributeList
        !allPropertyList: self.mAllTypedAttributeList
        !inheritedPropertyList: at
        !self.mIsAbstract
        !self.initializerNeedsCompilerVariable
        !self.propertyInitializationCode
        ![selfTypeDefinition.features contains !.generateSynthetizedInitializer]
        !self.synthetizedInitializerArgumentList
        !self.inheritedSynthetizedInitializerArgumentList
        !selfTypeDefinition.initializerMap
        !self.clonable
      ]
    else
      outImplementation = [filewrapper classGenerationTemplate.valueClassTypeSpecificImplementation
        !selfTypeDefinition.typeName.string
        ![self.mSelfTypeEntry identifierRepresentation]
        !if [self.mSuperClass isNull] then "" else [self.mSuperClass identifierRepresentation] end
        !self.mCurrentTypedAttributeList
        !self.mAllTypedAttributeList
        !at
        !self.mIsAbstract
      ]
    end
  }

  //······························································································

}

//------------------------------------------------------------------------------------------------

func generateClassGetterDeclaration ?let @lstring inGetterName
                                    ?let @functionSignature inArgumentTypeList
                                    ?let @bool inHasCompilerArgument
                                    ?let @unifiedTypeMapEntry inReturnedType
                                    ?let @methodQualifier inQualifier -> @string {
  var generateMethodDeclaration = true
  var suffix = ""
//---
  switch inQualifier
  case isVirtualAbstract :
    suffix = " = 0"
  case isVirtual :
  case isBasic, isBasicFinal :
    generateMethodDeclaration = false
  case isInherited :
    generateMethodDeclaration = false
  case isVirtualOverriding :
    suffix = " override"
  case isVirtualOverridingAbstract :
    suffix = " override = 0"
  end
//---
  result = ""
  if generateMethodDeclaration then
    result = "//--- Extension getter " + inGetterName + "\n"
    result += "  public: virtual class GGS_" + [inReturnedType identifierRepresentation]
    result += " getter_" + [inGetterName identifierRepresentation] + " ("
    var first = true
    for formalArgument in inArgumentTypeList
    do
      if first then
        first = false
      else
        result += ",\n           "
      end
      result += "const class GGS_" + [formalArgument.mFormalArgumentType identifierRepresentation]
      result += " " + formalArgument.mFormalArgumentName
    end
    if inHasCompilerArgument then
      if not first then
        result += ",\n           "
      end
      result += "Compiler *"
      first = false
    end
    result += if first then "LOCATION_ARGS" else " COMMA_LOCATION_ARGS" end + ") const"
    result += suffix + " ;\n\n"
  end
}

//------------------------------------------------------------------------------------------------

func generateClassInstanceMethodDeclaration ?let @lstring inMethodName
                                            ?let @formalParameterSignature inArgumentTypeList
                                            ?let @bool inHasCompilerArgument
                                            ?let @methodQualifier inQualifier -> @string {
  var generateMethodDeclaration = true
  var suffix = ""
//---
  switch inQualifier
  case isVirtualAbstract :
    suffix = " = 0"
  case isVirtual :
  case isBasic, isBasicFinal :
    generateMethodDeclaration = false
  case isInherited :
    generateMethodDeclaration = false
  case isVirtualOverriding :
    suffix = " override"
  case isVirtualOverridingAbstract :
    suffix = " override = 0"
  end
//---
  result = ""
  if generateMethodDeclaration then
    result += "//--- Extension method " + inMethodName + "\n"
    result += "  public: virtual void method_" + [inMethodName identifierRepresentation] + " ("
    var first = true
    for formalArgument in inArgumentTypeList
    do
      if first then
        first = false
      else
        result += ",\n           "
      end
      switch formalArgument.mFormalArgumentPassingMode
      case argumentConstantIn :
        result += "const class GGS_" + [formalArgument.mFormalArgumentType identifierRepresentation]
      case argumentInOut :
        result += "class GGS_" + [formalArgument.mFormalArgumentType identifierRepresentation] + " &"
      case argumentOut :
        result += "class GGS_" + [formalArgument.mFormalArgumentType identifierRepresentation] + " &"
      case argumentVarIn :
        result += "class GGS_" + [formalArgument.mFormalArgumentType identifierRepresentation]
      end
      result += " arg_" + formalArgument.mFormalArgumentName
    end
    if inHasCompilerArgument then
      if not first then
        result += ",\n           "
      end
      result += "Compiler *"
      first = false
    end
    result += if first then "LOCATION_ARGS" else " COMMA_LOCATION_ARGS" end + ")"
    result += suffix + " ;\n\n"
  end
}

//------------------------------------------------------------------------------------------------
//! Generation Filewrappers
//------------------------------------------------------------------------------------------------

filewrapper classGenerationTemplate in "+generation-templates/type_generation" {
  "ggs"
}{
}{

//--------- Value Class
  template valueClassTypeHeader1 "GALGAS_value_class.h1.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?@bool IS_ABSTRACT
    ?@typedPropertyList CURRENT_PROPERTY_LIST

  template valueClassTypeHeader2part1 "GALGAS_value_class.h2-part1.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?@typedPropertyList CURRENT_PROPERTY_LIST
    ?@typedPropertyList ALL_PROPERTY_LIST
    ?@bool IS_ABSTRACT
    ?@getterMap GETTER_MAP
    ?@instanceMethodMap INSTANCE_METHOD_MAP

  template valueClassTypeHeader2part2 "GALGAS_value_class.h2-part2.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?@typedPropertyList CURRENT_PROPERTY_LIST
    ?@typedPropertyList ALL_PROPERTY_LIST
    ?@bool IS_ABSTRACT

  template valueClassTypeSpecificImplementation "GALGAS_value_class.cpp.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?@typedPropertyList CURRENT_PROPERTY_LIST
    ?@typedPropertyList ALL_PROPERTY_LIST
    ?@typedPropertyList INHERITED_ATTRIBUTE_LIST
    ?@bool IS_ABSTRACT


//--------- Reference Class
  template referenceClassTypeHeader1 "GALGAS_reference_class.h1.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?@bool IS_ABSTRACT
    ?@typedPropertyList CURRENT_PROPERTY_LIST

  template referenceClassTypeHeader2part1 "GALGAS_reference_class.h2-part1.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?@typedPropertyList CURRENT_PROPERTY_LIST
    ?@typedPropertyList ALL_PROPERTY_LIST
    ?@bool IS_ABSTRACT
    ?@getterMap GETTER_MAP
    ?@instanceMethodMap INSTANCE_METHOD_MAP
    ?@initializerMap INITIALIZER_MAP

  template referenceClassTypeHeader2part2 "GALGAS_reference_class.h2-part2.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?@typedPropertyList CURRENT_PROPERTY_LIST
    ?@typedPropertyList ALL_PROPERTY_LIST
    ?@bool IS_ABSTRACT
    ?@typedPropertyList INITIALIZER_ARGUMENT_LIST

  template referenceClassTypeSpecificImplementation "GALGAS_reference_class.cpp.galgasTemplate"
    ?@string TYPE_NAME
    ?@string TYPE_IDENTIFIER
    ?@string SUPER_TYPE_IDENTIFIER
    ?currentPropertyList: @typedPropertyList CURRENT_PROPERTY_LIST
    ?allPropertyList: @typedPropertyList ALL_PROPERTY_LIST
    ?inheritedPropertyList: @typedPropertyList INHERITED_ATTRIBUTE_LIST
    ?@bool IS_ABSTRACT
    ?@bool CONSTRUCTOR_NEEDS_COMPILER_VAR
    ?@string CONSTRUCTOR_INITIALIZATION_CODE
    ?@bool GENERATE_SYNTHETIZED_INITIALIZER
    ?@typedPropertyList INITIALIZER_ARGUMENT_LIST
    ?@typedPropertyList INHERITED_INITIALIZER_ARGUMENT_LIST
    ?@initializerMap INITIALIZER_MAP
    ?@bool CLONABLE
}

//------------------------------------------------------------------------------------------------
"""
