//--------------------------------------------------------------------------------------------------
//
//  Created by Pierre Molinaro on 20/06/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  fileprivate let prefsEnableObjectAllocationDebugString        = "EBAllocationDebug:enableObjectAllocationDebug"
  fileprivate let prefsEnableObjectAllocationStatsWindowVisible = "EBAllocationDebug:allocationStatsWindowVisible"
  fileprivate let prefsEnableObjectAllocationStatsDisplayFilter = "EBAllocationDebug:allocationStatsDisplayFilter"
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  fileprivate let gEnableObjectAllocationDebug = UserDefaults.standard.bool (forKey: prefsEnableObjectAllocationDebugString)
#endif

//--------------------------------------------------------------------------------------------------
//    noteObjectAllocation
//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  nonisolated public func noteObjectAllocation (_ inObject : AnyObject) {  // NOT ALWAYS IN MAIN THREAD
    if gEnableObjectAllocationDebug {
      let objectType : AnyObject.Type = type (of: inObject)
      Task {
        await serializedNoteObjectAllocation (ofType: objectType)
      }
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
//    noteObjectDeallocation
//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  nonisolated public func noteObjectDeallocation (_ inObject : AnyObject) {  // NOT ALWAYS IN MAIN THREAD
    if gEnableObjectAllocationDebug {
      let objectType : AnyObject.Type = type (of: inObject)
      Task {
        await serializedNoteObjectDeallocation (ofType: objectType)
      }
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @globalActor fileprivate final actor PendingAllocationBufferActor {
    static let shared = PendingAllocationBufferActor ()
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @PendingAllocationBufferActor fileprivate var gPendingAllocatedObjectClasses = [AnyObject.Type] ()
  @PendingAllocationBufferActor fileprivate var gPendingDeallocatedObjectClasses = [AnyObject.Type] ()
  @PendingAllocationBufferActor fileprivate var gTransmitEventTriggered = false
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @PendingAllocationBufferActor fileprivate func serializedNoteObjectAllocation (ofType inType : AnyObject.Type) {
    gPendingAllocatedObjectClasses.append (inType)
    triggerTransmit ()
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @PendingAllocationBufferActor fileprivate func serializedNoteObjectDeallocation (ofType inType : AnyObject.Type) {
    gPendingDeallocatedObjectClasses.append (inType)
    triggerTransmit ()
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @PendingAllocationBufferActor fileprivate func triggerTransmit () {
    if !gTransmitEventTriggered {
      gTransmitEventTriggered = true
      Task.detached {
        try? await Task.sleep (nanoseconds: 100_000_000)
        let (pendingAllocations, pendingDeallocations) = await getPendingAllocation ()
        await gAllocationDebugActorClass.transmitPendingAllocations (pendingAllocations, pendingDeallocations)
      }
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @PendingAllocationBufferActor fileprivate func getPendingAllocation () -> ([AnyObject.Type], [AnyObject.Type]) {
    gTransmitEventTriggered = false
    let result = (gPendingAllocatedObjectClasses, gPendingDeallocatedObjectClasses)
    gPendingAllocatedObjectClasses.removeAll (keepingCapacity: true)
    gPendingDeallocatedObjectClasses.removeAll (keepingCapacity: true)
    return result
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @globalActor fileprivate final actor AllocationDebugActor {
    static let shared = AllocationDebugActor ()
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @AllocationDebugActor fileprivate var gAllocationDebugActorClass = AllocationDebugActorClass ()
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @AllocationDebugActor final fileprivate class AllocationDebugActorClass {

    private var mTotalAllocatedObjectCountByClass = [String : Int] ()
    private var mLiveObjectCountByClass = [String : Int] ()
    private var mRefreshTriggered = false

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    func transmitPendingAllocations (_ inAllocations : [AnyObject.Type], _ inDeallocations : [AnyObject.Type]) {
      for t in inAllocations {
        let className = String (describing: t)
        let currentCount = self.mTotalAllocatedObjectCountByClass [className] ?? 0
        self.mTotalAllocatedObjectCountByClass [className] = currentCount + 1
        let liveCount = self.mLiveObjectCountByClass [className] ?? 0
        self.mLiveObjectCountByClass [className] = liveCount + 1
      }
      for t in inDeallocations {
        let className = String (describing: t)
        if let n = self.mLiveObjectCountByClass [className] {
          if n > 1 {
            self.mLiveObjectCountByClass [className] = n - 1
          }else{
            self.mLiveObjectCountByClass [className] = nil
          }
        }
      }
    //---
      if !self.mRefreshTriggered {
        self.mRefreshTriggered = true
        Task.detached {
          try? await Task.sleep (nanoseconds: 250_000_000) // 250 ms
          let (totalAllocatedObjectCountByClass, liveObjectCountByClass) = await self.getAllocations ()
          DispatchQueue.main.async {
            gDebugObject?.display (totalAllocatedObjectCountByClass, liveObjectCountByClass)
          }
        }
      }
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    private func getAllocations () -> ([String : Int], [String : Int]) {
      self.mRefreshTriggered = false
      return (self.mTotalAllocatedObjectCountByClass, self.mLiveObjectCountByClass)
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  }
#endif

//--------------------------------------------------------------------------------------------------
//    appendAllocationDebugMenuItems
//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @MainActor public func appendAllocationDebugMenuItems (_ inMenu : NSMenu) {
    gDebugObject = EBAllocationDebug ()
  //---
    let item = NSMenuItem (
      title: "Show Allocation Stats",
      action: #selector (EBAllocationDebug.showAllocationStatWindow (_:)),
      keyEquivalent: ","
    )
    item.keyEquivalentModifierMask = [.command, .control]
    item.target = gDebugObject
    inMenu.addItem (item)
  }
#endif

//--------------------------------------------------------------------------------------------------
//   EBAllocationItemDisplay class
//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  fileprivate struct EBAllocationItemDisplay {
    let className : String
    let allCount : Int
    let live : Int
    let snapShot : Int
  }
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @MainActor private var gDebugObject : EBAllocationDebug? = nil
#endif

//--------------------------------------------------------------------------------------------------

#if CONFIGURATION_IS_DEBUG
  @MainActor final class EBAllocationDebug {

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    //   Properties
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    private var mTotalAllocatedObjectCountByClass = [String : Int] ()
    private var mLiveObjectCountByClass = [String : Int] ()
    private var mSnapShotDictionary = [String : Int] ()

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    private let mAllocationStatsDisplayFilterIndex = EBPreferenceProperty <Int> (
      defaultValue: 0,
      prefKey: prefsEnableObjectAllocationStatsDisplayFilter
    )

    private let mAllocationStatsWindowVisibleAtLaunch = EBPreferenceProperty <Bool> (
      defaultValue: false,
      prefKey: prefsEnableObjectAllocationStatsWindowVisible
    )

    private let mEnableAllocationDebug = EBPreferenceProperty <Bool> (
      defaultValue: false,
      prefKey: prefsEnableObjectAllocationDebugString
    )

    private let mTotalAllocated = EBStandAloneProperty <Int> (0)

    private let mCurrentlyAllocated = EBStandAloneProperty <Int> (0)

    fileprivate let mAllocationStatsWindow = NSWindow (
      contentRect: NSRect(x: 0.0, y: 0.0, width: 600.0, height: 400.0),
      styleMask: [.titled, .closable, .miniaturizable],
      backing: .buffered,
      defer: true
    )

    fileprivate let mAllocationStatsWindowVisibleAtLaunchCheckbox = AutoLayoutCheckbox (
      title: "Visible At Launch",
      size: .small
    )

    fileprivate let mEnableAllocationDebugCheckbox = AutoLayoutCheckbox (
      title: "Enable Allocation Debug",
      size: .small
    )

    fileprivate let mTotalAllocatedLabel = AutoLayoutIntObserverField (bold: true, size: .small)

    fileprivate let mCurrentlyAllocatedLabel = AutoLayoutIntObserverField (bold: true, size: .small)
//      .setFont (NSFont.userFixedPitchFont (ofSize: <#T##CGFloat#>)

    fileprivate let mPerformSnapShotButton = AutoLayoutButton (title: "Snap Shot", size: .small)

    fileprivate let mFilterPopUpButton = AutoLayoutTaggedPopUpButton (size: .small)
      .add (title: "All Classes", withTag: 0)
      .add (title: "Allocated Classes", withTag: 1)
      .add (title: "Differences with Snap Shot", withTag: 2)

    fileprivate let mStatsTableView = AutoLayoutTableView (size: .small, addControlButtons: false)

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    //    init
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

     init () {
     //--- Bindings
       _ = self.mAllocationStatsWindowVisibleAtLaunchCheckbox.bind_value (self.mAllocationStatsWindowVisibleAtLaunch)
       _ = self.mEnableAllocationDebugCheckbox.bind_value (self.mEnableAllocationDebug)
       _ = self.mTotalAllocatedLabel.bind_observedValue (self.mTotalAllocated)
       _ = self.mCurrentlyAllocatedLabel.bind_observedValue (self.mCurrentlyAllocated)
       _ = self.mPerformSnapShotButton.setAction { [weak self] in self?.performSnapShotAction () }
       _ = self.mFilterPopUpButton.bind_selectedTag (self.mAllocationStatsDisplayFilterIndex)
         .setAction { [weak self] in self?.allocationStatsDisplayFilterIndexDidChange () }
    //--- Configure table view
      self.mStatsTableView.configure (
        allowsEmptySelection: false,
        allowsMultipleSelection: false,
        rowCountCallBack: { [weak self] in self?.mAllocationStatsDataSource.count ?? 0 },
        delegate: nil
      )
      _ = self.mStatsTableView.setIntercellSpacing (horizontal: 0, vertical: 5)
      self.mStatsTableView.addColumn_String (
        valueGetterDelegate: { [weak self] in return self?.mAllocationStatsDataSource [$0].className ?? "" },
        valueSetterDelegate: nil,
        sortDelegate: { [weak self] (ascending) in
          self?.mAllocationStatsDataSource.sort { ascending ? ($0.className < $1.className) : ($0.className > $1.className) }
        },
        title: "Class Name",
        minWidth: 80,
        maxWidth: 1000,
        headerAlignment: .center,
        contentAlignment: .left
      )
      self.mStatsTableView.addColumn_Int (
        valueGetterDelegate: { [weak self] in return self?.mAllocationStatsDataSource [$0].snapShot ?? -1 },
        valueSetterDelegate: nil,
        sortDelegate: { [weak self] (ascending) in
          self?.mAllocationStatsDataSource.sort { ascending ? ($0.snapShot < $1.snapShot) : ($0.snapShot > $1.snapShot) }
        },
        title: "Snap Shot",
        minWidth: 90,
        maxWidth: 90,
        headerAlignment: .center,
        contentAlignment: .right
      )
      self.mStatsTableView.addColumn_Int (
        valueGetterDelegate: { [weak self] in return self?.mAllocationStatsDataSource [$0].live ?? -1 },
        valueSetterDelegate: nil,
        sortDelegate: { [weak self] (ascending) in
          self?.mAllocationStatsDataSource.sort { ascending ? ($0.live < $1.live) : ($0.live > $1.live) }
        },
        title: "Live",
        minWidth: 80,
        maxWidth: 80,
        headerAlignment: .center,
        contentAlignment: .right
      )
      self.mStatsTableView.addColumn_Int (
        valueGetterDelegate: { [weak self] in return self?.mAllocationStatsDataSource [$0].allCount ?? -1 },
        valueSetterDelegate: nil,
        sortDelegate: { [weak self] (ascending) in
          self?.mAllocationStatsDataSource.sort { ascending ? ($0.allCount < $1.allCount) : ($0.allCount > $1.allCount) }
        },
        title: "Total",
        minWidth: 80,
        maxWidth: 80,
        headerAlignment: .center,
        contentAlignment: .right
      )
    //--- Configure Window
      self.mAllocationStatsWindow.title = "Allocation Stats"
      self.mAllocationStatsWindow.isReleasedWhenClosed = false // Close button just hides the window, but do not release it
      self.mAllocationStatsWindow.setFrameAutosaveName ("allocation.stats.window.frame")
    //--- Build window contents
      let row0 = AutoLayoutHorizontalStackView ()
        .set (margins: .zero)
        .appendView (self.mEnableAllocationDebugCheckbox)
        .appendFlexibleSpace ()
        .appendView (AutoLayoutStaticLabel (title: "You should restart the application for this setting to take effect.", bold: true, size: .small, alignment: .right))
     let row1 = AutoLayoutHorizontalStackView ()
        .set (margins: .zero)
        .appendView (self.mAllocationStatsWindowVisibleAtLaunchCheckbox)
        .appendFlexibleSpace ()
        .appendView (AutoLayoutStaticLabel (title: "Total Allocated", bold: true, size: .small, alignment: .center))
        .appendView (self.mTotalAllocatedLabel)
      let row2 = AutoLayoutHorizontalStackView ()
        .set (margins: .zero)
        .appendView (self.mPerformSnapShotButton)
        .appendView (AutoLayoutStaticLabel (title: "Display", bold: true, size: .small, alignment: .center))
        .appendView (self.mFilterPopUpButton)
        .appendFlexibleSpace ()
        .appendView (AutoLayoutStaticLabel (title: "Currently Allocated", bold: true, size: .small, alignment: .center))
        .appendView (self.mCurrentlyAllocatedLabel)
      let mainVStack = AutoLayoutVerticalStackView ()
        .appendView (row0)
        .appendSeparator ()
        .appendView (row1)
        .appendView (row2)
        .appendView (self.mStatsTableView)
    //--- Assign main view to window
      self.mAllocationStatsWindow.setRootView (mainVStack)
    //--- Show Window at Launch
      if self.mAllocationStatsWindowVisibleAtLaunch.propval {
        self.mAllocationStatsWindow.makeKeyAndOrderFront (nil)
      }
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    private var mAllocationStatsDataSource = [EBAllocationItemDisplay] ()
    private var mRefreshTriggered = false

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    //    triggerRefreshDisplay
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    private func triggerRefreshDisplay () {
      if !self.mRefreshTriggered {
        self.mRefreshTriggered = true
        let deadline = DispatchTime (uptimeNanoseconds: DispatchTime.now ().uptimeNanoseconds + 100_000_000)
        DispatchQueue.main.asyncAfter (deadline: deadline) {
          self.mRefreshTriggered = false
          self.displayAllocation ()
        }
      }
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    private func allocationStatsDisplayFilterIndexDidChange () {
      self.triggerRefreshDisplay ()
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    @objc func showAllocationStatWindow (_ inSender : AnyObject) {
      self.mAllocationStatsWindow.makeKeyAndOrderFront (inSender)
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    //    performSnapShotAction
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    private func performSnapShotAction () {
      self.mSnapShotDictionary = self.mLiveObjectCountByClass
      self.triggerRefreshDisplay ()
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    //    Display
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    @MainActor func display (_ inTotalAllocatedObjectCountByClass : [String : Int], _ inLiveObjectCountByClass : [String : Int]) {
      self.mTotalAllocatedObjectCountByClass = inTotalAllocatedObjectCountByClass
      self.mLiveObjectCountByClass = inLiveObjectCountByClass
      self.displayAllocation ()
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
        if 1 == self.mAllocationStatsDisplayFilterIndex.propval {
          display = liveByClass != 0 ;
        }else if 2 == self.mAllocationStatsDisplayFilterIndex.propval {
          display = liveByClass != snapShotByClass ;
        }
        if display {
          let item = EBAllocationItemDisplay (
            className: className,
            allCount: totalByClass,
            live: liveByClass,
            snapShot: snapShotByClass
          )
          array.append (item)
        }
      }
      self.mCurrentlyAllocated.setProp (liveObjectCount)
      self.mTotalAllocated.setProp (totalObjectCount)
    //---
      self.mAllocationStatsDataSource = array
      self.mStatsTableView.sortAndReloadData () // Will sort mAllocationStatsDataSource
      flushOutletEvents ()
    }

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

  }
#endif

//--------------------------------------------------------------------------------------------------
