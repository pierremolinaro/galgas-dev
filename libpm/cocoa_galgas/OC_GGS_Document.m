//---------------------------------------------------------------------------*
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2003, ..., 2012 Pierre Molinaro.                           *
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

#import "OC_GGS_Document.h"
#import "OC_GGS_PreferencesController.h"
#import "OC_GGS_RulerViewForTextView.h"
#import "OC_Lexique.h"
#import "F_CocoaWrapperForGalgas.h"
#import "PMIssueDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "PMTabBarView.h"
#import "OC_GGS_BuildTask.h"
#import "OC_GGS_DocumentData.h"
#import "OC_GGS_RulerViewForBuildOutput.h"
#import "OC_GGS_Scroller.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

@implementation OC_GGS_Document

//---------------------------------------------------------------------------*

@synthesize mBuildTaskIsRunning ;

//---------------------------------------------------------------------------*
//                                                                           *
//       I N I T                                                             *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    #ifdef DEBUG_MESSAGES
      NSLog (@"%s", __PRETTY_FUNCTION__) ;
    #endif
    noteObjectAllocation (self) ;
    mSourceDisplayArrayController = [NSArrayController new] ;
    mDisplayDescriptorArray = [NSMutableArray new] ;
    self.undoManager = nil ;
    self.hasUndoManager = NO ;
  }
  return self;
}

//---------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------*

- (NSString *) sourceStringForGlobalSearch {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  return mDocumentData.sourceString ;
}

//---------------------------------------------------------------------------*

- (void) replaceSourceStringWithString: (NSString *) inString {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [mDocumentData replaceSourceStringWithString:inString] ;
}

//---------------------------------------------------------------------------*

/*- (OC_GGS_TextSyntaxColoring *) textSyntaxColoring {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  return mSourceTextWithSyntaxColoring ;
}*/

//---------------------------------------------------------------------------*

#pragma mark Nib relative Actions

//---------------------------------------------------------------------------*
//                                                                           *
//       W I N D O W    N I B    N A M E                                     *
//                                                                           *
//---------------------------------------------------------------------------*

- (NSString *) windowNibName {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  return @"OC_GGS_Document" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       W I N D O W    C O N T R O L L E R    D I D    L O A D    N I B     *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) windowControllerDidLoadNib: (NSWindowController *) inWindowController {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [super windowControllerDidLoadNib: inWindowController];
//--- Record selected tab
  NSString * key = [NSString stringWithFormat:@"SELECTED-TAB:%@", self.fileURL.path] ;
  const NSUInteger selection = (NSUInteger) [[NSUserDefaults standardUserDefaults] integerForKey:key] ;
  // NSLog (@"READ %@ -> %lu", key, selection) ;
//--- Tell to window controller that closing the source text window closes the document
  [inWindowController setShouldCloseDocument: YES] ;
//--- Set up windows location
  key = [NSString stringWithFormat: @"frame_for_source:%@", self.lastComponentOfFileName] ;
  [self.windowForSheet setFrameAutosaveName:key] ;

//--- Add Split view binding
// Note : use [self lastComponentOfFileName] instead of [window title], because window title may not set at this point
  key = [NSString stringWithFormat:@"values.issue-split-fraction:%@", self.lastComponentOfFileName] ;
  [mIssueSplitView setAutosaveName:key] ;
//---
  [mSourceDisplayArrayController
    bind:@"contentArray"
    toObject:self
    withKeyPath:@"mDisplayDescriptorArray"
    options:nil
  ] ;
  [mSourceDisplayArrayController
    addObserver:self 
    forKeyPath:@"selectionIndex"
    options:0
    context:NULL
  ] ;
  [mSourceDisplayArrayController
    addObserver:mTabBarView 
    forKeyPath:@"selectionIndex"
    options:0
    context:NULL
  ] ;
//---
  [mSourceDisplayArrayController
    addObserver:self 
    forKeyPath:@"selection.textSelectionStart"
    options:0
    context:NULL
  ] ;
//---
  [mSourceDisplayArrayController
    addObserver:mTabBarView 
    forKeyPath:@"selection.sourcePath"
    options:0
    context:NULL
  ] ;
//---
  [mSourceDisplayArrayController
    addObserver:mTabBarView
    forKeyPath:@"arrangedObjects"
    options:0
    context:NULL
  ] ;
//---
  [mBuildProgressIndicator startAnimation:nil] ;
  NSDictionary * negateTransformer = [NSDictionary
    dictionaryWithObject:NSNegateBooleanTransformerName 
    forKey:@"NSValueTransformerName"
  ] ;
  [mStartBuildButton
    bind:@"hidden"
    toObject:self
    withKeyPath:@"mBuildTaskIsRunning"
    options:nil
  ] ;
  [mBuildProgressIndicator
    bind:@"hidden"
    toObject:self
    withKeyPath:@"mBuildTaskIsRunning"
    options:negateTransformer    
  ] ;
  [mStopBuildButton
    bind:@"enabled"
    toObject:self
    withKeyPath:@"mBuildTaskIsRunning"
    options:nil    
  ] ;
  [mStopBuildButton
    bind:@"hidden"
    toObject:self
    withKeyPath:@"mBuildTaskIsRunning"
    options:negateTransformer    
  ] ;
//---
  mWarningCountTextField.stringValue = @"0" ;
  mErrorCountTextField.stringValue = @"0" ;
//---
  [mOutputScrollView setVerticalScroller:[OC_GGS_Scroller new]] ;
//--- Display the document contents
  OC_GGS_TextDisplayDescriptor * textDisplayDescriptor = [mDocumentData newSourceDisplayDescriptorForDocument:self] ;
  if (nil != textDisplayDescriptor) {
    [mSourceDisplayArrayController addObject:textDisplayDescriptor] ;
    [mSourceDisplayArrayController setSelectedObjects:[NSArray arrayWithObject:textDisplayDescriptor]] ;
  //---
    [mTabBarView setTarget:self] ;
  //---
    mRulerViewForBuildOutput = [[OC_GGS_RulerViewForBuildOutput alloc] initWithDocument:self] ;
    [mOutputScrollView setVerticalRulerView:mRulerViewForBuildOutput] ;
    [mOutputScrollView setHasVerticalRuler:YES] ;
    [mOutputScrollView.verticalRulerView setRuleThickness:12.0] ;
    [mOutputScrollView setRulersVisible:YES] ;
  }
//--- Open tabs
  key = [NSString stringWithFormat:@"TABS:%@", self.fileURL.path] ;
  NSArray * tabFiles = [[NSUserDefaults standardUserDefaults] objectForKey:key] ;
  // NSLog (@"prefs '%@' -> %@", key, tabFiles) ;
  for (NSString * fileAbsolutePath in tabFiles) {
    [self findOrAddNewTabForFile:fileAbsolutePath] ;
  }
//--- Set selected tab
  NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
  if ((selection != NSNotFound) && (selection < sourceDisplayArray.count)) {
    [mSourceDisplayArrayController setSelectionIndex:selection] ;
  }
}

