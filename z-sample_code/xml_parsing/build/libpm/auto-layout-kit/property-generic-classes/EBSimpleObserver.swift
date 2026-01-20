//
//  EBSimpleObserver.swift
//  ElCanari
//
//  Created by Pierre Molinaro on 07/10/2023.
//
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

public final class EBSimpleObserver : EBObserverProtocol {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private struct WeakObject {
//    weak private var mObservedObject : EBObservedObject?
//
//    init (object inObject : EBObservedObject) {
//      self.mObservedObject = inObject
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private var mObservedObjects = [WeakObject] ()
  private var mCallBack : Optional < () -> Void >

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (object inObject : EBObservedObject,
               _ inCallBack : @escaping () -> Void) {
//    self.mObservedObjects.append (WeakObject (object: inObject))
    self.mCallBack = inCallBack
    noteObjectAllocation (self)
    inObject.startsBeingObserved (by: self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (objects inObjects : [EBObservedObject],
               _ inCallBack : @escaping () -> Void) {
//    self.mObservedObjects.append (WeakObject (object: inObject))
    self.mCallBack = inCallBack
    noteObjectAllocation (self)
    for object in inObjects {
      object.startsBeingObserved (by: self)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  func invalidate () {
//    self.mObservedObject?.stopsBeingObserved (by: self)
//    self.mObservedObject = nil
//    self.mCallBack = nil
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func observedObjectDidChange () {
    self.mCallBack? ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
