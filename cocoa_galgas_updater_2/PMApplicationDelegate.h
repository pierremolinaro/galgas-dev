//
//  PMApplicationDelegate.h
//  canari_updater
//
//  Created by Pierre Molinaro on 19/08/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Security/Security.h>


@interface PMApplicationDelegate : NSObject {
  @protected IBOutlet NSTextField * mStatusTextField ;
  @protected NSTimer * mTimer ;
  @protected NSString * mCurrentCocoaGalgasApplicationPath ;
  
  @protected NSOpenPanel * mLIBPMOpenPanel ;
  @protected AuthorizationRef mAuthorizationRef ;
  @protected NSString * mCurrentOperation ;
  
}

@end