//---------------------------------------------------------------------------*

- (void) removeWindowController:(NSWindowController *) inWindowController {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//---
  NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
  for (OC_GGS_TextDisplayDescriptor * tdd in sourceDisplayArray) {
    [tdd detachTextDisplayDescriptor] ;
  }
//---
  for (PMIssueDescriptor * issue in mIssueArray) {
    [issue detach] ;
  }
//---
  [mRulerViewForBuildOutput detach] ;
  [mTabBarView detach] ;
  for (NSView * subview in mSourceHostView.subviews.copy) {
    [subview removeFromSuperview] ;
  }
//---
  [mSourceDisplayArrayController
    unbind:@"contentArray"
  ] ;
  [mSourceDisplayArrayController
    removeObserver:self 
    forKeyPath:@"selectionIndex"
  ] ;
  [mSourceDisplayArrayController
    removeObserver:mTabBarView 
    forKeyPath:@"selectionIndex"
  ] ;
//---
  [mSourceDisplayArrayController
    removeObserver:self 
    forKeyPath:@"selection.textSelectionStart"
  ] ;
//---
  [mSourceDisplayArrayController
    removeObserver:mTabBarView 
    forKeyPath:@"selection.sourcePath"
  ] ;
//---
  [mSourceDisplayArrayController
    removeObserver:mTabBarView
    forKeyPath:@"arrangedObjects"
  ] ;
//---
  [mStartBuildButton
    unbind:@"hidden"
  ] ;
  [mBuildProgressIndicator
    unbind:@"hidden"
  ] ;
  [mStopBuildButton
    unbind:@"enabled"
  ] ;
  [mStopBuildButton
    unbind:@"hidden"
  ] ;
//---
  mSourceDisplayArrayController = nil ;
  mDisplayDescriptorArray = nil ;
//--- Last call
  [OC_GGS_DocumentData cocoaDocumentWillClose:mDocumentData] ;
//---
  [super removeWindowController:inWindowController] ;
}

//---------------------------------------------------------------------------*

#pragma mark Actions

//---------------------------------------------------------------------------*

- (IBAction) duplicateSelectedSourceViewAction: (id) inSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
  OC_GGS_TextDisplayDescriptor * textDisplayDescriptor = [[OC_GGS_TextDisplayDescriptor alloc]
    initWithDocumentData:selectedObject.documentData
    displayDocument:self
  ] ;
  [mSourceDisplayArrayController addObject:textDisplayDescriptor] ;
  [mSourceDisplayArrayController setSelectedObjects:[NSArray arrayWithObject:textDisplayDescriptor]] ;
}

//---------------------------------------------------------------------------*

