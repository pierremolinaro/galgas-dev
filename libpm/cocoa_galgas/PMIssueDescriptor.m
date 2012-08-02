//
//  PMIssueDescriptor.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 07/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMIssueDescriptor.h"
#import "PMCocoaCallsDebug.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------*

@implementation PMIssueDescriptor

//---------------------------------------------------------------------------*

- (void) normalizeMessage {
  while ((mMessage.length > 1) && ([mMessage characterAtIndex:mMessage.length-1] == '\n')) {
    mMessage = [mMessage substringToIndex:mMessage.length-1] ;
  }
  while ((mMessage.length > 0) && ([mMessage characterAtIndex:0] == '\n')) {
    mMessage = [mMessage substringFromIndex:1] ;
  }
}

//---------------------------------------------------------------------------*

- (PMIssueDescriptor *) initWithMessage: (NSString *) inMessage
                        URL: (NSURL *) inURL
                        line: (NSInteger) inLine
                        column: (NSInteger) inColumn
                        isError: (BOOL) inIsError
                        locationInOutputData: (NSInteger) inLocationInOutputData {
  self = [self init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mMessage = inMessage.copy ;
    mURL = inURL.copy ;
    mLine = inLine ;
    mColumn = inColumn ;
    mIsError = inIsError ;
    mLocationInOutputData = inLocationInOutputData ;
    [self normalizeMessage] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------*

- (NSString *) issueMessage {
  return mMessage ;
}

//---------------------------------------------------------------------------*

- (NSURL *) issueURL {
  return mURL ;
}

//---------------------------------------------------------------------------*

- (BOOL) isError {
  return mIsError ;
}

//---------------------------------------------------------------------------*

- (NSInteger) issueLine {
  return mLine ;
}

//---------------------------------------------------------------------------*

- (NSInteger) issueColumn {
  return mColumn ;
}

//---------------------------------------------------------------------------*

- (NSInteger) locationInOutputData {
  return mLocationInOutputData ;
}

//---------------------------------------------------------------------------*

- (NSColor *) issueColor {
  return mIsError ? [NSColor redColor] : [NSColor orangeColor] ;
}

//---------------------------------------------------------------------------*

- (void) updateLocationForPreviousRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength {
  if (((NSUInteger) mLocationInOutputData) >= (inEditedRange.location + inEditedRange.length)) {
    mLocationInOutputData += (NSUInteger) inChangeInLength ;
  }
}
//---------------------------------------------------------------------------*

@end
