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

#import "OC_GGS_Document.h"
#import "OC_GGS_PreferencesController.h"
#import "OC_GGS_RulerViewForTextView.h"
#import "OC_GGS_TextView.h"
#import "OC_Lexique.h"
#import "OC_GGS_DelegateForSyntaxColoring.h"
#import "F_CocoaWrapperForGalgas.h"
#import "PMCocoaCallsDebug.h"
#import "OC_GGS_ErrorOrWarningDescriptor.h"
#import "PMIssueDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_TextDisplayDescriptor.h"

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

#define MAIN_WINDOW_TOOLBAR  @"GALGAS_MAIN_WINDOW_TOOLBAR"
#define BUILD_WINDOW_TOOLBAR @"GALGAS_BUILD_WINDOW_TOOLBAR"

//---------------------------------------------------------------------------*

@implementation OC_GGS_Document

//---------------------------------------------------------------------------*
//                                                                           *
//       I N I T                                                             *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) init {
  self = [super init];
  if (self) {
    #ifdef DEBUG_MESSAGES
      NSLog (@"OC_GGS_Document <init>") ;
    #endif
    mTask = nil ;
    mIssueArrayController = [NSArrayController new] ;
    mIssueArray = [NSMutableArray new] ;
    mFileEncoding = NSUTF8StringEncoding ;
    mSourceDisplayArray = [NSMutableArray new] ; // Array of OC_GGS_TextDisplayDescriptor
    mSourceDisplayArrayController = [NSArrayController new] ;
  }
  return self;
}

//---------------------------------------------------------------------------*

- (OC_GGS_DelegateForSyntaxColoring *) delegateForSyntaxColoring {
  return mDelegateForSyntaxColoring ;
}

//---------------------------------------------------------------------------*