- (void) removeSelectedTabAction: (OC_GGS_TextDisplayDescriptor *) inTextDisplayDescriptor {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//---
  [mSourceDisplayArrayController removeObject:inTextDisplayDescriptor] ;
//--- Update users preferences
  NSMutableArray * tabFiles = [NSMutableArray new] ;
  for (OC_GGS_TextDisplayDescriptor * source in mSourceDisplayArrayController.arrangedObjects) {
    [tabFiles addObject:source.sourceURL.path] ;
  }
  [tabFiles removeObjectAtIndex:0] ; 
  NSString * key = [NSString stringWithFormat:@"TABS:%@", self.fileURL.path] ;
  [[NSUserDefaults standardUserDefaults]
    setObject:tabFiles
    forKey:key
  ] ;
//---
  [inTextDisplayDescriptor detachTextDisplayDescriptor] ;
  [OC_GGS_DocumentData cocoaDocumentWillClose:nil] ;
}

//---------------------------------------------------------------------------*

- (void) changeSelectedSourceViewAction: (NSButton *) inSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [mSourceDisplayArrayController setSelectionIndex:(NSUInteger) inSender.tag] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionGotoLine: (id) inSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [NSApp
    beginSheet:mGotoWindow
    modalForWindow:self.windowForSheet
    modalDelegate: self
    didEndSelector: @selector (sheetDidEnd:returnCode:contextInfo:)
    contextInfo: nil
  ] ;
}

//---------------------------------------------------------------------------*

- (void) collapseIssuesAction: (id) inSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [mIssueSplitView setPosition:0.0 ofDividerAtIndex:0] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        S H E E T    D I D    E N D    ( G O T O    L I N E )              *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) sheetDidEnd: (NSWindow *) inSheet
         returnCode: (int) inReturnCode
         contextInfo: (void *) inContextInfo {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if (inReturnCode == 1) {
  //--- Get selected line
    const NSUInteger selectedLine = (NSUInteger) [mGotoLineTextField integerValue] ;
  //--- Goto selected line
    OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
    [selectedObject gotoLine:selectedLine] ;
  }
}

//---------------------------------------------------------------------------*

- (IBAction) actionComment: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
  [selectedObject commentSelection] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionUncomment: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
  [selectedObject uncommentSelection] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionShiftLeft: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
  [selectedObject shiftLeftAction] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionShiftRight: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
  [selectedObject shiftRightAction] ;
}

//---------------------------------------------------------------------------*

