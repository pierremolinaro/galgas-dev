//
//  PMTabBarView.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 25/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMTabBarView.h"
#import "PMButtonWithRemove.h"

//---------------------------------------------------------------------------*

@implementation PMTabBarView

//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  NSArray * titles = [NSArray arrayWithObjects:@"First", @"Second", @"Third", nil] ;
  const NSUInteger sel = 1 ;
  const double width = 150.0 ;
  for (NSUInteger i=0 ; i<titles.count ; i++) {
    PMButtonWithRemove * button = [[PMButtonWithRemove alloc]
      initWithFrame:NSMakeRect (width * ((double) i), 0.0, width + 0.5, self.bounds.size.height)
    ] ;
    [button setTitle:[titles objectAtIndex:i]] ;
    [button setBezelStyle:NSSmallSquareBezelStyle] ;
    [button setButtonType:NSPushOnPushOffButton] ;
    [button setState:(sel == i) ? NSOnState : NSOffState] ;
    [self addSubview:button] ;
  }
}

//---------------------------------------------------------------------------*

- (void) drawRectEX: (NSRect) inRect {
  NSArray * titles = [NSArray arrayWithObjects:@"First", @"Second", @"Third", nil] ;
  const NSUInteger sel = 1 ;
//--- Draw Background
  [[NSColor windowBackgroundColor] setFill] ;
  NSRectFill (inRect) ;
//--- bottom line
  [[NSColor windowFrameColor] setStroke] ;
  NSBezierPath * bp = [NSBezierPath bezierPath] ;
  [bp moveToPoint:NSMakePoint (0.0, 0.5)] ;
  [bp lineToPoint:NSMakePoint (self.bounds.size.width, 0.5)] ;
  [bp setLineWidth:1.0] ;
  [bp stroke] ;
//--- Draw tabs
  const double width = 150.0 ;
  const double offsetX = 20.0 ;
  const double offsetY = 5.0 ;
  NSDictionary * attributes = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSFont systemFontOfSize:[NSFont smallSystemFontSize]], NSFontAttributeName,
    nil
  ] ;
  NSDictionary * attributesWhenSelected = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSFont systemFontOfSize:[NSFont smallSystemFontSize]], NSFontAttributeName,
    [NSColor selectedControlTextColor], NSForegroundColorAttributeName,
    nil
  ] ;
  for (NSUInteger i=0 ; i<titles.count ; i++) {
    if (i == sel) {
      const NSRect r = {{width * ((double) i), 0.0}, {width, self.bounds.size.height}} ;
      [[NSColor windowFrameColor] setFill] ;
      NSRectFill (r) ;
    }
    NSString * title = [titles objectAtIndex:i] ;
    [title
      drawAtPoint:NSMakePoint (offsetX + width * ((double) i), offsetY)
      withAttributes:(i == sel) ? attributesWhenSelected : attributes
    ] ;
    [bp removeAllPoints] ;
    const double verticalLineX = 0.5 + width * ((double) (i+1)) ;
    [bp moveToPoint:NSMakePoint (verticalLineX, 0.0)] ;
    [bp lineToPoint:NSMakePoint (verticalLineX, self.bounds.size.height)] ;
    [[NSColor windowFrameColor] setStroke] ;
    [bp stroke] ;
  }
}

//---------------------------------------------------------------------------*

@end
