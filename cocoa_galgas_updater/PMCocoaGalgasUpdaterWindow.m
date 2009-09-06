//
//  PMCocoaGalgasUpdaterWindow.m
//  canari
//
//  Created by Pierre Molinaro on 27/01/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import "PMCocoaGalgasUpdaterWindow.h"


@implementation PMCocoaGalgasUpdaterWindow

- (id) initWithContentRect:(NSRect)contentRect
       styleMask:(NSUInteger)styleMask
       backing:(NSBackingStoreType)backingType
       defer:(BOOL)flag {
  const NSRect screenRect = [[NSScreen mainScreen] frame] ;
  const NSPoint screenCenter = {NSMidX (screenRect), NSMidY (screenRect)} ;
  NSRect r ;
  r.origin.x = screenCenter.x - contentRect.size.width / 2.0f ;
  r.origin.y = screenCenter.y - contentRect.size.height / 2.0f ;
  r.size = contentRect.size ;
  self = [super
    initWithContentRect:r
    styleMask:NSBorderlessWindowMask
    backing:backingType
    defer:flag
  ] ;
  if (self) {
    [self setBackgroundColor: [NSColor clearColor]];
    [self setOpaque:NO] ;
  }
  return self ;
}
@end