- (BOOL) validateMenuItem:(NSMenuItem *) item {
  BOOL result = YES ;
  if ((item.action == @selector (actionComment:)) || (item.action == @selector (actionUncomment:))) {
    OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
    result = selectedObject.documentData.textSyntaxColoring.tokenizer.blockComment.length > 0 ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (IBAction) saveAllDocuments: (id) inSender {
  [OC_GGS_DocumentData saveAllDocuments] ;
}

//---------------------------------------------------------------------------*

- (void) displaySourceWithURL: (NSURL *) inURL
         atLine: (NSUInteger) inLine {
  OC_GGS_TextDisplayDescriptor * tdd = [self findOrAddNewTabForFile:inURL.path] ;
  const NSRange r = {[tdd.documentData locationForLineInSource:inLine], 0} ;
  [tdd setSelectionRangeAndMakeItVisible:r] ;
}

//---------------------------------------------------------------------------*

#pragma mark Document Actions

//---------------------------------------------------------------------------*
//                                                                           *
//    P R I N T                                                              *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) printDocument: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
  [selectedObject.textView print:sender] ;
}

//---------------------------------------------------------------------------*

#pragma mark Tracking File Document changes

//---------------------------------------------------------------------------*

- (NSDate *) sourceFileModificationDateInFileSystem {
  NSURL * fileURL = [self fileURL] ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSDate * date = [NSDate date] ;
  if ([fileURL isFileURL]) {
    NSFileManager * fm = [NSFileManager new] ;
    NSDictionary * fileAttributes = [fm attributesOfItemAtPath:[fileURL path] error:NULL] ;
    date = [fileAttributes objectForKey:NSFileModificationDate] ;
  }
  return date ;
}

//---------------------------------------------------------------------------*

- (void) updateFromFileSystem: (id) inUnusedArgument {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [NSApp
    beginSheet:mUpdateFromFileSystemPanel
    modalForWindow:[self windowForSheet]
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
//--- Read new content
  NSString * source = [[NSString alloc]
    initWithContentsOfURL:[self fileURL]
    encoding:NSUTF8StringEncoding
    error:nil
  ] ;
  if (source != nil) {
//    [mDelegateForSyntaxColoring setSourceString:source] ;
  }
//---
  [mUpdateFromFileSystemPanel orderOut:self] ;
  [NSApp endSheet:mUpdateFromFileSystemPanel] ;   
}

//---------------------------------------------------------------------------*

/*- (void) askForUpdatingFromFileSystem {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Get application name
  NSDictionary * bundleDictionary = [[NSBundle mainBundle] localizedInfoDictionary] ;
  NSString * applicationName = [bundleDictionary objectForKey: @"CFBundleName"] ;
//--- Build Alert
  NSAlert *alert = [NSAlert
    alertWithMessageText:@"Warning"
    defaultButton:[NSString stringWithFormat:@"Keep %@ Version", applicationName]
    alternateButton:@"Update From File Contents"
    otherButton:nil
    informativeTextWithFormat:@"This file for document at %@ has been modified by an other application."
      " Do you want to keep the %@ version or update from file contents ?",
      self.fileURL.path,
      applicationName
  ] ;
//--- Display alert as window sheet
  [alert
    beginSheetModalForWindow:[self windowForSheet]
    modalDelegate:self
    didEndSelector:@selector (askForUpdatingFromFileSystemAlertEnding:returnCode:contextInfo:)
    contextInfo:NULL
  ] ;
}

//---------------------------------------------------------------------------*

- (void) askForUpdatingFromFileSystemAlertEnding:(NSAlert *) inAlert
         returnCode:(int) returnCode
         contextInfo:(void *) contextInfo {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//  NSLog (@"returnCode %d", returnCode) ;
  if (returnCode == NSAlertAlternateReturn) { // Revert button
    [[NSRunLoop mainRunLoop]
      performSelector: @selector (updateFromFileSystem:)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
//--- Set new file modification date
  [self setFileModificationDate:[self sourceFileModificationDateInFileSystem]] ;
}

//---------------------------------------------------------------------------*

- (void) windowDidBecomeKey: (NSNotification *) inNotification {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if (self.fileURL.path.length > 0) {
    NSDate * modificationDateOnFileSystem = [self sourceFileModificationDateInFileSystem] ;
    if ([modificationDateOnFileSystem compare:[self fileModificationDate]] != NSOrderedSame) {
      [self askForUpdatingFromFileSystem] ;
    }
  }
}
*/

//---------------------------------------------------------------------------*

#pragma mark Document Save

//---------------------------------------------------------------------------*
//                                                                           *
//    S A V E    D O C U M E N T                                             *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) saveDocument:(id) inSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//---
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0] ;
  if (selectedObject.documentData == mDocumentData) {
    [super saveDocument:inSender] ;
  }else{
    [selectedObject.documentData performSaveToURL:nil] ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//    W R I T E    T O    F I L E                                            *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) writeToURL: (NSURL *) inAbsoluteURL
         ofType: (NSString *) inTypeName
         error: (NSError **) outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, URL %@", __PRETTY_FUNCTION__, inAbsoluteURL) ;
  #endif
//---
  return [mDocumentData performSaveToURL:inAbsoluteURL] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//  S A V I N G    H F S    T Y P E    A N D    C R E A T O R    C O D E S   *
//                                                                           *
//---------------------------------------------------------------------------*

- (NSDictionary *) fileAttributesToWriteToURL:(NSURL *) inDocumentURL
    ofType:(NSString *)documentTypeName
    forSaveOperation:(NSSaveOperationType)saveOperationType
    originalContentsURL: (NSURL *) inOriginalURL
    error: (NSError **) outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
    
  NSDictionary *infoPlist = [[NSBundle mainBundle] infoDictionary];
  NSString *creatorCodeString;
  NSArray *documentTypes;
  NSNumber *typeCode, *creatorCode;
  NSMutableDictionary *newAttributes;
  
  typeCode = creatorCode = nil;
  
  // First, set creatorCode to the HFS creator code for the application,
  // if it exists.
   creatorCodeString = [infoPlist objectForKey:@"CFBundleSignature"];
  if(creatorCodeString)
  {
      creatorCode = [NSNumber
          numberWithUnsignedLong:NSHFSTypeCodeFromFileType([NSString
          stringWithFormat:@"'%@'",creatorCodeString])];
  }
  
  // Then, find the matching Info.plist dictionary entry for this type.
  // Use the first associated HFS type code, if any exist.
  documentTypes = [infoPlist objectForKey:@"CFBundleDocumentTypes"];
  if(documentTypes)
  {
      const NSUInteger count = [documentTypes count];
      
      for(NSUInteger i = 0; i < count; i++)
      {
          NSString *type = [[documentTypes objectAtIndex:i]
              objectForKey:@"CFBundleTypeName"];
          if(type && [type isEqualToString:documentTypeName])
          {
              NSArray *typeCodeStrings = [[documentTypes objectAtIndex:i]
                  objectForKey:@"CFBundleTypeOSTypes"];
              if(typeCodeStrings)
              {
                 NSString *firstTypeCodeString = [typeCodeStrings
                      objectAtIndex:0];
                  if (firstTypeCodeString)
                  {
                      typeCode = [NSNumber                            numberWithUnsignedLong:
                         NSHFSTypeCodeFromFileType([NSString
                         stringWithFormat:@"'%@'",firstTypeCodeString])];
                  }
              }
              break;
          }
      }
  }
   // If neither type nor creator code exist, use the default implementation.
  if(!(typeCode || creatorCode))
  {
      return [super
        fileAttributesToWriteToURL:inDocumentURL
        ofType:documentTypeName
        forSaveOperation:saveOperationType
        originalContentsURL:inOriginalURL
        error:outError
      ];
  }
  
  // Otherwise, add the type and/or creator to the dictionary.
  newAttributes = [NSMutableDictionary
    dictionaryWithDictionary:[super
      fileAttributesToWriteToURL:inDocumentURL
      ofType:documentTypeName
      forSaveOperation:saveOperationType
      originalContentsURL:inOriginalURL
      error:outError
    ]
  ];
  if(typeCode)
      [newAttributes setObject:typeCode forKey:NSFileHFSTypeCode];
  if(creatorCode)
      [newAttributes setObject:creatorCode forKey:NSFileHFSCreatorCode];
  return newAttributes;
}

//---------------------------------------------------------------------------*

#pragma mark Document Read

//---------------------------------------------------------------------------*
//                                                                           *
//    R E A D    F R O M    F I L E                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) readFromURL:(NSURL *) inAbsoluteURL
         ofType:(NSString *) inTypeName
         error:(NSError **)outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//---
  mDocumentData = [OC_GGS_DocumentData
    findOrAddDataForDocumentURL:inAbsoluteURL
    forCocoaDocument:self
 ] ;
//---
  return mDocumentData != nil ;
}

