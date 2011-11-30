//
//  OC_GGS_BuildTask.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 30/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OC_GGS_Document ;

@interface OC_GGS_BuildTask : NSObject {
  @private NSMutableData * mBufferedInputData ;
  @private NSArrayController * mIssueArrayController ;
  @private NSTask * mTask ;
}

- (BOOL) buildTaskIsRunning ;
- (BOOL) buildTaskIsNotRunning ;

+ (OC_GGS_BuildTask *) sharedBuildTask ;

- (NSArrayController *) issueArrayController ;

- (void) buildDocument: (OC_GGS_Document *) inDocument ;

- (void) stopBuild ;


@end
