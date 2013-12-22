//
//  PMSearchResultDescriptor.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/12/13.
//  Copyright (c) 2013 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@interface PMSearchResultDescriptor : NSObject {
  @private NSString * mFoundItem ;
  @private NSRange mRange ;
  @private NSString * mFilePath ;
  @private NSArray * mEntryArray ;
}

- (PMSearchResultDescriptor *) initWithLine: (NSString *) inLine
    range: (NSRange) inRange
    sourceFilePath: (NSString *) inFilePath ;

- (PMSearchResultDescriptor *) initWithEntries: (NSArray *) inEntryArray
    sourceFilePath: (NSString *) inFilePath ;

- (NSString *) foundItem ;

- (NSString *) filePath ;

- (NSString *) countString ;

- (NSRange) range ;

- (BOOL) boldDisplay ;

- (NSArray *) children ;

- (void) updateSearchResultForFile: (NSString *) inFilePath
         previousRange: (NSRange) inPreviousRange
         changeInLength: (NSInteger) inChangeInLength ;

@end

//---------------------------------------------------------------------------*