//---------------------------------------------------------------------------*

#pragma mark Build

//---------------------------------------------------------------------------*
//                                                                           *
//    C O M P I L E                                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (IBAction) stopBuild: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  mBuildTaskHasBeenAborted = YES ;
  [mBuildTask terminate] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionBuild: (id) inUnusedSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [self saveAllDocuments:nil] ;
  mBufferedOutputData = [NSMutableData new] ;
  mWarningCountTextField.stringValue = @"0" ;
  mWarningCount = 0 ;
  mErrorCountTextField.stringValue = @"0" ;
  mErrorCount = 0 ;
  mBuildTaskHasBeenAborted = NO ;
  mIssueArray = [NSMutableArray new] ;
  [mRulerViewForBuildOutput setIssueArray:mIssueArray] ;
  OC_GGS_Scroller * scroller = (OC_GGS_Scroller *) mOutputScrollView.verticalScroller ;
  [scroller setIssueArray:mIssueArray] ;
//---
  [OC_GGS_DocumentData broadcastIssueArray:nil] ;
  mBuildTask = [[OC_GGS_BuildTask alloc] initWithDocument:self] ;
  self.mBuildTaskIsRunning = YES ;
//---
  NSDictionary * defaultDictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSFont fontWithName:@"Courier" size:13.0], NSFontAttributeName,
    [NSColor orangeColor], NSForegroundColorAttributeName,
    nil
  ] ;
  NSAttributedString * attributedString = [[NSAttributedString alloc]
    initWithString:@"Compiling…\n"
    attributes:defaultDictionary
  ] ;
  [mOutputTextView.textStorage setAttributedString:attributedString] ;
}

//---------------------------------------------------------------------------*

- (void) enterIssue: (NSString *) inIssueMessage
         isError: (BOOL) inIsError
         locationInOutputData: (NSRange) inRangeInOutputData {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//  NSLog (@"inIssueMessage '%@'", inIssueMessage) ;
  NSArray * components = [inIssueMessage componentsSeparatedByString:@"\n"] ;
  NSString * issuePath = nil ;
  NSInteger issueLine = 0 ;
  NSInteger issueColumn = 0 ;
  if (components.count > 1) {
    NSArray * issueLocationArray = [[components objectAtIndex:0] componentsSeparatedByString:@":"] ;
    if (issueLocationArray.count > 3) {
      issuePath = [issueLocationArray objectAtIndex:0] ;
      // NSLog (@"issuePath '%@'", issuePath) ;
      issueLine = [[issueLocationArray objectAtIndex:1] integerValue] ;
      // NSLog (@"issueLine '%ld'", issueLine) ;
      issueColumn = [[issueLocationArray objectAtIndex:2] integerValue] ;
      // NSLog (@"issueColumn '%ld'", issueColumn) ;
    }
  }
  PMIssueDescriptor * issue = [[PMIssueDescriptor alloc]
    initWithMessage:inIssueMessage
    URL:(nil == issuePath) ? nil : [NSURL fileURLWithPath:issuePath]
    line:issueLine
    column:issueColumn
    isError:inIsError
    rangeInOutputData:inRangeInOutputData
    buildOutputRuler:mRulerViewForBuildOutput
  ] ;
  [mIssueArray addObject:issue] ;
  [mRulerViewForBuildOutput setIssueArray:mIssueArray] ;
//---
  OC_GGS_Scroller * scroller = (OC_GGS_Scroller *) mOutputScrollView.verticalScroller ;
  [scroller setIssueArray:mIssueArray] ;
//---
  if (inIsError) {
    mErrorCount ++ ;
    mErrorCountTextField.stringValue = [NSString stringWithFormat:@"%lu", mErrorCount] ;
  }else{
    mWarningCount ++ ;
    mWarningCountTextField.stringValue = [NSString stringWithFormat:@"%lu", mWarningCount] ;
  }
}

//---------------------------------------------------------------------------*

static const utf32 COCOA_MESSAGE_ID = TO_UNICODE (1) ;
//static const utf32 COCOA_REWRITE_SUCCESS_ID = TO_UNICODE (2) ;
static const utf32 COCOA_WARNING_ID = TO_UNICODE (3) ;
static const utf32 COCOA_ERROR_ID   = TO_UNICODE (4) ;

