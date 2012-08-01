//----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//----------------------------------------------------------------------------*

void showAllocationStatsWindow (void) ;
void noteObjectAllocation (NSObject * inObject) ;
void noteObjectDeallocation (NSObject * inObject) ;

//----------------------------------------------------------------------------*

@interface PMDebug : NSObject <NSTableViewDataSource> {
  @private IBOutlet NSButton * mAllocationStatsWindowVisibleAtLaunchCheckbox ;
  @private IBOutlet NSPopUpButton * mDisplayFilterPopUpButton ;
  @private IBOutlet NSMenu * mDebugMenu ;
  @private IBOutlet NSWindow * mAllocationStatsWindow ;
  @private IBOutlet NSTextField * mCurrentlyAllocatedObjectCountTextField ;
  @private IBOutlet NSTextField * mTotalAllocatedObjectCountTextField ;
  @private IBOutlet NSTableView * mStatsTableView ;
  
  @private NSCountedSet * mAllocatedObjectCountByClass ;
  @private NSCountedSet * mTotalAllocatedObjectCountByClass ;
  @private BOOL mRefreshStatsHasTriggered ;
  @private NSUInteger mLiveAllocatedObjectCount ;
  @private NSUInteger mLiveTotalObjectCount ;
  @private NSArray * mAllocationStatsDataSource ;
}

@property (atomic) BOOL mAllocationStatsWindowVisibleAtLaunch ;
@property (atomic) NSUInteger mAllocatedObjectCount ;
@property (atomic) NSUInteger mTotalAllocatedObjectCount ;
@property (atomic) NSInteger mDisplayFilter ;

- (void) pmNoteObjectAllocation: (NSObject *) inObject ;
- (void) pmNoteObjectDeallocation: (NSObject *) inObject ;
- (void) showAllocationWindow ;
@end

//----------------------------------------------------------------------------*
