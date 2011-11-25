//
//  PMTabBarView.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 25/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMTabBarView.h"

//---------------------------------------------------------------------------*

@implementation PMTabBarView

//---------------------------------------------------------------------------*

- (BOOL) isOpaque {
  return YES ;
}

//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  NSArray * titles = [NSArray arrayWithObjects:@"First", @"Second", @"Third", nil] ;
  const double width = 150.0 ;
  for (NSUInteger i=0 ; i<titles.count ; i++) {
    NSButton * button = [[NSButton alloc]
      initWithFrame:NSMakeRect (width * ((double) i) + 0.5, 0.0, width, self.bounds.size.height)
    ] ;
    [button setTitle:[titles objectAtIndex:i]] ;
    [button setImage:[NSImage imageNamed:NSImageNameStopProgressFreestandingTemplate]] ;
    [button setImagePosition:NSImageLeft] ;
    [button setBezelStyle:NSSmallSquareBezelStyle] ;
    [button.cell setImageScaling:NSImageScaleProportionallyUpOrDown] ;
    [self addSubview:button] ;
  }
}

//---------------------------------------------------------------------------*

- (void) drawRect: (NSRect) inRect { //--- Draw Background
  [[NSColor windowBackgroundColor] setFill] ;
  NSRectFill (inRect) ;
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
