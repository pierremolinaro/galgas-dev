//
//  OC_GGS_RulerViewForBuildOutput.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 31/07/12.
//  Copyright (c) 2012 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@interface OC_GGS_RulerViewForBuildOutput : NSRulerView {
  @private NSArray * mIssueArray ;
}

- (void) setIssueArray: (NSArray *) inIssueArray ;
@end

//---------------------------------------------------------------------------*