- (OC_Lexique *) tokenizer {
  return mTokenizer ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       A D D    H O R I Z O N T A L    S C R O L L B A R                   *
//              T O    T E X T    V I E W                                    *
//                                                                           *
//---------------------------------------------------------------------------*

static void addHorizontalScrollBarToTextView (NSScrollView * inScrollView) {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <addHorizontalScrollBarToTextView>") ;
  #endif
  NSTextView * textView = [inScrollView documentView] ;
  const float LargeNumberForText = 1.0e7f ;
  NSTextContainer * textContainer = [[[textView layoutManager] textContainers] objectAtIndex: 0 HERE] ;
  [inScrollView setHasHorizontalScroller:YES] ;
  [textContainer setWidthTracksTextView:YES] ;
  [inScrollView setAutoresizingMask: (NSViewWidthSizable | NSViewHeightSizable)] ;
  [[inScrollView contentView] setAutoresizesSubviews:YES];
  [textContainer setContainerSize: NSMakeSize (LargeNumberForText, LargeNumberForText)] ;
  [textContainer setWidthTracksTextView: NO] ;
  [textView setMaxSize: NSMakeSize (LargeNumberForText, LargeNumberForText)] ;
  [textView setHorizontallyResizable: YES];
  [textView setAutoresizingMask: NSViewNotSizable] ;
  [inScrollView setHasHorizontalScroller:YES] ;
}

//---------------------------------------------------------------------------*

#pragma mark Pop up Button for entries

//---------------------------------------------------------------------------*

- (void) setMenuForPopUpButton {
  NSMenu * menu = [mTokenizer menuForEntryPopUpButton] ;
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
}

//---------------------------------------------------------------------------*

- (void) setBindingsForEntryPopUpButton {
  [mTokenizer
    addObserver:self
    forKeyPath:@"menuForEntryPopUpButton"
    options:0
    context:NULL
  ] ;
  [self setMenuForPopUpButton] ;
}

//---------------------------------------------------------------------------*

- (void) selectEntryPopUpForSelectionStart: (NSInteger) inSelectionStart {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <selectEntryPopUpForSelectionStart:%d> POPUP ENABLED:%@", inSelectionStart, [mEntryListPopUpButton isEnabled] ? @"YES" : @"NO") ;
  #endif
  NSArray * menuItemArray = [mEntryListPopUpButton itemArray] ;
  if ([mEntryListPopUpButton isEnabled]) {
    NSInteger idx = NSNotFound ;
    NSInteger i ;
    const NSInteger n = [menuItemArray count] ;
    for (i=n-1 ; (i>=0) && (idx == NSNotFound) ; i--) {
      NSMenuItem * item = [menuItemArray objectAtIndex:i HERE] ;
      const NSInteger startPoint = [item tag] ;
      if (inSelectionStart >= startPoint) {
        idx = i ;
      }
    }
    if (idx == NSNotFound) {
      [mEntryListPopUpButton selectItemAtIndex:0] ;
    }else{
      [mEntryListPopUpButton selectItemAtIndex:idx] ;
    }
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <selectEntryPopUpForSelectionStart:> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*

- (void) gotoEntry: (id) inSender {
  const NSRange range = {[inSender tag], 0} ;
  [mTextView setSelectedRange:range] ;
  [mTextView scrollRangeToVisible:range] ;
}

//---------------------------------------------------------------------------*

#pragma mark Text Colors, Fonts, Ruler 

//---------------------------------------------------------------------------*
//                                                                           *
//       C H A N G E    T E X T    R U L E R    V I S I B I L I T Y          *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) changeTextRulerVisible: (BOOL) inVisible forRuleThickness: (CGFloat) inThickness {
  #ifdef DEBUG_MESSAGES
    NSLog (@"changeTextRulerVisible") ;
  #endif
  [mTextScrollView setRulersVisible:inVisible] ;
  NSRulerView * verticalRulerView = [mTextScrollView verticalRulerView] ;
  [verticalRulerView setRuleThickness:inThickness] ;
}

//---------------------------------------------------------------------------*

#pragma mark Build message text view

//---------------------------------------------------------------------------*

- (NSFont *) currentBuildTextViewFont {
  NSData * d = [[NSUserDefaults standardUserDefaults] objectForKey:GGS_build_text_font] ;
  return [NSUnarchiver unarchiveObjectWithData:d] ;
}

//---------------------------------------------------------------------------*

- (void) appendMessage: (NSString *) inMessage {
}

//---------------------------------------------------------------------------*

- (void) appendError: (NSString *) inMessage {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <appendError:> with '%@'", inMessage) ;
  #endif
  [self appendMessage:@"\n"] ;
}

//---------------------------------------------------------------------------*

- (void) appendWarning: (NSString *) inMessage {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <appendWarning:> with '%@'", inMessage) ;
  #endif
  [self appendMessage:@"\n"] ;
}

//---------------------------------------------------------------------------*

#pragma mark Nib relative Actions

//---------------------------------------------------------------------------*
//                                                                           *
//       W I N D O W    N I B    N A M E                                     *
//                                                                           *
//---------------------------------------------------------------------------*

- (NSString *) windowNibName {
  return @"OC_GGS_Document" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       W I N D O W    C O N T R O L L E R    D I D    L O A D    N I B     *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) windowControllerDidLoadNib: (NSWindowController *) inWindowController {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <windowControllerDidLoadNib:>") ;
  #endif
  [super windowControllerDidLoadNib: inWindowController];
//--- Tell to window controller that closing the source text window closes the document
  [inWindowController setShouldCloseDocument: YES] ;

  NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults] ;

//--- 
  [mTextView setCurrentLineButton:mCurrentLineButton] ;

//--- For lower text view, use text storage of upper text view
  [mTextView setGalgasDocument:self] ;

//--- Bindings
  [mIssueTextView
    bind:@"font"
    toObject:[NSUserDefaultsController sharedUserDefaultsController]
    withKeyPath:[NSString stringWithFormat:@"values.%@", GGS_build_text_font]
    options:[NSDictionary dictionaryWithObject:NSUnarchiveFromDataTransformerName forKey:NSValueTransformerNameBindingOption]
  ] ;

//--- Bindings
  [mIssueArrayController
    bind:@"contentArray"
    toObject:self
    withKeyPath:@"mIssueArray"
    options:nil
  ] ;
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

//--- Setting a horizontal scrollbar to text views
  addHorizontalScrollBarToTextView (mTextScrollView) ;

//--- The text views do not use font panel
  [mTextView setUsesFontPanel: NO] ;

//--- Rule thickness
  const float ruleThickness = [gCocoaGalgasPreferencesController ruleThickness] ;

//--- Define vertical ruler for text view in main window
  [mTextScrollView setHasVerticalRuler: YES];

  //[NSScrollView setRulerViewClass:[OC_GGS_RulerViewForTextView class]] ;
  OC_GGS_RulerViewForTextView * ruler = [[OC_GGS_RulerViewForTextView alloc] init] ;
  [mTextScrollView setVerticalRulerView:ruler] ;
  [ruler setRuleThickness:ruleThickness] ;
  [mTextScrollView setRulersVisible:[defaults boolForKey:GGS_show_ruler]] ;

//--- NO continuous spell checking (IB fails to set this)
  [mTextView setContinuousSpellCheckingEnabled: NO] ;

  [mTextView scrollToSelectionDefinedInUserDefaults:[self lastComponentOfFileName]] ;

//--- Set up windows location
  NSString * windowTitle = [self lastComponentOfFileName] ;
  NSString * key = [NSString stringWithFormat: @"frame_for_source:%@", windowTitle] ;
  [[self windowForSheet] setFrameFromString: [defaults objectForKey: key]] ;

//--- Add toolbars
  NSToolbar * tb = [[NSToolbar alloc] initWithIdentifier:MAIN_WINDOW_TOOLBAR] ;
  [tb setAllowsUserCustomization:YES] ;
  [tb setAutosavesConfiguration:YES] ;
  [tb setDelegate:self] ;
  [[self windowForSheet] setToolbar:tb] ;
  tb = [[NSToolbar alloc] initWithIdentifier:BUILD_WINDOW_TOOLBAR] ;
  [tb setAllowsUserCustomization:YES] ;
  [tb setAutosavesConfiguration:YES] ;
  [tb setDelegate:self] ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <windowControllerDidLoadNib:> DONE") ;
  #endif

//--- Add Split view binding
// Note : use [self lastComponentOfFileName] instead of [window title], because window title may not set at this point
  NSString * keyPath = [NSString stringWithFormat:@"values.issue-split-fraction:%@", [self lastComponentOfFileName]] ;
  [mIssueSplitView setAutosaveName:keyPath] ;

//--- Entry PopUp Button
  [self setBindingsForEntryPopUpButton] ;

//--- Source file encoding
  [mSourceEncodingTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"fileEncodingString"
    options:nil    
  ] ;

  [mSourceTextView
    bind:@"attributedString" 
    toObject:mSourceDisplayArrayController
    withKeyPath:@"selection.mTextSyntaxColoring.mSourceString"
    options:nil
  ] ;
//--- Display the document contents
  OC_GGS_TextDisplayDescriptor * textDisplayDescriptor = [[OC_GGS_TextDisplayDescriptor alloc]
    initWithDelegateForSyntaxColoring:mSourceTextWithSyntaxColoring
  ] ;
  [mSourceDisplayArrayController addObject:textDisplayDescriptor] ;
  [mSourceDisplayArrayController setSelectedObjects:[NSArray arrayWithObject:textDisplayDescriptor]] ;
}

//---------------------------------------------------------------------------*

- (void) removeWindowController:(NSWindowController *) inWindowController {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <removeWindowController:>") ;
  #endif
  if ([inWindowController shouldCloseDocument]) {
    //NSLog (@"removeWindowController") ;
    [gCocoaGalgasPreferencesController cocoaDocumentWillClose:self] ;
  }
  [mIssueTextView unbind:@"fontName"] ;
  [super removeWindowController:inWindowController] ;
}

//---------------------------------------------------------------------------*

#pragma mark Toolbar

//---------------------------------------------------------------------------*
//                                                                           *
//       T O O L B A R                                                       *
//                                                                           *
//---------------------------------------------------------------------------*

- (NSArray *) toolbarAllowedItemIdentifiers: (NSToolbar *) inToolbar {
  NSArray * itemArray = nil ;
  if ([[inToolbar identifier] isEqualToString:MAIN_WINDOW_TOOLBAR]) {
    itemArray = [NSArray arrayWithObjects:
      NSToolbarSeparatorItemIdentifier,
      NSToolbarFlexibleSpaceItemIdentifier,
      NSToolbarSpaceItemIdentifier,
      NSToolbarPrintItemIdentifier,
      @"build_button",
      @"stop_build_button",
      @"show_build_window_button",
      @"goto_button",
      nil] ;
  }else if ([[inToolbar identifier] isEqualToString:BUILD_WINDOW_TOOLBAR]) {
    itemArray = [NSArray arrayWithObjects:
      NSToolbarSeparatorItemIdentifier,
      NSToolbarFlexibleSpaceItemIdentifier,
      NSToolbarSpaceItemIdentifier,
      NSToolbarPrintItemIdentifier,
      @"stop_build_button",
      @"saveas_button",
      @"goto_endoftext_button",
      nil] ;
  }
  return itemArray ;
}

//--------------------------------------------------------------------------*

- (NSArray *) toolbarDefaultItemIdentifiers: (NSToolbar *) inToolbar {
  NSArray * itemArray = nil ;
  if ([[inToolbar identifier] isEqualToString:MAIN_WINDOW_TOOLBAR]) {
    itemArray = [NSArray arrayWithObjects:
      @"build_button",
      @"stop_build_button",
      NSToolbarSeparatorItemIdentifier,
      @"goto_button",
      NSToolbarSpaceItemIdentifier,
      nil] ;
  }
  return itemArray ;
}

//--------------------------------------------------------------------------*

- (NSToolbarItem *) toolbar:(NSToolbar *)toolbar
                    itemForItemIdentifier:(NSString *) inItemIdentifier
                    willBeInsertedIntoToolbar:(BOOL) inFlag {
  NSToolbarItem * tbi = nil ;
  if ([inItemIdentifier isEqualToString:@"build_button"]) {
    tbi = [[[NSToolbarItem alloc] initWithItemIdentifier:inItemIdentifier] autorelease] ;
    [tbi setLabel:@"Build"] ;
    [tbi setPaletteLabel:@"Build"] ;
    [tbi setToolTip:@""] ;
    [tbi setImage:[NSImage imageNamed:@"I_Action"]] ;
    [tbi setTarget:self] ;
    [tbi setAction:@selector (actionBuild:)] ;
  }else if ([inItemIdentifier isEqualToString:@"saveas_button"]) {
    tbi = [[[NSToolbarItem alloc] initWithItemIdentifier:inItemIdentifier] autorelease] ;
    [tbi setLabel:@"Save Text As..."] ;
    [tbi setPaletteLabel:@"Save Text As..."] ;
    [tbi setToolTip:@""] ;
    [tbi setImage:[NSImage imageNamed:@"I_SaveAs"]] ;
    [tbi setTarget:self] ;
    [tbi setAction:@selector (saveBuildWindowTextInFile:)] ;
  }else if ([inItemIdentifier isEqualToString:@"stop_build_button"]) {
    tbi = [[[NSToolbarItem alloc] initWithItemIdentifier:inItemIdentifier] autorelease] ;
    [tbi setLabel:@"Stop Build"] ;
    [tbi setPaletteLabel:@"Stop Build"] ;
    [tbi setToolTip:@""] ;
    [tbi setImage:[NSImage imageNamed:@"I_Stop"]] ;
    [tbi setTarget:self] ;
    [tbi setAction:@selector (stopBuild:)] ;
  }else if ([inItemIdentifier isEqualToString:@"goto_button"]) {
    tbi = [[[NSToolbarItem alloc] initWithItemIdentifier:inItemIdentifier] autorelease] ;
    [tbi setLabel:@"Goto Line"] ;
    [tbi setPaletteLabel:@"Goto Line"] ;
    [tbi setToolTip:@""] ;
    [tbi setView:mCurrentLineButton] ;
    [tbi setMinSize:[mCurrentLineButton bounds].size] ;
    [tbi setMaxSize:[mCurrentLineButton bounds].size] ;
    [tbi setEnabled:YES] ;
    [tbi setTarget:nil] ;
    [tbi setAction:@selector (actionGotoLine:)] ;
  }
  return tbi ;
}

//--------------------------------------------------------------------------*

-(BOOL) validateToolbarItem: (NSToolbarItem*) inToolbarItem {
  BOOL validate = NO ;
  if ([[inToolbarItem itemIdentifier] isEqualToString:@"build_button"]) {
    validate = mTask == nil ;
  }else if ([[inToolbarItem itemIdentifier] isEqualToString:@"stop_build_button"]) {
    validate = mTask != nil ;
  }else if ([[inToolbarItem itemIdentifier] isEqualToString:@"saveas_button"]) {
    validate = YES ;
  }else if ([[inToolbarItem itemIdentifier] isEqualToString:@"goto_endoftext_button"]) {
    validate = YES ;
  }
  return validate ;
}

//---------------------------------------------------------------------------*

#pragma mark Document Actions

//---------------------------------------------------------------------------*
//                                                                           *
//    P R I N T                                                              *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) printDocument: (id) sender {
  [mTextView print:sender] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       D O C U M E N T    W I N D O W    D I D    M O V E                  *
//                     N O T I F I C A T I O N                               *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) windowDidMove: (NSNotification *) aNotification {
  NSString * windowTitle = [self lastComponentOfFileName] ;
  NSWindow * docWindow = [aNotification object] ;
  NSString * s = [docWindow stringWithSavedFrame] ;
  NSString * key = [NSString stringWithFormat: @"frame_for_source:%@", windowTitle] ;
  [[NSUserDefaults standardUserDefaults] setObject: s forKey: key] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       D O C U M E N T    W I N D O W    D I D    R E S I Z E              *
//                     N O T I F I C A T I O N                               *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) windowDidResize: (NSNotification *) aNotification {
  [self windowDidMove: aNotification] ; 
}

