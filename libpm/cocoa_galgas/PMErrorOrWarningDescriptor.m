//
//  PMErrorOrWarningDescriptor.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 27/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMErrorOrWarningDescriptor.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------*

@implementation PMErrorOrWarningDescriptor

//---------------------------------------------------------------------------*

- (PMErrorOrWarningDescriptor *) initWithMessage: (NSString *) inMessage
                                 location: (NSUInteger) inLocation
                                 isError: (BOOL) inIsError {
  self = [self init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mMessage = inMessage.copy ;
    mLocation = inLocation ;
    mIsError = inIsError ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------*

- (BOOL) isInRange: (NSRange) inRange {
  return NSLocationInRange (mLocation, inRange) ;
}

//---------------------------------------------------------------------------*

- (NSString *) message {
  return mMessage ;
}

//---------------------------------------------------------------------------*

- (BOOL) isError {
  return mIsError ;
}

//---------------------------------------------------------------------------*

- (NSUInteger) location {
  return mLocation ;
}

//---------------------------------------------------------------------------*

- (void) updateLocationForPreviousRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength {
  if (mLocation >= (inEditedRange.location + inEditedRange.length)) {
    mLocation += (NSUInteger) inChangeInLength ;
  }
}

//---------------------------------------------------------------------------*

@end