//---------------------------------------------------------------------------*

- (void) enterOutputData: (NSData *) inData {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, inData %@", __PRETTY_FUNCTION__, inData) ;
  #endif
  NSString * message = [[NSString alloc] initWithData:inData encoding:NSUTF8StringEncoding] ;
  NSArray * messageArray = [message componentsSeparatedByString:[NSString stringWithFormat:@"%c", 0x1B]] ;
//--- Default attributes dictionary
  NSDictionary * defaultDictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSFont fontWithName:@"Courier" size:13.0], NSFontAttributeName,
    nil
  ] ;
  NSMutableAttributedString * outputAttributedString = [[NSMutableAttributedString alloc]
    initWithString:[messageArray objectAtIndex:0]
    attributes:defaultDictionary
  ] ;
//--- Send other components
  NSMutableDictionary * componentAttributeDictionary = defaultDictionary.mutableCopy ;
  for (NSUInteger i=1 ; i<messageArray.count ; i++) {
    NSString * component = [messageArray objectAtIndex:i] ;
    NSUInteger idx = 0 ;
    while ((idx < component.length) && ([component characterAtIndex:idx] == '[')) {
      idx ++ ;
      NSUInteger code = 0 ;
      while ((idx < component.length) && isdigit ([component characterAtIndex:idx])) {
        code *= 10 ;
        code += [component characterAtIndex:idx] - '0' ;
        idx ++ ;
      }
      if ((idx < component.length) && ([component characterAtIndex:idx] == 'm')) {
        idx ++ ;
      }
      switch (code) {
      case  0 : componentAttributeDictionary = defaultDictionary.mutableCopy ; break ;
      case 30 : [componentAttributeDictionary setValue:[NSColor blackColor]   forKey:NSForegroundColorAttributeName] ; break ;
      case 31 : [componentAttributeDictionary setValue:[NSColor redColor]     forKey:NSForegroundColorAttributeName] ; break ;
      case 32 : [componentAttributeDictionary setValue:[NSColor greenColor]   forKey:NSForegroundColorAttributeName] ; break ;
      case 33 : [componentAttributeDictionary setValue:[NSColor orangeColor]  forKey:NSForegroundColorAttributeName] ; break ;
      case 34 : [componentAttributeDictionary setValue:[NSColor blueColor]    forKey:NSForegroundColorAttributeName] ; break ;
      case 35 : [componentAttributeDictionary setValue:[NSColor magentaColor] forKey:NSForegroundColorAttributeName] ; break ;
      case 36 : [componentAttributeDictionary setValue:[NSColor cyanColor]    forKey:NSForegroundColorAttributeName] ; break ;
      case 37 : [componentAttributeDictionary setValue:[NSColor whiteColor]   forKey:NSForegroundColorAttributeName] ; break ;
      case 40 : [componentAttributeDictionary setValue:[NSColor whiteColor]   forKey:NSBackgroundColorAttributeName] ; break ;
      case 41 : [componentAttributeDictionary setValue:[NSColor redColor]     forKey:NSBackgroundColorAttributeName] ; break ;
      case 42 : [componentAttributeDictionary setValue:[NSColor greenColor]   forKey:NSBackgroundColorAttributeName] ; break ;
      case 43 : [componentAttributeDictionary setValue:[NSColor orangeColor]  forKey:NSBackgroundColorAttributeName] ; break ;
      case 44 : [componentAttributeDictionary setValue:[NSColor blueColor]    forKey:NSBackgroundColorAttributeName] ; break ;
      case 45 : [componentAttributeDictionary setValue:[NSColor magentaColor] forKey:NSBackgroundColorAttributeName] ; break ;
      case 46 : [componentAttributeDictionary setValue:[NSColor cyanColor]    forKey:NSBackgroundColorAttributeName] ; break ;
      case 47 : [componentAttributeDictionary setValue:[NSColor whiteColor]   forKey:NSBackgroundColorAttributeName] ; break ;
      default: break ;
      }
    }
    NSString * s = [component substringFromIndex:idx] ;
    if (s.length > 0) {
      const NSRange r = {mOutputTextView.textStorage.length + outputAttributedString.length, s.length - 1} ;
      if ([s characterAtIndex:0] == COCOA_WARNING_ID) {
        s = [s substringFromIndex:1] ;
        [self
          enterIssue:s
          isError:NO
          locationInOutputData:r
        ] ;
      }else if ([s characterAtIndex:0] == COCOA_ERROR_ID) {
        s = [s substringFromIndex:1] ;
        [self
          enterIssue:s
          isError:YES
          locationInOutputData:r
        ] ;
      }
      NSAttributedString * as = [[NSAttributedString alloc]
        initWithString:s
        attributes:componentAttributeDictionary
      ] ;
      [outputAttributedString appendAttributedString:as] ;
    }
  }
  [mOutputTextView.textStorage appendAttributedString:outputAttributedString] ;
  [mOutputTextView scrollRangeToVisible:NSMakeRange (mOutputTextView.textStorage.length, 0)] ;
}

