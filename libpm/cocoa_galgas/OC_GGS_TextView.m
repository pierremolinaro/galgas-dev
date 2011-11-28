//
//  OC_GGS_TextView.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 27/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_TextView.h"
#import "PMErrorOrWarningDescriptor.h"
#import "PMCocoaCallsDebug.h"

//---------------------------------------------------------------------------*

@implementation OC_GGS_TextView

//---------------------------------------------------------------------------*

- (void) setIssueArray: (NSArray *) inIssueArray {
  mIssueArray = inIssueArray.copy ;
//--- Tell ruler to refresh
  NSScrollView * scrollView = (NSScrollView *) self.superview.superview ;
  // NSLog (@"scrollView %@", scrollView) ;
  NSRulerView * ruler = scrollView.verticalRulerView ;
  // NSLog (@"ruler %@", ruler) ;
  [ruler setNeedsDisplay:YES] ;
  [self setNeedsDisplay:YES] ;
  [scrollView.verticalScroller setNeedsDisplay:YES] ;
}

//---------------------------------------------------------------------------*

- (NSArray *) issueArray {
  return mIssueArray ;
}

//---------------------------------------------------------------------------*

- (NSColor *) errorHiliteColor {
  return [NSColor colorWithCalibratedRed:1.0 green:0.0 blue:0.0 alpha:0.2] ;
}

//---------------------------------------------------------------------------*

- (NSColor *) warningHiliteColor {
  return [NSColor colorWithCalibratedRed:1.0 green:0.5 blue:0.0 alpha:0.2] ;
}

//---------------------------------------------------------------------------*

#define BULLET_SIZE (4.0)

//---------------------------------------------------------------------------*

- (void) drawRect: (NSRect) inRect {
  [super drawRect:inRect] ;
//--- Draw issues
  NSBezierPath * errorHiliteBezierPath = [NSBezierPath bezierPath] ;
  NSBezierPath * errorBulletBezierPath = [NSBezierPath bezierPath] ;
  NSBezierPath * warningHiliteBezierPath = [NSBezierPath bezierPath] ;
  NSBezierPath * warningBulletBezierPath = [NSBezierPath bezierPath] ;
  for (PMErrorOrWarningDescriptor * issue in mIssueArray) {
    // NSLog (@"lineRange [%u, %u]", lineRange.location, lineRange.length) ;
    NSRect lineRect = [self.layoutManager lineFragmentUsedRectForGlyphAtIndex:issue.location effectiveRange:NULL] ;
    lineRect.size.width = self.visibleRect.size.width ;
    // NSLog (@"r1 {{%g, %g}, {%g, %g}}", r1.origin.x, r1.origin.y, r1.size.width, r1.size.height) ;
    [issue.isError ? errorHiliteBezierPath : warningHiliteBezierPath appendBezierPathWithRect:lineRect] ;
    const NSPoint p1 = [self.layoutManager locationForGlyphAtIndex:issue.location] ;
    const NSPoint p2 = [self.layoutManager locationForGlyphAtIndex:issue.location + 1] ;
    // NSLog (@"p: %g, %g", p.x, p.y) ;
    const NSRect r = {{(p1.x + p2.x) / 2.0 - BULLET_SIZE / 2.0, lineRect.origin.y + lineRect.size.height - BULLET_SIZE / 2.0}, {BULLET_SIZE, BULLET_SIZE}} ;
    [issue.isError ? errorBulletBezierPath : warningBulletBezierPath appendBezierPathWithOvalInRect:r] ;
  }
//--- Draw warning hilite
  [[self warningHiliteColor] setFill] ;
  [warningHiliteBezierPath fill] ;
//--- Draw error hilite
  [[self errorHiliteColor] setFill] ;
  [errorHiliteBezierPath fill] ;
//--- Draw warning bullets
  [[NSColor orangeColor] setFill] ;
  [warningBulletBezierPath fill] ;
//--- Draw error bullets
  [[NSColor redColor] setFill] ;
  [errorBulletBezierPath fill] ;
}

//---------------------------------------------------------------------------*

@end
