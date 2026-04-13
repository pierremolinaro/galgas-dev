//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 11/09/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

fileprivate let ENABLE_ALLOCATION_DEBUG = "allocationDebug:enabled"
fileprivate let ENABLE_ALLOCATION_VISIBLE_AT_LAUNCH = "allocationDebug:visibleAtLaunch"
fileprivate let DISPLAY_FILTER = "allocationDebug:statsDisplayFilter"

//--------------------------------------------------------------------------------------------------
//    Public routines
//--------------------------------------------------------------------------------------------------

//#if DEBUG
  nonisolated func noteObjectAllocation (_ inObject : AnyObject) {  // NOT ALWAYS IN MAIN THREAD
    let objectType : AnyObject.Type = type (of: inObject)
    DispatchQueue.main.async {
      AllocationState.shared.enterAllocation (objectType)
    }
  }
//#endif

//--------------------------------------------------------------------------------------------------

//#if DEBUG
  nonisolated func noteObjectDeallocation (_ inObject : AnyObject) {  // NOT ALWAYS IN MAIN THREAD
    let objectType : AnyObject.Type = type (of: inObject)
    DispatchQueue.main.async {
      AllocationState.shared.enterDeallocation (objectType)
    }
  }
//#endif

//--------------------------------------------------------------------------------------------------

@Observable final class AllocationState {
// § @AppStorage(ENABLE_ALLOCATION_DEBUG) private var mEnableAllocationAtLaunch : Bool = false
//  @AppStorage(DISPLAY_FILTER) private var mDisplayFilter = 0
  private var mEnableAllocationAtLaunch : Bool = false
  private var mDisplayFilter = 0

  var mCurrentlyAllocated : Int = 0
  var mTotalAllocated : Int = 0
  var mAllocationArray = [EBAllocationItemDisplay] ()

  private var mPendingAllocatedObjectClasses = [AnyObject.Type] ([])
  private var mPendingDeallocatedObjectClasses = [AnyObject.Type] ([])
  private var mTotalAllocatedObjectCountByClass = [String : Int] ()
  private var mLiveObjectCountByClass = [String : Int] ()
  private var mSnapShotDictionary = [String : Int] ()

  static let shared = AllocationState ()

  func enterAllocation (_ inType : AnyObject.Type) {
    if self.mEnableAllocationAtLaunch {
      self.mPendingAllocatedObjectClasses.append (inType)
      self.triggerRefreshDisplay ()
    }
  }

  func enterDeallocation (_ inType : AnyObject.Type) {
    if self.mEnableAllocationAtLaunch {
      self.mPendingDeallocatedObjectClasses.append (inType)
      self.triggerRefreshDisplay ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mRefreshTriggered = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //    triggerRefreshDisplay
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func triggerRefreshDisplay () {
    if !self.mRefreshTriggered {
      self.mRefreshTriggered = true
      let deadline = DispatchTime (uptimeNanoseconds: DispatchTime.now ().uptimeNanoseconds + 1000_000_000)
      DispatchQueue.main.asyncAfter (deadline: deadline) {
        self.mRefreshTriggered = false
        self.handlePendingAllocations ()
        self.displayAllocation ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func handlePendingAllocations () {
    for t in self.mPendingAllocatedObjectClasses {
      let className = String (describing: t)
      let currentCount = self.mTotalAllocatedObjectCountByClass [className] ?? 0
      self.mTotalAllocatedObjectCountByClass [className] = currentCount + 1
      let liveCount = self.mLiveObjectCountByClass [className] ?? 0
      self.mLiveObjectCountByClass [className] = liveCount + 1
    }
    self.mPendingAllocatedObjectClasses.removeAll (keepingCapacity: true)
    for t in self.mPendingDeallocatedObjectClasses {
      let className = String (describing: t)
      if let n = self.mLiveObjectCountByClass [className] {
        if n > 1 {
          self.mLiveObjectCountByClass [className] = n - 1
        }else{
          self.mLiveObjectCountByClass [className] = nil
        }
      }
    }
    self.mPendingDeallocatedObjectClasses.removeAll (keepingCapacity: true)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //    displayAllocation
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func displayAllocation () {
    var liveObjectCount = 0
    var totalObjectCount = 0
    var array = [EBAllocationItemDisplay] ()
    for (className, totalByClass) in self.mTotalAllocatedObjectCountByClass {
      let liveByClass = self.mLiveObjectCountByClass [className] ?? 0
      let snapShotByClass = self.mSnapShotDictionary [className] ?? 0
      liveObjectCount += liveByClass
      totalObjectCount += totalByClass
      var display = true
      if 1 == self.mDisplayFilter {
        display = liveByClass != 0
      }else if 2 == self.mDisplayFilter {
        display = liveByClass != snapShotByClass
      }
      if display {
        let item = EBAllocationItemDisplay (
          className: className,
          allCount: totalByClass,
          liveCount: liveByClass,
          snapShot: snapShotByClass
        )
        array.append (item)
      }
    }
    self.mAllocationArray = array
    self.mCurrentlyAllocated = liveObjectCount
    self.mTotalAllocated = totalObjectCount
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //    performSnapShotAction
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func performSnapShotAction () {
    self.mSnapShotDictionary = self.mLiveObjectCountByClass
    self.triggerRefreshDisplay ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct EBAllocationItemDisplay : Identifiable {
  let id = UUID ()
  let className : String
  let allCount : Int
  let liveCount : Int
  let snapShot : Int
}

//--------------------------------------------------------------------------------------------------

struct AllocationDebugView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(ENABLE_ALLOCATION_DEBUG) private var mEnableAllocationDebug = true
  @AppStorage(DISPLAY_FILTER) private var mDisplayFilter = 0
  @State var mAllocs = AllocationState.shared

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    VStack {
      HStack {
        Toggle ("Enable Allocation Debug", isOn: self.$mEnableAllocationDebug)
        Text ("You should restart the application for this setting to take effect.").italic().controlSize(.small)
        Spacer ()
        Text ("Total Allocated").bold (true)
        Text ("\(self.mAllocs.mTotalAllocated)").bold (true)
      }.padding ([.leading, .trailing, .top], 8.0)
      HStack {
        Button ("Snap Shot") { self.mAllocs.performSnapShotAction () }
        Picker("Display", selection: self.$mDisplayFilter) {
          Text("All Classes").tag(0)
          Text("Allocated Classes").tag(1)
          Text("Differences with Snap Shot").tag(2)
        }.onChange (of: self.mDisplayFilter) { self.mAllocs.triggerRefreshDisplay () }
        Spacer ()
        Text ("Currently Allocated").bold (true)
        Text ("\(self.mAllocs.mCurrentlyAllocated)").bold (true)
      }.padding ([.leading, .trailing, .bottom], 8.0)
      Table (self.mAllocs.mAllocationArray) {
        TableColumn ("Class Name", value: \.className)
        TableColumn ("Live") { row in Text ("\(row.liveCount)") }.width (50).alignment(.center)
        TableColumn ("Snap Shot") { row in Text ("\(row.snapShot)") }.width (75).alignment(.center)
        TableColumn ("Total") { row in Text ("\(row.allCount)") }.width (50).alignment(.center)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
}


//--------------------------------------------------------------------------------------------------
