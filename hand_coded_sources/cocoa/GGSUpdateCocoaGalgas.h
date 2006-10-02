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
  
  @private IBOutlet NSTextField * mLastCheckDateTextField ;
  
  @private IBOutlet NSTextField * mLIBPMStatusTextField ;
  
  @private IBOutlet NSTextField * mLIBPMpathTextField ;
}

- (IBAction) setLIPMpathAction: (id) inSender ;

- (IBAction) checkForNewVersion: (id) inSender ;

@end

//--------------------------------------------------------------------------*
