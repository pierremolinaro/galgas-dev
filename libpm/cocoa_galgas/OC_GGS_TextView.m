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

#import "OC_GGS_TextView.h"
#import "OC_GGS_Document.h"
#include "F_CocoaWrapperForGalgas.h"
#import "OC_GGS_DelegateForSyntaxColoring.h"
#import "OC_Token.h"
#import "OC_Lexique.h"
#import "PMCocoaCallsDebug.h"
#import "OC_GGS_ErrorOrWarningDescriptor.h"

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

static inline NSInteger imin (const NSInteger a, const NSInteger b) { return a < b ? a : b ; }
static inline NSInteger imax (const NSInteger a, const NSInteger b) { return a > b ? a : b ; }

//---------------------------------------------------------------------------*

@implementation OC_GGS_TextView

//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  [self setSmartInsertDeleteEnabled:NO] ;
  NSLayoutManager * lm = [self layoutManager] ;
//  NSLog (@"delegateForSyntaxColoring %@, lm %p", delegateForSyntaxColoring, lm) ;
  mDefaultTextStorage= [lm textStorage] ;
  // NSLog (@"lm %p, mDefaultTextStorage %p", lm, mDefaultTextStorage) ;
}

//---------------------------------------------------------------------------*

- (void) dealloc {
  mCurrentLineButton = nil ;
  [mKeyForSelectionInUserDefault release] ;
  mKeyForSelectionInUserDefault = nil ;
  [self setDelegate:nil] ;
  [super dealloc] ;
}

//---------------------------------------------------------------------------*

