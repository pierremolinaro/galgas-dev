//
//  OC_GGS_BuildTask.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 30/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

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

#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

@implementation OC_GGS_BuildTask 

//---------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    mIssueArrayController = [NSArrayController new] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (BOOL) buildTaskIsRunning {
  return nil != mTask ;
}

//---------------------------------------------------------------------------*

- (BOOL) buildTaskIsNotRunning {
  return nil == mTask ;
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
  if (nil != mTask) {
    #ifdef DEBUG_MESSAGES
      NSLog (@"%s", __PRETTY_FUNCTION__) ;
    #endif
  //---
    [[NSNotificationCenter defaultCenter]
      removeObserver:self
      name:NSTaskDidTerminateNotification
      object:mTask
    ] ;
    [[NSNotificationCenter defaultCenter]
      removeObserver:self
      name:NSFileHandleConnectionAcceptedNotification
      object:mConnectionSocketHandle
    ] ;
  //---
    [mConnectionSocket invalidate] ; mConnectionSocket = nil ;
    [mConnectionSocketHandle closeFile] ; mConnectionSocketHandle = nil ;
    [mRemoteSocketHandle closeFile] ; mRemoteSocketHandle = nil ;
  //---
    [mTask terminate] ;
  //---    
    [self willChangeValueForKey:@"buildTaskIsRunning"] ;
    [self willChangeValueForKey:@"buildTaskIsNotRunning"] ;
    mTask = nil ;
    [self didChangeValueForKey:@"buildTaskIsNotRunning"] ;
    [self didChangeValueForKey:@"buildTaskIsRunning"] ;
  //---
    [self sendTaskOutputString:@"Build has been aborted"] ;
  //---
    mTerminateOnConnection = NO ;
  }
}

//---------------------------------------------------------------------------*

- (void) buildTaskDidTerminate {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Standard and error output
  NSMutableData * outputData = [NSMutableData new] ;
  BOOL loop = YES ;
  while (loop) {
    NSData * data = [[mTask.standardOutput fileHandleForReading] availableData] ;
    [outputData appendData:data] ;
    loop = data.length > 0 ;
  }
 // NSLog (@"outputData %lu", outputData.length) ;
  NSString * message = [[NSString alloc] initWithData:outputData encoding:NSUTF8StringEncoding] ;
  [self sendTaskOutputString:message] ;
//--- Socket Data
  NSMutableData * socketData = [NSMutableData new] ;
  loop = YES ;
  while (loop) {
    NSData * data = [mRemoteSocketHandle availableData] ;
    [socketData appendData:data] ;
    loop = data.length > 0 ;
  }
  // NSLog (@"socketData %lu", socketData.length) ;
  [self XMLIssueAnalysis:socketData] ;
//---
  [mConnectionSocket invalidate] ; mConnectionSocket = nil ;
  [mConnectionSocketHandle closeFile] ; mConnectionSocketHandle = nil ;
  [mRemoteSocketHandle closeFile] ; mRemoteSocketHandle = nil ;
//---    
  [self willChangeValueForKey:@"buildTaskIsRunning"] ;
  [self willChangeValueForKey:@"buildTaskIsNotRunning"] ;
  mTask = nil ;
  [self didChangeValueForKey:@"buildTaskIsNotRunning"] ;
  [self didChangeValueForKey:@"buildTaskIsRunning"] ;
//---
  mTerminateOnConnection = NO ;
}

//---------------------------------------------------------------------------*

- (void) buildTaskDidTerminateNotification:(NSNotification *) inNotification {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if (nil != mRemoteSocketHandle) {
    [self buildTaskDidTerminate] ;
  }else{
    mTerminateOnConnection = YES ;
  }
}

//---------------------------------------------------------------------------*

