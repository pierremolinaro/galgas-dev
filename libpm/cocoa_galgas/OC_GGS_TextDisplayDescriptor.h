//
//  OC_GGS_TextDisplayDescriptor.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@class OC_GGS_TextSyntaxColoring ;
@class OC_GGS_DocumentData ;
@class OC_GGS_Document ;
@class OC_GGS_TextView ;
@class PMIssueDescriptor ;
@class OC_GGS_RulerViewForTextView ;

//---------------------------------------------------------------------------*

@interface OC_GGS_TextDisplayDescriptor : NSObject
#if MAC_OS_X_VERSION_MIN_REQUIRED > MAC_OS_X_VERSION_10_5
  <NSTextViewDelegate, NSPortDelegate>
#endif
{

  @private OC_GGS_TextView * mTextView ;
  @private NSPopUpButton * mEntryListPopUpButton ;
  @private OC_GGS_RulerViewForTextView * mRulerView ;
  @private NSScrollView * mScrollView ;
  @private NSView * mEnclosingView ;
  @private NSUInteger mTextSelectionStart ;
  @private NSArray * mIssueArray ;
  @private NSMutableSet * mPreviousBuildTasks ;
}

@property (strong, atomic, readonly) OC_GGS_DocumentData * documentData ;

- (OC_GGS_TextDisplayDescriptor *) initWithDocumentData: (OC_GGS_DocumentData *) inDocumentData
                                   displayDocument: (OC_GGS_Document *) inDocumentUsedForDisplaying ;

- (void) detachTextDisplayDescriptor ;

- (NSURL *) sourceURL ;

- (NSTextView *) textView ;

- (NSView *) enclosingView ;

- (NSUInteger) textSelectionStart ;

- (void) gotoLine: (NSUInteger) inLine ;

- (void) selectEntryPopUp ;

- (void) populatePopUpButton ;

- (void) commentSelection ;
- (void) uncommentSelection ;
- (void) shiftLeftAction ;
- (void) shiftRightAction ;

- (void) noteUndoManagerCheckPointNotification ;

- (void) setTextDisplayIssueArray: (NSArray *) inIssueArray ; 

- (BOOL) makeVisibleIssue: (PMIssueDescriptor *) inIssue ;

- (void) setSelectionRangeAndMakeItVisible: (NSRange) inRange ;
@end

//---------------------------------------------------------------------------*
