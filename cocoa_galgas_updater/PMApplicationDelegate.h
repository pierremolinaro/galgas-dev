//
//  PMApplicationDelegate.h
//  canari_updater
//
//  Created by Pierre Molinaro on 19/08/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PMApplicationDelegate : NSObject {
  @protected IBOutlet NSTextField * mStatusTextField ;
  @protected NSTimer * mTimer ;
  @protected NSString * mCurrentCocoaGalgasApplicationPath ;
}

@end
