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

//--------------------------------------------------------------------------*

@implementation GGSUpdateCocoaGalgas

//---------------------------------------------------------------------------*

- (NSString *) libpmArchiveName {
  return @"libpm-lf.tar.bz2" ;
}

//---------------------------------------------------------------------------*

- (NSString *) galgasUpdaterArchiveName {
  return @"cocoa_galgas_updater.app.tar.bz2" ;
}

//---------------------------------------------------------------------------*

- (NSString *) galgasArchiveName {
  return @"cocoaGalgas.app.tar.bz2" ;
}

//---------------------------------------------------------------------------*

- (NSString *) serverHTTPPath {
  return @"http://galgas.rts-software.org/download/TEMPORAIRE" ;
}

//---------------------------------------------------------------------------*

- (NSString *) lastReleaseHTTPPath {
  return [[self serverHTTPPath] stringByAppendingString:@"/lastRelease2.php"] ;
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

- (NSString *) temporaryPathForLIBPMArchive {
  return [NSString stringWithFormat:@"%@/%@", [self temporaryDir], [self libpmArchiveName]] ;
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
    for (i=0 ; (i<[components count]) && (result == NSOrderedSame) ; i++) {
      const int version = [[components objectAtIndex:i] intValue] ;
      const int otherVersion = [[otherComponents objectAtIndex:i] intValue] ;
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

- (void) updateLIBPMstatus {
  NSFileManager * fm = [NSFileManager defaultManager] ;
  BOOL isDirectory = NO ;
  NSString * libpmPath = [[NSUserDefaults standardUserDefaults] stringForKey:@"libpmPath"] ;
  NSString * libpmVersionFilePath = [NSString stringWithFormat:@"%@/version.txt", libpmPath] ;
  if ([libpmPath length] == 0) {
    [mLIBPMStatusTextField setStringValue:@"The path is empty."] ;
    [mLIBPMStatusTextField setTextColor:[NSColor redColor]] ;
  }else if (! [fm fileExistsAtPath:libpmPath isDirectory:& isDirectory]) {
    [mLIBPMStatusTextField setStringValue:@"The path does not exist."] ;
    [mLIBPMStatusTextField setTextColor:[NSColor redColor]] ;
  }else if (! isDirectory) {
    [mLIBPMStatusTextField setStringValue:@"The path is not a directory."] ;
    [mLIBPMStatusTextField setTextColor:[NSColor redColor]] ;
  }else if (! [fm fileExistsAtPath:libpmVersionFilePath]) {
    [mLIBPMStatusTextField setStringValue:@"The path exists, but libpm version is unknown."] ;
    [mLIBPMStatusTextField setTextColor:[NSColor orangeColor]] ;
  }else{
    NSString * version = [NSString
      stringWithContentsOfFile:libpmVersionFilePath
    ] ;
    NSString * s = [NSString stringWithFormat:@"libpm build number: %@", version] ;
    [mLIBPMStatusTextField setStringValue:s] ;
    [mLIBPMStatusTextField setTextColor:[NSColor blackColor]] ;
  }
}

//--------------------------------------------------------------------------*

- (void) awakeFromNib {
//--- Remove tempary dir, if it exists
  NSFileManager * fm = [NSFileManager defaultManager] ;
  if ([fm fileExistsAtPath:[self temporaryDir]]) {
    [fm removeFileAtPath:[self temporaryDir] handler:nil] ;
  }
//--- Add Update Tab view
  NSTabView * prefsTabView = [gCocoaGalgasPreferencesController preferencesTabView] ;
  NSTabViewItem * updateTabViewItem = [[NSTabViewItem alloc] init] ;
  [updateTabViewItem setView:mUpdateView] ;
  [updateTabViewItem setLabel:@"Update"] ;
  [prefsTabView addTabViewItem:updateTabViewItem] ;
  [updateTabViewItem release] ;
//--- Add bindings
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
  [mCheckUpdateAtStartUpCheckBox
    bind:@"value"
    toObject:ud
    withKeyPath:@"checkUpdateAtStartUp"
    options:nil
  ] ;
  [mLIBPMpathTextField
    bind:@"value"
    toObject:ud
    withKeyPath:@"libpmPath"
    options:nil
  ] ;
//--- Add observers
  [[NSUserDefaultsController sharedUserDefaultsController]
    addObserver:self
    forKeyPath:@"values.libpmPath"
    options:0
    context:NULL
  ] ;
//--- Update status
  [self updateLIBPMstatus] ;
//--- Search for update defined ? If not, force to YES
  if ([ud objectForKey:@"checkUpdateAtStartUp"] == nil) {
    [ud setBool:YES forKey:@"checkUpdateAtStartUp"] ;
  }
//--- Search for update ?
  if ([ud boolForKey:@"checkUpdateAtStartUp"]) {
    [self checkForNewVersion:nil] ;
  }
}

//--------------------------------------------------------------------------*

- (void)observeValueForKeyPath: (NSString *) inKeyPath
        ofObject:(id)object
        change:(NSDictionary *)change
        context:(void *)context {
  if ([inKeyPath isEqualToString:@"values.libpmPath"]) {
    [self updateLIBPMstatus] ;
  }
}

//--------------------------------------------------------------------------*
//                                                                          *
//            Set LIBPM Path                                                *
//                                                                          *
//--------------------------------------------------------------------------*

- (IBAction) setLIPMpathAction: (id) inSender {
  NSOpenPanel * op = [NSOpenPanel openPanel] ;
  [op setCanChooseDirectories:YES] ;
  [op setCanChooseFiles:NO] ;
  [op setAllowsMultipleSelection:NO] ;
  [op
    beginSheetForDirectory:[[NSUserDefaults standardUserDefaults] stringForKey:@"libpmPath"]
    file:@""
    types:nil
    modalForWindow:[mLIBPMpathTextField window]
    modalDelegate:self
    didEndSelector:@selector (openPanelDidEnd:returnCode:contextInfo:)
    contextInfo:NULL
  ] ;
}

//--------------------------------------------------------------------------*

- (void) openPanelDidEnd:(NSOpenPanel *) inPanel
         returnCode:(int) inReturnCode
         contextInfo:(void *) contextInfo {
  // NSLog (@"inReturnCode %d", inReturnCode) ;
  if (inReturnCode == NSOKButton) {
    //NSLog (@"filenames %@", [inPanel filenames]) ;
    NSString * newPath = [[inPanel filenames] objectAtIndex:0] ;
    [[NSUserDefaults standardUserDefaults] setObject:newPath forKey:@"libpmPath"] ;
  }
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
//  [[NSUserDefaults standardUserDefaults] setObject:[NSDate date] forKey:@"lastCheckDate"] ;
  [[PMDownloadData alloc]
    initWithURLString:[self lastReleaseHTTPPath]
    delegate:self
    downloadDidEndSelector:@selector (downloadAllAvailableGalgasVersion:)
    userInfo:nil
  ] ;
}

//--------------------------------------------------------------------------*

- (void) downloadAllAvailableGalgasVersion: (PMDownloadData *) inDownloader {
  [mCheckNowButton setEnabled:YES] ;
  NSString * errorString = [inDownloader downloadErrorString] ;
  if (errorString != nil) {
    if (! mSearchForUpdatesInBackground) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot connect to the server."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"Reason: '%@'.", errorString
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
    const BOOL ok = [scanner scanInt:NULL]
                 && [scanner scanString:@"." intoString:NULL]
                 && [scanner scanInt:NULL]
                 && [scanner scanString:@"." intoString:NULL]
                 && [scanner scanInt:NULL]
                 && [scanner isAtEnd] ;
    if (ok) {
    //--- Get Galgas Current version
      NSBundle * mainBundle = [NSBundle mainBundle] ;
      NSDictionary * infoDictionary = [mainBundle infoDictionary] ;
      NSString * galgasVersion = [infoDictionary objectForKey:@"CFBundleShortVersionString"] ;
      // NSLog (@"galgasVersion '%@'", galgasVersion) ;
      //galgasVersion = @"1.2.3" ;
      NSComparisonResult r = [self compareVersionString:galgasVersion withVersionString:lastAvailableVersion] ;
      if (r == NSOrderedAscending) {
        NSAlert * alert = [NSAlert
          alertWithMessageText:@"A new version of GALGAS is available."
          defaultButton:@"Download and Install"
          alternateButton:@"Cancel"
          otherButton:nil
          informativeTextWithFormat:@"Current version is %@; the %@ version can be downloaded.", galgasVersion, lastAvailableVersion
        ] ;
	[lastAvailableVersion retain] ;
        [alert
          beginSheetModalForWindow:nil
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
          beginSheetModalForWindow:nil
          modalDelegate:nil
          didEndSelector:NULL
          contextInfo:NULL
        ] ;
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

- (void) newVersionIsAvailableAlertDidEnd:(NSAlert *) alert
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
  NSString * domain = [inError domain] ;
  NSAlert * alert = [NSAlert
    alertWithMessageText:@"Download error."
    defaultButton:@"Ok"
    alternateButton:nil
    otherButton:nil
    informativeTextWithFormat:@"The following error occurs: %@.", domain
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
    //--- Start download LIBPM
      NSString * lastAvailableVersion = [inDownloader userInfo] ;
      [mDownloadTitle setStringValue:[NSString stringWithFormat:@"Downloading libpm for GALGAS %@...", lastAvailableVersion]] ;
      [[PMDownloadFile alloc] initWithURLString:[self libpmHTTPPathForVersion:lastAvailableVersion]
         destinationFileName:[self temporaryPathForLIBPMArchive]
         downloadDelegate:self
         downloadDidEndSelector:@selector (downloadNewVersionOfLIBPMDidEnd:)
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

- (void) downloadNewVersionOfLIBPMDidEnd: (PMDownloadFile *) inDownloader {
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
        [mDownloadSubTitle setStringValue:[NSString stringWithFormat:@"Uncompressing libpm archive"]] ;
        [[mCancelButton window] displayIfNeeded] ;
        status = [self uncompressArchive:[self temporaryPathForLIBPMArchive]] ;
      }
      if (status == 0) {
        [mDownloadSubTitle setStringValue:[NSString stringWithFormat:@"Uncompressing cocoa Galgas Updater archive"]] ;
        [[mCancelButton window] displayIfNeeded] ;
        status = [self uncompressArchive:[self temporaryPathForGalgasUpdaterArchive]] ;
      }
      if (status == 0) {
	NSString * filePath = [NSString stringWithFormat:@"%@/cocoa_galgas_path.txt", [self temporaryDir]] ;
        NSString * cocoaGalgasPath = [[NSBundle mainBundle] bundlePath] ;
        status = ! [cocoaGalgasPath writeToFile:filePath atomically:YES] ;
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

- (void) lauchGalgasUpdaterAlertDidEnd:(NSAlert *) alert
         returnCode:(int) inReturnCode
	 contextInfo:(void  *) inContextInfo {
  if (inReturnCode == YES) {
    NSString * galgasUpdaterApp = [[[self temporaryPathForGalgasUpdaterArchive] stringByDeletingPathExtension] stringByDeletingPathExtension] ;
    NSWorkspace * ws = [NSWorkspace sharedWorkspace] ;
    BOOL ok = [ws launchApplication:galgasUpdaterApp] ;
    if (ok) {
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

@end
