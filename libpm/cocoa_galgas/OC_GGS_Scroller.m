//
//  OC_GGS_Scroller.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 27/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_Scroller.h"
#import "OC_GGS_TextView.h"
#import "PMErrorOrWarningDescriptor.h"

//---------------------------------------------------------------------------*

@implementation OC_GGS_Scroller

//---------------------------------------------------------------------------*

- (void) drawRect:(NSRect) inRect {
  [super drawRect:inRect] ;
//---
  const NSRect viewBounds = [self bounds] ;
  NSScrollView * scrollView = (NSScrollView *) self.superview ;
  // NSLog (@"scrollView %@", scrollView) ;
  OC_GGS_TextView * textView = scrollView.documentView ;
  // NSLog (@"textView %@", textView) ;
  NSArray * issueArray = textView.issueArray ;
  NSLayoutManager * lm = textView.layoutManager ;
  NSString * sourceString = textView.string ;
  const NSUInteger sourceStringLength = sourceString.length ;
  // NSLog (@"sourceStringLength %u", sourceStringLength) ;
  NSUInteger idx = 0 ;
  NSInteger line = 0 ;
  const double minYforDrawing = inRect.origin.y ; // - (2.0 * ([font ascender] + [font descender])) ;
//  const double maxYforDrawing = NSMaxY ([self visibleRect]) ;
  BOOL maxYreached = NO ;
  while ((idx < sourceStringLength) && ! maxYreached) {
    line ++ ;
  //--- Draw line numbers
    // NSLog (@"%u is valid glyph index: %@", idx, [lm isValidGlyphIndex:idx] ? @"yes" : @"no") ;
    const NSRect r = [lm lineFragmentUsedRectForGlyphAtIndex:idx effectiveRange:NULL] ;
    NSPoint p = [self convertPoint:NSMakePoint (0.0, NSMidY (r)) fromView:textView] ;
    // NSLog (@"%f for line %u (%@)", p.y, line, ((inRect.origin.y - [font ascender])) ? @"yes" : @"no") ;
    const NSRange lineRange = [sourceString lineRangeForRange:NSMakeRange (idx, 1)] ;
    if (p.y >= minYforDrawing) { 
    //--- Error or warning at this line ?
      BOOL hasError = NO ;
      BOOL hasWarning = NO ;
      for (NSUInteger i=0 ; (i<issueArray.count) && ! hasError ; i++) {
        PMErrorOrWarningDescriptor * issue = [issueArray objectAtIndex:i] ;
        if ([issue isInRange:lineRange]) {
          hasError = issue.isError ;
          if (! issue.isError) {
            hasWarning = YES ;
          }
        }
      }
      if (hasError || hasWarning) {
        NSBezierPath * bp = [NSBezierPath bezierPath] ;
        [bp moveToPoint:NSMakePoint (0.0, p.y)] ;
        [bp lineToPoint:NSMakePoint (viewBounds.size.width, p.y)] ;
        [bp setLineWidth:1.0] ;
        [hasError ? [NSColor redColor] : [NSColor orangeColor] setStroke] ;
        [bp stroke] ;
      }
    }
  //---
    // NSLog (@"New line range: [%u, %u] for idx %u", lineRange.location, lineRange.length, idx) ;
    idx = lineRange.location + lineRange.length ;
  }
}

//---------------------------------------------------------------------------*

@end
