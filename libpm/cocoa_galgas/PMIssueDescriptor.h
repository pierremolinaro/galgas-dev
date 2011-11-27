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

typedef enum {
 kFileOperationIssue,
 kMessageIssue,
 kWarningIssue,
 kErrorIssue
} enumIssueKind ;

//---------------------------------------------------------------------------*

@interface PMIssueDescriptor : NSObject {
  @private enumIssueKind mIssueKind ;
  @private NSString * mMessage ;
  @private NSString * mFilePath ;
  @private NSInteger mLine ;
  @private NSInteger mColumn ;

}

- (PMIssueDescriptor *) initWithMessage: (NSString *) inMessage ;

- (PMIssueDescriptor *) initWithFileOperation: (NSString *) inMessage ;

- (PMIssueDescriptor *) initWithErrorMessage: (NSString *) inMessage
                        file: (NSString *) inFilePath
                        line: (NSInteger) inLine
                        column: (NSInteger) inColumn ;

- (PMIssueDescriptor *) initWithWarningMessage: (NSString *) inMessage
                        file: (NSString *) inFilePath
                        line: (NSInteger) inLine
                        column: (NSInteger) inColumn ;

- (NSString *) issueMessage ;

- (NSString *) issuePath ;

@end

//---------------------------------------------------------------------------*
