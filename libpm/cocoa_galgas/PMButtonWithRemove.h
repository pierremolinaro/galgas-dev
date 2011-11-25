//
//  PMButtonWithRemove.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 25/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface PMButtonWithRemove : NSButton {
  @private BOOL mMouseWithin ;
  @private BOOL mMouseDown ;
  @private NSTrackingArea * mTrackingArea ;
}

@end