- (void) drawRect: (NSRect) inRect {
  [super drawRect:inRect] ;
//--- Frame all warning and error locations
  OC_GGS_Document * doc = [mDocument currentlyEditedDocumentInBuildWindow] ;
  NSString * docPath = doc.fileURL.path ;
  // NSLog (@"docPath '%@'", docPath) ;
  if (nil != docPath) {
    NSString * sourceString = [self string] ;
    NSLayoutManager * lm = [self layoutManager] ;
    NSUInteger i ;
    NSArray * warningArray = [mDocument warningDescriptorArray] ;
    for (i=0 ; i<[warningArray count] ; i++) {
      OC_GGS_ErrorOrWarningDescriptor * descriptor = [warningArray objectAtIndex:i HERE OFCLASS (OC_GGS_ErrorOrWarningDescriptor)] ;
      // NSLog (@"#%u : [descriptor documentPath] '%@'", i, [descriptor documentPath]) ;
      if (([descriptor documentPath] != nil) && [docPath isEqualToString:[descriptor documentPath]]) {
        const NSRange lineRange = [sourceString lineRangeForRange:NSMakeRange ([descriptor locationInSourceString], 1)] ;
        // NSLog (@"lineRange [%u, %u]", lineRange.location, lineRange.length) ;
        const NSRect r1 = [lm lineFragmentUsedRectForGlyphAtIndex:lineRange.location effectiveRange:NULL] ;
        // NSLog (@"r1 {{%f, %f}, {%f, %f}}", r1.origin.x, r1.origin.y, r1.size.width, r1.size.height) ;
        const NSRect r2 = [lm lineFragmentUsedRectForGlyphAtIndex:lineRange.location + lineRange.length - 1 effectiveRange:NULL] ;
        // NSLog (@"r2 {{%f, %f}, {%f, %f}}", r2.origin.x, r2.origin.y, r2.size.width, r2.size.height) ;
        const NSRect r = NSUnionRect (r1, r2) ;
        // NSLog (@"r {{%f, %f}, {%f, %f}}", r.origin.x, r.origin.y, r.size.width, r.size.height) ;
        [[NSColor orangeColor] setStroke] ;
        [NSBezierPath setDefaultLineWidth:1.0f] ;
        [NSBezierPath strokeRect:r] ;
      }
    }
    NSArray * errorArray = [mDocument errorDescriptorArray] ;
    for (i=0 ; i<[errorArray count] ; i++) {
      OC_GGS_ErrorOrWarningDescriptor * descriptor = [errorArray objectAtIndex:i HERE OFCLASS (OC_GGS_ErrorOrWarningDescriptor)] ;
      // NSLog (@"#%u : [descriptor documentPath] '%@'", i, [descriptor documentPath]) ;
      if (([descriptor documentPath] != nil) && [docPath isEqualToString:[descriptor documentPath]]) {
        const NSRange lineRange = [sourceString lineRangeForRange:NSMakeRange ([descriptor locationInSourceString], 1)] ;
        // NSLog (@"lineRange [%u, %u]", lineRange.location, lineRange.length) ;
        const NSRect r1 = [lm lineFragmentUsedRectForGlyphAtIndex:lineRange.location effectiveRange:NULL] ;
        // NSLog (@"r1 {{%f, %f}, {%f, %f}}", r1.origin.x, r1.origin.y, r1.size.width, r1.size.height) ;
        const NSRect r2 = [lm lineFragmentUsedRectForGlyphAtIndex:lineRange.location + lineRange.length - 1 effectiveRange:NULL] ;
        // NSLog (@"r2 {{%f, %f}, {%f, %f}}", r2.origin.x, r2.origin.y, r2.size.width, r2.size.height) ;
        const NSRect r = NSUnionRect (r1, r2) ;
        // NSLog (@"r {{%f, %f}, {%f, %f}}", r.origin.x, r.origin.y, r.size.width, r.size.height) ;
        [[NSColor redColor] setStroke] ;
        [NSBezierPath setDefaultLineWidth:1.0f] ;
        [NSBezierPath strokeRect:r] ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

- (void) setGalgasDocument: (OC_GGS_Document *) inDocument {
  //NSLog (@"inDocument %@", inDocument) ;

  mDocument = inDocument ;

  OC_GGS_DelegateForSyntaxColoring * delegateForSyntaxColoring = [mDocument delegateForSyntaxColoring] ;
  [self setDelegate:delegateForSyntaxColoring] ; // So that undoManagerForTextView: is called

  NSLayoutManager * lm = [self layoutManager] ;
//  NSLog (@"delegateForSyntaxColoring %@, lm %p", delegateForSyntaxColoring, lm) ;
  NSTextStorage * textStorage = [lm textStorage] ;
  [textStorage removeLayoutManager:lm] ;
  NSTextStorage * ts = [delegateForSyntaxColoring textStorage] ;
  if (ts != nil) {
    [ts addLayoutManager:lm] ;
  }else{
    [mDefaultTextStorage addLayoutManager:lm] ;
  }

  [self setEditable:mDocument != nil] ;
  [self setSelectable:mDocument != nil] ;
  if (mDocument == nil) {
    [self setSelectedRange:NSMakeRange (0, 0)] ;
  }
//  [self setRulersVisible:mDocument != nil] ;
}

//---------------------------------------------------------------------------*

- (BOOL) becomeFirstResponder {
  const BOOL b = [super becomeFirstResponder] ;
  if (b) {
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (updateTextLineAndColumnSelectionLocation:)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
  return b ;
}

//---------------------------------------------------------------------------*

#pragma mark Block Comment

//---------------------------------------------------------------------------*
//                                                                           *
//           C O M M E N T R A N G E                                         *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) commentRange: (NSValue *) inRangeValue {
  const NSRange selectedRange = [inRangeValue rangeValue] ;
  NSDictionary * attributeDictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    [self font], NSFontAttributeName,
    nil
  ] ;
  OC_Lexique * tokenizer = [mDocument tokenizer] ;
  NSAttributedString * blockCommentString = [[[NSAttributedString alloc] initWithString:[tokenizer blockComment] attributes:attributeDictionary] autorelease] ;
  //NSLog (@"selectedRange [%d, %d]", selectedRange.location, selectedRange.length) ;
  NSMutableAttributedString * mutableSourceString = [self textStorage] ;
  NSString * sourceString = [mutableSourceString string] ;
  const NSRange lineRange = [sourceString lineRangeForRange:selectedRange] ;
  //NSLog (@"lineRange [%d, %d]", lineRange.location, lineRange.length) ;
  NSInteger insertedCharsCount = 0 ;
  NSRange currentLineRange = [sourceString lineRangeForRange:NSMakeRange (lineRange.location + lineRange.length - 1, 1)] ;
  do {
    //NSLog (@"currentLineRange [%d, %d]", currentLineRange.location, currentLineRange.length) ;
    [mutableSourceString insertAttributedString:blockCommentString atIndex:currentLineRange.location] ;
    insertedCharsCount += [blockCommentString length] ;
    if (currentLineRange.location > 0) {
      currentLineRange = [sourceString lineRangeForRange:NSMakeRange (currentLineRange.location - 1, 1)] ;
    }
  }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)) ;
//--- Update selected range
  const NSRange newSelectedRange = NSMakeRange (selectedRange.location, selectedRange.length + insertedCharsCount) ;
  [self setSelectedRange:newSelectedRange] ;
//--- Register undo
  NSUndoManager * um = [self undoManager] ;
  [um 
    registerUndoWithTarget:self
    selector:@selector (uncommentRange:)
    object:[NSValue valueWithRange:newSelectedRange]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) commentAction: (id) inSender {
  const NSRange selectedRange = [self selectedRange] ;
  [self commentRange:[NSValue valueWithRange:selectedRange]] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                       U N C O M M E N T R A N G E                         *
//                                                                           *
// Cette méthode a plusieurs rôles :                                         *
//   - supprimer les marques de commentaires des lignes concernées par la    *
//     sélection, uniquement quand ces le commentaire commence une ligne ;   *
//   - ajuster la sélection en conséquence ; en effet, dès que la méthode    *
//     replaceCharactersInRange:withString: est appelée, Cocoa ramène la     *
//     sélection à un point d'insertion. La sélection est ajustée et         *
//     maintenue dans la variable finalSelectedRange.                        *
//                                                                           *
// Le plus difficile est l'ajustement de la sélection. Pour cela, on calcule:*
//   - le nombre beforeSelectionCharacterCount de caractères du commentaire  *
//     supprimé qui sont avant la sélection ; si ce nombre est > 0, on       *
//     le début de la sélection du min entre ce nombre et le nombre de carac-*
//     tères du commentaire ;                                                *
//   - le nombre withinSelectionCharacterCount de caractères du commentaire  *
//     supprimé qui sont à l'intérieur de la sélection ; si ce nombre est    *
//     > 0, on le retranche de la longueur de la sélection.                  *
//                                                                           *
//---------------------------------------------------------------------------*

// #define DEBUG_UNCOMMENTRANGE

//---------------------------------------------------------------------------*

- (void) uncommentRange: (NSValue *) inRangeValue {
//--- Get range to be examined
  const NSRange initialSelectedRange = [inRangeValue rangeValue] ;
//--- Block comment string
  OC_Lexique * tokenizer = [mDocument tokenizer] ;
  NSString * blockCommentString = [tokenizer blockComment] ;
  const NSUInteger blockCommentLength = [blockCommentString length] ;
//--- Get source string
  NSMutableAttributedString * mutableSourceString = [self textStorage] ;
  NSString * sourceString = [mutableSourceString string] ;
  #ifdef DEBUG_UNCOMMENTRANGE
    NSLog (@"blockCommentString '%@', text length %u", blockCommentString, [sourceString length]) ;
    NSLog (@"initialSelectedRange [%d, %d]", initialSelectedRange.location, initialSelectedRange.length) ;
  #endif
//--- Final selection range
  NSRange finalSelectedRange = initialSelectedRange ;
//--- Get line range that is affected by the operation
  const NSRange lineRange = [sourceString lineRangeForRange:initialSelectedRange] ;
  #ifdef DEBUG_UNCOMMENTRANGE
    NSLog (@"lineRange [%d, %d]", lineRange.location, lineRange.length) ;
  #endif
  NSRange currentLineRange = [sourceString lineRangeForRange:NSMakeRange (lineRange.location + lineRange.length - 1, 1)] ;
  do {
    #ifdef DEBUG_UNCOMMENTRANGE
      NSLog (@"currentLineRange [%d, %d]", currentLineRange.location, currentLineRange.length) ;
    #endif
    NSString * lineString = [sourceString substringWithRange:currentLineRange] ;
    if ([lineString compare:blockCommentString options:0 range:NSMakeRange (0, blockCommentLength)] == NSOrderedSame) {
      [mutableSourceString replaceCharactersInRange:NSMakeRange (currentLineRange.location, blockCommentLength) withString:@""] ;
    //--- Examen du nombre de caractères à l'intérieur de la sélection
      const NSInteger withinSelectionCharacterCount = 
        imin (currentLineRange.location + blockCommentLength, finalSelectedRange.location + finalSelectedRange.length)
      -
        imax (currentLineRange.location, finalSelectedRange.location) ;
      if (withinSelectionCharacterCount > 0) {
        finalSelectedRange.length -= withinSelectionCharacterCount ;
      }
    //--- Examen du nombre de caractères avant la sélection
      const NSInteger beforeSelectionCharacterCount = finalSelectedRange.location - currentLineRange.location ;
      if (beforeSelectionCharacterCount > 0) {
        finalSelectedRange.location -= imin (blockCommentLength, beforeSelectionCharacterCount) ;
      }
      #ifdef DEBUG_UNCOMMENTRANGE
        NSLog (@"withinSelectionCharacterCount %d, beforeSelectionCharacterCount %d", withinSelectionCharacterCount, beforeSelectionCharacterCount) ;
        NSLog (@"finalSelectedRange [%d, %d]", finalSelectedRange.location, finalSelectedRange.length) ;
      #endif
    }
    if (currentLineRange.location > 0) {
      currentLineRange = [sourceString lineRangeForRange:NSMakeRange (currentLineRange.location - 1, 1)] ;
    }
  }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)) ;
//--- Update selected range
  [self setSelectedRange:finalSelectedRange] ;
//--- Register undo
  NSUndoManager * um = [self undoManager] ;
  [um 
    registerUndoWithTarget:self
    selector:@selector (commentRange:)
    object:[NSValue valueWithRange:finalSelectedRange]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) uncommentAction: (id) inSender {
  const NSRange selectedRange = [self selectedRange] ;
  [self uncommentRange:[NSValue valueWithRange:selectedRange]] ;
}

//---------------------------------------------------------------------------*

#pragma mark Goto Line

//---------------------------------------------------------------------------*
//                                                                           *
//        S H O W    G O T O    L I N E   S H E E T                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (IBAction) actionGotoLine: (id) inSender {
  [mGotoLineSelectButton setAction:@selector (gotoLineSelectButtonAction:)] ;
  [mGotoLineSelectButton setTarget:self] ;

  [mGotoLineCancelButton setAction:@selector (gotoLineCancelButtonAction:)] ;
  [mGotoLineCancelButton setTarget:self] ;

  [NSApp
    beginSheet: mGotoWindow
    modalForWindow: [self window]
    modalDelegate: self
    didEndSelector: @selector (sheetDidEnd:returnCode:contextInfo:)
    contextInfo: nil
  ] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        G O T O    L I N E   S E L E C T    A C T I O N                    *
//                                                                           *
//---------------------------------------------------------------------------*

- (IBAction) gotoLineSelectButtonAction: (id) inSender {
  [mGotoWindow orderOut: inSender] ;
  [NSApp endSheet: mGotoWindow returnCode: 1] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        G O T O    L I N E   C A N C E L    A C T I O N                    *
//                                                                           *
//---------------------------------------------------------------------------*

- (IBAction) gotoLineCancelButtonAction: (id) inSender {
  [mGotoWindow orderOut: inSender] ;
  [NSApp endSheet: mGotoWindow returnCode: 0] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        G O T O    L I N E    A N D     C O L U M N                        *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) gotoLine: (int) inLine
         column: (int) inColumn {
//--- Find index
  NSInteger currentLine = 0 ;
  NSString * sourceString = [[self textStorage] string] ;
  NSRange range = [sourceString lineRangeForRange: NSMakeRange (0, 0)] ;
  NSUInteger lastStartOfLine = 0 ;
  while ((currentLine < inLine) && (range.length > 0)) {
    currentLine ++ ;
    lastStartOfLine = range.location ;
    range = [sourceString lineRangeForRange: NSMakeRange (NSMaxRange (range), 0)] ;
  }
//--- Change selected range
  if (range.length > 0) {
    range.location = lastStartOfLine ;
    range.length = 0 ;
  }
  [self setSelectedRange:range] ;
  [self scrollRangeToVisible:range] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        S H E E T    D I D    E N D    ( G O T O    L I N E )              *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) sheetDidEnd: (NSWindow *) inSheet
         returnCode: (int) inReturnCode
         contextInfo: (void *) inContextInfo {
  if (inReturnCode == 1) {
  //--- Get selected line
    const int selectedLine = [mGotoLineTextField intValue] ;
  //--- Goto selected line
    [self gotoLine:selectedLine column:1] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Goto Line Button in Toolbar

//---------------------------------------------------------------------------*

- (void) setCurrentLineButton: (NSButton *) inCurrentLineButton {
  mCurrentLineButton = inCurrentLineButton ;
}

//---------------------------------------------------------------------------*

- (void) setKeyForSelectionInUserDefault: (NSString *) inKeyForSelectionInUserDefault {
  [inKeyForSelectionInUserDefault retain] ;
  [mKeyForSelectionInUserDefault release] ;
  mKeyForSelectionInUserDefault = inKeyForSelectionInUserDefault ;
}

//---------------------------------------------------------------------------*

- (void) updateTextLineAndColumnSelectionLocation: (id) inUnusedArgument {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_TextView <updateTextLineAndColumnSelectionLocation> (first responder %@)", ([[self window] firstResponder] == self) ? @"yes" : @"no") ;
  #endif
  if ([[self window] firstResponder] == self) {
    const NSRange newSelection = [self selectedRange] ;
    // NSLog (@"newSelection: %u, %u", newSelection.location, newSelection.length) ;
    PMUInt32 line = 1 ;
    NSUInteger idx = 0 ;
    NSUInteger lastLineStart = 0 ;
    const NSUInteger lastScanningIndex = imin (newSelection.location, [[[self textStorage] string] length]) ;
    NSUInteger contentsEndIndex = 0 ;
    do{
      [[[self textStorage] string]
        getLineStart: & lastLineStart
        end: & idx
        contentsEnd:& contentsEndIndex
        forRange:NSMakeRange (idx, 0)
      ] ;
      line += lastScanningIndex > contentsEndIndex ;
    }while (lastScanningIndex > contentsEndIndex) ;
    const NSUInteger column = newSelection.location - lastLineStart + 1 ;
    NSString * s = [NSString stringWithFormat: @"Line %u:%u", line, column] ;
    [mCurrentLineButton setTitle: s] ;
    [mGotoLineTextField setIntValue:line] ;
  //--- Registering in user defaults
    if (mKeyForSelectionInUserDefault != nil) {
      NSWindow * docWindow = [self window] ;
      NSString * key = [NSString stringWithFormat: @"%@:%@", mKeyForSelectionInUserDefault, [docWindow title]] ;
      NSString * stringForUserDefauls = NSStringFromRange ([self selectedRange]) ;
      #ifdef DEBUG_MESSAGES
        NSLog (@"Register '%@' for key '%@' in user defaults", stringForUserDefauls, key) ;
      #endif
      [[NSUserDefaults standardUserDefaults] setObject:stringForUserDefauls forKey:key] ;
    }
    [mDocument selectEntryPopUpForSelectionStart:newSelection.location] ;
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_TextView <updateTextLineAndColumnSelectionLocation> DONE") ;
  #endif
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

#pragma mark Menu Item Validation

//---------------------------------------------------------------------------*

- (BOOL) validateMenuItem:(NSMenuItem *) inItem {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_TextView <validateMenuItem:>") ;
  #endif
  OC_Lexique * tokenizer = [mDocument tokenizer] ;
  NSString * blockCommentString = [tokenizer blockComment] ;
  BOOL validate ;
  // NSLog (@"blockComment () '%@'", blockComment ()) ;
  if ([inItem action] == @selector (commentAction:)) {
    validate = [blockCommentString length] > 0 ;
  }else if ([inItem action] == @selector (uncommentAction:)) {
    validate = [blockCommentString length] > 0 ;
  }else if ([inItem action] == @selector (shiftRightAction:)) {
    validate = YES ;
  }else if ([inItem action] == @selector (shiftLeftAction:)) {
    validate = YES ;
  }else{
    validate = [super validateMenuItem:inItem] ;
  }
  return validate ;
}

//---------------------------------------------------------------------------*

#pragma mark Text Macros

//---------------------------------------------------------------------------*

- (void) actionInsertTextMacro: (NSMenuItem *) inSender {
  // NSLog (@"sender %@, tag %d", inSender, [inSender tag]) ;
  OC_Lexique * tokenizer = [mDocument tokenizer] ;
  NSString * macroString = [tokenizer textMacroContentAtIndex:[inSender tag]] ;
  [self insertText:macroString] ;
}

//---------------------------------------------------------------------------*

#pragma mark Indentation

//---------------------------------------------------------------------------*

- (NSString *) shiftLeftString {
  const NSUInteger spaceCount = [[NSUserDefaults standardUserDefaults] integerForKey:@"PMShiftLeftInsertedSpaceCount"] ;
  //NSLog (@"spaceCount %u", spaceCount) ;
  NSMutableString * s = [[[NSMutableString alloc] init] autorelease] ;
  NSUInteger i ;
  for (i=0 ; i<spaceCount ; i++) {
    [s appendString:@" "] ;
  }
  return s ;
}

//---------------------------------------------------------------------------*

- (NSAttributedString *) shiftLeftAttributedString {
  NSDictionary * attributeDictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    [self font], NSFontAttributeName,
    nil
  ] ;
  return [[[NSAttributedString alloc] initWithString:[self shiftLeftString] attributes:attributeDictionary] autorelease] ;
}

//---------------------------------------------------------------------------*

- (void) shiftRightRange: (NSValue *) inRangeValue {
  NSAttributedString * spaceString = [self shiftLeftAttributedString] ;
  const NSRange selectedRange = [inRangeValue rangeValue] ;
  //NSLog (@"selectedRange [%d, %d]", selectedRange.location, selectedRange.length) ;
  NSMutableAttributedString * mutableSourceString = [self textStorage] ;
  NSString * sourceString = [mutableSourceString string] ;
  const NSRange lineRange = [sourceString lineRangeForRange:selectedRange] ;
  //NSLog (@"lineRange [%d, %d]", lineRange.location, lineRange.length) ;
  NSInteger insertedCharsCount = 0 ;
  NSRange currentLineRange = [sourceString lineRangeForRange:NSMakeRange (lineRange.location + lineRange.length - 1, 1)] ;
  do {
    //NSLog (@"currentLineRange [%d, %d]", currentLineRange.location, currentLineRange.length) ;
    [mutableSourceString insertAttributedString:spaceString atIndex:currentLineRange.location] ;
    insertedCharsCount += [spaceString length] ;
    if (currentLineRange.location > 0) {
      currentLineRange = [sourceString lineRangeForRange:NSMakeRange (currentLineRange.location - 1, 1)] ;
    }
  }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)) ;
//--- Update selected range
  const NSRange newSelectedRange = NSMakeRange (selectedRange.location, selectedRange.length + insertedCharsCount) ;
  [self setSelectedRange:newSelectedRange] ;
//--- Register undo
  NSUndoManager * um = [self undoManager] ;
  [um 
    registerUndoWithTarget:self
    selector:@selector (shiftLeftRange:)
    object:[NSValue valueWithRange:newSelectedRange]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) shiftRightAction: (id) inUnusedSender {
  const NSRange selectedRange = [self selectedRange] ;
  [self shiftRightRange:[NSValue valueWithRange:selectedRange]] ;
}

//---------------------------------------------------------------------------*

- (void) shiftLeftRange: (NSValue *) inRangeValue {
//--- Get range to be examined
  const NSRange initialSelectedRange = [inRangeValue rangeValue] ;
//--- Block comment string
  NSString * spaceString = [self shiftLeftString] ;
  const NSUInteger twoSpaceLength = [spaceString length] ;
//--- Get source string
  NSMutableAttributedString * mutableSourceString = [self textStorage] ;
  NSString * sourceString = [mutableSourceString string] ;
  #ifdef DEBUG_UNCOMMENTRANGE
    NSLog (@"spaceString '%@', text length %u", spaceString, [sourceString length]) ;
    NSLog (@"initialSelectedRange [%d, %d]", initialSelectedRange.location, initialSelectedRange.length) ;
  #endif
//--- Final selection range
  NSRange finalSelectedRange = initialSelectedRange ;
//--- Get line range that is affected by the operation
  const NSRange lineRange = [sourceString lineRangeForRange:initialSelectedRange] ;
  #ifdef DEBUG_UNCOMMENTRANGE
    NSLog (@"lineRange [%d, %d]", lineRange.location, lineRange.length) ;
  #endif
  NSRange currentLineRange = [sourceString lineRangeForRange:NSMakeRange (lineRange.location + lineRange.length - 1, 1)] ;
  do {
    #ifdef DEBUG_UNCOMMENTRANGE
      NSLog (@"currentLineRange [%d, %d]", currentLineRange.location, currentLineRange.length) ;
    #endif
    NSString * lineString = [sourceString substringWithRange:currentLineRange] ;
    if ([lineString compare:spaceString options:0 range:NSMakeRange (0, twoSpaceLength)] == NSOrderedSame) {
      [mutableSourceString replaceCharactersInRange:NSMakeRange (currentLineRange.location, twoSpaceLength) withString:@""] ;
    //--- Examen du nombre de caractères à l'intérieur de la sélection
      const NSInteger withinSelectionCharacterCount = 
        imin (currentLineRange.location + twoSpaceLength, finalSelectedRange.location + finalSelectedRange.length)
      -
        imax (currentLineRange.location, finalSelectedRange.location) ;
      if (withinSelectionCharacterCount > 0) {
        finalSelectedRange.length -= withinSelectionCharacterCount ;
      }
    //--- Examen du nombre de caractères avant la sélection
      const NSInteger beforeSelectionCharacterCount = finalSelectedRange.location - currentLineRange.location ;
      if (beforeSelectionCharacterCount > 0) {
        finalSelectedRange.location -= imin (twoSpaceLength, beforeSelectionCharacterCount) ;
      }
      #ifdef DEBUG_UNCOMMENTRANGE
        NSLog (@"withinSelectionCharacterCount %d, beforeSelectionCharacterCount %d", withinSelectionCharacterCount, beforeSelectionCharacterCount) ;
        NSLog (@"finalSelectedRange [%d, %d]", finalSelectedRange.location, finalSelectedRange.length) ;
      #endif
    }
    if (currentLineRange.location > 0) {
      currentLineRange = [sourceString lineRangeForRange:NSMakeRange (currentLineRange.location - 1, 1)] ;
    }
  }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)) ;
//--- Update selected range
  [self setSelectedRange:finalSelectedRange] ;
//--- Register undo
  NSUndoManager * um = [self undoManager] ;
  [um 
    registerUndoWithTarget:self
    selector:@selector (shiftRightRange:)
    object:[NSValue valueWithRange:finalSelectedRange]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) shiftLeftAction: (id) inSender {
  const NSRange selectedRange = [self selectedRange] ;
  [self shiftLeftRange:[NSValue valueWithRange:selectedRange]] ;
}

//---------------------------------------------------------------------------*

#pragma mark Mouse Down (for indexing)

//---------------------------------------------------------------------------*

- (void) mouseDown:(NSEvent *) inEvent {
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
    NSUInteger i ;
    BOOL found = NO ;
    NSRange allTokenCharacterRange = {0, 0} ;
    for (i=0 ; (i<[tokenArray count]) && ! found ; i++) {
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
}

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
    /* NSLog (@"currentLineRange: %u, %u", currentLineRange.location, currentLineRange.length) ;
    NSString * ss = [s substringWithRange:currentLineRange] ;
    UInt32 i ;
    for (i=0 ; i<[ss length] ; i++) {
      const unichar uc = [ss characterAtIndex:i] ;
      NSLog (@" 0x%02X", uc) ;
    } */
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

- (NSRange) selectionRangeForProposedRange:(NSRange) inProposedSelRange
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
}

//---------------------------------------------------------------------------*

@end
