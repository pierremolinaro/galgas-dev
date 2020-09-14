//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//  Update Cocoa GALGAS                                                                                                *
//                                                                                                                     *
//  Copyright (C) 2006, ..., 2020 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

#import "GGSUpdateCocoaGalgas.h"
#import "OC_GGS_ApplicationDelegate.h"
#import "OC_GGS_ApplicationDelegate.h"

//----------------------------------------------------------------------------------------------------------------------

#import <WebKit/WebKit.h>

//----------------------------------------------------------------------------------------------------------------------

//--- Only for debugging !!!
//#define FORCED_GALGAS_VERSION @"3.0.4"

//----------------------------------------------------------------------------------------------------------------------

@implementation GGSUpdateCocoaGalgas

  //····················································································································

  - (void) awakeFromNib {
  //--- Add Update Tab view
    NSTabView * prefsTabView = [gCocoaApplicationDelegate preferencesTabView] ;
    NSTabViewItem * tabViewItem = [NSTabViewItem new] ;
    [tabViewItem setView: mUpdateView] ;
    [tabViewItem setLabel:@"Update"] ;
    [prefsTabView addTabViewItem:tabViewItem] ;
  //--- Add 'ChangeLog' tab item
    tabViewItem = [NSTabViewItem new] ;
    [tabViewItem setView:mViewForChangeLogInPreferencePane] ;
    [tabViewItem setLabel:@"Change Log"] ;
    [prefsTabView addTabViewItem: tabViewItem] ;
  //--- Print Sparkle version
    NSURL * frameworkURL = NSBundle.mainBundle.privateFrameworksURL ;
    NSURL * infoPlistURL = [frameworkURL URLByAppendingPathComponent: @"Sparkle.framework/Versions/Current/Resources/Info.plist"] ;
    NSData * data = [NSData dataWithContentsOfURL: infoPlistURL] ;
    NSDictionary * plist = [NSPropertyListSerialization propertyListWithData: data options: NSPropertyListImmutable format: nil error: nil] ;
    NSString * sparkleVersionString = [plist objectForKey: @"CFBundleShortVersionString"] ;
    if (sparkleVersionString != nil) {
      mSparkleVersionTextField.stringValue = [@"Using Sparkle " stringByAppendingString: sparkleVersionString] ;
    }else{
      mSparkleVersionTextField.stringValue = @"Unable to find Sparkle" ;
    }
  //--- Installation Path
    NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
    if ([ud objectForKey: @"GGS_cli_installation_path"] == nil) {
      [ud setObject: @"/usr/local/bin/" forKey: @"GGS_cli_installation_path"] ;
    }
    [mCLIToolInstallationPath
      bind: @"value"
      toObject: ud
      withKeyPath: @"GGS_cli_installation_path"
      options: nil
    ] ;
  //--- Check at startup checkbox
    [mCheckUpdateAtStartUpCheckBox bind: @"value" toObject: mSparkleUpdater withKeyPath: @"automaticallyChecksForUpdates" options: nil] ;
  //--- Populate WebView
    NSURL * url = [NSURL URLWithString: @"https://pierremolinaro.github.io/galgas-distribution/release-notes.html"] ;
    [[mChangeLogInPreferencePaneWebView mainFrame] loadRequest: [NSURLRequest requestWithURL: url]] ;
  }

  //····················································································································

  #pragma mark Installing CLI tools

  //····················································································································
  //
  //            Installing CLI tools
  //
  //····················································································································

  - (OSStatus) privilegedOperation: (AuthorizationRef) inAutorizationRef
               commandPath: (const char *) inCommandPath
               arguments: (char * *) inArguments {
    FILE * myCommunicationPipe = NULL ;
    OSStatus myStatus = AuthorizationExecuteWithPrivileges (inAutorizationRef,
                                                            inCommandPath, 
                                                            kAuthorizationFlagDefaults,
                                                            inArguments, 
                                                            & myCommunicationPipe) ; 
    if (myStatus == 0) { // Wait until tool exit
      char unusedBuffer [128] ;
      while (fread (unusedBuffer, 1, 128, myCommunicationPipe) > 0) {}    
    }
    return myStatus ;
  }

  //····················································································································

  - (IBAction) performCLIToolInstallation: (id) inSender {
    NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
    NSString * installationPath = [ud objectForKey:@"GGS_cli_installation_path"] ;
    if ([installationPath length] == 0) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot Perform Command Line Interface Tools Installation."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"The installation path is empty."
      ] ;
      [alert
        beginSheetModalForWindow:[mCLIToolInstallationPath window]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }else{
    //--- Tools
      NSArray * toolNameArray = [gCocoaApplicationDelegate toolNameArray] ;
     // NSLog (@"TOOL NAME ARRAY '%@'", toolNameArray) ;
      NSMutableString * s = [NSMutableString new] ;
      [s appendFormat:@"This installs in the %@ directory the following tools:", installationPath] ;
      for (NSUInteger i=0 ; i<[toolNameArray count] ; i++) {
        [s appendFormat:@"\n  - %@", [toolNameArray objectAtIndex:i]] ;
      }
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Perform command line tools installation ?"
        defaultButton:@"Ok"
        alternateButton:@"Cancel"
        otherButton:nil
        informativeTextWithFormat:@"%@", s
      ] ;
      [alert
        beginSheetModalForWindow:[mCLIToolInstallationPath window]
        modalDelegate:self
        didEndSelector:@selector (performToolInstallationAlertDidEnd:returnCode:contextInfo:)
        contextInfo:NULL
      ] ;
    }
  }

  //····················································································································

  - (void) performToolInstallationAlertDidEnd:(NSAlert *)alert 
           returnCode:(int) inReturnCode
           contextInfo:(void *) inContextInfo {
    if (inReturnCode == YES) {
      [[NSRunLoop mainRunLoop]
        performSelector:@selector (install:)
        target:self
        argument:nil
        order:0
        modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
      ] ;
    }
  }

  //····················································································································

  - (void) install: (id) ininUnusedArg {
    OSStatus myStatus = 0 ;
    //NSLog (@"BUNDLE PATH '%@'", bundlePath) ;
  //--- Installation Path
    NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
    NSString * installationPath = [ud objectForKey:@"GGS_cli_installation_path"] ;
  //--- Bundle path
    NSString * bundlePath = [[NSBundle mainBundle] bundlePath] ;
  //--- Resource Path
    NSString * resourcePath = [bundlePath stringByAppendingString:@"/Contents/Resources/"] ;
  //--- Tools
    NSArray * toolNameArray = [gCocoaApplicationDelegate toolNameArray] ;
  //--- Create an empty Authorization
    const AuthorizationFlags myFlags = (AuthorizationFlags) (kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights) ;
    AuthorizationRef authorizationRef = 0 ;
    AuthorizationCreate (NULL, kAuthorizationEmptyEnvironment, myFlags, & authorizationRef) ; 
    NSFileManager * fm = [NSFileManager defaultManager] ;
    if (! [fm fileExistsAtPath:installationPath]) {
      const char * createDirArgs [] = {"-p", [installationPath cStringUsingEncoding:NSUTF8StringEncoding], NULL} ;
      myStatus = [self
        privilegedOperation:authorizationRef
        commandPath:"/bin/mkdir"
        arguments: (char * *) createDirArgs
      ] ;
    }
  //--- Installing tools
    for (NSUInteger i=0 ; (i<[toolNameArray count]) && (myStatus == 0) ; i++) {
      NSString * toolSourcePath = [resourcePath stringByAppendingString:[toolNameArray objectAtIndex:i]] ;
      const char * copyArgs [] = {[toolSourcePath cStringUsingEncoding:NSUTF8StringEncoding], [installationPath cStringUsingEncoding:NSUTF8StringEncoding], NULL} ;
      myStatus = [self
        privilegedOperation:authorizationRef
        commandPath:"/bin/cp"
        arguments: (char * *) copyArgs
      ] ;
    }
  //--- Error ?
    if (myStatus == 0) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Done."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@""
      ] ;
      [alert
        beginSheetModalForWindow:[mCLIToolInstallationPath window]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }else if (myStatus != -60006) { // -60006 means anthorization dialog has been cancelled
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot Perform Command Line Interface Tools Installation."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"Operation returns error %d.", myStatus
      ] ;
      [alert
        beginSheetModalForWindow:[mCLIToolInstallationPath window]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }

  //····················································································································

  #pragma mark Removing CLI tools

  //····················································································································
  //
  //            Removing CLI tools
  //
  //····················································································································

  - (IBAction) performCLIToolRemove: (id) inSender {
    NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
    NSString * installationPath = [ud objectForKey:@"GGS_cli_installation_path"] ;
    if ([installationPath length] == 0) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot Perform Command Line Interface Tools Removing."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"The installation path is empty."
      ] ;
      [alert
        beginSheetModalForWindow:[mCLIToolInstallationPath window]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }else{
      NSFileManager * fm = [NSFileManager defaultManager] ;
    //--- Tools
      NSArray * toolNameArray = [gCocoaApplicationDelegate toolNameArray] ;
     // NSLog (@"TOOL NAME ARRAY '%@'", toolNameArray) ;
      NSMutableString * s = [NSMutableString new] ;
      [s appendFormat:@"This removes from the %@ directory the following tools:", installationPath] ;
      BOOL nothingToRemove = YES ;
      for (NSUInteger i=0 ; i<[toolNameArray count] ; i++) {
        NSString * toolName = [toolNameArray objectAtIndex:i] ;
        if ([fm fileExistsAtPath:[NSString stringWithFormat:@"%@/%@", installationPath, toolName]]) {
          [s appendFormat:@"\n  - %@", toolName] ;
          nothingToRemove = NO ;
        }
      }
      if (nothingToRemove) {
        NSAlert * alert = [NSAlert
          alertWithMessageText:@"Cannot remove command line tools."
          defaultButton:@"Ok"
          alternateButton:nil
          otherButton:nil
          informativeTextWithFormat:@"The tools to be removed do not exist."
        ] ;
        [alert
          beginSheetModalForWindow:[mCLIToolInstallationPath window]
          modalDelegate:nil
          didEndSelector:NULL
          contextInfo:NULL
        ] ;
      }else{
        NSAlert * alert = [NSAlert
          alertWithMessageText:@"Perform command line tools removing ?"
          defaultButton:@"Ok"
          alternateButton:@"Cancel"
          otherButton:nil
          informativeTextWithFormat:@"%@", s
        ] ;
        [alert
          beginSheetModalForWindow:[mCLIToolInstallationPath window]
          modalDelegate:self
          didEndSelector:@selector (performToolRemovingAlertDidEnd:returnCode:contextInfo:)
          contextInfo:NULL
        ] ;
      }
    }
  }

  //····················································································································

  - (void) performToolRemovingAlertDidEnd:(NSAlert *)alert 
           returnCode:(int) inReturnCode
           contextInfo:(void *) inContextInfo {
    if (inReturnCode == YES) {
      [[NSRunLoop mainRunLoop]
        performSelector:@selector (remove:)
        target:self
        argument:nil
        order:0
        modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
      ] ;
    }
  }

  //····················································································································

  - (void) remove: (id) ininUnusedArg {
    OSStatus myStatus = 0 ;
    //NSLog (@"BUNDLE PATH '%@'", bundlePath) ;
  //--- Installation Path
    NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
    NSString * installationPath = [ud objectForKey:@"GGS_cli_installation_path"] ;
  //--- Tools
    NSArray * toolNameArray = [gCocoaApplicationDelegate toolNameArray] ;
  //--- Create an empty Authorization
    const AuthorizationFlags myFlags = (AuthorizationFlags) (kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights) ;
    AuthorizationRef authorizationRef = 0 ;
    AuthorizationCreate (NULL, kAuthorizationEmptyEnvironment, myFlags, & authorizationRef) ; 
  //--- Installing tools
    for (NSUInteger i=0 ; (i<[toolNameArray count]) && (myStatus == 0) ; i++) {
      NSString * toolPath = [NSString stringWithFormat:@"%@/%@", installationPath, [toolNameArray objectAtIndex:i]] ;
      const char * copyArgs [] = {[toolPath cStringUsingEncoding:NSUTF8StringEncoding], NULL} ;
      myStatus = [self
        privilegedOperation:authorizationRef
        commandPath:"/bin/rm"
        arguments: (char * *) copyArgs
      ] ;
    }
  //--- Error ?
    if (myStatus == 0) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Done."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@""
      ] ;
      [alert
        beginSheetModalForWindow:[mCLIToolInstallationPath window]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }else if (myStatus != -60006) { // -60006 means anthorization dialog has been cancelled
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot Perform Command Line Interface Tools Removing."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"Operation returns error %d.", myStatus
      ] ;
      [alert
        beginSheetModalForWindow:[mCLIToolInstallationPath window]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }

  //····················································································································

  #pragma mark Create a new project

  //····················································································································

  - (void) createNewProjectAction: (id) inSender {
    NSSavePanel * op = [NSSavePanel savePanel] ;
    op.title = @"Create a new GALGAS Project" ;
    op.canCreateDirectories = YES ;
    op.message = @"Enter New Project Directory:" ;
    [op beginWithCompletionHandler: ^(NSInteger inResult) {
      if (NSFileHandlingPanelOKButton == inResult) {
        NSURL * directory = op.directoryURL ;
        NSString * projectName = op.nameFieldStringValue ;
        NSString * option = [NSString stringWithFormat:
          @"--create-project=%@/%@",
          directory.path,
          projectName
        ] ;
        [self launchTaskWithOption:option] ;
      }
    }] ;
  }

  //····················································································································

  - (void) launchTaskWithOption: (NSString *) inOption {
    NSArray * commandLineArray = [gCocoaApplicationDelegate commandLineItemArray] ;
  //--- Command line tool does actually exist ? (First argument is not "?")
    if ([[commandLineArray objectAtIndex:0] isEqualToString:@"?"]) {
      NSAlert * alert = [NSAlert alertWithMessageText:@"Error"
        defaultButton: nil
        alternateButton: nil
        otherButton: nil
        informativeTextWithFormat:@"No command line Tool is currently embedded by application."
      ] ;
      dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue(), ^{ [alert runModal] ; }) ;
    }else{
   //--- Create task
      mTask = [NSTask new] ;
      [mTask setLaunchPath:[commandLineArray objectAtIndex:0]] ;
      [mTask setArguments:[NSArray arrayWithObject:inOption]] ;
      // NSLog (@"'%@' %@", [mTask launchPath], arguments) ;
    //--- Set standard output notification
      mPipe = [NSPipe pipe] ;
      [mTask setStandardOutput:mPipe] ;
      [mTask setStandardError:mPipe] ;
      mResultData = [NSMutableData new] ;
    //---
      [[NSNotificationCenter defaultCenter]
        addObserver:self
        selector:@selector (getDataFromTaskOutput:)
        name:NSFileHandleReadCompletionNotification
        object:[mPipe fileHandleForReading]
      ] ;
      [mPipe.fileHandleForReading readInBackgroundAndNotify] ;
    //--- Start task
      [mTask launch] ;
    //---
      mResultTextView.string = @"" ;
      [mResultTextView.window makeKeyAndOrderFront:nil] ;
    }
  }

  //····················································································································

  - (void) getDataFromTaskOutput: (NSNotification *) inNotification {
    #ifdef DEBUG_MESSAGES
      NSLog (@"%s", __PRETTY_FUNCTION__) ;
    #endif
    NSData * data = [[inNotification userInfo] objectForKey:NSFileHandleNotificationDataItem];
    if (data.length > 0) {
      [mResultData appendData:data] ;
      [inNotification.object readInBackgroundAndNotify] ;
    }else{
      [[NSNotificationCenter defaultCenter]
        removeObserver:self
        name:NSFileHandleReadCompletionNotification
        object:[mPipe fileHandleForReading]
      ] ;
      [[mPipe fileHandleForReading] closeFile] ;
      mTask = nil ;
      mPipe = nil ;
      mResultTextView.string = [[NSString alloc]
        initWithData:mResultData
        encoding:NSUTF8StringEncoding
      ] ;
      mResultData = nil ;
    }
  }

  //····················································································································

@end

//----------------------------------------------------------------------------------------------------------------------
