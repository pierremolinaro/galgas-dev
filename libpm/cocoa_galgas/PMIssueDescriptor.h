//
//  PMIssueDescriptor.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 07/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface PMIssueDescriptor : NSObject {
  @private BOOL mIsError ;
  @private NSString * mMessage ;
  @private NSURL * mURL ;
  @private NSInteger mLine ;
  @private NSInteger mColumn ;
  @private NSInteger mLocationInOutputData ;

}

- (PMIssueDescriptor *) initWithMessage: (NSString *) inMessage
                        URL: (NSURL *) inURL
                        line: (NSInteger) inLine
                        column: (NSInteger) inColumn
                        isError: (BOOL) inIsError
                        locationInOutputData: (NSInteger) inLocationInOutputData ;

- (NSString *) issueMessage ;

- (NSURL *) issueURL ;

- (BOOL) isError ;

- (NSInteger) issueLine ;

- (NSInteger) issueColumn ;

- (NSInteger) locationInOutputData ;

- (void) updateLocationForPreviousRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength ;
@end

//---------------------------------------------------------------------------*
