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

#import "OC_GGS_DocumentInterface.h"
#import "OC_GGS_Document.h"
#import "OC_GGS_PreferencesController.h"
#import "OC_GGS_RulerViewForTextView.h"
#import "OC_Lexique.h"
#import "F_CocoaWrapperForGalgas.h"
#import "PMCocoaCallsDebug.h"
#import "PMIssueDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "PMTabBarView.h"

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

@implementation OC_GGS_DocumentInterface

//---------------------------------------------------------------------------*
//                                                                           *
//       I N I T                                                             *
//                                                                           *
//---------------------------------------------------------------------------*

- (OC_GGS_DocumentInterface *) initWithDocument: (OC_GGS_Document *) inDocument {
  self = [super init] ;
  if (self) {
    #ifdef DEBUG_MESSAGES
      NSLog (@"%s", __PRETTY_FUNCTION__) ;
    #endif
    mDocument = inDocument ;
    mIssueArrayController = [NSArrayController new] ;
    mFileEncoding = NSUTF8StringEncoding ;
    mSourceDisplayArrayController = [NSArrayController new] ;
  }
  return self;
}

//---------------------------------------------------------------------------*

- (NSWindow *) window {
  return mWindow ;
}

//---------------------------------------------------------------------------*

#pragma mark Nib relative Actions

//---------------------------------------------------------------------------*
//                                                                           *
//       W I N D O W    C O N T R O L L E R    D I D    L O A D    N I B     *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <windowControllerDidLoadNib:>") ;
  #endif
//--- Bindings
  [mIssueTextView
    bind:@"font"
    toObject:[NSUserDefaultsController sharedUserDefaultsController]
    withKeyPath:[NSString stringWithFormat:@"values.%@", GGS_build_text_font]
    options:[NSDictionary dictionaryWithObject:NSUnarchiveFromDataTransformerName forKey:NSValueTransformerNameBindingOption]
  ] ;

//--- Bindings
  [mIssueTableViewColumn
    bind:@"value"
    toObject:mIssueArrayController
    withKeyPath:@"arrangedObjects.issueMessage"
    options:nil
  ] ;
  [mIssueTableViewColumn
    bind:@"textColor"
    toObject:mIssueArrayController
    withKeyPath:@"arrangedObjects.issueColor"
    options:nil
  ] ;
//--- Handle clic on issue table view
  mIssueTableView.target = self ;
  mIssueTableView.action = @selector(clicOnIssueTableView:) ;
//--- Set up windows location
  NSString * key = [NSString stringWithFormat: @"frame_for_source:%@", mDocument.sourceTextWithSyntaxColoring.sourcePath.lastPathComponent] ;
  [mWindow setFrameFromString: [[NSUserDefaults standardUserDefaults] objectForKey: key]] ;

//--- Add Split view binding
// Note : use [self lastComponentOfFileName] instead of [window title], because window title may not set at this point
  NSString * keyPath = [NSString stringWithFormat:@"values.issue-split-fraction:%@", mDocument.sourceTextWithSyntaxColoring.sourcePath.lastPathComponent] ;
  [mIssueSplitView setAutosaveName:keyPath] ;
//--- Source file encoding
  [mSourceEncodingTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"fileEncodingString"
    options:nil    
  ] ;
//---
  [mSourceDisplayArrayController
    addObserver:self 
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
    addObserver:self 
    forKeyPath:@"selection.mTextSyntaxColoring.mTokenizer.menuForEntryPopUpButton"
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
//--- Display the document contents
  OC_GGS_TextDisplayDescriptor * textDisplayDescriptor = [[OC_GGS_TextDisplayDescriptor alloc]
    initWithDelegateForSyntaxColoring:mDocument.sourceTextWithSyntaxColoring
    documentInterface:self
  ] ;
  [mSourceDisplayArrayController addObject:textDisplayDescriptor] ;
  [mSourceDisplayArrayController setSelectedObjects:[NSArray arrayWithObject:textDisplayDescriptor]] ;
//---
  [mTabBarView setTarget:self] ;
  [mTabBarView setChangeSourceTabAction:@selector (changeSelectedSourceViewAction:)] ;
  [mTabBarView setRemoveSourceTabAction:@selector (removeSelectedSourceViewAction:)] ;
//---
  [self displayIssueDetailedMessage:nil] ;

//---
  [mBuildProgressIndicator setHidden:YES] ;
  [mStopBuildButton setEnabled:NO] ;
//---
  mWindow.title = mDocument.sourceTextWithSyntaxColoring.sourcePath.lastPathComponent ;
  [mWindow makeKeyAndOrderFront:nil] ;
}

