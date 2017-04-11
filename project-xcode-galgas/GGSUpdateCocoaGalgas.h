//
//  GGSUpdateCocoaGalgas.h
//  galgas
//
//  Created by Pierre MOLINARO on 02/10/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//
//--------------------------------------------------------------------------*

#import "PMDownloadFile.h"

//--------------------------------------------------------------------------*

@class WebView ;
@class PMDownloadData ;
@class PMDownloadFile ;

//--------------------------------------------------------------------------*

@interface GGSUpdateCocoaGalgas : NSObject <PMDownloadDelegate> {
//--- In New Available Panel
//  @private IBOutlet NSPanel * mNewAvailableVersionPanel ;
  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox2 ;
  @private IBOutlet NSButton * mPerformUpdateButton ;
  @private IBOutlet NSTextField * mNewVersionTextField ;
  @private IBOutlet WebView * mChangeLogWebView ;
  @private IBOutlet NSView * mViewForChangeLogInPreferencePane ;
  @private IBOutlet WebView * mChangeLogInPreferencePaneWebView ;
  
  @private IBOutlet NSView * mUpdateView ;
  
  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox ;
  
  @private IBOutlet NSButton * mCheckNowButton ;
  
  @private IBOutlet NSTextField * mDownloadTitle ;
  @private IBOutlet NSProgressIndicator * mDownloadProgressIndicator ;
  @private IBOutlet NSTextField * mDownloadSubTitle ;
  @private IBOutlet NSButton * mCancelButton ;

//--- Install CLI tool
  @private IBOutlet NSTextField * mCLIToolInstallationPath ;

//---  
  @private BOOL mSearchForUpdatesInBackground ;
  
  @private PMDownloadData * mDownloadData ;
  @private PMDownloadFile * mDownloadFile ;
  @private NSString * mLastAvailableVersion ;

//--- Create new project
  @private IBOutlet NSTextView * mResultTextView ;
  @private NSTask * mTask ;
  @private NSPipe * mPipe ;
  @private NSMutableData * mResultData ;
}

@property(atomic) IBOutlet NSPanel * mNewAvailableVersionPanel ;

- (IBAction) checkForNewVersion: (id) inSender ;

- (IBAction) performCLIToolInstallation: (id) inSender ;

- (IBAction) performCLIToolRemove: (id) inSender ;

@end

//--------------------------------------------------------------------------*
