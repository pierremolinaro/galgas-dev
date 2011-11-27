//
//  OC_GGS_TextDisplayDescriptor.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OC_GGS_TextSyntaxColoring ;
@class OC_GGS_Document ;

@interface OC_GGS_TextDisplayDescriptor : NSObject <NSTextViewDelegate> {

  @private OC_GGS_TextSyntaxColoring * mTextSyntaxColoring ;
  @private NSTextView * mTextView ;
  @private NSUInteger mTextSelectionStart ;
  @private OC_GGS_Document * mDocument ;

}

- (OC_GGS_TextDisplayDescriptor *) initWithDelegateForSyntaxColoring: (OC_GGS_TextSyntaxColoring *) inDelegate
                                   document: (OC_GGS_Document *) inDocument ;

- (void) setSyntaxColoringDelegate: (OC_GGS_TextSyntaxColoring *) inDelegate ;

- (OC_GGS_TextSyntaxColoring *) textSyntaxColoring ;

- (NSString *) sourcePath ;

- (NSTextView *) textView ;

- (NSMenu *) menuForEntryPopUpButton ;

- (NSUInteger) textSelectionStart ;

- (void) gotoLine: (NSUInteger) inLine ;

- (void) commentSelection ;
- (void) uncommentSelection ;

- (void) noteUndoManagerCheckPointNotification ;

- (void) setIssueArray: (NSArray *) inIssueArray ; 

@end
