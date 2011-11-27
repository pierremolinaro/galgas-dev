//---------------------------------------------------------------------------*
//                                                                           *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2001, ..., 2009 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#import "OC_GGS_RulerViewForTextView.h"

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

@implementation OC_GGS_RulerViewForTextView

//---------------------------------------------------------------------------*

- (void) drawHashMarksAndLabelsInRect: (NSRect) inRect {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_RulerViewForTextView <drawHashMarksAndLabelsInRect:>") ;
  #endif
//--- Draw background
  [[NSColor windowBackgroundColor] setFill] ;
  [NSBezierPath fillRect:inRect] ;
//--- Draw right border
  const NSRect viewBounds = [self bounds] ;
  const NSPoint p1 = {viewBounds.size.width, 0.0} ;
  const NSPoint p2 = {viewBounds.size.width, viewBounds.size.height} ;
  [NSBezierPath strokeLineFromPoint:p1 toPoint:p2] ;
//--- Set draw text attributes and find point size
  NSFont * font = [NSFont fontWithName:@"Courier" size:11.0] ;
  NSDictionary * attributes = [NSDictionary dictionaryWithObjectsAndKeys:
    font, NSFontAttributeName,
    [NSColor darkGrayColor], NSForegroundColorAttributeName,
    nil
  ] ;
//--- Images
//  NSImage * errorImage = [NSImage imageNamed:@"I_Red14"] ;
//--- Note: ruler view and text view are both flipped
  NSScrollView * scrollView = [self scrollView] ;
  NSTextView * textView = [scrollView documentView] ;
  NSLayoutManager * lm = [textView layoutManager] ;
  NSString * sourceString = [textView string] ;
  const NSUInteger sourceStringLength = [sourceString length] ;
  // NSLog (@"sourceStringLength %u", sourceStringLength) ;
  NSUInteger idx = 0 ;
  NSUInteger line = 0 ;
  const double minYforDrawing = inRect.origin.y - (2.0 * ([font ascender] + [font descender])) ;
  const double maxYforDrawing = NSMaxY ([self visibleRect]) ;
  BOOL maxYreached = NO ;
  while ((idx < sourceStringLength) && ! maxYreached) {
    line ++ ;
  //--- Draw line numbers
    // NSLog (@"%u is valid glyph index: %@", idx, [lm isValidGlyphIndex:idx] ? @"yes" : @"no") ;
    const NSRect r = [lm lineFragmentUsedRectForGlyphAtIndex:idx effectiveRange:NULL] ;
    NSPoint p = [self convertPoint:NSMakePoint (0.0, NSMinY (r)) fromView:textView] ;
    // NSLog (@"%f for line %u (%@)", p.y, line, ((inRect.origin.y - [font ascender])) ? @"yes" : @"no") ;
    if (p.y >= minYforDrawing) { 
      /* [errorImage
        drawAtPoint:NSMakePoint (0.0, p.y)
        fromRect:NSZeroRect
        operation:NSCompositeSourceOver
        fraction:1.0
      ] ;
       */
      NSString * str = [NSString stringWithFormat:@"%u", line] ;
      const NSSize strSize = [str sizeWithAttributes:attributes] ;
      p.x = viewBounds.size.width - 2.0 - strSize.width ;
      [str drawAtPoint:p withAttributes:attributes] ;
      maxYreached = p.y > maxYforDrawing ;
    }
  //---
    const NSRange lineRange = [sourceString lineRangeForRange:NSMakeRange (idx, 1)] ;
    // NSLog (@"New line range: [%u, %u] for idx %u", lineRange.location, lineRange.length, idx) ;
    idx = lineRange.location + lineRange.length ;
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_RulerViewForTextView <drawHashMarksAndLabelsInRect:> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*

@end