//---------------------------------------------------------------------------*

- (void) editedFilePath:(NSString *) inDocPath
         editedRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength {
/*  for (OC_GGS_ErrorOrWarningDescriptor * issue in mWarningArray) {
    [issue
      editedFilePath:inDocPath
      editedRange:inEditedRange
      changeInLength:inChangeInLength
    ] ;  
  }
  for (OC_GGS_ErrorOrWarningDescriptor * issue in mErrorArray) {
    [issue
      editedFilePath:inDocPath
      editedRange:inEditedRange
      changeInLength:inChangeInLength
    ] ;  
  }*/
}

//---------------------------------------------------------------------------*

#pragma mark Tracking File Document changes

//---------------------------------------------------------------------------*

- (NSDate *) sourceFileModificationDateInFileSystem {
  NSURL * fileURL = [self fileURL] ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <sourceFileModificationDateInFileSystem> for file URL '%@'", [self fileURL]) ;
  #endif
  NSDate * date = [NSDate date] ;
  if ([fileURL isFileURL]) {
    NSDictionary * fileAttributes = [[[NSFileManager alloc] init] attributesOfItemAtPath:[fileURL path] error:NULL] ;
    date = [fileAttributes objectForKey:NSFileModificationDate] ;
  }
  return date ;
}