//---------------------------------------------------------------------------*

- (void) buildCompleted {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self.mBuildTaskIsRunning = NO ;
//---
  [self enterOutputData:mBufferedOutputData] ;
  mBufferedOutputData = nil ;
//---
  [OC_GGS_DocumentData broadcastIssueArray:mIssueArray] ;
//---
  NSDictionary * defaultDictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSFont fontWithName:@"Courier" size:13.0], NSFontAttributeName,
    [NSColor orangeColor], NSForegroundColorAttributeName,
    nil
  ] ;
  NSAttributedString * attributedString = [[NSAttributedString alloc]
    initWithString:mBuildTaskHasBeenAborted ? @"Aborted.\n" : @"Done.\n"
    attributes:defaultDictionary
  ] ;
  [mOutputTextView.textStorage appendAttributedString:attributedString] ;
//---
  [[NSRunLoop mainRunLoop]
    performSelector:@selector (pmReleaseBuildTask)
    target:self
    argument:nil
    order:0
    modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) pmReleaseBuildTask {
  mBuildTask = nil ;
//---
  [NSApp requestUserAttention:NSInformationalRequest] ;
//---
  if ((! mHasSpoken) && (mErrorCount > 40)) {
    mHasSpoken = YES ;
    NSString * thePhrase = [NSString stringWithFormat:@"\"Oh! %@ makes %lu errors\"", NSFullUserName (), mErrorCount] ;
    NSSpeechSynthesizer * speech = [[NSSpeechSynthesizer alloc] initWithVoice:nil] ;
    [speech startSpeakingString:thePhrase] ;
  }
  
}

//---------------------------------------------------------------------------*

