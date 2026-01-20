//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

@MainActor public protocol EBObservableObjectProtocol : AnyObject {
  func startsBeingObserved (by inObserver : any EBObserverProtocol)
  func stopsBeingObserved (by inObserver : any EBObserverProtocol)
}

//--------------------------------------------------------------------------------------------------