//---------------------------------------------------------------------------*

#pragma mark Actions

//---------------------------------------------------------------------------*

- (IBAction) duplicateSelectedSourceViewAction: (id) inSender {
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0 HERE] ;
  OC_GGS_TextDisplayDescriptor * textDisplayDescriptor = [[OC_GGS_TextDisplayDescriptor alloc]
    initWithDelegateForSyntaxColoring:selectedObject.textSyntaxColoring
    documentInterface:self
  ] ;
  [mSourceDisplayArrayController addObject:textDisplayDescriptor] ;
  [mSourceDisplayArrayController setSelectedObjects:[NSArray arrayWithObject:textDisplayDescriptor]] ;
}

//---------------------------------------------------------------------------*

- (IBAction) removeSelectedSourceViewAction: (id) inSender {
  [mSourceDisplayArrayController remove:inSender] ;
}

//---------------------------------------------------------------------------*

- (IBAction) changeSelectedSourceViewAction: (NSButton *) inSender {
  [mSourceDisplayArrayController setSelectionIndex:inSender.tag] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionGotoLine: (id) inSender {
  [NSApp
    beginSheet:mGotoWindow
    modalForWindow:mWindow
    modalDelegate: self
    didEndSelector: @selector (sheetDidEnd:returnCode:contextInfo:)
    contextInfo: nil
  ] ;
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
    const NSUInteger selectedLine = [mGotoLineTextField integerValue] ;
  //--- Goto selected line
    OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0 HERE] ;
    [selectedObject gotoLine:selectedLine] ;
  }
}

//---------------------------------------------------------------------------*

- (IBAction) actionComment: (id) sender {
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0 HERE] ;
  [selectedObject commentSelection] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionUncomment: (id) sender {
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0 HERE] ;
  [selectedObject uncommentSelection] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionShiftLeft: (id) sender {
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0 HERE] ;
  [selectedObject shiftLeftAction] ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionShiftRight: (id) sender {
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0 HERE] ;
  [selectedObject shiftRightAction] ;
}

//---------------------------------------------------------------------------*

#pragma mark Document Actions

//---------------------------------------------------------------------------*
//                                                                           *
//    P R I N T                                                              *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) printDocument: (id) sender {
  OC_GGS_TextDisplayDescriptor * selectedObject = [mSourceDisplayArrayController.selectedObjects objectAtIndex:0 HERE] ;
  [selectedObject.textView print:sender] ;
}

//---------------------------------------------------------------------------*

#pragma mark XML Issue Analysis

//---------------------------------------------------------------------------*

