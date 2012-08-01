//
//  PMTabBarView.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 25/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMTabBarView.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_GGS_DocumentData.h"
#import "PMButtonWithRemove.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "PMCocoaCallsDebug.h"

//---------------------------------------------------------------------------*

@implementation PMTabBarView

//---------------------------------------------------------------------------*

- (void) setTarget: (id) inTarget {
  mTarget = inTarget ;
}

//---------------------------------------------------------------------------*

- (void) setRemoveSourceTabAction: (SEL) inAction {
  mRemoveSourceTabAction = inAction ;
}

//---------------------------------------------------------------------------*

- (void) setChangeSourceTabAction: (SEL) inAction {
  mChangeSourceTabAction = inAction ;
}

//---------------------------------------------------------------------------*

- (void) buildTabBarWithArrayController: (NSArrayController *) inArrayController {
//--- Remove observer from previous collection
  NSIndexSet * indexSet = [[NSIndexSet alloc] initWithIndexesInRange:NSMakeRange (0, mObservedArray.count)] ;
  [mObservedArray
    removeObserver:self
    fromObjectsAtIndexes:indexSet
    forKeyPath:@"documentData.textSyntaxColoring.isDirty"
  ] ;
//--- Add Observed for current collection
  NSArray * arrangedObjects = inArrayController.arrangedObjects ;
  mObservedArray = arrangedObjects.copy ;
  indexSet = [[NSIndexSet alloc] initWithIndexesInRange:NSMakeRange (0, mObservedArray.count)] ;
  [mObservedArray
    addObserver:self
    toObjectsAtIndexes:indexSet
    forKeyPath:@"documentData.textSyntaxColoring.isDirty"
    options:0
    context:NULL
  ] ;
//---
  for (NSView * subView in [self.subviews.copy autorelease]) {
    [subView removeFromSuperview] ;
  }
  mButtonArray = [NSMutableArray new] ;
  const NSUInteger selectionIndex = inArrayController.selectionIndex ;
  const double width = 150.0 ;
  double X = 0.0 ;
  NSUInteger idx = 0 ;
  for (OC_GGS_TextDisplayDescriptor * displayDescriptor in mObservedArray) {
    PMButtonWithRemove * button = [[PMButtonWithRemove alloc]
      initWithFrame:NSMakeRect (X, 0.0, width + 0.5, self.bounds.size.height)
    ] ;
    [mButtonArray addObject:button] ;
    [button setTitle:displayDescriptor.sourceURL.path.lastPathComponent] ;
    [button setToolTip:displayDescriptor.sourceURL.path] ;
    if (idx > 0) {
      [button setFilePathForDragOperation:displayDescriptor.sourceURL.path] ;
    }
    [button setBezelStyle:NSSmallSquareBezelStyle] ;
    [button setButtonType:NSPushOnPushOffButton] ;
    [button setState:(selectionIndex == idx) ? NSOnState : NSOffState] ;
    [button setDisplayRemoveImage:idx > 0] ;
    button.tag = idx ;
    button.target = self ;
    button.action = @selector (changeTabAction:) ;
    button.removeAction = @selector (removeTabAction:) ;
    [button sizeToFit] ;
    X = NSMaxX (button.frame) + 2.0 ;
    [self addSubview:button] ;
    idx ++ ;
  }
}

//---------------------------------------------------------------------------*

- (void) changeTabAction: (PMButtonWithRemove *) inSender {
  for (PMButtonWithRemove * button in mButtonArray) {
    [button setState:(button == inSender) ? NSOnState : NSOffState] ;
  }
  [mTarget performSelector:mChangeSourceTabAction withObject:inSender] ;
}

//---------------------------------------------------------------------------*

- (void) removeTabAction: (PMButtonWithRemove *) inSender {
  [mTarget
    performSelector:mRemoveSourceTabAction
    withObject:[mObservedArray objectAtIndex:(NSUInteger) inSender.tag HERE]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) dirtyStateDidChange: (OC_GGS_TextDisplayDescriptor *) inObservedObject {
  const NSUInteger idx = [mObservedArray indexOfObject:inObservedObject] ;
  PMButtonWithRemove * button = [mButtonArray objectAtIndex:idx HERE] ;
  OC_GGS_TextSyntaxColoring * textSyntaxColoring = inObservedObject.documentData.textSyntaxColoring ;
  [button setIsDirty:textSyntaxColoring.isDirty] ;
}

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject: (id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, keyPath '%@'", __PRETTY_FUNCTION__, inKeyPath) ;
  #endif
  if ([inKeyPath isEqualToString:@"selection.sourcePath"]) {

  }else if ([inKeyPath isEqualToString:@"selectionIndex"]) {
    const NSUInteger selectionIndex = ((NSArrayController *) inObject).selectionIndex ;
    if (selectionIndex != NSNotFound) {
      PMButtonWithRemove * newSelection = [mButtonArray objectAtIndex:selectionIndex HERE] ;
      for (PMButtonWithRemove * button in mButtonArray) {
        [button setState:(button == newSelection) ? NSOnState : NSOffState] ;
      }
    }
  }else if ([inKeyPath isEqualToString:@"documentData.textSyntaxColoring.isDirty"]) {
    [self dirtyStateDidChange:inObject] ;
  }else if ([inKeyPath isEqualToString:@"arrangedObjects"]) {
    [self buildTabBarWithArrayController:inObject] ;
  }else{
    [super
      observeValueForKeyPath:inKeyPath
      ofObject:inObject
      change:inChange
      context:inContext
    ] ;
  }
}

//---------------------------------------------------------------------------*

@end
