//
//  OC_GGS_BuildTask.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 30/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_BuildTask.h"
#import "OC_GGS_BuildTaskProxy.h"
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

@implementation OC_GGS_BuildTask 

//---------------------------------------------------------------------------*

- (OC_GGS_BuildTask *) initWithDocument: (OC_GGS_Document *) inDocument
                       proxy : (OC_GGS_BuildTaskProxy *) inProxy
                       index: (NSUInteger) inIndex {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self = [super init] ;
  if (self) {
  //---
    mProxy = inProxy ;
    mTaskIndex = inIndex ;
    mStandardBufferedInputData = [NSMutableData new] ;
    mSocketBufferedInputData = [NSMutableData new] ;
  //---
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
      // NSLog (@"actualPort %hu", actualPort) ;
      // NSLog (@"actualPort %hu\n", actualPort) ;
      // NSLog (@"mConnectionSocket %p %d", mConnectionSocket, mConnectionSocket.socket) ;
      NSMutableArray * arguments = [NSMutableArray new] ;
      [arguments addObjectsFromArray:[commandLineArray subarrayWithRange:NSMakeRange (1, [commandLineArray count]-1)]] ;
      [arguments addObject:inDocument.fileURL.path] ;
      [arguments addObject:[NSString stringWithFormat:@"--mode=xml-issues-on-port:%hu", actualPort]] ;
      [arguments addObject:@"--no-color"] ;
   //--- Create task
      mTask = [NSTask new] ;
      [mTask setLaunchPath:[commandLineArray objectAtIndex:0 HERE]] ;
      [mTask setArguments:arguments] ;
      // NSLog (@"'%@' %@", [mTask launchPath], arguments) ;
    //--- Set standard output notification
      mPipe = [NSPipe pipe] ;
      [mTask setStandardOutput:mPipe] ;
      [mTask setStandardError:mPipe] ;
      [[NSNotificationCenter defaultCenter]
        addObserver:self
        selector:@selector (getDataFromTaskOutput:)
        name:NSFileHandleReadCompletionNotification
        object:[mPipe fileHandleForReading]
      ] ;
      [mPipe.fileHandleForReading readInBackgroundAndNotify] ;
    //--- http://www.cocoadev.com/index.pl?NSSocketPort
      mConnectionSocketHandle = [[NSFileHandle alloc]
        initWithFileDescriptor:mConnectionSocket.socket
        closeOnDealloc:YES
      ] ;
      // NSLog (@"mConnectionSocketHandle %p", mConnectionSocketHandle) ;
      [[NSNotificationCenter defaultCenter]
        addObserver:self
        selector:@selector (newSocketConnection:) 
        name:NSFileHandleConnectionAcceptedNotification
        object:mConnectionSocketHandle
      ] ;
      [mConnectionSocketHandle acceptConnectionInBackgroundAndNotify] ;
    //---
      [[NSNotificationCenter defaultCenter]
        addObserver:self
        selector:@selector (taskDidTerminate:) 
        name:NSTaskDidTerminateNotification
        object:mTask
      ] ;
    //--- Start task
      [mTask launch] ;
    }
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) getDataFromTaskOutput: (NSNotification *) inNotification {
  NSData * data = [inNotification.userInfo objectForKey:NSFileHandleNotificationDataItem];
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s (%lu bytes)", __PRETTY_FUNCTION__, (unsigned long) data.length) ;
  #endif
  if (data.length > 0) {
    [mStandardBufferedInputData appendData:data] ;
    [inNotification.object readInBackgroundAndNotify] ;
  }else{
    [mProxy noteStandardOutputData:mStandardBufferedInputData] ;
    mStandardBufferedInputCompleted = YES ;
  }
}

//---------------------------------------------------------------------------*

- (void) newSocketConnection:(NSNotification *) inNotification {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//---
  mRemoteSocketHandle = [inNotification.userInfo
    objectForKey:NSFileHandleNotificationFileHandleItem
  ] ;
//---
  [[NSNotificationCenter defaultCenter]
    addObserver:self
    selector:@selector (getDataFromSocketConnection:) 
    name:NSFileHandleReadCompletionNotification
    object:mRemoteSocketHandle
  ] ;
//---
  [mRemoteSocketHandle readInBackgroundAndNotify] ;
}

//---------------------------------------------------------------------------*

- (void) getDataFromSocketConnection: (NSNotification *) inNotification {
  NSData * data = [inNotification.userInfo objectForKey:NSFileHandleNotificationDataItem];
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s (%lu bytes)", __PRETTY_FUNCTION__, (unsigned long) data.length) ;
  #endif
  if (data.length > 0) {
    [mSocketBufferedInputData appendData:data] ;
    [inNotification.object readInBackgroundAndNotify] ;
  }else{
    [mProxy noteSocketData:mSocketBufferedInputData] ;
    mSocketBufferedInputCompleted = YES ;
  }
}

//---------------------------------------------------------------------------*

- (void) taskDidTerminate: (NSNotification *) inNotification {
  [mProxy noteBuildTaskTermination:self] ;
}

//---------------------------------------------------------------------------*

- (void) terminate {
  mProxy = nil ;
  [mTask terminate] ;
}

//---------------------------------------------------------------------------*

- (NSString *) runningStatus {
  return [NSString stringWithFormat:@" %d%d%d%d:%lu", mStandardBufferedInputCompleted, ! [mTask isRunning], nil != mRemoteSocketHandle, mSocketBufferedInputCompleted, mTaskIndex] ;
}

//---------------------------------------------------------------------------*

- (BOOL) isCompleted {
  BOOL completed = mStandardBufferedInputCompleted && ! [mTask isRunning] ;
  if (completed && (nil != mRemoteSocketHandle)) {
    completed = mSocketBufferedInputCompleted ;
  }
  return completed ;
}

//---------------------------------------------------------------------------*

@end
