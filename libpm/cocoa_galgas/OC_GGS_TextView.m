//
//  OC_GGS_TextView.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 27/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_TextView.h"
#import "PMIssueDescriptor.h"

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
}

//---------------------------------------------------------------------------*

- (NSArray *) issueArray {
  return mIssueArray ;
}

//---------------------------------------------------------------------------*

- (NSRange) rangeForLine: (NSInteger) inLineNumber {
  NSRange range = {0, 0} ;
  for (NSInteger i=1 ; i<=inLineNumber ; i++) {
    range.location += range.length ;
    range.length = 0 ;
    NSUInteger startIndex ;
    NSUInteger lineEndIndex ;
    [self.string
      getLineStart:& startIndex
      end:& lineEndIndex
      contentsEnd:NULL
      forRange:range
    ] ;
    range = NSMakeRange (startIndex, lineEndIndex - startIndex) ;
 //   NSLog (@"line %d: range [%u, %u]", i, range.location, range.length) ;
  }
  return range ;
}

//---------------------------------------------------------------------------*

- (NSColor *) errorHiliteColor {
  return [NSColor colorWithCalibratedRed:1.0 green:0.0 blue:0.0 alpha:0.2] ;
}

//---------------------------------------------------------------------------*

#define BULLET_SIZE (4.0)

//---------------------------------------------------------------------------*

- (void) drawRect: (NSRect) inRect {
  [super drawRect:inRect] ;
//--- Draw issues
  NSBezierPath * errorHiliteBezierPath = [NSBezierPath bezierPath] ;
  NSBezierPath * errorBulletBezierPath = [NSBezierPath bezierPath] ;
  for (PMIssueDescriptor * issue in mIssueArray) {
    const NSInteger line = issue.issueLine ;
    const NSInteger column = issue.issueColumn ;
    const NSRange lineRange = [self rangeForLine:line] ;
    // NSLog (@"lineRange [%u, %u]", lineRange.location, lineRange.length) ;
    const NSRect lineRect = [self.layoutManager lineFragmentUsedRectForGlyphAtIndex:lineRange.location + column - 1 effectiveRange:NULL] ;
    // NSLog (@"r1 {{%g, %g}, {%g, %g}}", r1.origin.x, r1.origin.y, r1.size.width, r1.size.height) ;
 //  const NSRect r2 = [self.layoutManager lineFragmentUsedRectForGlyphAtIndex:lineRange.location + lineRange.length - 1 effectiveRange:NULL] ;
    // NSLog (@"r2 {{%f, %f}, {%f, %f}}", r2.origin.x, r2.origin.y, r2.size.width, r2.size.height) ;
//    const NSRect r = NSUnionRect (r1, r2) ;
    // NSLog (@"r {{%f, %f}, {%f, %f}}", r.origin.x, r.origin.y, r.size.width, r.size.height) ;
    [errorHiliteBezierPath appendBezierPathWithRect:lineRect] ;
    const NSPoint p1 = [self.layoutManager locationForGlyphAtIndex:lineRange.location + column] ;
    const NSPoint p2 = [self.layoutManager locationForGlyphAtIndex:lineRange.location + column + 1] ;
    // NSLog (@"p: %g, %g", p.x, p.y) ;
    const NSRect r = {{(p1.x + p2.x) / 2.0 - BULLET_SIZE / 2.0, lineRect.origin.y + lineRect.size.height - BULLET_SIZE / 2.0}, {BULLET_SIZE, BULLET_SIZE}} ;
    [errorBulletBezierPath appendBezierPathWithOvalInRect:r] ;
  }
//--- Draw error hilite
  [[self errorHiliteColor] setFill] ;
  [errorHiliteBezierPath fill] ;
//--- Draw error bullets
  [[NSColor redColor] setFill] ;
  [errorBulletBezierPath fill] ;
}

//---------------------------------------------------------------------------*

@end
