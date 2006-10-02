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

//--------------------------------------------------------------------------*

@implementation GGSUpdateCocoaGalgas

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
    initWithURLString:@"http://galgas.rts-software.org/download/lastRelease.php"
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
      beginSheetModalForWindow:[mLIBPMpathTextField window]
      modalDelegate:nil
      didEndSelector:NULL
      contextInfo:NULL
    ] ;
  }else{
    NSString * s = [[NSString alloc] initWithData:[inDownloader downloadedData] encoding:NSASCIIStringEncoding] ;
    //NSLog (@"downloadedData %@", s) ;
  //--- Check Response
    NSScanner * scanner = [NSScanner scannerWithString:s] ;
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

    }else{
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Cannot get last release number."
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"The server answered in an incomprehensible way: '%@'.", s
      ] ;
      [alert
        beginSheetModalForWindow:[mLIBPMpathTextField window]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }
  [inDownloader release] ;
}

//--------------------------------------------------------------------------*

@end
