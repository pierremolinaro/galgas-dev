//
//  GGSUpdateCocoaGalgas.m
//  galgas
//
//  Created by Pierre MOLINARO on 02/10/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//
//--------------------------------------------------------------------------*

#import "GGSUpdateCocoaGalgas.h"
#import "OC_GGS_PreferencesController.h"
#import "PMDownloadData.h"
#import "PMDownloadFile.h"
#import "OC_GGS_PreferencesController.h"

//--------------------------------------------------------------------------*

#import <WebKit/WebKit.h>
#import <Security/Security.h>

//--------------------------------------------------------------------------*

//--- Only for debugging !!!
//#define FORCED_GALGAS_VERSION @"2.2.2"

//--------------------------------------------------------------------------*

@implementation GGSUpdateCocoaGalgas

//---------------------------------------------------------------------------*

- (NSString *) libpmArchiveName {
  return @"libpm-lf.tar.bz2" ;
}

//---------------------------------------------------------------------------*

- (NSString *) galgasUpdaterArchiveName {
  #ifdef FORCED_GALGAS_VERSION
    return @"cocoa_galgas_updater3.app.tar.bz2" ;
  #else
    return @"cocoa_galgas_updater3.app.tar.bz2" ;
  #endif
}

//---------------------------------------------------------------------------*

- (NSString *) galgasArchiveName {
  return @"cocoaGalgas.app.tar.bz2" ;
}

//---------------------------------------------------------------------------*

- (NSString *) serverHTTPPath {
  return @"http://galgas.rts-software.org/download" ;
}

//---------------------------------------------------------------------------*

- (NSString *) lastReleaseHTTPPath {
  return [[self serverHTTPPath] stringByAppendingString:@"/lastRelease.php"] ;
}

//---------------------------------------------------------------------------*

- (NSString *) galgasHTTPPathForVersion: (NSString *) inVersionString {
  return [NSString stringWithFormat:@"%@/%@/%@", [self serverHTTPPath], inVersionString, [self galgasArchiveName]] ;
}

//---------------------------------------------------------------------------*

- (NSString *) libpmHTTPPathForVersion: (NSString *) inVersionString {
  return [NSString stringWithFormat:@"%@/%@/%@", [self serverHTTPPath], inVersionString, [self libpmArchiveName]] ;
}

//---------------------------------------------------------------------------*

- (NSString *) galgasUpdaterHTTPPath {
  return [NSString stringWithFormat:@"%@/%@", [self serverHTTPPath], [self galgasUpdaterArchiveName]] ;
}

//---------------------------------------------------------------------------*

- (NSString *) temporaryDir {
  return @"/tmp/TEMPORARY_DIR_FOR_GALGAS" ;
}

//---------------------------------------------------------------------------*

- (NSString *) temporaryPathForGALGASArchive {
  return [NSString stringWithFormat:@"%@/%@", [self temporaryDir], [self galgasArchiveName]] ;
}

//---------------------------------------------------------------------------*

- (NSString *) temporaryPathForGalgasUpdaterArchive {
  return [NSString stringWithFormat:@"%@/%@", [self temporaryDir], [self galgasUpdaterArchiveName]] ;
}

//---------------------------------------------------------------------------*