//---------------------------------------------------------------------------*

- (void) updateFromFileSystem: (id) inUnusedArgument {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <updateFromFileSystem>") ;
  #endif
  [NSApp
    beginSheet:mUpdateFromFileSystemPanel
    modalForWindow:[self windowForSheet]
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
//--- Save current selections
  const NSRange currentSelection = [mTextView selectedRange] ;
//--- Read new content
  NSString * source = [[NSString alloc]
    initWithContentsOfURL:[self fileURL]
    encoding:NSUTF8StringEncoding
    error:nil
  ] ;
  if (source != nil) {
    [mDelegateForSyntaxColoring setSourceString:source] ;
  }
//--- 
  [mTextView setSelectedRange:currentSelection] ;
  [mTextView scrollRangeToVisible:currentSelection] ;
//---
  [mUpdateFromFileSystemPanel orderOut:self] ;
  [NSApp endSheet:mUpdateFromFileSystemPanel] ;   
}

//---------------------------------------------------------------------------*

- (void) askForUpdatingFromFileSystem {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <askForUpdatingFromFileSystem>") ;
  #endif
//--- Get application name
  NSDictionary * bundleDictionary = [[NSBundle mainBundle] localizedInfoDictionary] ;
  NSString * applicationName = [bundleDictionary objectForKey: @"CFBundleName"] ;
//--- Build Alert
  NSString * message = [NSString stringWithFormat:
     @"This file for document at %@ has been modified by an other application."
     " Do you want to keep the %@ version or update from file contents ?",
     self.fileURL.path,
     applicationName
  ] ;
  NSAlert *alert = [NSAlert
    alertWithMessageText:@"Warning"
    defaultButton:[NSString stringWithFormat:@"Keep %@ Version", applicationName]
    alternateButton:@"Update From File Contents"
    otherButton:nil
    informativeTextWithFormat:message
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
    NSLog (@"OC_GGS_Document <askForUpdatingFromFileSystemAlertEnding:returnCode:contextInfo:>") ;
  #endif
//  NSLog (@"returnCode %d", returnCode) ;
  if (returnCode == NSAlertAlternateReturn) { // Revert button
    [[NSRunLoop currentRunLoop]
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
    NSLog (@"OC_GGS_Document <windowDidBecomeKey>") ;
  #endif
  if (self.fileURL.path.length > 0) {
    NSDate * modificationDateOnFileSystem = [self sourceFileModificationDateInFileSystem] ;
    if ([modificationDateOnFileSystem compare:[self fileModificationDate]] != NSOrderedSame) {
      [self askForUpdatingFromFileSystem] ;
    }
  }
}


//---------------------------------------------------------------------------*

#pragma mark Document Save

//---------------------------------------------------------------------------*
//                                                                           *
//    W R I T E    T O    F I L E                                            *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) writeToURL: (NSURL *) inAbsoluteURL
         ofType: (NSString *) inTypeName
         error: (NSError **) outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <writeToURL:ofType:error:>") ;
  #endif
  [mDelegateForSyntaxColoring breakUndoCoalescing] ;
  NSString * string = [mDelegateForSyntaxColoring sourceString] ;
  return [string
    writeToURL:inAbsoluteURL
    atomically:YES
    encoding:NSUTF8StringEncoding
    error:outError
  ] ;
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
    NSLog (@"OC_GGS_Document <fileAttributesToWriteToFile:>") ;
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
      NSInteger i, count = [documentTypes count];
      
      for(i = 0; i < count; i++)
      {
          NSString *type = [[documentTypes objectAtIndex:i HERE]
              objectForKey:@"CFBundleTypeName"];
          if(type && [type isEqualToString:documentTypeName])
          {
              NSArray *typeCodeStrings = [[documentTypes objectAtIndex:i HERE]
                  objectForKey:@"CFBundleTypeOSTypes"];
              if(typeCodeStrings)
              {
                 NSString *firstTypeCodeString = [typeCodeStrings
                      objectAtIndex:0 HERE];
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

#pragma mark Document Close

//---------------------------------------------------------------------------*
//                                                                           *
//       D I S P L A Y    A     S H E E T    B E F O R E    C L O S I N G    *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) displaySheetBeforeClosing: (NSAlert *) inAlert {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <displaySheetBeforeClosing:>") ;
  #endif
  [inAlert
    beginSheetModalForWindow:[self windowForSheet]
    modalDelegate:self
    didEndSelector:@selector (closeDocumentOnAlertEnding:returnCode:contextInfo:)
    contextInfo:NULL
  ] ;
}

//---------------------------------------------------------------------------*

- (void) closeDocumentOnAlertEnding:(NSAlert *) inAlert
         returnCode:(int)returnCode
         contextInfo:(void *)contextInfo{
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <closeDocumentOnAlertEnding:>") ;
  #endif
  NSDocumentController * dc = [NSDocumentController sharedDocumentController] ;
  [dc removeDocument:self] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       D O C U M E N T    W I N D O W    D I D    R E S I Z E              *
//                     N O T I F I C A T I O N                               *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) shouldCloseDocument {
  return YES ;
} 

//---------------------------------------------------------------------------*

#pragma mark Document Encoding Display

//---------------------------------------------------------------------------*

- (NSString *) fileEncodingString {
  NSString * s = @"Lossy ASCII encoding" ;
  switch (mFileEncoding) {
  case NSASCIIStringEncoding : s = @"ASCII" ; break ;
  case NSNEXTSTEPStringEncoding : s = @"Next Step" ; break ;
  case NSJapaneseEUCStringEncoding : s = @"Japanese EUC" ; break ;
  case NSUTF8StringEncoding : s = @"UTF-8" ; break ;
  case NSISOLatin1StringEncoding : s = @"ISO Latin 1" ; break ;
  case NSSymbolStringEncoding : s = @"Symbol" ; break ;
  case NSNonLossyASCIIStringEncoding : s = @"Non Lossy ASCII" ; break ;
  case NSShiftJISStringEncoding : s = @"Shift JIS" ; break ;
  case NSISOLatin2StringEncoding : s = @"ISO Latin 2" ; break ;
  case NSUTF16StringEncoding : s = @"UTF-16" ; break ;
  case NSWindowsCP1251StringEncoding : s = @"Windows CP 1251" ; break ;
  case NSWindowsCP1252StringEncoding : s = @"Windows CP 1252" ; break ;
  case NSWindowsCP1253StringEncoding : s = @"Windows CP 1253" ; break ;
  case NSWindowsCP1254StringEncoding : s = @"Windows CP 1254" ; break ;
  case NSWindowsCP1250StringEncoding : s = @"Windows CP 1250" ; break ;
  case NSISO2022JPStringEncoding : s = @"ISO 2022" ; break ;
  case NSMacOSRomanStringEncoding : s = @"Mac OS Roman" ; break ;
  case NSUTF16BigEndianStringEncoding : s = @"UTF-16BE" ; break ;
  case NSUTF16LittleEndianStringEncoding : s = @"UTF_16LE" ; break ;
  case NSUTF32StringEncoding : s = @"UTF-32" ; break ;
  case NSUTF32BigEndianStringEncoding : s = @"UTF-32BE" ; break ;
  case NSUTF32LittleEndianStringEncoding : s = @"UTF-32LE" ; break ;
  default: break ;
  }
  return s ;
}


//---------------------------------------------------------------------------*

- (void) setSourceFileEncoding: (NSStringEncoding) inFileEncoding {
  [self willChangeValueForKey:@"fileEncodingString"] ;
  mFileEncoding = inFileEncoding ;
  [self didChangeValueForKey:@"fileEncodingString"] ;
}

//---------------------------------------------------------------------------*

#pragma mark Document Read

//---------------------------------------------------------------------------*

- (void) performCharacterConversion {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <performCharacterConversion>") ;
  #endif
//--- Get source string
  NSString * source = [mDelegateForSyntaxColoring sourceString] ;
//--- Search for "\r" ?
  BOOL needsConversionForCR = NO ;
  if ([[NSUserDefaults standardUserDefaults] boolForKey:@"PMConvert_CRLF_And_CR_To_LF_AtStartUp"]) {
    // NSLog (@"Convert CRLF and CR to LF") ;
    needsConversionForCR = [source rangeOfString:@"\r"].location != NSNotFound ;
  }
  BOOL needsConversionForHTAB = NO ;
  if ([[NSUserDefaults standardUserDefaults] boolForKey:@"PMConvert_HTAB_To_SPACE_AtStartUp"]) {
    // NSLog (@"Convert HTAB to SPACE") ;
    needsConversionForHTAB = [source rangeOfString:@"\x09"].location != NSNotFound ;
  }
  if (needsConversionForCR || needsConversionForHTAB) {
    NSMutableString * s = [NSMutableString new] ;
    if (needsConversionForCR) {
    //--- Convert CR LF to LF
      NSArray * a = [source componentsSeparatedByString:@"\r\n"] ;
      const NSUInteger CRLFcount = [a count] - 1 ;
      if (CRLFcount > 0) {
        source = [a componentsJoinedByString:@"\n"] ;
        if (CRLFcount == 1) {
          [s appendFormat:@"1 CRLF has been converted to LF."] ;
        }else if (CRLFcount > 1) {
          [s appendFormat:@"%u CRLF have been converted to LF.", CRLFcount] ;
        }
      }
    //--- Convert CR to LF
      a = [source componentsSeparatedByString:@"\r"] ;
      const NSUInteger CRcount = [a count] - 1 ;
      if (CRcount > 0) {
        source = [a componentsJoinedByString:@"\n"] ;
        if ([s length] > 0) {
          [s appendString:@"\n"] ;
        }
        if (CRcount == 1) {
          [s appendFormat:@"1 CR has been converted to LF."] ;
        }else if (CRcount > 1) {
          [s appendFormat:@"%u CR have been converted to LF.", CRcount] ;
        }
      }
    }
    if (needsConversionForHTAB) {
      NSArray * a = [source componentsSeparatedByString:@"\x09"] ;
      const NSUInteger HTABcount = [a count] - 1 ;
      if (HTABcount > 0) {
        source = [a componentsJoinedByString:@" "] ;
        if ([s length] > 0) {
          [s appendString:@"\n"] ;
        }
        if (HTABcount == 1) {
          [s appendFormat:@"1 HTAB has been converted to SPACE."] ;
        }else if (HTABcount > 1) {
          [s appendFormat:@"%u HTAB have been converted to SPACE.", HTABcount] ;
        }
      }
    }
  //--- Display sheet if conversion done
    if ([s length] > 0) {
      [mDelegateForSyntaxColoring setSourceString:source] ;
      NSAlert * alert = [NSAlert 
        alertWithMessageText:@"Source String Conversion"
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"%@", s
      ] ;
      [alert
        beginSheetModalForWindow:[self windowForSheet]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <decodeLoadedDataWithStringEncoding> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//    R E A D    F R O M    F I L E                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) readFromURL:(NSURL *) inAbsoluteURL
         ofType:(NSString *) inTypeName
         error:(NSError **)outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <readFromURL:'%@' ofType:>", inAbsoluteURL) ;
  #endif
//--- Try UTF8
  NSStringEncoding fileEncoding = mFileEncoding ;
  NSString * source = [[NSString alloc]
    initWithContentsOfURL:inAbsoluteURL
    encoding:fileEncoding
    error:outError
  ] ;
//--- If not UTF8, try any encoding
  if (source == nil) {
    NSLog (@"Try any encoding") ;
    if (nil != outError) {
      * outError = nil ;
    }
    source = [[NSString alloc]
      initWithContentsOfURL:inAbsoluteURL
      usedEncoding:& fileEncoding
      error:outError
    ] ;
  }
//--- If error, try lossy encoding
  if (source == nil) {
    NSLog (@"Try lossy encoding") ;
    if (nil != outError) {
      * outError = nil ;
    }
    NSData * data = [NSData dataWithContentsOfURL:inAbsoluteURL options:0 error:outError] ;
    if (nil != data) {
      const NSUInteger dataLength = [data length] ;
      const unsigned char * bytes = [data bytes] ;
      NSMutableString * s = [NSMutableString new] ;
      NSUInteger i ;
      for (i=0 ; i<dataLength ; i++) {
        const unsigned char c = bytes [i] ;
        if ((c == 0x0A) || (c == 0x0D) || (c == 0x09) || ((c >= ' ') && (c <= 0x7E))) {
          [s appendFormat:@"%c", c] ;
        }else{
          [s appendFormat:@"%C", 0xFFFD] ; // Replacement character
        }
      }
      source = [s copy] ;
    }
  }
  [self setSourceFileEncoding:fileEncoding] ;
  mTokenizer = tokenizerForExtension ([[inAbsoluteURL absoluteString] pathExtension]) ;
//--- Delegate for syntax coloring
  if (source != nil) {
    mDelegateForSyntaxColoring = [[OC_GGS_DelegateForSyntaxColoring alloc]
      initWithDocument:self
      withSourceString:source
      withTokenizer:mTokenizer
    ] ;
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (performCharacterConversion)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
//---
  mSourceTextWithSyntaxColoring = [[OC_GGS_TextSyntaxColoring alloc]
    initWithSourceString:source
  ] ;
//---
  return source != nil ;
}

//---------------------------------------------------------------------------*

#pragma mark Document Revert

//---------------------------------------------------------------------------*
//                                                                           *
//    R E A D    F R O M    F I L E                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) revertToContentsOfURL: (NSURL *) inFileURL
         ofType: (NSString *) inType
         error: (NSError **) outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Save current selection
  const NSRange currentSelection = [mTextView selectedRange] ;
//------------ Perform revert (calls loadDataRepresentation:ofType: for loading file)
  const BOOL revertDone = [super revertToContentsOfURL:inFileURL ofType:inType error:outError] ;
//--- 
  if (revertDone) {
    [self awakeFromNib] ;
    [mTextView setSelectedRange:currentSelection] ;
    [mTextView scrollRangeToVisible:currentSelection] ;
  }
//---
  return revertDone ;
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
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0] stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithMessage:message] ;
      [issueArray addObject:issue] ;
    }else if ([@"fileOperation" isEqualToString:node.name]) {
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0] stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithFileOperation:message] ;
      [issueArray addObject:issue] ;
    }else if ([@"error" isEqualToString:node.name]) {
      NSString * file = [[[node nodesForXPath:@"./@file" error:nil] objectAtIndex:0] stringValue] ;
      NSInteger line = [[[[node nodesForXPath:@"./@line" error:nil] objectAtIndex:0] stringValue] integerValue] ;
      NSInteger column = [[[[node nodesForXPath:@"./@column" error:nil] objectAtIndex:0] stringValue] integerValue] ;
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0] stringValue] ;
      PMIssueDescriptor * issue = [[PMIssueDescriptor alloc]
        initWithErrorMessage:message
        file:file
        line:line
        column:column
      ] ;
      [issueArray addObject:issue] ;
    }else if ([@"warning" isEqualToString:node.name]) {
      NSString * file = [[[node nodesForXPath:@"./@file" error:nil] objectAtIndex:0] stringValue] ;
      NSInteger line = [[[[node nodesForXPath:@"./@line" error:nil] objectAtIndex:0] stringValue] integerValue] ;
      NSInteger column = [[[[node nodesForXPath:@"./@column" error:nil] objectAtIndex:0] stringValue] integerValue] ;
      NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0] stringValue] ;
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
    [self.windowForSheet presentError:error] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Build

//---------------------------------------------------------------------------*
//                                                                           *
//    C O M P I L E                                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) notifyIssues {
   [mTextView setNeedsDisplay:YES] ;
 }

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
      [self appendMessage: [NSString stringWithFormat: @"Build task has exited with status %d\n", status]] ;
    }
  //--- Translate input data into text
    NSString * issueText = [[NSString alloc]
      initWithData:mBufferedInputData
      encoding:NSUTF8StringEncoding
    ] ;
    [mIssueTextView setString:issueText] ;
  //--- Analyze XML document
    [self XMLIssueAnalysis] ;
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
  //--- Save all documents
    #ifdef DEBUG_MESSAGES
      NSLog (@"OC_GGS_Document <actionBuild:> save all documents") ;
    #endif
    [[NSDocumentController sharedDocumentController] saveAllDocuments:self] ;
  //--- Reset range array
    #ifdef DEBUG_MESSAGES
      NSLog (@"OC_GGS_Document <actionBuild:> reset range array") ;
    #endif
  //--- Reset buffered input
    #ifdef DEBUG_MESSAGES
      NSLog (@"OC_GGS_Document <actionBuild:> reset buffered input") ;
    #endif

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
        beginSheetModalForWindow:[self windowForSheet]
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
      [arguments addObject:self.fileURL.path] ;
   //--- Create task
      mTask = [[NSTask alloc] init] ;
      [mTask setLaunchPath:[commandLineArray objectAtIndex:0 HERE]] ;
      [mTask setArguments:arguments] ;
      // NSLog (@"'%@' %@", [mTask launchPath], arguments) ;
    //--- Set priority
      // const int priority = getpriority (PRIO_PROCESS, [mTask processIdentifier]) ;
      // setpriority (PRIO_PROCESS, [mTask processIdentifier], priority + 20) ;
      // NSLog (@"priority %d -> %d", priority, getpriority (PRIO_PROCESS, [mTask processIdentifier])) ;
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
      [mTextView setNeedsDisplay:YES] ; // For Removing issue rect display
    }
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <actionBuild:> DONE ----------") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//        S E L E C T    L I N E    A N D     C O L U M N                    *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) selectLine: (NSInteger) inLine forTextView: (NSTextView *) inTextView {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <selectLine:forTextView:>") ;
  #endif
  int currentLine = 1 ;
  NSString * sourceString = [[inTextView textStorage] string] ;
  NSRange range = [sourceString lineRangeForRange: NSMakeRange (0, 0)] ;
