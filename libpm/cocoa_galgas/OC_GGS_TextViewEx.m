//---------------------------------------------------------------------------*
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2003, ..., 2011 Pierre Molinaro.                           *
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

#import "OC_GGS_TextViewEX.h"
#import "OC_GGS_Document.h"
#include "F_CocoaWrapperForGalgas.h"
#import "OC_Token.h"
#import "OC_Lexique.h"
#import "PMCocoaCallsDebug.h"

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

static inline NSInteger imin (const NSInteger a, const NSInteger b) { return a < b ? a : b ; }
static inline NSInteger imax (const NSInteger a, const NSInteger b) { return a > b ? a : b ; }

//---------------------------------------------------------------------------*

@implementation OC_GGS_TextViewEx

//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  [self setSmartInsertDeleteEnabled:NO] ;
  NSLayoutManager * lm = [self layoutManager] ;
//  NSLog (@"delegateForSyntaxColoring %@, lm %p", delegateForSyntaxColoring, lm) ;
  mDefaultTextStorage= [lm textStorage] ;
  // NSLog (@"lm %p, mDefaultTextStorage %p", lm, mDefaultTextStorage) ;
}

//---------------------------------------------------------------------------*

- (void) setKeyForSelectionInUserDefault: (NSString *) inKeyForSelectionInUserDefault {
  mKeyForSelectionInUserDefault = inKeyForSelectionInUserDefault.copy ;
}

//---------------------------------------------------------------------------*

