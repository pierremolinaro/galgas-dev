//
//  BaseView.swift
//  SimpleAutoLayout
//
//  Created by Pierre Molinaro on 30/11/2024.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

@MainActor open class BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Init
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init () {
    self.mCocoaView = InternalBase_NSView ()
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (withCocoaView inView : NSView) {
    self.mCocoaView = inView
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Deinit
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Hidden
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var isHidden : Bool { self.mCocoaView.isHidden }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setHidden (_ inFlag : Bool) {
    if self.mCocoaView.isHidden != inFlag {
      self.mCocoaView.isHidden = inFlag
      self.mSuperView?.invalidateSimpleLayout ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  View hierarchy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSubViews = [BaseView] ()
  private weak var mSuperView : BaseView? = nil
  private let mCocoaView : NSView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var window : NSWindow? { self.mCocoaView.window }
  public var cocoaView : NSView { self.mCocoaView }
  public var subViews : [BaseView] { self.mSubViews }
  public var visibleSubViews : [BaseView] { self.mSubViews.filter { !$0.isHidden } }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendView (_ inView : BaseView) -> Self {
    inView.removeFromSuperView ()
    self.mSubViews.append (inView)
    self.mCocoaView.addSubview (inView.cocoaView)
    inView.mSuperView = self
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func prependView (_ inView : BaseView) -> Self {
    inView.removeFromSuperView ()
    self.mSubViews.insert (inView, at: 0)
    self.mCocoaView.addSubview (inView.mCocoaView, positioned: .above, relativeTo: nil)
    inView.mSuperView = self
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func removeFromSuperView () {
    if let superview = self.mSuperView {
      self.mSuperView = nil
      superview.removeView (self)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func removeView (_ inView : BaseView) {
    inView.removeFromSuperView ()
    self.mSubViews.removeAll { $0 === inView }
    self.mCocoaView.subviews.removeAll { $0 === inView.cocoaView }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  open var smallestSize : NSSize { .zero }

  open var hAlignment : HorizontalAlignmentInVerticalStack { .fill }

  open var hStretchingResistance : HorizontalStretchingResistance { .lowest }

  open var vAlignment : VerticalAlignmentInHorizontalStack { .fill }

  open var vStretchingResistance : VerticalStretchingResistance { .lowest }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  weak var invalidatedLayoutDelegate : InvalidatedLayoutDelegate? = nil // SHOULD BE WEAK

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func invalidateSimpleLayout () {
    self.mSuperView?.invalidateSimpleLayout ()
    self.invalidatedLayoutDelegate?.layoutHasBeenInvalidated (for: self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func computeSimpleLayout (withFrame inFrame : NSRect) {
    self.mCocoaView.frame = inFrame
    self.mCocoaView.needsDisplay = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $hidden binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mHiddenController : MultipleBooleanBindingController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_hidden (_ inExpression : EBMultipleBindingBooleanExpression) -> Self {
    self.mHiddenController = MultipleBooleanBindingController (
      inExpression,
      { [weak self] in self?.updateHiddenState (from: inExpression.compute ()) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func updateHiddenState (from inObject : EBSelection <Bool>) {
    switch inObject {
    case .empty, .multiple :
      self.setHidden (false)
    case .single (let v) :
      self.setHidden (v)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate class InternalBase_NSView : NSView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init?(coder: NSCoder) {
    fatalError("init(coder:) has not been implemented")
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override var canBecomeKeyView : Bool { false }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
