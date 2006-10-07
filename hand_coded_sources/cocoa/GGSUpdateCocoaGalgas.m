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

- (NSString *) serverHTTPPath {
  return @"http://galgas.rts-software.org/download/TEMPORAIRE" ;
}

//---------------------------------------------------------------------------*

- (NSString *) lastReleaseHTTPPath {
  return [[self serverHTTPPath] stringByAppendingString:@"/lastRelease.php"] ;
}

//---------------------------------------------------------------------------*

- (NSString *) galgasHTTPPathForVersion: (NSString *) inVersionString {
  return [NSString stringWithFormat:@"%@/%@/cocoaGalgas.tar.bz2", [self serverHTTPPath], inVersionString] ;
}

//---------------------------------------------------------------------------*

- (NSString *) temporaryDir {
  return @"/tmp/TEMPORARY_DIR_FOR_GALGAS" ;
}

//---------------------------------------------------------------------------*

- (NSString *) temporaryPathForGALGASArchive {
  return [[self temporaryDir] stringByAppendingString:@"/cocoaGalgas.tar.bz2"] ;
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
      encoding:NSASCIIStringEncoding
      error:nil
    ] ;
    NSString * s = [NSString stringWithFormat:@"libpm build number: %@", version] ;
    [mLIBPMStatusTextField setStringValue:s] ;
    [mLIBPMStatusTextField setTextColor:[NSColor blackColor]] ;
  }
}

//--------------------------------------------------------------------------*

- (void) awakeFromNib {
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
  [mLastCheckDateTextField
    bind:@"value"
    toObject:ud
    withKeyPath:@"lastCheckDate"
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
//                                                                          *
//            Check for new version                                         *
//                                                                          *
//--------------------------------------------------------------------------*

- (IBAction) checkForNewVersion: (id) inSender {
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
  NSString * errorString = [inDownloader downloadErrorString] ;
  if (errorString != nil) {
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
  }else{
    NSString * lastAvailableVersion = [[NSString alloc] initWithData:[inDownloader downloadedData] encoding:NSASCIIStringEncoding] ;
    NSLog (@"Last Available Version: '%@'", lastAvailableVersion) ;
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
      NSLog (@"galgasVersion '%@'", galgasVersion) ;
      galgasVersion = @"1.2.3" ;
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
      }else{
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
    }else{
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
    if (! [fm fileExistsAtPath:[self temporaryDir]]) {
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
  }
  [lastAvailableVersion release] ;
}

//--------------------------------------------------------------------------*

- (void) downloadNewVersionOfGALGASDidEnd: (PMDownloadFile *) inDownloader {

}

@end
