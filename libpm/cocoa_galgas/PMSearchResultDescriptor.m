//
//  PMSearchResultDescriptor.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/12/13.
//  Copyright (c) 2013 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMSearchResultDescriptor.h"

//---------------------------------------------------------------------------*

@implementation PMSearchResultDescriptor

//---------------------------------------------------------------------------*

- (PMSearchResultDescriptor *) initWithLine: (NSString *) inLine
    range: (NSRange) inRange
    sourceFilePath: (NSString *) inFilePath {
  self = [self init] ;
  if (self) {
    mFoundItem = inLine ;
    mRange = inRange ;
    mFilePath = inFilePath.copy ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (PMSearchResultDescriptor *) initWithEntries: (NSArray *) inEntryArray
    sourceFilePath: (NSString *) inFilePath {
  self = [self init] ;
  if (self) {
    mFoundItem = inFilePath.copy ;
    mEntryArray = inEntryArray ;
    mFilePath = inFilePath.copy ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (NSRange) range {
  return mRange ;
}

//---------------------------------------------------------------------------*

- (NSString *) foundItem {
  return mFoundItem ;
}

//---------------------------------------------------------------------------*

- (NSString *) filePath {
  return mFilePath ;
}

//---------------------------------------------------------------------------*

- (NSString *) countString {
  return (mEntryArray.count > 0) ? [NSString stringWithFormat:@"%lu", mEntryArray.count] : nil ;
}

//---------------------------------------------------------------------------*

- (BOOL) boldDisplay {
  return mEntryArray.count > 0 ;
}

//---------------------------------------------------------------------------*

- (NSArray *) children {
  return mEntryArray ;
}

//---------------------------------------------------------------------------*

- (void) updateSearchResultForFile: (NSString *) inFilePath
         previousRange: (NSRange) inPreviousRange
         changeInLength: (NSInteger) inChangeInLength {
  // NSLog (@"mFilePath %@, inFilePath %@", mFilePath, inFilePath) ;
  if (nil == mFilePath) {
    for (PMSearchResultDescriptor * d in mEntryArray) {
      [d
        updateSearchResultForFile:inFilePath
        previousRange:inPreviousRange
        changeInLength:inChangeInLength
      ] ;
    }
  }else if ([mFilePath isEqualToString:inFilePath]) {
    if ((inPreviousRange.location + inPreviousRange.length) <= mRange.location) { // Change before
      mRange.location += (NSUInteger) inChangeInLength ;
    }
  }
}

//---------------------------------------------------------------------------*

@end