- (void) XMLIssueAnalysis {
  NSError * error = nil ;
  NSXMLDocument * xmlDoc = [[NSXMLDocument alloc]
    initWithData:mBufferedInputData
    options:0
    error:& error
  ] ;
  NSArray * issues = nil ;
  if (nil == error) {
    issues = xmlDoc.rootElement.children ;
  }
  NSMutableArray * issueArray = [NSMutableArray new] ;
  for (NSXMLNode * node in issues) {
    if (nil == node.name) {
      NSString * message = [node stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithMessage:message] ;
      [issueArray addObject:issue] ;
    }else if ([@"message" isEqualToString:node.name]) {
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithMessage:message] ;
      [issueArray addObject:issue] ;
    }else if ([@"fileOperation" isEqualToString:node.name]) {
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithFileOperation:message] ;
      [issueArray addObject:issue] ;
    }else if ([@"error" isEqualToString:node.name]) {
      NSArray * a = [node nodesForXPath:@"./@file" error:nil] ;
      NSString * file = (a.count == 1) ? [[a objectAtIndex:0 HERE] stringValue] : @"" ;
      a = [node nodesForXPath:@"./@line" error:nil] ;
      NSInteger line = (a.count == 1) ? [[[a objectAtIndex:0 HERE] stringValue] integerValue] : 0 ;
      a = [node nodesForXPath:@"./@column" error:nil] ;
      NSInteger column = (a.count == 1) ? [[[a objectAtIndex:0 HERE] stringValue] integerValue] : 0 ;
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc]
        initWithErrorMessage:message
        file:file
        line:line
        column:column
      ] ;
      [issueArray addObject:issue] ;
    }else if ([@"warning" isEqualToString:node.name]) {
      NSString * file = [[[node nodesForXPath:@"./@file" error:nil] objectAtIndex:0 HERE] stringValue] ;
      NSInteger line = [[[[node nodesForXPath:@"./@line" error:nil] objectAtIndex:0 HERE] stringValue] integerValue] ;
      NSInteger column = [[[[node nodesForXPath:@"./@column" error:nil] objectAtIndex:0 HERE] stringValue] integerValue] ;
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc]
        initWithWarningMessage:message
        file:file
        line:line
        column:column
      ] ;
      [issueArray addObject:issue] ;
    }
  }
  [mIssueArrayController setContent:issueArray] ;
  if (nil != error) {
    [mWindow presentError:error] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Build

//---------------------------------------------------------------------------*
//                                                                           *
//    C O M P I L E                                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) terminateTask {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <terminateTask>") ;
  #endif
  if (mTask != nil) {
    NSTask * task = mTask ;
    mTask = nil ;
    [task terminate] ;
    [task waitUntilExit] ;
    NSNotificationCenter * center = [NSNotificationCenter defaultCenter] ;
    [center removeObserver:self name:NSFileHandleReadCompletionNotification object: [[task standardOutput] fileHandleForReading]] ;
    [center removeObserver:self name:NSTaskDidTerminateNotification object:task] ;
    const int status = [task terminationStatus];
    if (status != 0) {
//      [self appendMessage: [NSString stringWithFormat: @"Build task has exited with status %d\n", status]] ;
    }
  //--- Translate input data into text
    NSString * issueText = [[NSString alloc]
      initWithData:mBufferedInputData
      encoding:NSUTF8StringEncoding
    ] ;
    [mIssueTextView setString:issueText] ;
  //--- Analyze XML document
    [self XMLIssueAnalysis] ;
  //---
    [mBuildProgressIndicator stopAnimation:nil] ;
    [mBuildProgressIndicator setHidden:YES] ;
    [mStopBuildButton setEnabled:NO] ;
    [mStartBuildButton setHidden:NO] ;
  }
}

//---------------------------------------------------------------------------*

- (void) getDataFromTaskOutput: (NSNotification *) inNotification {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSData * d = [[inNotification userInfo] objectForKey:NSFileHandleNotificationDataItem];
  if ([d length] > 0) {
    [mBufferedInputData appendData:d] ;
    [[inNotification object] readInBackgroundAndNotify] ;
  }else{
    [self terminateTask] ;
    [NSApp requestUserAttention:NSInformationalRequest] ;
  }
}

//---------------------------------------------------------------------------*

- (IBAction) stopBuild: (id) sender {
  if (mTask != nil) {
    [self terminateTask] ;
  }
}

//---------------------------------------------------------------------------*

- (BOOL) canTerminateApplication {
  return mTask == nil ;
}

//---------------------------------------------------------------------------*

