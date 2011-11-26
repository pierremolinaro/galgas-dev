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
#import "PMButtonWithRemove.h"

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
  for (NSView * subView in self.subviews.copy) {
    [subView removeFromSuperview] ;
  }
  mButtonArray = [NSMutableArray new] ;
  const NSUInteger selectionIndex = inArrayController.selectionIndex ;
  const double width = 150.0 ;
  double X = - 0.5 ;
  NSUInteger idx = 0 ;
  NSArray * arrangedObjects = inArrayController.arrangedObjects ;
  for (OC_GGS_TextDisplayDescriptor * displayDescriptor in arrangedObjects) {
    PMButtonWithRemove * button = [[PMButtonWithRemove alloc]
      initWithFrame:NSMakeRect (X, 0.0, width + 0.5, self.bounds.size.height)
    ] ;
    [mButtonArray addObject:button] ;
    [button setTitle:displayDescriptor.sourcePath.lastPathComponent] ;
    [button setToolTip:displayDescriptor.sourcePath] ;
    [button setBezelStyle:NSSmallSquareBezelStyle] ;
    [button setButtonType:NSPushOnPushOffButton] ;
    [button setState:(selectionIndex == idx) ? NSOnState : NSOffState] ;
    [button setDisplayRemoveImage:arrangedObjects.count > 1] ;
    button.tag = idx ;
    button.target = self ;
    button.action = @selector (changeTabAction:) ;
    button.removeAction = @selector (removeTabAction:) ;
    [button sizeToFit] ;
    X = NSMaxX (button.frame) - 0.5 ;
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
  [mTarget performSelector:mRemoveSourceTabAction withObject:inSender] ;
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
