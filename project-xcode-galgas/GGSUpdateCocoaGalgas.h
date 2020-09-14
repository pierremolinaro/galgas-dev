//
//  GGSUpdateCocoaGalgas.h
//  galgas
//
//  Created by Pierre MOLINARO on 02/10/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//
//----------------------------------------------------------------------------------------------------------------------

@class WebView ;

//----------------------------------------------------------------------------------------------------------------------

#import <Cocoa/Cocoa.h>

//----------------------------------------------------------------------------------------------------------------------

@interface GGSUpdateCocoaGalgas : NSObject {
//--- In New Available Panel
  @private IBOutlet NSObject * mSparkleUpdater ;
  @private IBOutlet NSTextField * mSparkleVersionTextField ;
  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox ;


  @private IBOutlet NSView * mViewForChangeLogInPreferencePane ;
  @private IBOutlet WebView * mChangeLogInPreferencePaneWebView ;
  @private IBOutlet NSView * mUpdateView ;
  
//--- Install CLI tool
  @private IBOutlet NSTextField * mCLIToolInstallationPath ;

//--- Create new project
  @private IBOutlet NSTextView * mResultTextView ;
  @private NSTask * mTask ;
  @private NSPipe * mPipe ;
  @private NSMutableData * mResultData ;
}


- (IBAction) performCLIToolInstallation: (id) inSender ;

- (IBAction) performCLIToolRemove: (id) inSender ;

@end

//----------------------------------------------------------------------------------------------------------------------