- (void) scrollToSelectionDefinedInUserDefaults: (NSString *) inWindowTitle {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_TextView <scrollToSelectionDefinedInUserDefaults:'%@'>", inWindowTitle) ;
  #endif
//--- Get source selection range
  NSString * key = [NSString stringWithFormat:@"%@:%@", mKeyForSelectionInUserDefault, inWindowTitle] ;
  // NSLog (@"preference key: '%@'", key) ;
  NSString * s = [[NSUserDefaults standardUserDefaults] objectForKey:key] ;
  // NSLog (@"preference key: '%@', prefs string: '%@'", key, s) ;
  const NSUInteger textLength = [[self string] length] ;
  // NSLog (@"textLength %u", textLength) ;
  NSRange range = {0, 0} ;
  if (s != nil) {
    range = NSRangeFromString (s) ;
    // NSLog (@"range %u, %u", range.location, range.length) ;
  }
  if (range.location > textLength) {
    range.location = textLength ;
    range.length = 0 ;
  }else if (range.length > textLength) {
    range.length = 0 ;
  }else if ((range.location + range.length) > textLength) {
    range.length = 0 ;
  }
//--- Change selected range
  // NSLog (@"[self setSelectedRange:{%u, %u}]", range.location, range.length) ;
  [self setSelectedRange:range] ;
  // NSLog (@"[self scrollRangeToVisible:{%u, %u}]", range.location, range.length) ;
  [self scrollRangeToVisible:range] ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_TextView <scrollToSelectionDefinedInUserDefaults:> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*

#pragma mark Open Quickly

//---------------------------------------------------------------------------*
//                                                                           *
//    O P E N    Q U I C K L Y                                               *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) cannotOpenNonExistentFile: (NSString *) inFilePath {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, argument '%@'", __PRETTY_FUNCTION__, inFilePath) ;
  #endif
  NSAlert *alert = [NSAlert alertWithMessageText:@"Cannot Open File"
    defaultButton:@"Ok"
    alternateButton:nil
    otherButton:nil
    informativeTextWithFormat:[NSString stringWithFormat:@"The file '%@' does not exist.", inFilePath]
  ] ;
//--- Display alert as window sheet
  [alert
    beginSheetModalForWindow:[self window]
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
}

//---------------------------------------------------------------------------*

- (void) cannotFindApplicationForFile: (NSString *) inPath {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, argument '%@'", __PRETTY_FUNCTION__, inPath) ;
  #endif
  NSAlert *alert = [NSAlert alertWithMessageText:@"Cannot Open File"
    defaultButton:@"Ok"
    alternateButton:nil
    otherButton:nil
    informativeTextWithFormat:[NSString stringWithFormat:@"Cannot find an Application for opening '%@' file.", inPath]
  ] ;
//--- Display alert as window sheet
  [alert
    beginSheetModalForWindow:[self window]
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
}

//---------------------------------------------------------------------------*

- (void) actionOpenQuickly: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Get source string
  NSString * sourceString = [[self textStorage] string] ;
  const NSUInteger length = [sourceString length] ;
//--- Get selection
  NSRange selection = [self selectedRange] ;
//--- A selection is available ?
  BOOL ok = (selection.location != NSNotFound) ;
  if (ok && (selection.length > 1) && ([sourceString characterAtIndex:selection.location] == '\"')) {
    selection.location ++ ;
    selection.length -- ;
  }
  if (ok && (selection.length > 1) && ([sourceString characterAtIndex:selection.location + selection.length - 1] == '\"')) {
    selection.length -- ;
  }
//--- Check there is end of line within the selection
  if (ok) {
    NSUInteger i ;
    for (i=selection.location ; (i<(selection.location + selection.length)) && ok ; i++) {
      const unichar c = [sourceString characterAtIndex:i] ;
      ok = (c != '\n') & (c != '\r') ;
    }
  }
//--- If ok, extend selection until a '\r', '\n' or a '"'.
  if (ok) {
    NSUInteger idx = selection.location + selection.length ;
    while ((idx < length)
        && ([sourceString characterAtIndex:idx] != '\r')
        && ([sourceString characterAtIndex:idx] != '\n')
        && ([sourceString characterAtIndex:idx] != '\"')) {
      idx ++ ;
      selection.length ++ ;
    }
  }
//--- If ok, advance selection until a '\r', '\n' or a '"'
  if (ok && (selection.location > 0)) {
    NSUInteger idx = selection.location - 1 ;
    while ((idx > 0)
        && ([sourceString characterAtIndex:idx] != '\r')
        && ([sourceString characterAtIndex:idx] != '\n')
        && ([sourceString characterAtIndex:idx] != '\"')) {
      idx -- ;
      selection.location -- ;
      selection.length ++ ;
    }
  }
//--- If ok, extract substring and build file path
  if (ok) {
    // NSLog (@"mDocument %p", mDocument) ;
    NSString * filePath = [sourceString substringWithRange:selection] ;
    if (([filePath length] > 0) && ([filePath characterAtIndex:0] != '/')) {
      filePath = [NSString stringWithFormat:@"%@/%@", [mDocument.fileURL.path stringByDeletingLastPathComponent], filePath] ;
    }
    #ifdef DEBUG_MESSAGES
      NSLog (@"filePath '%@'", filePath) ;
    #endif
    NSFileManager * fm = [[NSFileManager alloc] init] ;
    if (! [fm fileExistsAtPath:filePath]) {
      [self cannotOpenNonExistentFile:filePath] ;
    }else{
      NSDocumentController * dc = [NSDocumentController sharedDocumentController] ;
      NSError * error = nil ;
      id newDoc = [dc
        openDocumentWithContentsOfURL:[NSURL fileURLWithPath:filePath]
        display:YES
        error:&error
      ] ;
      ok = newDoc != nil ;
      if (! ok) {
        ok = [[NSWorkspace sharedWorkspace] openFile:filePath] ;
      }
      if (! ok) {
        [self cannotFindApplicationForFile:filePath] ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

#pragma mark Reveal in Finder

//---------------------------------------------------------------------------*
//                                                                           *
//    R E V E A L    I N    F I N D E R                                      *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) cannotRevealFileInFinder: (NSString *) inFilePath {
  NSAlert *alert = [NSAlert alertWithMessageText:@"Cannot Reveal File in Finder"
    defaultButton:@"Ok"
    alternateButton:nil
    otherButton:nil
    informativeTextWithFormat:[NSString stringWithFormat:@"The file '%@' does not exist.", inFilePath]
  ] ;
//--- Display alert as window sheet
  [alert
    beginSheetModalForWindow:[self window]
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
}

//---------------------------------------------------------------------------*

- (void) cannotProcessRevealInFinder: (NSString *) inPath {
  NSAlert *alert = [NSAlert alertWithMessageText:@"Cannot Reveal File in Finder"
    defaultButton:@"Ok"
    alternateButton:nil
    otherButton:nil
    informativeTextWithFormat:[NSString stringWithFormat:@"The finder cannot process operation for '%@' file.", inPath]
  ] ;
//--- Display alert as window sheet
  [alert
    beginSheetModalForWindow:[self window]
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
}

//---------------------------------------------------------------------------*

- (void) actionRevealInFinder: (id) sender {
//--- Get source string
  NSString * sourceString = [[self textStorage] string] ;
  const NSUInteger length = [sourceString length] ;
//--- Get selection
  NSRange selection = [self selectedRange] ;
//--- A selection is available ?
  BOOL ok = (selection.location != NSNotFound) ;
  if (ok && (selection.length > 1) && ([sourceString characterAtIndex:selection.location] == '\"')) {
    selection.location ++ ;
    selection.length -- ;
  }
  if (ok && (selection.length > 1) && ([sourceString characterAtIndex:selection.location + selection.length - 1] == '\"')) {
    selection.length -- ;
  }
//--- Check there is end of line within the selection
  if (ok) {
    NSUInteger i ;
    for (i=selection.location ; (i<(selection.location + selection.length)) && ok ; i++) {
      const unichar c = [sourceString characterAtIndex:i] ;
      ok = (c != '\n') & (c != '\r') ;
    }
  }
//--- If ok, extend selection until a '\r', '\n' or a '"'.
  if (ok) {
    NSUInteger idx = selection.location + selection.length ;
    while ((idx < length)
        && ([sourceString characterAtIndex:idx] != '\r')
        && ([sourceString characterAtIndex:idx] != '\n')
        && ([sourceString characterAtIndex:idx] != '\"')) {
      idx ++ ;
      selection.length ++ ;
    }
  }
//--- If ok, advance selection until a '\r', '\n' or a '"'
  if (ok && (selection.location > 0)) {
    NSUInteger idx = selection.location - 1 ;
    while ((idx > 0)
        && ([sourceString characterAtIndex:idx] != '\r')
        && ([sourceString characterAtIndex:idx] != '\n')
        && ([sourceString characterAtIndex:idx] != '\"')) {
      idx -- ;
      selection.location -- ;
      selection.length ++ ;
    }
  }
//--- If ok, extract substring and build file path
  if (ok) {
    // NSLog (@"mDocument %p", mDocument) ;
    NSString * filePath = [sourceString substringWithRange:selection] ;
    //NSLog (@"subString '%@'", subString) ;
    if (([filePath length] > 0) && ([filePath characterAtIndex:0] != '/')) {
      filePath = [NSString stringWithFormat:@"%@/%@", [mDocument.fileURL.path stringByDeletingLastPathComponent], filePath] ;
    }
    //NSLog (@"filePath '%@'", filePath) ;
    NSFileManager * fm = [[NSFileManager alloc] init] ;
    if (! [fm fileExistsAtPath:filePath]) {
      [self cannotRevealFileInFinder:filePath] ;
    }else{
      ok = [[NSWorkspace sharedWorkspace] selectFile:filePath inFileViewerRootedAtPath:nil] ;
      if (! ok) {
        [self cannotProcessRevealInFinder:filePath] ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

#pragma mark Mouse Down (for indexing)

//---------------------------------------------------------------------------*

/* - (void) mouseDown:(NSEvent *) inEvent {
  if (([inEvent modifierFlags] & NSCommandKeyMask) != 0) {
    const NSPoint local_point = [self convertPoint:[inEvent locationInWindow] fromView:nil] ;
    const NSUInteger characterIndex = [self characterIndexForInsertionAtPoint:local_point] ;
    const NSRange selectedRange = {characterIndex, 0} ;
    const NSRange r = [self selectionRangeForProposedRange:selectedRange granularity:NSSelectByWord] ;
    [self setSelectedRange:r] ;
  //--- Check if current has atomic selection
    OC_GGS_DelegateForSyntaxColoring * dsc = [mDocument delegateForSyntaxColoring] ;
    NSArray * tokenArray = [dsc tokenArray] ;
    BOOL hasAtomicSelection = YES ;
    BOOL found = NO ;
    NSRange allTokenCharacterRange = {0, 0} ;
    for (NSUInteger i=0 ; (i<[tokenArray count]) && ! found ; i++) {
      OC_Token * token = [tokenArray objectAtIndex:i HERE] ;
      allTokenCharacterRange = [token range] ;
      found = ((allTokenCharacterRange.location + allTokenCharacterRange.length) > r.location) && (allTokenCharacterRange.location <= r.location) ;
      if (found) {
        hasAtomicSelection = [dsc selectionByWordSelectsAllCharactersForTokenIndex:[token tokenCode]] ;
      }
    }
  //---
    NSString * token = [[[self textStorage] string] substringWithRange:r] ;
    // NSLog (@"%@", token) ;
    NSMenu * menu = [mDocument indexMenuForToken:token atomicSelection:hasAtomicSelection range:allTokenCharacterRange] ;
    // NSLog (@"%@", menu) ;
 //   [menu setAllowsContextMenuPlugIns:NO] ;
//    [menu setFont:[NSFont systemFontOfSize:[NSFont smallSystemFontSize]]] ;
    [NSMenu
      popUpContextMenu:menu
      withEvent:inEvent
      forView:self
      withFont:[NSFont systemFontOfSize:[NSFont smallSystemFontSize]]
    ] ;
  }else{
    [super mouseDown:inEvent] ;
  }  
}*/

//---------------------------------------------------------------------------*

#pragma mark Key Down

//---------------------------------------------------------------------------*

- (void) keyDown:(NSEvent *) inEvent {
  NSString * keys = [inEvent characters];
  if ([keys isEqualToString:@"\x09"]) { // A Tab Character ?
    const NSRange selectedRange = [self selectedRange] ;
    if ((selectedRange.location & 1) !=0) {
      [self insertText:@"  "] ; // Odd location: insert 2 spaces
    }else{
      [self insertText:@" "] ; // Even location: insert 1 space
    }
  }else if ([keys isEqualToString:@"\x0D"]) { // A Carriage Return Character ?
    const NSRange selectedRange = [self selectedRange] ;
    NSString * s = [[self textStorage] string] ;
    NSRange currentLineRange = [s lineRangeForRange:selectedRange] ;
  //--- Find the number of spaces at the beginning of the line
    if (currentLineRange.length > selectedRange.location - currentLineRange.location) {
      currentLineRange.length = selectedRange.location - currentLineRange.location ;
    }
  //--- Insert string
    NSMutableString * stringToInsert = [NSMutableString new] ;
    [stringToInsert appendString:@"\n"] ;
    while ((currentLineRange.length > 0) && ([s characterAtIndex:currentLineRange.location] == ' ')) {
      currentLineRange.location ++ ;
      currentLineRange.length -- ;
      [stringToInsert appendString:@" "] ;
    }
    [self insertText:stringToInsert] ;
  }else{
    [super keyDown:inEvent] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Token selection

//---------------------------------------------------------------------------*

/*- (NSRange) selectionRangeForProposedRange:(NSRange) inProposedSelRange
            granularity: (NSSelectionGranularity) inGranularity {

  NSRange result = inProposedSelRange ;
  if ((inGranularity == NSSelectByWord) && (inProposedSelRange.length == 0)) {
    // NSLog (@"inProposedSelRange: [%u, %u], granularity: %d", inProposedSelRange.location, inProposedSelRange.length, inGranularity) ;
    OC_GGS_DelegateForSyntaxColoring * dsc = [mDocument delegateForSyntaxColoring] ;
    NSArray * tokenArray = [dsc tokenArray] ;
    BOOL found = NO ;
    NSUInteger i ;
    for (i=0 ; (i<[tokenArray count]) && ! found ; i++) {
      OC_Token * token = [tokenArray objectAtIndex:i HERE] ;
      const NSRange range = [token range] ;
      found = ((range.location + range.length) > inProposedSelRange.location) && (range.location <= inProposedSelRange.location) ;
      if (found) {
        if ([dsc selectionByWordSelectsAllCharactersForTokenIndex:[token tokenCode]]) {
          result = range ;
        }else{
          const NSUInteger modifierFlags = [[NSApp currentEvent] modifierFlags] ;
          const BOOL altAndCmdOn = ((modifierFlags & NSCommandKeyMask) != 0) && ((modifierFlags & NSAlternateKeyMask) != 0) ;
          if (altAndCmdOn) {
            result = range ;
          }else{
            result = [super selectionRangeForProposedRange:inProposedSelRange granularity:inGranularity] ;
          }
        }
      }
    }
    if (! found) {
      result = [super selectionRangeForProposedRange:inProposedSelRange granularity:inGranularity] ;
    }
  }else{
    result = [super selectionRangeForProposedRange:inProposedSelRange granularity:inGranularity] ;
  }
  return result ;
}*/

//---------------------------------------------------------------------------*

@end
