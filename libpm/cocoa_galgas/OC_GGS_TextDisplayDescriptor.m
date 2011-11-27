//
//  OC_GGS_TextDisplayDescriptor.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_Lexique.h"
#import "OC_GGS_Document.h"

//---------------------------------------------------------------------------*

@implementation OC_GGS_TextDisplayDescriptor

//---------------------------------------------------------------------------*

- (void) refreshShowInvisibleCharacters {
  const BOOL show = [[NSUserDefaults standardUserDefaults] boolForKey:@"PMShowInvisibleCharacters"] ;
  [mTextView.layoutManager setShowsInvisibleCharacters:show] ;
  [mTextView setNeedsDisplay:YES] ;
}

//---------------------------------------------------------------------------*

- (NSUInteger) textSelectionStart {
  return mTextSelectionStart ;
}

//---------------------------------------------------------------------------*

- (OC_GGS_TextDisplayDescriptor *) initWithDelegateForSyntaxColoring: (OC_GGS_TextSyntaxColoring *) inDelegateForSyntaxColoring
                                   document: (OC_GGS_Document *) inDocument  {
  self = [self init] ;
  if (self) {
    mDocument = inDocument ;
    [self setSyntaxColoringDelegate:inDelegateForSyntaxColoring] ;
    mTextView = [[NSTextView alloc] initWithFrame:NSMakeRect (0.0, 0.0, 10.0, 10.0)] ;
    mTextView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable ;
    mTextView.usesFindPanel = YES ;
    mTextView.grammarCheckingEnabled = NO ;
    mTextView.allowsUndo = YES ;
  //---
    if ([mTextView respondsToSelector:@selector (setUsesFindBar:)]) {
      [mTextView setValue:[NSNumber numberWithBool:YES] forKey:@"usesFindBar"] ;
    }
  //---
    [mTextSyntaxColoring.textStorage addLayoutManager:mTextView.layoutManager] ;
    // NSLog (@"mTextSyntaxColoring.textStorage %p", mTextSyntaxColoring.textStorage) ;
    // NSLog (@"mTextView.layoutManager %p", mTextView.layoutManager) ;
    [mTextView setDelegate:self] ;
  //--- Add "Show Invisible Character" preference observer
    [[NSUserDefaultsController sharedUserDefaultsController]
      addObserver:self
      forKeyPath:@"values.PMShowInvisibleCharacters"
      options:0
      context:NULL
    ] ;
    [self refreshShowInvisibleCharacters] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) setSyntaxColoringDelegate: (OC_GGS_TextSyntaxColoring *) inDelegate {
  if (mTextSyntaxColoring != inDelegate) {
    [mTextSyntaxColoring performSelector:@selector (removeTextDisplayDescriptor:) withObject:self] ;
    mTextSyntaxColoring = inDelegate ;
    [mTextSyntaxColoring performSelector:@selector (addTextDisplayDescriptor:) withObject:self] ;
  }
}

//---------------------------------------------------------------------------*

- (OC_GGS_TextSyntaxColoring *) textSyntaxColoring {
  return mTextSyntaxColoring ;
}

//---------------------------------------------------------------------------*

- (NSMenu *) menuForEntryPopUpButton {
  return mTextSyntaxColoring.menuForEntryPopUpButton ;
}

//---------------------------------------------------------------------------*

- (NSTextView *) textView {
  return mTextView ;
}

//---------------------------------------------------------------------------*

- (NSString *) sourcePath {
  return mTextSyntaxColoring.sourcePath ;
}

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject: (id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if ([inKeyPath isEqualToString:@"values.PMShowInvisibleCharacters"]) {
    [self refreshShowInvisibleCharacters] ;
  }else if ([inKeyPath isEqualToString:@"menuForEntryPopUpButton"]) {
    [self willChangeValueForKey:@"menuForEntryPopUpButton"] ;
    [self  didChangeValueForKey:@"menuForEntryPopUpButton"] ;
  }else{
    [super
      observeValueForKeyPath:inKeyPath
      ofObject:inObject
      change:inChange
      context:inContext
    ] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Goto Line

//---------------------------------------------------------------------------*
//                                                                           *
//        G O T O    L I N E    A N D     C O L U M N                        *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) gotoLine: (NSUInteger) inLine {
//--- Find index
  NSUInteger currentLine = 0 ;
  NSString * sourceString = [[mTextView textStorage] string] ;
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
  [mTextView setSelectedRange:range] ;
  [mTextView scrollRangeToVisible:range] ;
}

//---------------------------------------------------------------------------*

#pragma mark Block Comment

//---------------------------------------------------------------------------*

- (void) commentSelection {
  const NSRange newRange = [mTextSyntaxColoring commentRange:mTextView.selectedRange] ;
  mTextView.selectedRange = newRange ;
}

//---------------------------------------------------------------------------*

- (void) uncommentSelection {
  const NSRange newRange = [mTextSyntaxColoring uncommentRange:mTextView.selectedRange] ;
  mTextView.selectedRange = newRange ;
}

//---------------------------------------------------------------------------*

#pragma mark Text Macros

//---------------------------------------------------------------------------*

- (void) actionInsertTextMacro: (NSMenuItem *) inSender {
  // NSLog (@"sender %@, tag %d", inSender, [inSender tag]) ;
  NSString * macroString = [mTextSyntaxColoring.tokenizer textMacroContentAtIndex:[inSender tag]] ;
  [mTextView insertText:macroString] ;
}

//---------------------------------------------------------------------------*

#pragma mark NSTextView delegate methods

//---------------------------------------------------------------------------*

- (NSUndoManager *) undoManagerForTextView: (NSTextView *) inTextView { // Delegate Method
  return mTextSyntaxColoring.undoManager ;
}

//---------------------------------------------------------------------------*

- (void) textViewDidChangeSelection:(NSNotification *) inNotification { // Delegate Method
  [self willChangeValueForKey:@"textSelectionStart"] ;
  mTextSelectionStart = mTextView.selectedRange.location ;
  [self  didChangeValueForKey:@"textSelectionStart"] ;
}

//---------------------------------------------------------------------------*

- (NSMenu *) textView:(NSTextView *)view
             menu:(NSMenu *)menu
             forEvent:(NSEvent *)event
             atIndex:(NSUInteger) inCharacterIndex { // Delegate Method
  const NSRange selectedRange = {inCharacterIndex, 0} ;
  const NSRange r = [mTextView selectionRangeForProposedRange:selectedRange granularity:NSSelectByWord] ;
  [mTextView setSelectedRange:r] ;
  return [mTextSyntaxColoring indexMenuForRange:r] ;
}

//---------------------------------------------------------------------------*

- (void) noteUndoManagerCheckPointNotification {
  [mDocument triggerDocumentEditedStatusUpdate] ;
}

//---------------------------------------------------------------------------*

#pragma mark Displaying issues

//---------------------------------------------------------------------------*

- (void) setIssueArray: (NSArray *) inIssueArray {

}

//---------------------------------------------------------------------------*

@end