- (IBAction) actionBuild: (id) inUnusedSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <actionBuild:>") ;
  #endif
  if (mTask == nil) {
    [[NSDocumentController sharedDocumentController] saveAllDocuments:self] ;
    [mBuildProgressIndicator startAnimation:nil] ;
    [mBuildProgressIndicator setHidden:NO] ;
    [mStopBuildButton setEnabled:YES] ;
    [mStartBuildButton setHidden:YES] ;
    [self displayIssueDetailedMessage:nil] ;
    [mIssueTextView setString:@"Compiling…"] ;
    mBufferedInputData = [NSMutableData new] ;
    [mIssueArrayController setContent:[NSArray array]] ;
    NSArray * commandLineArray = [gCocoaGalgasPreferencesController commandLineItemArray] ;
  //--- Command line tool does actually exist ? (First argument is not "?")
    if ([[commandLineArray objectAtIndex:0 HERE] isEqualToString:@"?"]) {
      NSAlert * alert = [NSAlert alertWithMessageText:@"Error: cannot compile"
        defaultButton: nil
        alternateButton: nil
        otherButton: nil
        informativeTextWithFormat:@"Compilation must be performed by an embedded Command line Tool; no command line Tool are currently embedded by application."
      ] ;
      [alert
        beginSheetModalForWindow:mWindow
        modalDelegate:nil
        didEndSelector:0
        contextInfo:NULL
      ] ;
    }else{
      #ifdef DEBUG_MESSAGES
      NSLog (@"OC_GGS_Document <actionBuild:> launch") ;
      #endif
      NSMutableArray * arguments = [NSMutableArray new] ;
      [arguments addObjectsFromArray:[commandLineArray subarrayWithRange:NSMakeRange (1, [commandLineArray count]-1)]] ;
      [arguments addObject:mDocument.sourceTextWithSyntaxColoring.sourcePath] ;
   //--- Create task
      mTask = [NSTask new] ;
      [mTask setLaunchPath:[commandLineArray objectAtIndex:0 HERE]] ;
      [mTask setArguments:arguments] ;
      // NSLog (@"'%@' %@", [mTask launchPath], arguments) ;
    //--- Set standard output notification
      NSPipe * taskOutput = [NSPipe pipe] ;
      [mTask setStandardOutput:taskOutput] ;
      [mTask setStandardError:taskOutput] ;
      [[NSNotificationCenter defaultCenter]
        addObserver:self
        selector:@selector (getDataFromTaskOutput:)
        name:NSFileHandleReadCompletionNotification
        object:[taskOutput fileHandleForReading]
      ] ;
      [[taskOutput fileHandleForReading] readInBackgroundAndNotify] ;
    //--- Start task
      [mTask launch] ;
    }
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <actionBuild:> DONE ----------") ;
  #endif
}

//---------------------------------------------------------------------------*

- (void) triggerDocumentEditedStatusUpdate {
  BOOL isEdited = NO ;
  NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
  for (NSUInteger i=0 ; (i<sourceDisplayArray.count) && ! isEdited ; i++) {
    OC_GGS_TextDisplayDescriptor * textDisplay = [sourceDisplayArray objectAtIndex:i HERE] ;
    OC_GGS_TextSyntaxColoring * textSyntaxColoring = textDisplay.textSyntaxColoring ;
    NSUndoManager * undoManager = textSyntaxColoring.undoManager ;
    isEdited = undoManager.canUndo ;
  }
  [mWindow setDocumentEdited:isEdited] ;
}

//---------------------------------------------------------------------------*

#pragma mark Click on issue table view

//---------------------------------------------------------------------------*

