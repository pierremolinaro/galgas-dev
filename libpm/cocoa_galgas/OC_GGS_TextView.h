//
//  OC_GGS_TextView.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 27/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <AppKit/AppKit.h>

//---------------------------------------------------------------------------*

@interface OC_GGS_TextView : NSTextView {
  @private NSArray * mIssueArray ;
}

- (void) setIssueArray: (NSArray *) inIssueArray ;

- (NSArray *) issueArray ;

@end

//---------------------------------------------------------------------------*