- (NSComparisonResult) compareVersionString: (NSString *) inVersionString
                       withVersionString: (NSString *) inOtherVersionString {
  NSComparisonResult result = [inVersionString compare:inOtherVersionString] ;
  if (result != NSOrderedSame) {
    NSMutableArray * components = [NSMutableArray arrayWithCapacity:3] ;
    [components addObjectsFromArray:[inVersionString componentsSeparatedByString:@"."]] ;
    NSMutableArray * otherComponents = [NSMutableArray arrayWithCapacity:3] ;
    [otherComponents addObjectsFromArray:[inOtherVersionString componentsSeparatedByString:@"."]] ;
    while ([components count] < [otherComponents count]) {
      [components addObject:@"0"] ;
    }
    while ([components count] > [otherComponents count]) {
      [otherComponents addObject:@"0"] ;
    }
    unsigned i ;
    result = NSOrderedSame ;
    for (i=0 ; (i<[components count]) && (result == NSOrderedSame) ; i++) {
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

//--------------------------------------------------------------------------*

- (void) awakeFromNib {
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
//--- Remove temporary dir, if it exists
  NSFileManager * fm = [NSFileManager defaultManager] ;
  if ([fm fileExistsAtPath:[self temporaryDir]]) {
    [fm removeFileAtPath:[self temporaryDir] handler:nil] ;
  }
//--- Add Update Tab view
  NSTabView * prefsTabView = [gCocoaGalgasPreferencesController preferencesTabView] ;
  NSTabViewItem * tabViewItem = [[[NSTabViewItem alloc] init] autorelease] ;
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
  tabViewItem = [[[NSTabViewItem alloc] init] autorelease] ;
  [tabViewItem setView:mViewForChangeLogInPreferencePane] ;
  [tabViewItem setLabel:@"Change Log"] ;
  [prefsTabView addTabViewItem:tabViewItem] ;
  NSURL * url = [NSURL URLWithString:@"http://galgas.rts-software.org/download/changeLog.html"] ;
  [[mChangeLogInPreferencePaneWebView mainFrame] loadRequest:[NSURLRequest requestWithURL:url]];
//--- Check for new version  
  [self checkForNewVersion:nil] ;
}

//--------------------------------------------------------------------------*

#pragma mark Check for new version

//--------------------------------------------------------------------------*
//                                                                          *
//            Check for new version                                         *
//                                                                          *
//--------------------------------------------------------------------------*

- (IBAction) checkForNewVersion: (id) inSender {
  mSearchForUpdatesInBackground = inSender == nil ;
  [mCheckNowButton setEnabled:NO] ;
  [[PMDownloadData alloc]
    initDownloadWithURLString:[self lastReleaseHTTPPath]
    delegate:self
    downloadDidEndSelector:@selector (downloadAllAvailableGalgasVersion:)
    userInfo:nil
  ] ;
}

//--------------------------------------------------------------------------*

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
    NSString * lastAvailableVersion = [[NSString alloc] initWithData:[inDownloader downloadedData] encoding:NSASCIIStringEncoding] ;
    // NSLog (@"Last Available Version: '%@'", lastAvailableVersion) ;
  //--- Check Response
    NSScanner * scanner = [NSScanner scannerWithString:lastAvailableVersion] ;
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
        NSLog (@"Last Available version: %@", lastAvailableVersion) ;
      #endif
      if (! [galgasVersion isEqualToString:@"GALGAS_BETA_VERSION"]) {
        const NSComparisonResult r = [self compareVersionString:galgasVersion withVersionString:lastAvailableVersion] ;
        if (r == NSOrderedAscending) {
        //--- Display change log in Web View
          NSURL * url = [NSURL URLWithString:@"http://galgas.rts-software.org/download/changeLog.html"] ;
          [[mChangeLogWebView mainFrame] loadRequest:[NSURLRequest requestWithURL:url]];
          [mChangeLogWebView setPolicyDelegate:self] ;
          NSString * s = [NSString stringWithFormat:
            @"Current version is %@; the %@ version can be downloaded.",
            galgasVersion,
            lastAvailableVersion
          ] ;
          [mNewVersionTextField setStringValue:s] ;
          s = [NSString stringWithFormat:
            @"Install and Launch Version %@",
            lastAvailableVersion
          ] ;
          [mPerformUpdateButton setTitle:s] ;
          [lastAvailableVersion retain] ;
          [NSApp
            beginSheet:mNewAvailableVersionPanel
            modalForWindow:nil
            modalDelegate:self
            didEndSelector:@selector (newVersionIsAvailableAlertDidEnd:returnCode:contextInfo:)
            contextInfo:lastAvailableVersion
          ] ;
          [mCheckNowButton setEnabled:NO] ;
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
        informativeTextWithFormat:@"The server answered in an incomprehensible way: '%@'.", lastAvailableVersion
      ] ;
      [alert
        beginSheetModalForWindow:nil
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }
  [inDownloader release] ;
}

//--------------------------------------------------------------------------*

- (void)webView:(WebView *)sender
        decidePolicyForNavigationAction:(NSDictionary *)actionInformation
        request:(NSURLRequest *)request
        frame:(WebFrame *)frame
        decisionListener:(id<WebPolicyDecisionListener>)listener {
  [listener ignore] ;
  NSURL * requestedURL = [request URL] ;
//  NSLog (@"requestedURL: '%@'", requestedURL) ;
  NSWorkspace * ws = [NSWorkspace sharedWorkspace] ;
  [ws openURL:requestedURL] ;
}

//--------------------------------------------------------------------------*

- (void) newVersionIsAvailableAlertDidEnd:(NSWindow *) inUnusedWindow
         returnCode:(int) inReturnCode
   contextInfo:(void  *) inContextInfo {
  NSString * lastAvailableVersion = (NSString *) inContextInfo ;
  // NSLog (@"inReturnCode %d", inReturnCode) ;
  if (inReturnCode == YES) {
  //--- Remove temporary dir if it exists
    NSFileManager * fm = [NSFileManager defaultManager] ;
    if ([fm fileExistsAtPath:[self temporaryDir]]) {
      [fm removeFileAtPath:[self temporaryDir] handler:nil] ;
    }
  //--- Create temporary dir
    [fm createDirectoryAtPath:[self temporaryDir] attributes:nil] ;
  //--- Start download GALGAS
    [mDownloadTitle setStringValue:[NSString stringWithFormat:@"Downloading GALGAS %@...", lastAvailableVersion]] ;
    [[mCancelButton window] makeKeyAndOrderFront:nil] ;
    [[PMDownloadFile alloc] initWithURLString:[self galgasHTTPPathForVersion:lastAvailableVersion]
       destinationFileName:[self temporaryPathForGALGASArchive]
       downloadDelegate:self
       downloadDidEndSelector:@selector (downloadNewVersionOfGALGASDidEnd:)
       cancelButton:mCancelButton
       subtitle:mDownloadSubTitle
       progressIndicator:mDownloadProgressIndicator
       userInfo:lastAvailableVersion
    ] ;
  }else{
    [mCheckNowButton setEnabled:YES] ;
  }
  [lastAvailableVersion release] ;
}

//--------------------------------------------------------------------------*

- (void) downloadHasBeenCancelled {
  [[mCancelButton window] orderOut:nil] ;
  [mCheckNowButton setEnabled:YES] ;
//--- Remove temporary dir if it exists
  NSFileManager * fm = [NSFileManager defaultManager] ;
  if ([fm fileExistsAtPath:[self temporaryDir]]) {
    [fm removeFileAtPath:[self temporaryDir] handler:nil] ;
  }
}

//--------------------------------------------------------------------------*

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

//--------------------------------------------------------------------------*

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
      [[PMDownloadFile alloc] initWithURLString:[self galgasUpdaterHTTPPath]
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
  [inDownloader release] ;
}

//--------------------------------------------------------------------------*

- (int) uncompressArchive: (NSString *) inArchivePath {
  NSArray * arguments = [NSArray arrayWithObjects:
    @"-d",
    inArchivePath,
    nil
  ] ;
  NSTask * task = [[NSTask alloc] init] ;
  [task setLaunchPath:@"/usr/bin/bzip2"] ;
  [task setArguments:arguments] ;
  [task launch] ;
  [task waitUntilExit] ;
  int status = [task terminationStatus] ;
  [task release] ;
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
    [task release] ;
    task = nil ;
  }
  return status ;
}

//--------------------------------------------------------------------------*

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
          didEndSelector:@selector (lauchGalgasUpdaterAlertDidEnd:returnCode:contextInfo:)
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
      [[mCancelButton window] orderOut:nil] ;
    }  
  }
  [inDownloader release] ;
}

