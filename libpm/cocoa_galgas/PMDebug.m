//----------------------------------------------------------------------------*

#import "PMDebug.h"

//----------------------------------------------------------------------------*

static PMDebug * gDebugObject ;

//----------------------------------------------------------------------------*

void noteObjectAllocation (NSObject * inObject) {
  if (nil == gDebugObject) {
    gDebugObject = [PMDebug new] ;
    const BOOL ok = [NSBundle loadNibNamed:@"PMDebug" owner:gDebugObject] ;
    if (! ok) {
//      presentErrorWindow (__FILE__, __LINE__, @"Cannot load 'PMDebug' nib file") ;
    }
  }
  [gDebugObject pmNoteObjectAllocation:inObject] ;
}

//----------------------------------------------------------------------------*

void noteObjectDeallocation (NSObject * inObject) {
  [gDebugObject pmNoteObjectDeallocation:inObject] ;
}

//----------------------------------------------------------------------------*


@implementation PMDebug

//----------------------------------------------------------------------------*

@synthesize mAllocationStatsWindowVisibleAtLaunch ;
@synthesize mAllocatedObjectCount ;
@synthesize mTotalAllocatedObjectCount ;
@synthesize mDisplayFilter ;

//----------------------------------------------------------------------------*

- (void) showAllocationWindow {
  [mAllocationStatsWindow makeKeyAndOrderFront:nil] ;
}

//----------------------------------------------------------------------------*

void showAllocationStatsWindow (void) {
  if (nil == gDebugObject) {
    gDebugObject = [PMDebug new] ;
    const BOOL ok = [NSBundle loadNibNamed:@"PMDebug" owner:gDebugObject] ;
    if (! ok) {
//      presentErrorWindow (__FILE__, __LINE__, @"Cannot load 'PMDebug' nib file") ;
    }
  }
  [gDebugObject showAllocationWindow] ;
}

//----------------------------------------------------------------------------*
//    init                                                                    *
//----------------------------------------------------------------------------*

