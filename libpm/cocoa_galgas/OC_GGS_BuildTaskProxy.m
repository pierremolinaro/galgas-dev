//
//  OC_GGS_BuildTaskProxy.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 30/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_BuildTaskProxy.h"
#import "OC_GGS_BuildTask.h"
#import "PMIssueDescriptor.h"
#import "PMCocoaCallsDebug.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_GGS_Document.h"
#import "OC_GGS_PreferencesController.h"

//---------------------------------------------------------------------------*

#include <netdb.h>
#include <netinet/in.h>

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

@implementation OC_GGS_BuildTaskProxy

//---------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    mIssueArrayController = [NSArrayController new] ;
    mPreviousBuildTasks = [NSMutableSet new] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) purgePreviousBuildTasks {
  const NSUInteger n = mPreviousBuildTasks.count ;
  NSMutableString * s = [NSMutableString new] ;
  NSArray * allTasks = [mPreviousBuildTasks allObjects] ;
  [mPreviousBuildTasks removeAllObjects] ;
  for (NSUInteger idx = 0 ; idx < allTasks.count ; idx ++) {
    if (! [[allTasks objectAtIndex:idx] isCompleted]) {
      [mPreviousBuildTasks addObject:[allTasks objectAtIndex:idx]] ;
      [s appendString:[[allTasks objectAtIndex:idx] runningStatus]] ;
    }  
  }
  NSLog (@"BUILD TASKS : %lu -> %lu%@", n, mPreviousBuildTasks.count, s) ;
}

//---------------------------------------------------------------------------*

- (void) noteBuildTaskTermination: (OC_GGS_BuildTask *) inBuildTask {
  [mPreviousBuildTasks addObject:inBuildTask] ;
  if (mBuildTask == inBuildTask) {
    [self willChangeValueForKey:@"buildTaskIsRunning"] ;
    [self willChangeValueForKey:@"buildTaskIsNotRunning"] ;
    mBuildTask = nil ;
    [self didChangeValueForKey:@"buildTaskIsNotRunning"] ;
    [self didChangeValueForKey:@"buildTaskIsRunning"] ;
  }
  [self purgePreviousBuildTasks] ;
}

//---------------------------------------------------------------------------*

- (BOOL) buildTaskIsRunning {
  return nil != mBuildTask ;
}

//---------------------------------------------------------------------------*

- (BOOL) buildTaskIsNotRunning {
  return nil == mBuildTask ;
}

//---------------------------------------------------------------------------*

- (NSArrayController *) issueArrayController {
  return mIssueArrayController ;
}

//---------------------------------------------------------------------------*

- (void) setWarningCount: (NSUInteger) inCount {
  [self willChangeValueForKey:@"warningCountString"] ;
  mWarningCount = inCount ;
  [self didChangeValueForKey:@"warningCountString"] ;
}

//---------------------------------------------------------------------------*