//--------------------------------------------------------------------------*

- (void) lauchGalgasUpdaterAlertDidEnd:(NSAlert *) inUnusedAlertlert
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

//--------------------------------------------------------------------------*

#pragma mark Installing CLI tools

//--------------------------------------------------------------------------*
//                                                                          *
//            Installing CLI tools                                          *
//                                                                          *
//--------------------------------------------------------------------------*

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

//--------------------------------------------------------------------------*

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
    NSArray * toolNameArray = [gCocoaGalgasPreferencesController toolNameArray] ;
   // NSLog (@"TOOL NAME ARRAY '%@'", toolNameArray) ;
    NSMutableString * s = [NSMutableString stringWithCapacity:1000] ;
    [s appendFormat:@"This installs in the %@ directory the following tools:", installationPath] ;
    unsigned i ;
    for (i=0 ; i<[toolNameArray count] ; i++) {
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

//--------------------------------------------------------------------------*

- (void) performToolInstallationAlertDidEnd:(NSAlert *)alert 
         returnCode:(int) inReturnCode
         contextInfo:(void *) inContextInfo {
  if (inReturnCode == YES) {
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (install:)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}

//--------------------------------------------------------------------------*

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
  NSArray * toolNameArray = [gCocoaGalgasPreferencesController toolNameArray] ;
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
  unsigned i ;
  for (i=0 ; (i<[toolNameArray count]) && (myStatus == 0) ; i++) {
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

//--------------------------------------------------------------------------*

#pragma mark Removing CLI tools

//--------------------------------------------------------------------------*
//                                                                          *
//            Removing CLI tools                                            *
//                                                                          *
//--------------------------------------------------------------------------*

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
    NSArray * toolNameArray = [gCocoaGalgasPreferencesController toolNameArray] ;
   // NSLog (@"TOOL NAME ARRAY '%@'", toolNameArray) ;
    NSMutableString * s = [NSMutableString stringWithCapacity:1000] ;
    [s appendFormat:@"This removes from the %@ directory the following tools:", installationPath] ;
    BOOL nothingToRemove = YES ;
    unsigned i ;
    for (i=0 ; i<[toolNameArray count] ; i++) {
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

//--------------------------------------------------------------------------*

- (void) performToolRemovingAlertDidEnd:(NSAlert *)alert 
         returnCode:(int) inReturnCode
         contextInfo:(void *) inContextInfo {
  if (inReturnCode == YES) {
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (remove:)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}

//--------------------------------------------------------------------------*

- (void) remove: (id) ininUnusedArg {
  OSStatus myStatus = 0 ;
  //NSLog (@"BUNDLE PATH '%@'", bundlePath) ;
//--- Installation Path
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
  NSString * installationPath = [ud objectForKey:@"GGS_cli_installation_path"] ;
//--- Tools
  NSArray * toolNameArray = [gCocoaGalgasPreferencesController toolNameArray] ;
//--- Create an empty Authorization
  const AuthorizationFlags myFlags = kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights ; 
  AuthorizationRef authorizationRef = 0 ;
  AuthorizationCreate (NULL, kAuthorizationEmptyEnvironment, myFlags, & authorizationRef) ; 
//  NSFileManager * fm = [NSFileManager defaultManager] ;
//--- Installing tools
  unsigned i ;
  for (i=0 ; (i<[toolNameArray count]) && (myStatus == 0) ; i++) {
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

//--------------------------------------------------------------------------*

@end