- (void) clicOnIssueTableView: (id) inSender {
  const NSInteger clickedRow = mIssueTableView.clickedRow ;
  NSArray * arrangedObjects = mIssueArrayController.arrangedObjects ;
  if ((clickedRow >= 0) && (clickedRow < (NSInteger) arrangedObjects.count)) {
    PMIssueDescriptor * issue = [arrangedObjects objectAtIndex:clickedRow HERE] ;
    NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
    OC_GGS_TextDisplayDescriptor * textDisplay = [sourceDisplayArray objectAtIndex:mSourceDisplayArrayController.selectionIndex HERE] ;
    [textDisplay makeVisibleIssue:issue] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Entry Pop up

//---------------------------------------------------------------------------*

- (void) populatePopUpButton {
  NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
  OC_GGS_TextDisplayDescriptor * textDisplay = [sourceDisplayArray objectAtIndex:mSourceDisplayArrayController.selectionIndex HERE] ;
  NSMenu * menu = [textDisplay menuForEntryPopUpButton] ;
  const NSUInteger n = [menu numberOfItems] ;
  if (n == 0) {
    [menu
      addItemWithTitle:@"No entry"
      action:NULL
      keyEquivalent:@""
    ] ;
    [mEntryListPopUpButton setEnabled:NO] ;
  }else{
    for (NSUInteger i=0 ; i<n ; i++) {
      NSMenuItem * item = [menu itemAtIndex:i] ;
      [item setTarget:self] ;
      [item setAction:@selector (gotoEntry:)] ;
    }
    [mEntryListPopUpButton setEnabled:YES] ;
  }
  [mEntryListPopUpButton setMenu:menu] ;
  //NSLog (@"mEntryListPopUpButton %@", mEntryListPopUpButton) ;
}

//---------------------------------------------------------------------------*

- (void) gotoEntry: (id) inSender {
  const NSRange range = {[inSender tag], 0} ;
  NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
  OC_GGS_TextDisplayDescriptor * textDisplay = [sourceDisplayArray objectAtIndex:mSourceDisplayArrayController.selectionIndex HERE] ;
  NSTextView * textView = textDisplay.textView ;
  [textView setSelectedRange:range] ;
  [textView scrollRangeToVisible:range] ;
}

//---------------------------------------------------------------------------*

- (void) selectEntryPopUp {
  NSArray * sourceDisplayArray = mSourceDisplayArrayController.arrangedObjects ;
  OC_GGS_TextDisplayDescriptor * textDisplay = [sourceDisplayArray objectAtIndex:mSourceDisplayArrayController.selectionIndex HERE] ;
  const NSUInteger selectionStart = textDisplay.textSelectionStart ;
  NSArray * menuItemArray = [mEntryListPopUpButton itemArray] ;
  if ([mEntryListPopUpButton isEnabled]) {
    NSInteger idx = NSNotFound ;
    NSInteger i ;
    const NSInteger n = [menuItemArray count] ;
    for (i=n-1 ; (i>=0) && (idx == NSNotFound) ; i--) {
      NSMenuItem * item = [menuItemArray objectAtIndex:i HERE] ;
      const NSUInteger startPoint = [item tag] ;
      if (selectionStart >= startPoint) {
        idx = i ;
      }
    }
    if (idx == NSNotFound) {
      [mEntryListPopUpButton selectItemAtIndex:0] ;
    }else{
      [mEntryListPopUpButton selectItemAtIndex:idx] ;
    }
  }
}

//---------------------------------------------------------------------------*

#pragma mark observeValueForKeyPath

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject: (id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if ([inKeyPath isEqualToString:@"selectionIndex"]) {
    for (NSView * subview in mSourceHostView.subviews.copy) {
      [subview removeFromSuperview] ;
    }
    NSArray * arrangedObjects = mSourceDisplayArrayController.arrangedObjects ;
    const NSUInteger sel = mSourceDisplayArrayController.selectionIndex ;
    OC_GGS_TextDisplayDescriptor * object = [arrangedObjects objectAtIndex:sel HERE] ;
    object.scrollView.frame = mSourceHostView.bounds ;
    // NSLog (@"object.scrollView %d", object.scrollView.autoresizesSubviews) ;
    [mSourceHostView addSubview:object.scrollView] ;
    [mSourceHostView.window makeFirstResponder:object.textView] ;
  }else if ([inKeyPath isEqualToString:@"selection.textSelectionStart"]) {
    [self selectEntryPopUp] ;
  }else if ([inKeyPath isEqualToString:@"selection.mTextSyntaxColoring.mTokenizer.menuForEntryPopUpButton"]) {
    [self populatePopUpButton] ;
  }
}

//---------------------------------------------------------------------------*

- (void) displayIssueDetailedMessage: (NSString *) inDetailledMessage {
  NSTextStorage * textStorage = mDetailedIssueTextView.textStorage ;
  if (nil == inDetailledMessage) {
    [textStorage beginEditing] ;
    [textStorage replaceCharactersInRange:NSMakeRange (0, [textStorage length]) withString:@""] ;
    [textStorage endEditing] ;
    [mDetailedIssueSplitView
      setPosition:mDetailedIssueSplitView.bounds.size.height
      ofDividerAtIndex:0
    ] ;
  }else{
    [textStorage beginEditing] ;
    [textStorage replaceCharactersInRange:NSMakeRange (0, [textStorage length]) withString:inDetailledMessage] ;
    [mDetailedIssueTextView setFont:[NSFont fontWithName:@"Courier" size:13.0]] ;
    [textStorage endEditing] ;
    const NSRect r = [mDetailedIssueTextView.layoutManager lineFragmentUsedRectForGlyphAtIndex:inDetailledMessage.length - 1 effectiveRange:NULL] ;
   // NSLog (@"r %g %g %g %g", r.origin.x, r.origin.y, r.size.width, r.size.height) ;
    // NSLog (@"mDetailedIssueTextView.textContainerInset.height %g", mDetailedIssueTextView.textContainerInset.height) ;
    [mDetailedIssueSplitView
      setPosition:mDetailedIssueSplitView.bounds.size.height - mDetailedIssueSplitView.dividerThickness - NSMaxY (r) - 8.0
      ofDividerAtIndex:0
    ] ;
  }
}

//---------------------------------------------------------------------------*

@end