- (NSString *) warningCountString {
  NSString * result = @"" ;
  if (mWarningCount > 0) {
    result = [NSString stringWithFormat:@"%lu", mWarningCount] ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (void) setErrorCount: (NSUInteger) inCount {
  [self willChangeValueForKey:@"errorCountString"] ;
  mErrorCount = inCount ;
  [self didChangeValueForKey:@"errorCountString"] ;
}

//---------------------------------------------------------------------------*

- (NSString *) errorCountString {
  NSString * result = @"" ;
  if (mErrorCount > 0) {
    result = [NSString stringWithFormat:@"%lu", mErrorCount] ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (void) XMLIssueAnalysis: (NSData *) inXMLdata {
  if (inXMLdata.length > 0) {
    NSError * error = nil ;
    NSXMLDocument * xmlDoc = [[NSXMLDocument alloc]
      initWithData:inXMLdata
      options:0
      error:& error
    ] ;
    NSArray * issues = nil ;
    if (nil == error) {
      issues = xmlDoc.rootElement.children ;
    }
    NSMutableArray * issueArray = [NSMutableArray new] ;
    NSUInteger errorCount = 0 ;
    NSUInteger warningCount = 0 ;
    for (NSXMLNode * node in issues) {
      if (nil == node.name) {
        NSString * message = [node stringValue] ;
        PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithMessage:message] ;
        [issueArray addObject:issue] ;
      }else if ([@"message" isEqualToString:node.name]) {
        NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
        PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithMessage:message] ;
        [issueArray addObject:issue] ;
      }else if ([@"fileOperation" isEqualToString:node.name]) {
        NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
        PMIssueDescriptor * issue = [[PMIssueDescriptor alloc] initWithFileOperation:message] ;
        [issueArray addObject:issue] ;
      }else if ([@"error" isEqualToString:node.name]) {
        errorCount ++ ;
        NSArray * a = [node nodesForXPath:@"./@file" error:nil] ;
        NSString * file = (a.count == 1) ? [[a objectAtIndex:0 HERE] stringValue] : @"" ;
        a = [node nodesForXPath:@"./@line" error:nil] ;
        NSInteger line = (a.count == 1) ? [[[a objectAtIndex:0 HERE] stringValue] integerValue] : 0 ;
        a = [node nodesForXPath:@"./@column" error:nil] ;
        NSInteger column = (a.count == 1) ? [[[a objectAtIndex:0 HERE] stringValue] integerValue] : 0 ;
        NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
        PMIssueDescriptor * issue = [[PMIssueDescriptor alloc]
          initWithErrorMessage:message
          URL:[NSURL fileURLWithPath:file]
          line:line
          column:column
        ] ;
        [issueArray addObject:issue] ;
      }else if ([@"warning" isEqualToString:node.name]) {
        warningCount ++ ;
        NSString * file = [[[node nodesForXPath:@"./@file" error:nil] objectAtIndex:0 HERE] stringValue] ;
        NSInteger line = [[[[node nodesForXPath:@"./@line" error:nil] objectAtIndex:0 HERE] stringValue] integerValue] ;
        NSInteger column = [[[[node nodesForXPath:@"./@column" error:nil] objectAtIndex:0 HERE] stringValue] integerValue] ;
        NSString * message = [[[node nodesForXPath:@"./@message" error:nil] objectAtIndex:0 HERE] stringValue] ;
        PMIssueDescriptor * issue = [[PMIssueDescriptor alloc]
          initWithWarningMessage:message
          URL:[NSURL fileURLWithPath:file]
          line:line
          column:column
        ] ;
        [issueArray addObject:issue] ;
      }
    }
    //NSLog (@"issueArray %lu", issueArray.count) ;
    [mIssueArrayController setContent:issueArray] ;
  //--- Send issues to concerned text source coloring objects
    for (OC_GGS_Document * doc in [[NSDocumentController sharedDocumentController] documents]) {
      [doc.textSyntaxColoring setIssueArray:issueArray] ;
    }
  //---
    if (nil != error) {
      [NSApp presentError:error] ;
    }
  //---
    [self setErrorCount:errorCount] ;
    [self setWarningCount:warningCount] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Build

//---------------------------------------------------------------------------*
//                                                                           *
//    C O M P I L E                                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) sendTaskOutputString: (NSString *) inString {
  NSDictionary * d = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSFont fontWithName:@"Courier" size:13.0], NSFontAttributeName,
    nil
  ] ;
  NSAttributedString * attributedString = [[NSAttributedString alloc]
    initWithString:inString
    attributes:d
  ] ;
  for (OC_GGS_Document * doc in [[NSDocumentController sharedDocumentController] documents]) {
    [doc setRawOutputString:attributedString] ;
  }
}

//---------------------------------------------------------------------------*

- (void) abortBuild {
  if (nil != mBuildTask) {
    #ifdef DEBUG_MESSAGES
      NSLog (@"%s", __PRETTY_FUNCTION__) ;
    #endif
  //---
    [mBuildTask terminate] ;
    [mPreviousBuildTasks addObject:mBuildTask] ;
  //---    
    [self willChangeValueForKey:@"buildTaskIsRunning"] ;
    [self willChangeValueForKey:@"buildTaskIsNotRunning"] ;
    mBuildTask = nil ;
    [self didChangeValueForKey:@"buildTaskIsNotRunning"] ;
    [self didChangeValueForKey:@"buildTaskIsRunning"] ;
  //---
    [self sendTaskOutputString:@"Build has been aborted"] ;
  }
}

//---------------------------------------------------------------------------*

- (void) noteStandardOutputData: (NSData *) inData {
  NSString * message = [[NSString alloc] initWithData:inData encoding:NSUTF8StringEncoding] ;
  [self sendTaskOutputString:message] ;
}

//---------------------------------------------------------------------------*

- (void) noteSocketData: (NSData *) inData {
  [self XMLIssueAnalysis:inData] ;
}

//---------------------------------------------------------------------------*

- (void) buildDocument: (OC_GGS_Document *) inDocument {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if (nil != mBuildTask) {
    [mPreviousBuildTasks addObject:mBuildTask] ;
    [mBuildTask terminate] ;
  }
  [self purgePreviousBuildTasks] ;
//---
  [self sendTaskOutputString:@"Compiling…"] ;
  [[NSDocumentController sharedDocumentController] saveAllDocuments:self] ;
  [inDocument displayIssueDetailedMessage:nil] ;
  [mIssueArrayController setContent:[NSArray array]] ;
//--- Create task
  [self willChangeValueForKey:@"buildTaskIsRunning"] ;
  [self willChangeValueForKey:@"buildTaskIsNotRunning"] ;
  mBuildTask = [[OC_GGS_BuildTask alloc]
    initWithDocument:inDocument
    proxy:self
    index:mTaskIndex
  ] ;
  mTaskIndex ++ ;
  [self didChangeValueForKey:@"buildTaskIsNotRunning"] ;
  [self didChangeValueForKey:@"buildTaskIsRunning"] ;
  [self setWarningCount:0] ;
  [self setErrorCount:0] ;
}

//---------------------------------------------------------------------------*

@end
