//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Update Cocoa GALGAS                                                                                                *
//                                                                                                                     *
//  Copyright (C) 2006, ..., 2015 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#import "CocoaGalgasPrefix.h"
#import "GGSUpdateCocoaGalgas.h"
#import "OC_GGS_ApplicationDelegate.h"
#import "PMDownloadData.h"
#import "PMDownloadFile.h"
#import "OC_GGS_ApplicationDelegate.h"

//---------------------------------------------------------------------------------------------------------------------*

#import <WebKit/WebKit.h>
#import <Security/Security.h>

//---------------------------------------------------------------------------------------------------------------------*

//--- Only for debugging !!!
#define FORCED_GALGAS_VERSION @"3.0.4"

//---------------------------------------------------------------------------------------------------------------------*

@implementation GGSUpdateCocoaGalgas

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) galgasUpdaterArchiveName {
  return @"cocoa_galgas_updater3.app.tar.bz2" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) galgasArchiveName {
  return @"cocoaGalgas.app.tar.bz2" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) serverHTTPPath {
  return @"http://galgas.rts-software.org/download" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) lastReleaseHTTPPath {
  return [[self serverHTTPPath] stringByAppendingString:@"/lastRelease.php"] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) galgasHTTPPathForVersion: (NSString *) inVersionString {
  return [NSString stringWithFormat:@"%@/%@/%@", [self serverHTTPPath], inVersionString, [self galgasArchiveName]] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) galgasUpdaterHTTPPath {
  return [NSString stringWithFormat:@"%@/%@", [self serverHTTPPath], [self galgasUpdaterArchiveName]] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) temporaryDir {
  return @"/tmp/TEMPORARY_DIR_FOR_GALGAS" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) temporaryPathForGALGASArchive {
  return [NSString stringWithFormat:@"%@/%@", [self temporaryDir], [self galgasArchiveName]] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) temporaryPathForGalgasUpdaterArchive {
  return [NSString stringWithFormat:@"%@/%@", [self temporaryDir], [self galgasUpdaterArchiveName]] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSComparisonResult) compareVersionString: (NSString *) inVersionString
                       withVersionString: (NSString *) inOtherVersionString {
  NSComparisonResult result = [inVersionString compare:inOtherVersionString] ;
  if (result != NSOrderedSame) {
    NSMutableArray * components = [NSMutableArray new] ;
    [components addObjectsFromArray:[inVersionString componentsSeparatedByString:@"."]] ;
    NSMutableArray * otherComponents = [NSMutableArray new] ;
    [otherComponents addObjectsFromArray:[inOtherVersionString componentsSeparatedByString:@"."]] ;
    while ([components count] < [otherComponents count]) {
      [components addObject:@"0"] ;
    }
    while ([components count] > [otherComponents count]) {
      [otherComponents addObject:@"0"] ;
    }
    result = NSOrderedSame ;
    for (NSUInteger i=0 ; (i<[components count]) && (result == NSOrderedSame) ; i++) {
      const int version = [[components objectAtIndex:i] intValue] ;
      const int otherVersion = [[otherComponents objectAtIndex:i] intValue] ;
      //NSLog (@"FOR i=%u: version: %d, otherversion:%d", i, version, otherVersion) ;
      if (version < otherVersion) {
        result = NSOrderedAscending ;
      }else if (version > otherVersion) {
        result = NSOrderedDescending ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) awakeFromNib {
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
//--- Remove temporary dir, if it exists
  NSFileManager * fm = [NSFileManager defaultManager] ;
  if ([fm fileExistsAtPath:[self temporaryDir]]) {
    [fm removeItemAtPath:[self temporaryDir] error:nil] ;
  }
//--- Add Update Tab view
  NSTabView * prefsTabView = [gCocoaApplicationDelegate preferencesTabView] ;
  NSTabViewItem * tabViewItem = [[NSTabViewItem alloc] init] ;
  [tabViewItem setView:mUpdateView] ;
  [tabViewItem setLabel:@"Update"] ;
  [prefsTabView addTabViewItem:tabViewItem] ;
//--- Add bindings
  [mCheckUpdateAtStartUpCheckBox
    bind:@"value"
    toObject:ud
    withKeyPath:@"GGS_check_update_at_start_up"
    options:nil
  ] ;
  [mCheckUpdateAtStartUpCheckBox2
    bind:@"value"
    toObject:ud
    withKeyPath:@"GGS_check_update_at_start_up"
    options:nil
  ] ;
//--- Installation Path
  if ([ud objectForKey:@"GGS_cli_installation_path"] == nil) {
    [ud setObject:@"/usr/local/bin/" forKey:@"GGS_cli_installation_path"] ;
  }
  [mCLIToolInstallationPath
    bind:@"value"
    toObject:ud
    withKeyPath:@"GGS_cli_installation_path"
    options:nil
  ] ;
//----------------------------------------- Change Log Tab Item
//--- Add 'ChangeLog' tab item
  tabViewItem = [[NSTabViewItem alloc] init] ;
  [tabViewItem setView:mViewForChangeLogInPreferencePane] ;
  [tabViewItem setLabel:@"Change Log"] ;
  [prefsTabView addTabViewItem:tabViewItem] ;
  NSURL * url = [NSURL URLWithString:@"http://galgas.rts-software.org/download/changeLog.html"] ;
  [[mChangeLogInPreferencePaneWebView mainFrame] loadRequest:[NSURLRequest requestWithURL:url]];
//----------------------------------------- Add "Create new project" menu item
  NSMenuItem * mi = [[NSMenuItem alloc]
    initWithTitle:@"New Project…"
    action:@selector (createNewProjectAction:)
    keyEquivalent:@""
  ] ;
  mi.target = self ;
  NSMenu * menubar = [NSApplication sharedApplication].mainMenu ;
  NSMenu * fileMenu = [menubar itemWithTitle:@"File"].submenu ;
  [fileMenu insertItem:mi atIndex:0] ;
//----------------------------------------- Check for new version
  if ([ud boolForKey:@"GGS_check_update_at_start_up"]) {
    [self checkForNewVersion:nil] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Check for new version

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Check for new version                                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) checkForNewVersion: (id) inSender {
  mSearchForUpdatesInBackground = inSender == nil ;
  [mCheckNowButton setEnabled:NO] ;
  mDownloadData = [[PMDownloadData alloc]
    initDownloadWithURLString:[self lastReleaseHTTPPath]
    delegate:self
    downloadDidEndSelector:@selector (downloadAllAvailableGalgasVersion:)
    userInfo:nil
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) downloadAllAvailableGalgasVersion: (PMDownloadData *) inDownloader {
  [mCheckNowButton setEnabled:YES] ;
  NSError * error = [inDownloader downloadError] ;
  if (error != nil) {
    if (! mSearchForUpdatesInBackground) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot connect to the server."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"Reason: '%@'.", [error localizedDescription]
      ] ;
      [alert
        beginSheetModalForWindow:nil
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }else{
    mLastAvailableVersion = [[NSString alloc] initWithData:[inDownloader downloadedData] encoding:NSASCIIStringEncoding] ;
    // NSLog (@"Last Available Version: '%@'", mLastAvailableVersion) ;
  //--- Check Response
    NSScanner * scanner = [NSScanner scannerWithString:mLastAvailableVersion] ;
    const BOOL versionOk = [scanner scanInt:NULL]
                 && [scanner scanString:@"." intoString:NULL]
                 && [scanner scanInt:NULL]
                 && [scanner scanString:@"." intoString:NULL]
                 && [scanner scanInt:NULL]
                 && [scanner isAtEnd] ;
    if (versionOk) {
    //--- Get Galgas Current version
      NSBundle * mainBundle = [NSBundle mainBundle] ;
      NSDictionary * infoDictionary = [mainBundle infoDictionary] ;
      NSString * galgasVersion = [infoDictionary objectForKey:@"CFBundleShortVersionString"] ;
      // NSLog (@"galgasVersion '%@'", galgasVersion) ;
      #ifdef FORCED_GALGAS_VERSION
        galgasVersion = FORCED_GALGAS_VERSION ;
        NSLog (@"Forced GALGAS version: %@", galgasVersion) ;
        NSLog (@"Last Available version: %@", mLastAvailableVersion) ;
      #endif
      if (! [galgasVersion isEqualToString:@"GALGAS_BETA_VERSION"]) {
        const NSComparisonResult r = [self compareVersionString:galgasVersion withVersionString:mLastAvailableVersion] ;
        if (r == NSOrderedAscending) {
        //--- Display change log in Web View
          NSURL * url = [NSURL URLWithString:@"http://galgas.rts-software.org/download/changeLog.html"] ;
          [[mChangeLogWebView mainFrame] loadRequest:[NSURLRequest requestWithURL:url]];
          NSString * s = [NSString stringWithFormat:
            @"Current version is %@; the %@ version can be downloaded.",
            galgasVersion,
            mLastAvailableVersion
          ] ;
          [mNewVersionTextField setStringValue:s] ;
          s = [NSString stringWithFormat:@"Install and Launch Version %@", mLastAvailableVersion] ;
          [mPerformUpdateButton setTitle:s] ;
          [mCheckNowButton setEnabled:NO] ;
          [NSApp
            beginSheet:mNewAvailableVersionPanel
            modalForWindow:nil
            modalDelegate:self
            didEndSelector:@selector (newVersionIsAvailableAlertDidEnd:returnCode:contextInfo:)
            contextInfo:NULL
          ] ;
        }else if (! mSearchForUpdatesInBackground) {
          NSAlert * alert = [NSAlert
            alertWithMessageText:@"GALGAS is up to date."
            defaultButton:@"Ok"
            alternateButton:nil
            otherButton:nil
            informativeTextWithFormat:@"There is no new version at this time."
          ] ;
          [alert
            beginSheetModalForWindow:[mCheckNowButton window]
            modalDelegate:nil
            didEndSelector:NULL
            contextInfo:NULL
          ] ;
        }
      }
    }else if (! mSearchForUpdatesInBackground) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot get last release number."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"The server answered in an incomprehensible way: '%@'.", mLastAvailableVersion
      ] ;
      [alert
        beginSheetModalForWindow:nil
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) newVersionIsAvailableAlertDidEnd:(NSWindow *) inUnusedWindow
         returnCode:(int) inReturnCode
         contextInfo:(void  *) inContextInfo {
  // NSLog (@"inReturnCode %d", inReturnCode) ;
  if (inReturnCode == YES) {
  //--- Remove temporary dir if it exists
    NSFileManager * fm = [NSFileManager defaultManager] ;
    if ([fm fileExistsAtPath:[self temporaryDir]]) {
      [fm removeItemAtPath:[self temporaryDir] error:nil] ;
    }
  //--- Create temporary dir
    [fm
      createDirectoryAtPath:[self temporaryDir]
      withIntermediateDirectories:NO
      attributes:nil
      error:nil
    ] ;
  //--- Start download GALGAS
    [mDownloadTitle setStringValue:[NSString stringWithFormat:@"Downloading GALGAS %@...", mLastAvailableVersion]] ;
    [[mCancelButton window] makeKeyAndOrderFront:nil] ;
    mDownloadFile = [[PMDownloadFile alloc] initWithURLString:[self galgasHTTPPathForVersion:mLastAvailableVersion]
       destinationFileName:[self temporaryPathForGALGASArchive]
       downloadDelegate:self
       downloadDidEndSelector:@selector (downloadNewVersionOfGALGASDidEnd:)
       cancelButton:mCancelButton
       subtitle:mDownloadSubTitle
       progressIndicator:mDownloadProgressIndicator
       userInfo:mLastAvailableVersion
    ] ;
  }else{
    [mCheckNowButton setEnabled:YES] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) downloadHasBeenCancelled {
  [mCancelButton.window orderOut:nil] ;
  [mCheckNowButton setEnabled:YES] ;
//--- Remove temporary dir if it exists
  NSFileManager * fm = [NSFileManager defaultManager] ;
  if ([fm fileExistsAtPath:[self temporaryDir]]) {
    [fm removeItemAtPath:[self temporaryDir] error:nil] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) downloadDidFinishOnError: (NSError *) inError {
//--- Note : presentError is not available on 10.3.9 and earlier
 // NSString * domain = [inError domain] ;
  NSDictionary * userInfo = [inError userInfo] ;
  //NSLog (@"userInfo %@", userInfo) ;
  NSAlert * alert = [NSAlert
    alertWithMessageText:@"Download error."
    defaultButton:@"Ok"
    alternateButton:nil
    otherButton:nil
    informativeTextWithFormat:@"The following error occurs: %@.", [userInfo objectForKey:@"NSLocalizedDescription"]
  ] ;
  [alert
     beginSheetModalForWindow:nil
     modalDelegate:nil
     didEndSelector:NULL
     contextInfo:NULL
  ] ;
  [self downloadHasBeenCancelled] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) downloadNewVersionOfGALGASDidEnd: (PMDownloadFile *) inDownloader {
  if ([inDownloader downloadHasBeenCancelled]) {
    [self downloadHasBeenCancelled] ;
  }else{
    NSError * downloadError = [inDownloader downloadError] ;
    if (downloadError != NULL) {
      [self downloadDidFinishOnError:downloadError] ;
    }else{
    //--- Start download cocoa galgas updater
      NSString * lastAvailableVersion = [inDownloader userInfo] ;
      [mDownloadTitle setStringValue:[NSString stringWithFormat:@"Downloading Cocoa Galgas Updater..."]] ;
      mDownloadFile = [[PMDownloadFile alloc] initWithURLString:[self galgasUpdaterHTTPPath]
         destinationFileName:[self temporaryPathForGalgasUpdaterArchive]
         downloadDelegate:self
         downloadDidEndSelector:@selector (downloadGalgasUpdaterDidEnd:)
         cancelButton:mCancelButton
         subtitle:mDownloadSubTitle
         progressIndicator:mDownloadProgressIndicator
         userInfo:lastAvailableVersion
      ] ;
    }  
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (int) uncompressArchive: (NSString *) inArchivePath {
  NSArray * arguments = [NSArray arrayWithObjects:
    @"-d",
    inArchivePath,
    nil
  ] ;
  NSTask * task = [NSTask new] ;
  [task setLaunchPath:@"/usr/bin/bzip2"] ;
  [task setArguments:arguments] ;
  [task launch] ;
  [task waitUntilExit] ;
  int status = [task terminationStatus] ;
  task = nil ;
  if (status == 0) {
    task = [[NSTask alloc] init] ;
    [task setLaunchPath:@"/usr/bin/tar"] ;
    arguments = [NSArray arrayWithObjects:
      @"-x",
      @"-C",
      [self temporaryDir],
      @"-f",
      [inArchivePath stringByDeletingPathExtension],
      nil
    ] ;
    [task setArguments:arguments] ;
    [task launch] ;
    [task waitUntilExit] ;
    status = [task terminationStatus] ;
    task = nil ;
  }
  return status ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) downloadGalgasUpdaterDidEnd: (PMDownloadFile *) inDownloader {
  if ([inDownloader downloadHasBeenCancelled]) {
    [self downloadHasBeenCancelled] ;
  }else{
    NSError * downloadError = [inDownloader downloadError] ;
    if (downloadError != NULL) {
      [self downloadDidFinishOnError:downloadError] ;
    }else{
      [mDownloadTitle setStringValue:[NSString stringWithFormat:@"Uncompressing archives..."]] ;
      [mDownloadProgressIndicator setIndeterminate:YES] ;
      [mDownloadProgressIndicator startAnimation:nil] ;
    //--- Uncompressing Archives
      [mDownloadSubTitle setStringValue:[NSString stringWithFormat:@"Uncompressing cocoa GALGAS archive"]] ;
      [[mCancelButton window] displayIfNeeded] ;
      int status = [self uncompressArchive:[self temporaryPathForGALGASArchive]] ;
      if (status == 0) {
        [mDownloadSubTitle setStringValue:[NSString stringWithFormat:@"Uncompressing cocoa Galgas Updater archive"]] ;
        [[mCancelButton window] displayIfNeeded] ;
        status = [self uncompressArchive:[self temporaryPathForGalgasUpdaterArchive]] ;
      }
      if (status == 0) {
        NSString * filePath = [NSString stringWithFormat:@"%@/cocoa_galgas_path.txt", [self temporaryDir]] ;
        NSString * cocoaGalgasPath = [[NSBundle mainBundle] bundlePath] ;
        status = ! [cocoaGalgasPath writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:NULL] ;
      }
      if (status == 0) {
        NSAlert * alert = [NSAlert
          alertWithMessageText:@"Ready to Install the new GALGAS version."
          defaultButton:@"Install and Launch"
          alternateButton:@"Cancel"
          otherButton:nil
          informativeTextWithFormat:@""
        ] ;
        [alert
          beginSheetModalForWindow:nil
          modalDelegate:self
          didEndSelector:@selector (launchGalgasUpdaterAlertDidEnd:returnCode:contextInfo:)
          contextInfo:NULL
        ] ;
      }else{
        NSAlert * alert = [NSAlert
          alertWithMessageText:@"Cannot uncompress archive."
          defaultButton:@"Ok"
          alternateButton:nil
          otherButton:nil
          informativeTextWithFormat:@"An error occurs during uncompressing (code %d).", status
        ] ;
        [alert
          beginSheetModalForWindow:nil
          modalDelegate:nil
          didEndSelector:NULL
          contextInfo:NULL
        ] ;
      }
      [mCancelButton.window orderOut:nil] ;
    }  
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) launchGalgasUpdaterAlertDidEnd:(NSAlert *) inUnusedAlert
         returnCode:(int) inReturnCode
         contextInfo:(void  *) inContextInfo {
  if (inReturnCode == YES) {
    NSString * galgasUpdaterApp = [[[self temporaryPathForGalgasUpdaterArchive] stringByDeletingPathExtension] stringByDeletingPathExtension] ;
    NSWorkspace * ws = [NSWorkspace sharedWorkspace] ;
    if ([ws launchApplication:galgasUpdaterApp]) {
      [NSApp terminate:nil] ;
    }else{
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot Install New Version of Galgas"
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"Cannot launch Galgas Updater."
      ] ;
      [alert runModal] ;
      [self downloadHasBeenCancelled] ;
    }
  }else{
    [self downloadHasBeenCancelled] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Installing CLI tools

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Installing CLI tools                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  const AuthorizationFlags myFlags = kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights ; 
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

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Removing CLI tools

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Removing CLI tools                                                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

- (void) remove: (id) ininUnusedArg {
  OSStatus myStatus = 0 ;
  //NSLog (@"BUNDLE PATH '%@'", bundlePath) ;
//--- Installation Path
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
  NSString * installationPath = [ud objectForKey:@"GGS_cli_installation_path"] ;
//--- Tools
  NSArray * toolNameArray = [gCocoaApplicationDelegate toolNameArray] ;
//--- Create an empty Authorization
  const AuthorizationFlags myFlags = kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights ; 
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

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Create a new project

//---------------------------------------------------------------------------------------------------------------------*

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

//------------------------------------------------------------------*

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
    [alert
      beginSheetModalForWindow:nil
      modalDelegate:nil
      didEndSelector:0
      contextInfo:NULL
    ] ;
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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

@end
