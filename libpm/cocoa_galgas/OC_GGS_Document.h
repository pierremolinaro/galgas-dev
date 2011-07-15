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
@class NSSplitViewExtensions ;
@class OC_Lexique ;
@class OC_GGS_RulerViewForCompileMessageView ;
@class OC_GGS_ErrorOrWarningDescriptor ;

//---------------------------------------------------------------------------*

@interface OC_GGS_Document : NSDocument {
@private OC_GGS_DelegateForSyntaxColoring * mDelegateForSyntaxColoring ;
@private OC_Lexique * mTokenizer ;

@private IBOutlet OC_GGS_TextView * mUpperTextView ;
@private IBOutlet OC_GGS_TextView * mLowerTextView ;

@private IBOutlet NSScrollView * mScrollViewForUpperTextView ;
@private IBOutlet NSScrollView * mScrollViewForLowerTextView ;

@private IBOutlet NSSplitViewExtensions * mSplitView ;

@private IBOutlet NSWindowController * mBuildWindowController ;

@private IBOutlet NSTextField * mErrorCountMessage ;

@private IBOutlet NSTextField * mWarningCountMessage ;

@private IBOutlet NSButton * mCurrentLineButton ;

@private IBOutlet NSWindow * mBuildWindow ;
//@private IBOutlet NSTextField * mGotoLineTextField ;

@private IBOutlet NSTextView * mCompileMessagesTextView ;
@private IBOutlet NSScrollView * mCompileMessagesScrollView ;
@private OC_GGS_RulerViewForCompileMessageView * mRulerForCompileMessageTextView ; 
@private BOOL mScrollToTheEndOfTextDuringBuild ;
@private NSMutableArray * mWarningArray ; // Array of OC_GGS_ErrorOrWarningDescriptor
@private NSMutableArray * mErrorArray ; // Array of OC_GGS_ErrorOrWarningDescriptor
@private NSColor * mBackgroundColorForWarningsAndErrors ;

@private NSTask * mTask ;

@private NSTextStorage * mDefaultTextStorage ;

@private NSMutableData * mBufferedInputData ;
@private NSMutableString * mBufferedInputFromCompilerString ;
@private NSUInteger mBufferedInputFromCompilerIndex ;
@private unichar mBufferedInputFromCompilerCurrentStyle ;

//@private NSStringEncoding mCocoaSourceStringEncoding ;

@private NSUInteger mCurrentWarning ;
@private NSUInteger mCurrentError ;

  @private IBOutlet NSPopUpButton * mEntryListPopUpButton ;

  @private IBOutlet NSPanel * mUpdateFromFileSystemPanel ;

  @private IBOutlet NSTextField * mSourceEncodingTextField ;
  @private NSStringEncoding mFileEncoding ;
  
  @private IBOutlet OC_GGS_TextView * mSourceTextViewInBuildWindow ;
  @private IBOutlet NSScrollView * mSourceScrollViewInBuildWindow ;
  @private OC_GGS_Document * mCurrentlyEditedDocumentInBuildWindow ;
}

- (void) setSelectionRange: (NSRange) inRange ;
- (NSString *) sourceString ;
- (void) setSourceString: (NSString *) inString ;

- (IBAction) actionBuild: (id) sender ;
- (IBAction) stopBuild: (id) sender ;

- (NSArray *) warningDescriptorArray ;
- (NSArray *) errorDescriptorArray ;


- (void) changeTextRulerVisible: (BOOL) inVisible forRuleThickness: (CGFloat) inThickness ;

- (BOOL) canTerminateApplication ;
- (void) selectLine: (NSInteger) inLine forTextView: (NSTextView *) inTextView ;
- (void) willCloseGalgasDocument: (OC_GGS_Document *) inDocument ;

- (void) selectEntryPopUpForSelectionStart: (NSInteger) inSelectionStart ;
- (OC_GGS_DelegateForSyntaxColoring *) delegateForSyntaxColoring ;
- (OC_Lexique *) tokenizer ;
- (OC_GGS_TextView *) sourceTextViewInDocumentWindow ;
- (OC_GGS_Document *) currentlyEditedDocumentInBuildWindow ;

//--- Navigation throught warnings
- (void) showWarningAtIndex: (NSUInteger) inIndex
         display: (BOOL) inDisplaySourceWindow ;

- (NSUInteger) currentWarning ;

- (IBAction) gotoFirstWarning: (id) inSender ;
- (IBAction) gotoPreviousWarning: (id) inSender ;
- (IBAction) gotoCurrentWarning: (id) inSender ;
- (IBAction) gotoNextWarning: (id) inSender ;
- (IBAction) gotoLastWarning: (id) inSender ;

- (BOOL) canGotoFirstWarning ;
- (BOOL) canGotoPreviousWarning ;
- (BOOL) canGotoCurrentWarning ;
- (BOOL) canGotoNextWarning ;
- (BOOL) canGotoLastWarning ;

- (void) addWarningDescriptor: (OC_GGS_ErrorOrWarningDescriptor *) inWarningDescriptor ;

//--- Navigation throught errors
- (void) showErrorAtIndex: (NSUInteger) inIndex
         display: (BOOL) inDisplaySourceWindow ;

- (NSUInteger) currentError ;

- (IBAction) gotoFirstError: (id) inSender ;
- (IBAction) gotoPreviousError: (id) inSender ;
- (IBAction) gotoCurrentError: (id) inSender ;
- (IBAction) gotoNextError: (id) inSender ;
- (IBAction) gotoLastError: (id) inSender ;

- (BOOL) canGotoFirstError ;
- (BOOL) canGotoPreviousError ;
- (BOOL) canGotoCurrentError ;
- (BOOL) canGotoNextError ;
- (BOOL) canGotoLastError ;

- (void) addErrorDescriptor: (OC_GGS_ErrorOrWarningDescriptor *) inWarningDescriptor ;

- (void) editedFilePath:(NSString *) inDocPath
         editedRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength ;

- (NSMenu *) indexMenuForToken: (NSString *) inToken
             atomicSelection: (BOOL) inHasAtomicSelection
             range: (NSRange) allTokenCharactersRange ;
@end
