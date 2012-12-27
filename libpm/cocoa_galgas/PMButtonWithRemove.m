//
//  PMButtonWithRemove.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 25/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMButtonWithRemove.h"
#import "PMTabBarView.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------*

@implementation PMButtonWithRemove

//---------------------------------------------------------------------------*
//                                                                           *
//       I N I T                                                             *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) initWithFrame: (NSRect) inFrame {
  self = [super initWithFrame:inFrame] ;
  if (self) {
    #ifdef DEBUG_MESSAGES
      NSLog (@"%s", __PRETTY_FUNCTION__) ;
    #endif
    noteObjectAllocation (self) ;
  }
  return self;
}

//---------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------*

- (void) setDisplayRemoveImage: (BOOL) inDisplay {
  mDisplayRemoveImage = inDisplay ;
}

//---------------------------------------------------------------------------*

- (void) setFilePathForDragOperation: (NSString *) inFilePath {
  mFilePath = inFilePath.copy ;
}

//---------------------------------------------------------------------------*

#define IMAGE_SIZE (10.0)

//---------------------------------------------------------------------------*

- (NSRect) removeImageRect {
  const NSRect r = {{4.0, (self.bounds.size.height - IMAGE_SIZE) / 2}, {IMAGE_SIZE, IMAGE_SIZE}} ;
  return r ;
}

//---------------------------------------------------------------------------*

#define DIRTY_SIZE (4.0)

//---------------------------------------------------------------------------*

- (NSRect) dirtyBulletRect {
  const NSRect r = {{NSMaxX (self.bounds) - DIRTY_SIZE * 2.0, DIRTY_SIZE}, {DIRTY_SIZE, DIRTY_SIZE}} ;
  return r ;
}

//---------------------------------------------------------------------------*

- (void) drawRect:(NSRect) inDirtyRect {
  [super drawRect:inDirtyRect] ;
  if (mDisplayRemoveImage) {
    NSImage * image = [NSImage imageNamed:NSImageNameStopProgressFreestandingTemplate] ;
    [image
      drawInRect:self.removeImageRect
      fromRect:NSZeroRect
      operation:NSCompositeSourceOver
      fraction:1.0
    ] ;
  }
  if (mIsDirty) {
    [[NSColor blackColor] setFill] ;
    NSBezierPath * bp = [NSBezierPath bezierPathWithOvalInRect:self.dirtyBulletRect] ;
    [bp fill] ;
  }
}

//---------------------------------------------------------------------------*

//--- http://www.cocoabuilder.com/archive/cocoa/141135-nsbutton-up-and-down.html
// Subclassing NSButton and overriding mouseDown: and mouseUp: _should_
// work. The only "gotcha" is this: If you want the normal button
// behavior on mouseDown, you need to call
//    [super mouseDown:sender];
// in your mouseDown. However - that will "eat" the mouseUp: call
// because NSButton implements mouseDown with something like
// nextEventMatchingMask. mouseDown actually blocks until the button is
// released, so you can make your mouseDown: look like this to know when
// the button is released:

- (void)mouseDown: (NSEvent *) inEvent {
// this blocks until the button is released
  [super mouseDown:inEvent];
// we know the button was released, so we can send this
  const NSPoint pointInWindow = [self.window convertScreenToBase:NSEvent.mouseLocation] ;
  const NSPoint p = [self convertPoint:pointInWindow fromView:nil] ;
  // NSLog (@"p [%g, %g]", p.x, p.y) ;
  // NSLog (@"self.removeImageRect [%g, %g] -> [%g, %g]", self.removeImageRect.origin.x, self.removeImageRect.origin.y, self.removeImageRect.size.width, self.removeImageRect.size.height) ;
  if (NSPointInRect (p, self.removeImageRect)) {
    [self setNeedsDisplay:YES] ;
    [self.target removeTabAction:self] ;
  }else{
    [super mouseUp:inEvent] ;
  }
}

//---------------------------------------------------------------------------*

- (void) sizeToFit {
  NSRect frame = self.frame ;
  [super sizeToFit] ;
  frame.size.width = self.frame.size.width + IMAGE_SIZE * 3.0 ;
  self.frame = frame ;
}

//---------------------------------------------------------------------------*

- (void) setIsDirty: (BOOL) inFlag {
  if (mIsDirty != inFlag) {
    mIsDirty = inFlag ;
    [self setNeedsDisplay] ;
  }
}

//---------------------------------------------------------------------------*

@end
