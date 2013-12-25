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
    mColor = [NSColor blackColor] ;
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
    mColor = [NSColor blackColor] ;
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

- (NSColor *) color {
  return mColor ;
}

//---------------------------------------------------------------------------*

- (void) updateSearchResultForFile: (NSString *) inFilePath
         previousRange: (NSRange) inPreviousRange
         changeInLength: (NSInteger) inChangeInLength {
  // NSLog (@"mFilePath %@, inFilePath %@", mFilePath, inFilePath) ;
  if ((nil != mFilePath) && [mFilePath isEqualToString:inFilePath] && ((mRange.location + mRange.length) > 0)) {
    // NSLog (@"mRange [%lu, %lu], inPreviousRange [%lu, %lu], inChangeInLength %ld", mRange.location, mRange.length, inPreviousRange.location, inPreviousRange.length, inChangeInLength) ;
    if ((inPreviousRange.location + inPreviousRange.length) <= mRange.location) { // Change before
      mRange.location += (NSUInteger) inChangeInLength ;
      // NSLog (@" - Change before -> mRange [%lu, %lu]", mRange.location, mRange.length) ;
    }else if (inPreviousRange.location > (mRange.location + mRange.length)) { // Change after
      // NSLog (@" - Change after") ;
    }else{ // Change within
      mRange.location = 0 ;
      mRange.length = 0 ;
      // NSLog (@" - Change within -> mRange [%lu, %lu]", mRange.location, mRange.length) ;
      [self willChangeValueForKey:@"mColor"] ;
        mColor = [NSColor redColor] ;
      [self didChangeValueForKey:@"mColor"] ;
    }
  }
//---
  for (PMSearchResultDescriptor * d in mEntryArray) {
    [d
      updateSearchResultForFile:inFilePath
      previousRange:inPreviousRange
      changeInLength:inChangeInLength
    ] ;
  }
}

//---------------------------------------------------------------------------*

@end
