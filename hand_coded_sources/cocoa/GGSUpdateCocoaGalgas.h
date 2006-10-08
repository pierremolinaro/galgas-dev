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

@interface GGSUpdateCocoaGalgas : NSObject {

  @private IBOutlet NSView * mUpdateView ;
  
  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox ;
  
  @private IBOutlet NSButton * mCheckNowButton ;
  
  @private IBOutlet NSTextField * mLIBPMStatusTextField ;
  
  @private IBOutlet NSTextField * mLIBPMpathTextField ;

  @private IBOutlet NSTextField * mDownloadTitle ;
  @private IBOutlet NSProgressIndicator * mDownloadProgressIndicator ;
  @private IBOutlet NSTextField * mDownloadSubTitle ;
  @private IBOutlet NSButton * mCancelButton ;
  
  @private BOOL mSearchForUpdatesInBackground ;
}

- (IBAction) setLIPMpathAction: (id) inSender ;

- (IBAction) checkForNewVersion: (id) inSender ;

@end

//--------------------------------------------------------------------------*