//  NSUInteger lastStartOfLine = 0 ;
  while ((currentLine < inLine) && (range.length > 0)) {
    currentLine ++ ;
 //   lastStartOfLine = range.location ;
    range = [sourceString lineRangeForRange: NSMakeRange (NSMaxRange (range), 0)] ;
  }
  // NSLog (@"range.length %d", range.length) ;
  if (range.length > 0) {
    [inTextView setSelectedRange:range] ;
    [inTextView scrollRangeToVisible:range] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Menu Item Validation

//---------------------------------------------------------------------------*
//                                                                           *
//        E R R O R    A N D    W A R N I N G    N A V I G A T I O N         *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) validateMenuItem:(NSMenuItem *) inItem {
  BOOL validate ;
  if ([inItem action] == @selector (revertDocumentToSaved:)) {
    validate = NO ;
  }else{
    validate = [super validateMenuItem:inItem] ;
  }
  return validate ;
}

//---------------------------------------------------------------------------*

#pragma mark Observe Value For Key Path

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath: (NSString *) inKeyPath
         ofObject: (id) inObject
         change: (NSDictionary *) inChangeDictionary
         context: (void *) inContext {
  if ((inObject == mTokenizer) && [inKeyPath isEqualToString:@"menuForEntryPopUpButton"]) {
    [self setMenuForPopUpButton] ;
  }else{
    [super
      observeValueForKeyPath:inKeyPath
      ofObject:inObject
      change:inChangeDictionary
      context:inContext
    ] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Index Menu

//---------------------------------------------------------------------------*

- (NSSet *) handledExtensions {
  NSMutableSet * result = [NSMutableSet new] ;
//--- Get Info.plist file
  NSDictionary * infoDictionary = [[NSBundle mainBundle] infoDictionary] ;
  // NSLog (@"infoDictionary '%@'", infoDictionary) ;
  NSArray * allDocumentTypes = [infoDictionary objectForKey:@"CFBundleDocumentTypes"] ;
  // NSLog (@"allDocumentTypes '%@'", allDocumentTypes) ;
  unsigned i ;
  for (i=0 ; i<[allDocumentTypes count] ; i++) {
    NSDictionary * docTypeDict = [allDocumentTypes objectAtIndex:i HERE] ;
    // NSLog (@"docTypeDict '%@'", docTypeDict) ;
    NSArray * documentTypeExtensions = [docTypeDict objectForKey:@"CFBundleTypeExtensions"] ;
    // NSLog (@"documentTypeExtensions '%@'", documentTypeExtensions) ;
    [result addObjectsFromArray:documentTypeExtensions] ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (void) parseSourceFileForBuildingIndexFile: (NSString *) inSourceFileFullPath {
  NSString * compilerToolPath = [gCocoaGalgasPreferencesController compilerToolPath] ;
//--- Command line tool does actually exist ? (First argument is not "?")
  if (! [compilerToolPath isEqualToString:@"?"]) {
  //--- Build argument array
    NSMutableArray * arguments = [NSMutableArray new] ;
    [arguments addObject:inSourceFileFullPath] ;
    [arguments addObject:@"--perform-indexing"] ;
  //--- Create task
    NSTask * task = [[NSTask alloc] init] ;
    [task setLaunchPath:compilerToolPath] ;
    [task setArguments:arguments] ;
    // NSLog (@"'%@' %@", [task launchPath], arguments) ;
  //--- Start task
    [task launch] ;
  //--- Wait the task is completed
    [task waitUntilExit] ;
  }
}

//---------------------------------------------------------------------------*

- (BOOL) sourceFile:(NSString *) inFile1
         newerThanFile: (NSString *) inFile2 {
  NSFileManager * fm = [[NSFileManager alloc] init] ;
  NSDictionary * file1_dictionary = [fm attributesOfItemAtPath:inFile1 error:NULL] ;
  NSDate * file1_modificationDate = [file1_dictionary fileModificationDate] ;
  NSDictionary * file2_dictionary = [fm attributesOfItemAtPath:inFile2 error:NULL] ;
  NSDate * file2_modificationDate = [file2_dictionary fileModificationDate] ;
  return NSOrderedDescending == [file1_modificationDate compare:file2_modificationDate] ;
}

//---------------------------------------------------------------------------*

- (NSArray *) buildDictionaryArray {
//--- Source directory
  NSString * sourceDirectory = self.fileURL.path.stringByDeletingLastPathComponent ;
//--- index directory
  NSString * indexingDirectory = [mTokenizer indexingDirectory] ;
  if (([indexingDirectory length] == 0) || ([indexingDirectory characterAtIndex:0] != '/')) {
    NSMutableString * s = [NSMutableString new] ;
    [s appendString:sourceDirectory] ;
    [s appendString:@"/"] ;
    [s appendString:indexingDirectory] ;
    indexingDirectory = s ;
    // NSLog (@"indexingDirectory '%@'", indexingDirectory) ;
  }
//--- Handled extensions
  NSSet * handledExtensions = [self handledExtensions] ;
//--- All files in source directory
  NSFileManager * fm = [[NSFileManager alloc] init] ;
  NSArray * files = [fm contentsOfDirectoryAtPath:sourceDirectory error:NULL] ;
  NSMutableArray * availableDictionaryPathArray = [NSMutableArray new] ;
  NSOperationQueue * opq = [NSOperationQueue new] ;
  for (NSString * filePath in files) {
    NSString * fullFilePath = [NSString stringWithFormat:@"%@/%@", sourceDirectory, filePath] ;
    if ([handledExtensions containsObject:[filePath pathExtension]]) {
    //--- Index file path
      NSString * indexFileFullPath = [NSString stringWithFormat:@"%@/%@.plist", indexingDirectory, [filePath lastPathComponent]] ;
    //--- Parse source file ?
      if (! [fm fileExistsAtPath:indexFileFullPath]) { // Parse source file
        NSInvocationOperation * op = [[NSInvocationOperation alloc] 
          initWithTarget:self
          selector:@selector (parseSourceFileForBuildingIndexFile:)
          object:fullFilePath
        ] ;
        [opq addOperation:op] ;
        [availableDictionaryPathArray addObject:indexFileFullPath] ;
      }else if ([self sourceFile:fullFilePath newerThanFile:indexFileFullPath]) {
        [fm removeItemAtPath:indexFileFullPath error:NULL] ;
        NSInvocationOperation * op = [[NSInvocationOperation alloc] 
          initWithTarget:self
          selector:@selector (parseSourceFileForBuildingIndexFile:)
          object:fullFilePath
        ] ;
        [opq addOperation:op] ;
        [availableDictionaryPathArray addObject:indexFileFullPath] ;
      }else{
        [availableDictionaryPathArray addObject:indexFileFullPath] ;
      }
    }
  }
//--- Wait operations are completed
  [opq waitUntilAllOperationsAreFinished] ;
//--- Parse available dictionaries
  NSMutableArray * result = [NSMutableArray new] ;
  for (NSString * fullPath in availableDictionaryPathArray) {
    NSDictionary * dict = [NSDictionary dictionaryWithContentsOfFile:fullPath] ;
    if (nil != dict) {
      [result addObject:dict] ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (void) setSelectionRange: (NSRange) inRange {
  [mTextView setSelectedRange:inRange] ;
  [mTextView scrollRangeToVisible:inRange] ;
}

//---------------------------------------------------------------------------*

- (NSString *) sourceString {
  return [mTextView string] ;
}

//---------------------------------------------------------------------------*

- (void) setSourceString: (NSString *) inString {
  [mTextView setString:inString] ;
}

//---------------------------------------------------------------------------*

- (void) indexingMenuAction: (id) inSender {
  NSString * descriptor = [inSender representedObject] ;
  // NSLog (@"descriptor '%@'", descriptor) ;
  NSArray * components = [descriptor componentsSeparatedByString:@":"] ;
  const NSUInteger tokenLocation = [[components objectAtIndex:2] integerValue] ;
  const NSUInteger tokenLength = [[components objectAtIndex:3] integerValue] ;
  NSString * filePath = [components objectAtIndex:4] ;
  // NSLog (@"tokenLocation %u, tokenLength %u, filePath '%@'", tokenLocation, tokenLength, filePath) ;
  OC_GGS_Document * doc = [[NSDocumentController sharedDocumentController]
    openDocumentWithContentsOfURL:[NSURL fileURLWithPath:filePath]
    display:YES
    error:NULL
  ] ;
  [doc setSelectionRange:NSMakeRange (tokenLocation, tokenLength)] ;
}

//---------------------------------------------------------------------------*

- (void) selectAllTokenCharacters: (id) inSender  {
  const NSRange r = [[inSender representedObject] rangeValue] ;
  [self setSelectionRange:r] ;
}

//---------------------------------------------------------------------------*

static NSInteger numericSort (NSString * inOperand1,
                              NSString * inOperand2,
                              void * inUnusedContext) {
  return [inOperand1 compare:inOperand2 options:NSNumericSearch] ;
}

//---------------------------------------------------------------------------*
// Every plist list is a dictionary: the key is the indexed to token; the 
// associated value is an NSArray of NSString that has the following format:
//   "kind:line:locationIndex:length:sourceFileFullPath"

//---------------------------------------------------------------------------*

- (NSMenu *) indexMenuForToken: (NSString *) inToken
             atomicSelection: (BOOL) inHasAtomicSelection
             range: (NSRange) allTokenCharactersRange {
//--- Save all sources
  [[NSDocumentController sharedDocumentController] saveAllDocuments:self] ;
//---
  NSArray * dictionaryArray = [self buildDictionaryArray] ;
//--- Build array of all references of given token
  NSMutableArray * allReferences = [NSMutableArray new] ;
  for (NSDictionary * currentIndexDictionary in dictionaryArray) {
    NSArray * references = [currentIndexDictionary objectForKey:inToken] ;
    [allReferences addObjectsFromArray:references] ;
  }
//--- Build dictionary for the given token, organized by Kind
  NSMutableDictionary * kindDictionary = [NSMutableDictionary new] ;
  for (NSString * descriptor in allReferences) {
    NSArray * components = [descriptor componentsSeparatedByString:@":"] ;
    NSString * kind = [components objectAtIndex:0] ;
    if ([kindDictionary objectForKey:kind] == NULL) {
      [kindDictionary setObject:[NSMutableArray new] forKey:kind] ;
    }
    NSMutableArray * a = [kindDictionary objectForKey:kind] ;
    [a addObject:descriptor] ;
  }
//--- Build Menu
  NSMenu * menu = [[NSMenu alloc] initWithTitle:@""] ;
  if (! inHasAtomicSelection) {
    [menu addItemWithTitle:@"Select all token characters" action:@selector (selectAllTokenCharacters:) keyEquivalent:@""] ;
    NSMenuItem * item = [menu itemAtIndex:[menu numberOfItems] - 1] ;
    [item setTarget:self] ;
    [item setRepresentedObject:[NSValue valueWithRange:allTokenCharactersRange]] ;
    [menu addItem:[NSMenuItem separatorItem]] ;
  }
  if ([kindDictionary count] == 0) {
    NSString * title = [NSString stringWithFormat:@"No index for '%@'", inToken] ;
    [menu addItemWithTitle:title action:nil keyEquivalent:@""] ;
  }else{
    NSArray * indexingTitles = [mTokenizer indexingTitles] ;
    NSArray * allKeys = [[kindDictionary allKeys] sortedArrayUsingFunction:numericSort context:NULL] ;
    BOOL first = YES ;
    for (NSString * kindObject in allKeys) {
      if (first) {
        first = NO ;
      }else{
        [menu addItem:[NSMenuItem separatorItem]] ;
      }
      const NSUInteger kind = [kindObject integerValue] ;
      NSArray * references = [kindDictionary objectForKey:kindObject] ;
      NSString * title = [NSString
        stringWithFormat:@"%@ (%d item%@)",
        [indexingTitles objectAtIndex:kind],
        [references count],
        (([references count] > 1) ? @"s" : @"")
      ] ;
      [menu addItemWithTitle:title action:nil keyEquivalent:@""] ;
      for (NSString * descriptor in references) {
        NSArray * components = [descriptor componentsSeparatedByString:@":"] ;
        NSString * filePath = [components objectAtIndex:4] ;
        title = [NSString stringWithFormat:@"%@, line %@", [filePath lastPathComponent], [components objectAtIndex:1]] ;
        [menu addItemWithTitle:title action:@selector (indexingMenuAction:) keyEquivalent:@""] ;
        NSMenuItem * item = [menu itemAtIndex:[menu numberOfItems] - 1] ;
        [item setTarget:self] ;
        [item setRepresentedObject:descriptor] ;
      }
    }
  }
//---
  return menu ;
}

//---------------------------------------------------------------------------*

@end
