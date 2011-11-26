//---------------------------------------------------------------------------*
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2003, ..., 2010 Pierre Molinaro.                           *
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

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class OC_GGS_TextView ;
@class OC_GGS_DelegateForSyntaxColoring ;
@class OC_Lexique ;
@class OC_GGS_RulerViewForCompileMessageView ;
@class OC_GGS_ErrorOrWarningDescriptor ;
@class OC_GGS_TextSyntaxColoring ;
@class PMTabBarView ;

//---------------------------------------------------------------------------*

@interface OC_GGS_Document : NSDocument
#ifdef MAC_OS_X_VERSION_10_6
 <NSTextViewDelegate, NSToolbarDelegate, NSWindowDelegate>
 #endif
{
@private OC_GGS_DelegateForSyntaxColoring * mDelegateForSyntaxColoring ;
@private OC_Lexique * mTokenizer ;

@private IBOutlet OC_GGS_TextView * mTextView ;
@private IBOutlet NSScrollView * mTextScrollView ;

@private IBOutlet NSTextView * mIssueTextView ;

@private IBOutlet NSSplitView * mIssueSplitView ;


@private IBOutlet NSButton * mCurrentLineButton ;

@private NSTask * mTask ;

@private NSMutableData * mBufferedInputData ;

@private NSMutableArray * mIssueArray ; // Array of PMIssueDescriptor
@private NSArrayController * mIssueArrayController ;
@private IBOutlet NSTableColumn * mIssueTableViewColumn ;

  @private IBOutlet NSPopUpButton * mEntryListPopUpButton ;

  @private IBOutlet NSPanel * mUpdateFromFileSystemPanel ;

  @private IBOutlet NSTextField * mSourceEncodingTextField ;
  @private NSStringEncoding mFileEncoding ;

//---  
  @private OC_GGS_TextSyntaxColoring * mSourceTextWithSyntaxColoring ;

//---
  @private NSMutableArray * mSourceDisplayArray ; // Array of OC_GGS_TextDisplayDescriptor
  @private NSArrayController * mSourceDisplayArrayController ;

//---
  @private IBOutlet NSTextView * mSourceTextView ;
  @private IBOutlet PMTabBarView * mTabBarView ;
}

- (IBAction) duplicateSelectedSourceViewAction: (id) inSender ;

- (void) setSelectionRange: (NSRange) inRange ;
- (NSString *) sourceString ;
- (void) setSourceString: (NSString *) inString ;

- (IBAction) actionBuild: (id) sender ;
- (IBAction) stopBuild: (id) sender ;

- (void) changeTextRulerVisible: (BOOL) inVisible forRuleThickness: (double) inThickness ;

- (BOOL) canTerminateApplication ;
- (void) selectLine: (NSInteger) inLine forTextView: (NSTextView *) inTextView ;

- (void) selectEntryPopUpForSelectionStart: (NSInteger) inSelectionStart ;


- (OC_GGS_DelegateForSyntaxColoring *) delegateForSyntaxColoring ;
- (OC_Lexique *) tokenizer ;

//--- Navigation throught warnings


- (void) editedFilePath:(NSString *) inDocPath
         editedRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength ;

- (NSMenu *) indexMenuForToken: (NSString *) inToken
             atomicSelection: (BOOL) inHasAtomicSelection
             range: (NSRange) allTokenCharactersRange ;
@end