- (void) buildDocument: (OC_GGS_Document *) inDocument {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [self abortBuild] ;
//---
  [self sendTaskOutputString:@"Compiling…"] ;
  [[NSDocumentController sharedDocumentController] saveAllDocuments:self] ;
  [inDocument displayIssueDetailedMessage:nil] ;
  [mIssueArrayController setContent:[NSArray array]] ;
  NSArray * commandLineArray = [gCocoaGalgasPreferencesController commandLineItemArray] ;
//--- Command line tool does actually exist ? (First argument is not "?")
  if ([[commandLineArray objectAtIndex:0 HERE] isEqualToString:@"?"]) {
    NSAlert * alert = [NSAlert alertWithMessageText:@"Error: cannot compile"
      defaultButton: nil
      alternateButton: nil
      otherButton: nil
      informativeTextWithFormat:@"Compilation must be performed by an embedded Command line Tool; no command line Tool are currently embedded by application."
    ] ;
    [alert
      beginSheetModalForWindow:inDocument.windowForSheet
      modalDelegate:nil
      didEndSelector:0
      contextInfo:NULL
    ] ;
  }else{
  //--- Issue receiver socket
    mConnectionSocket = [[NSSocketPort alloc] initWithTCPPort:0] ; // A port number will be attributed
    struct sockaddr_in socketStruct ;
    socklen_t length = sizeof (socketStruct) ;
    getsockname (mConnectionSocket.socket, (struct sockaddr *) & socketStruct, & length) ;
    const UInt16 actualPort = ntohs (socketStruct.sin_port) ;
    // NSLog (@"actualPort %hu\n", actualPort) ;
    // NSLog (@"mConnectionSocket %p %d", mConnectionSocket, mConnectionSocket.socket) ;
    NSMutableArray * arguments = [NSMutableArray new] ;
    [arguments addObjectsFromArray:[commandLineArray subarrayWithRange:NSMakeRange (1, [commandLineArray count]-1)]] ;
    [arguments addObject:inDocument.fileURL.path] ;
    [arguments addObject:[NSString stringWithFormat:@"--mode=xml-issues-on-port:%hu", actualPort]] ;
    [arguments addObject:@"--no-color"] ;
 //--- Create task
    [self willChangeValueForKey:@"buildTaskIsRunning"] ;
    [self willChangeValueForKey:@"buildTaskIsNotRunning"] ;
    mTask = [NSTask new] ;
    [self didChangeValueForKey:@"buildTaskIsNotRunning"] ;
    [self didChangeValueForKey:@"buildTaskIsRunning"] ;
    [mTask setLaunchPath:[commandLineArray objectAtIndex:0 HERE]] ;
    [mTask setArguments:arguments] ;
    [self setWarningCount:0] ;
    [self setErrorCount:0] ;
    // NSLog (@"'%@' %@", [mTask launchPath], arguments) ;
  //--- Set standard output notification
    NSPipe * taskOutput = [NSPipe pipe] ;
    [mTask setStandardOutput:taskOutput] ;
    [mTask setStandardError:taskOutput] ;
  //--- http://www.cocoadev.com/index.pl?NSSocketPort
    mConnectionSocketHandle = [[NSFileHandle alloc]
      initWithFileDescriptor:mConnectionSocket.socket
      closeOnDealloc:NO
    ];
    // NSLog (@"mConnectionSocketHandle %p", mConnectionSocketHandle) ;
    [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector:@selector (newSocketConnection:) 
      name:NSFileHandleConnectionAcceptedNotification
      object:mConnectionSocketHandle
    ] ;
    [mConnectionSocketHandle acceptConnectionInBackgroundAndNotify] ;
  //--- Set Termination notification
    [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector: @selector (buildTaskDidTerminateNotification:)
      name:NSTaskDidTerminateNotification
      object:mTask
    ] ;
  //---
    mTerminateOnConnection = NO ;
  //--- Start task
    [mTask launch] ;
  }
}

//---------------------------------------------------------------------------*

- (void) newSocketConnection:(NSNotification *) inNotification {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if (inNotification.object == mConnectionSocketHandle) {
    mRemoteSocketHandle = [inNotification.userInfo
       objectForKey:NSFileHandleNotificationFileHandleItem
    ] ;
    if (mTerminateOnConnection) {
      [self buildTaskDidTerminate] ;
    }
  }
}

//---------------------------------------------------------------------------*

@end