- (void) appendBuildOutputData: (NSData *) inData {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [mBufferedOutputData appendData:inData] ;
//--- Split input data, be detecting 2 consecutives COCOA_MESSAGE_ID characters
  BOOL ok = YES ;
  const uint16 sentinel = 0x0101 ;
  while (ok) {
    ok = NO ;
  //--- Look for sentinel
    NSUInteger idx = 0 ;
    while ((! ok) && ((idx + 1) < mBufferedOutputData.length)) {
      const NSRange range = {idx, 2} ;
      uint16 c ;
      [mBufferedOutputData getBytes:& c range:range] ;
      ok = c == sentinel ;
      if (! ok) {
        idx ++ ;
      }
    }
  //--- If found, extract data
    if (ok) {
      NSData * data = [mBufferedOutputData subdataWithRange:NSMakeRange (0, idx)] ;
      NSData * remainingData = [mBufferedOutputData subdataWithRange:NSMakeRange (idx + 2, mBufferedOutputData.length - (idx + 2))] ;
      [mBufferedOutputData setData:remainingData] ;
      [self enterOutputData:data] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (void) triggerDocumentEditedStatusUpdate {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  BOOL isEdited = NO ;
  NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
  for (NSUInteger i=0 ; (i<sourceDisplayArray.count) && ! isEdited ; i++) {
    OC_GGS_TextDisplayDescriptor * textDisplay = [sourceDisplayArray objectAtIndex:i] ;
    OC_GGS_TextSyntaxColoring * textSyntaxColoring = textDisplay.documentData.textSyntaxColoring ;
    isEdited = textSyntaxColoring.isDirty ;
  }
  [self updateChangeCount:isEdited ? NSChangeDone : NSChangeCleared] ;
}

//---------------------------------------------------------------------------*

#pragma mark Click on issue table view

//---------------------------------------------------------------------------*

- (OC_GGS_DocumentData *) findOrAddDocumentWithPath: (NSString *) inPath {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSString * requestedAbsolutePath = inPath.isAbsolutePath
    ? inPath.copy
    : [self.fileURL.path.stringByDeletingLastPathComponent stringByAppendingPathComponent:inPath]
  ;
  return [OC_GGS_DocumentData
    findOrAddDataForDocumentURL:[NSURL fileURLWithPath:requestedAbsolutePath]
    forCocoaDocument:nil
  ] ;
}

//---------------------------------------------------------------------------*

- (OC_GGS_TextDisplayDescriptor *) findOrAddNewTabForFile: (NSString *) inDocumentPath {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, inDocumentPath: %@", __PRETTY_FUNCTION__, inDocumentPath) ;
  #endif
  OC_GGS_DocumentData * documentData = [self findOrAddDocumentWithPath:inDocumentPath] ;
  OC_GGS_TextDisplayDescriptor * foundSourceText = nil ;
  if (nil != documentData) { // Find a text display descriptor
    NSArray * sourceDisplayDescriptorArray = mSourceDisplayArrayController.arrangedObjects ;
    for (NSUInteger i=0 ; (i<sourceDisplayDescriptorArray.count) && (nil == foundSourceText) ; i++) {
      OC_GGS_TextDisplayDescriptor * std = [sourceDisplayDescriptorArray objectAtIndex:i] ;
      if (std.documentData == documentData) {
        foundSourceText = std ;
      }
    }
    if (nil == foundSourceText) { // Create a tab
      foundSourceText = [[OC_GGS_TextDisplayDescriptor alloc]
        initWithDocumentData:documentData
        displayDocument:self
      ] ;
      [mSourceDisplayArrayController addObject:foundSourceText] ;
    //--- Update users preferences
      NSMutableArray * tabFiles = [NSMutableArray new] ;
      for (OC_GGS_TextDisplayDescriptor * source in mSourceDisplayArrayController.arrangedObjects) {
        [tabFiles addObject:source.sourceURL.path] ;
      }
      [tabFiles removeObjectAtIndex:0] ; 
      NSString * key = [NSString stringWithFormat:@"TABS:%@", self.fileURL.path] ;
      [[NSUserDefaults standardUserDefaults]
        setObject:tabFiles
        forKey:key
      ] ;
      // NSLog (@"prefs '%@' -> %@", key, tabFiles) ;
    }
    [mSourceDisplayArrayController setSelectedObjects:[NSArray arrayWithObject:foundSourceText]] ;
  }
  return foundSourceText ;
}

//---------------------------------------------------------------------------*

#pragma mark observeValueForKeyPath

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject: (id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, keyPath: %@", __PRETTY_FUNCTION__, inKeyPath) ;
  #endif
  if ([inKeyPath isEqualToString:@"selectionIndex"]) {
    for (NSView * subview in mSourceHostView.subviews.copy) {
      [subview removeFromSuperview] ;
    }
    NSArray * arrangedObjects = mSourceDisplayArrayController.arrangedObjects ;
    const NSUInteger sel = mSourceDisplayArrayController.selectionIndex ;
    NSString * key = [NSString stringWithFormat:@"SELECTED-TAB:%@", self.fileURL.path] ;
    [[NSUserDefaults standardUserDefaults] setInteger:(NSInteger) sel forKey:key] ;
    // NSLog (@"WRITE %@ -> %lu", key, sel) ;
    if (sel != NSNotFound) {
      OC_GGS_TextDisplayDescriptor * object = [arrangedObjects objectAtIndex:sel] ;
      object.enclosingView.frame = mSourceHostView.bounds ;
      // NSLog (@"object.scrollView %d", object.scrollView.autoresizesSubviews) ;
      [mSourceHostView addSubview:object.enclosingView] ;
      [mSourceHostView.window makeFirstResponder:object.textView] ;
    }
  }else if ([inKeyPath isEqualToString:@"selection.textSelectionStart"]) {
    const NSUInteger sel = mSourceDisplayArrayController.selectionIndex ;
    if (sel != NSNotFound) {
      NSArray * arrangedObjects = mSourceDisplayArrayController.arrangedObjects ;
      OC_GGS_TextDisplayDescriptor * object = [arrangedObjects objectAtIndex:sel] ;
      [object selectEntryPopUp] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (CGFloat) splitView:(NSSplitView *)splitView
            constrainMinCoordinate:(CGFloat)proposedMin
            ofSubviewAt:(NSInteger) inDividerIndex {
  return 40.0 ;
}

//---------------------------------------------------------------------------*

#pragma mark Open Quickly

//---------------------------------------------------------------------------*

- (NSString *) fileNameFromSelection {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSArray * sourceDisplayDescriptorArray = mSourceDisplayArrayController.arrangedObjects ;
  const NSUInteger sel = mSourceDisplayArrayController.selectionIndex ;
  OC_GGS_TextDisplayDescriptor * currentSourceText = [sourceDisplayDescriptorArray objectAtIndex:sel] ;
  OC_GGS_TextSyntaxColoring * textSyntaxColoring = currentSourceText.documentData.textSyntaxColoring ;
//--- Get source string
  NSString * sourceString = textSyntaxColoring.sourceString ;
  const NSUInteger length = sourceString.length ;
//--- Get selection
  NSRange selection = currentSourceText.textView.selectedRange ;
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
    for (NSUInteger i=selection.location ; (i<(selection.location + selection.length)) && ok ; i++) {
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
//---
  NSString * relativePath = [sourceString substringWithRange:selection] ;
  return [self.fileURL.path.stringByDeletingLastPathComponent stringByAppendingPathComponent:relativePath] ;
}

//---------------------------------------------------------------------------*

- (void) actionOpenFromSelectionInNewWindow: (id) sender {
  NSString * newDocumentPath = [self fileNameFromSelection] ;
  NSError * error = nil ;
  NSDocument * doc = [[NSDocumentController sharedDocumentController]
    openDocumentWithContentsOfURL:[NSURL fileURLWithPath:newDocumentPath]
    display:YES
    error:& error
  ] ;
  if (nil == doc) {
    [self.windowForSheet presentError:error] ;
  }
}

//---------------------------------------------------------------------------*

- (void) actionOpenQuickly: (id) sender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [self findOrAddNewTabForFile:[self fileNameFromSelection]] ;
}

//---------------------------------------------------------------------------*

@end