- (id) init {
  //  NSLog (@"%s %p", __PRETTY_FUNCTION__, self) ;
  self = [super init] ;
  if (self) {
    mAllocatedObjectCountByClass = [NSCountedSet new] ;
    mTotalAllocatedObjectCountByClass = [NSCountedSet new] ;
  //---
    [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector:@selector(applicationWillTerminateAction:)
      name:NSApplicationWillTerminateNotification
      object:nil
    ] ;
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    awakeFromNib                                                            *
//----------------------------------------------------------------------------*

- (void) awakeFromNib {
  // NSLog (@"%s %p %p", __PRETTY_FUNCTION__, self, mDebugMenu) ;
//--- Allocation Window visibility
  self.mAllocationStatsWindowVisibleAtLaunch = [[NSUserDefaults standardUserDefaults]
    boolForKey:@"PMDebug:allocationStatsWindowVisible"
  ] ;
  self.mDisplayFilter = [[NSUserDefaults standardUserDefaults]
    integerForKey:@"PMDebug:allocationStatsDisplayFilter"
  ] ;
//--- Allocation stats window visibility at Launch
  if (self.mAllocationStatsWindowVisibleAtLaunch) {
    [mAllocationStatsWindow makeKeyAndOrderFront:nil] ;
  }
//--- Bindings
  [mAllocationStatsWindowVisibleAtLaunchCheckbox
    bind:@"value"
    toObject:self
    withKeyPath:@"mAllocationStatsWindowVisibleAtLaunch"
    options:nil
  ] ;
  [mCurrentlyAllocatedObjectCountTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mAllocatedObjectCount"
    options:nil
  ] ;
  [mTotalAllocatedObjectCountTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mTotalAllocatedObjectCount"
    options:nil
  ] ;
  [mDisplayFilterPopUpButton
    bind:@"selectedIndex"
    toObject:self
    withKeyPath:@"mDisplayFilter"
    options:nil
  ] ;
}

//----------------------------------------------------------------------------*
//    applicationWillTerminateAction:                                         *
//----------------------------------------------------------------------------*

- (void) applicationWillTerminateAction: (NSNotification *) inNotification {
  // NSLog (@"%s", __PRETTY_FUNCTION__) ;
  // NSLog (@"%d", self.mAllocationStatsWindowVisibleAtLaunch) ;
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
  [ud
    setBool:self.mAllocationStatsWindowVisibleAtLaunch
    forKey:@"PMDebug:allocationStatsWindowVisible"
  ] ;
  [ud
    setInteger:self.mDisplayFilter
    forKey:@"PMDebug:allocationStatsDisplayFilter"
  ] ;
}

//----------------------------------------------------------------------------*
//    triggerRefreshAllocationStatsDisplay                                    *
//----------------------------------------------------------------------------*

- (void) triggerRefreshAllocationStatsDisplay {
  if (! mRefreshStatsHasTriggered) {
    mRefreshStatsHasTriggered = YES ;
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (refreshAllocationStats)
      target:self
      argument:nil
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}


//----------------------------------------------------------------------------*
//    didChangeValueForKey:                                                   *
//----------------------------------------------------------------------------*

- (void) didChangeValueForKey: (NSString *) inKey {
  [super didChangeValueForKey:inKey] ;
  if ([inKey isEqualToString:@"mDisplayFilter"]) {
    [self triggerRefreshAllocationStatsDisplay] ;
  }
}

//----------------------------------------------------------------------------*
//    pmNoteObjectAllocation:                                                 *
//----------------------------------------------------------------------------*

- (void) pmNoteObjectAllocation: (NSObject *) inObject {
  mLiveAllocatedObjectCount ++ ;
  mLiveTotalObjectCount ++ ;
  NSString * objectClassName = inObject.className ;
  //NSLog (@"objectClassName %@", objectClassName) ;
  [mAllocatedObjectCountByClass addObject:objectClassName] ;
  [mTotalAllocatedObjectCountByClass addObject:objectClassName] ;
  [self triggerRefreshAllocationStatsDisplay] ;
}

//----------------------------------------------------------------------------*
//    pmNoteObjectDeallocation:                                               *
//----------------------------------------------------------------------------*

- (void) pmNoteObjectDeallocation: (NSObject *) inObject {
  mLiveAllocatedObjectCount -- ;
  NSString * objectClassName = inObject.className ;
  // NSLog (@"DEALLOC objectClassName %@", objectClassName) ;
  [mAllocatedObjectCountByClass removeObject:objectClassName] ;
  [self triggerRefreshAllocationStatsDisplay] ;
}

//----------------------------------------------------------------------------*
//    refreshAllocationStats                                                  *
//----------------------------------------------------------------------------*

- (void) refreshAllocationStats {
  mRefreshStatsHasTriggered = NO ;
//---
  self.mAllocatedObjectCount = mLiveAllocatedObjectCount ;
  self.mTotalAllocatedObjectCount = mLiveTotalObjectCount ;
//---
  NSMutableArray * array = [NSMutableArray new] ;
  for (NSString * className in [mTotalAllocatedObjectCountByClass.allObjects sortedArrayUsingSelector:@selector(compare:)]) {
    const NSUInteger currentlyAllocated = [mAllocatedObjectCountByClass countForObject:className] ;
    if ((currentlyAllocated != 0) || (self.mDisplayFilter == 0)) {
      [array addObject: [NSDictionary
        dictionaryWithObjectsAndKeys:
          className, @"classname",
          [NSNumber numberWithUnsignedInteger:[mTotalAllocatedObjectCountByClass countForObject:className]], @"allCount",
          [NSNumber numberWithUnsignedInteger:currentlyAllocated], @"live",
          nil
        ]
      ] ;
    }
  }
//---
  mAllocationStatsDataSource = array ;
  [mStatsTableView setDataSource:self] ;
  [mStatsTableView reloadData] ;
}

//----------------------------------------------------------------------------*
//    T A B L E   V I E W    D A T A    S O U R C E                           *
//----------------------------------------------------------------------------*

- (id) tableView: (NSTableView *) aTableView
       objectValueForTableColumn: (NSTableColumn *) aTableColumn
       row: (NSInteger) rowIndex {
  NSDictionary * theRecord = [mAllocationStatsDataSource objectAtIndex:(NSUInteger) rowIndex];
  return [theRecord valueForKey:aTableColumn.identifier] ;
}

//---------------------------------------------------------------------------*

- (NSInteger) numberOfRowsInTableView: (NSTableView *) aTableView {
  return (NSInteger) [mAllocationStatsDataSource count] ;
}

//----------------------------------------------------------------------------*

@end

