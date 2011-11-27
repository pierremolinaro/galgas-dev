//
//  PMErrorOrWarningDescriptor.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 27/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PMErrorOrWarningDescriptor : NSObject {
  @private BOOL mIsError ;
  @private NSString * mMessage ;
  @private NSUInteger mLocation ;
}

- (PMErrorOrWarningDescriptor *) initWithMessage: (NSString *) inMessage
                                 location: (NSUInteger) inLocation
                                 isError: (BOOL) inIsError ;

- (BOOL) isInRange: (NSRange) inRange ;

- (BOOL) isError ;

- (NSUInteger) location ;

- (void) updateLocationForEditedRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength ;

@end
