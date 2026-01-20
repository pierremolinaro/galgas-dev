//--------------------------------------------------------------------------------------------------
//
//  AutoLayoutFontButton.swift
//
//  Created by Pierre Molinaro on 26/02/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public final class AutoLayoutFontButton : AutoLayoutButton {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mFont : NSFont? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (size inSize : NSControl.ControlSize) {
    super.init (title: "", size: inSize)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func runAction () {
    super.runAction ()
    self.showFontManager ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func showFontManager () {
    if let font = self.mFont {
      let fontManager = NSFontManager.shared
      fontManager.setSelectedFont (font, isMultiple: false)
      fontManager.target = self
      fontManager.action = #selector (Self.changeFont (_:))
      fontManager.orderFrontFontPanel (self)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func changeFont (_ sender : Any?) {
    if let font = self.mFont, let fontManager = sender as? NSFontManager {
      let newFont = fontManager.convert (font)
      self.mValueController?.updateModel (withValue: newFont)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func mySetFont (font inFont : NSFont) {
    self.mFont = inFont
    let newTitle = String (format:"%@ - %g pt.", inFont.displayName ?? "?", inFont.pointSize)
    self.setTitle (newTitle)
    self.mCocoaButton.toolTip = newTitle
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $fontValue binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func updateFont (_ object : EBObservableProperty <NSFont>) {
    switch object.selection {
    case .empty, .multiple :
      self.enable (fromValueBinding: false)
      self.setTitle ("—")
    case .single (let v) :
      self.enable (fromValueBinding: true)
      self.mySetFont (font: v)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mValueController : EBGenericReadWritePropertyController <NSFont>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_fontValue (_ inObject : EBObservableMutableProperty <NSFont>) -> Self {
    self.mValueController = EBGenericReadWritePropertyController <NSFont> (
      observedObject: inObject,
      callBack: { [weak self] in self?.updateFont (inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
