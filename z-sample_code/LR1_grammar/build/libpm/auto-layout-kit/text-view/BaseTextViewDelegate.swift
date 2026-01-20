//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 23/12/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

@MainActor public protocol BaseTextViewDelegate : AnyObject {

  func willDrawTextView (_ inDirtyRect : NSRect, _ inCocoaWiew : InternalCocoaTextView)

  func didDrawTextView (_ inDirtyRect : NSRect, _ inCocoaWiew : InternalCocoaTextView)

  func didDrawVerticalScroller (_ inDirtyRect : NSRect,
                                _ inCocoaScroller : InternalVerticalScroller)

  func selectedRangeDidChange (_ inSelectedRange : NSRange, _ inCocoaWiew : InternalCocoaTextView)

  func selectionRange (forProposedRange inProposedSelRange : NSRange,
                       granularity inGranularity : NSSelectionGranularity,
                       _ inCocoaWiew : InternalCocoaTextView) -> NSRange?

  func keyDown (with inEvent : NSEvent,
                _ inCocoaWiew : InternalCocoaTextView,
                callSuperOnReturn outCallSuperOnReturn : inout Bool)

  func mouseDown (with inEvent : NSEvent,
                  _ inCocoaWiew : InternalCocoaTextView,
                  callSuperOnReturn outCallSuperOnReturn : inout Bool)

}

//--------------------------------------------------------------------------------------------------
