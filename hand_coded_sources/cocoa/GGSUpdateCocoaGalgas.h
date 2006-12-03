//
//  GGSUpdateCocoaGalgas.h
//  galgas
//
//  Created by Pierre MOLINARO on 02/10/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//
//--------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//--------------------------------------------------------------------------*

@class WebView ;

//--------------------------------------------------------------------------*

@interface GGSUpdateCocoaGalgas : NSObject {
//--- In New Available Panel
  @private IBOutlet NSPanel * mNewAvailableVersionPanel ;
  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox2 ;
  @private IBOutlet NSButton * mPerformUpdateButton ;
  @private IBOutlet NSTextField * mNewVersionTextField ;
  @private IBOutlet WebView * mChangeLogWebView ;
  
  @private IBOutlet NSView * mUpdateView ;
  
  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox ;
  
  @private IBOutlet NSButton * mCheckNowButton ;
  
  @private IBOutlet NSTextField * mLIBPMStatusTextField ;
  
  @private IBOutlet NSTextField * mLIBPMpathTextField ;

  @private IBOutlet NSTextField * mDownloadTitle ;
  @private IBOutlet NSProgressIndicator * mDownloadProgressIndicator ;
  @private IBOutlet NSTextField * mDownloadSubTitle ;
  @private IBOutlet NSButton * mCancelButton ;

//--- Install CLI tool
  @private IBOutlet NSTextField * mCLIToolInstallationPath ;

//---  
  @private BOOL mSearchForUpdatesInBackground ;
}

- (IBAction) setLIPMpathAction: (id) inSender ;

- (IBAction) resetLIPMpathAction: (id) inSender ;

- (IBAction) checkForNewVersion: (id) inSender ;

- (IBAction) performCLIToolInstallation: (id) inSender ;

- (IBAction) performCLIToolRemove: (id) inSender ;

@end

//--------------------------------------------------------------------------*
