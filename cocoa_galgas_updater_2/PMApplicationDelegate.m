//
//  PMApplicationDelegate.m
//  canari_updater
//
//  Created by Pierre Molinaro on 19/08/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMApplicationDelegate.h"

//---------------------------------------------------------------------------*

@implementation PMApplicationDelegate

//---------------------------------------------------------------------------*

#pragma mark Launch Galgas and Quit

//---------------------------------------------------------------------------*

- (void) launchGalgasAndQuit {
  NSWorkspace * ws = [NSWorkspace sharedWorkspace] ;
  [ws launchApplication:mCurrentCocoaGalgasApplicationPath] ;
  [NSApp terminate:nil] ;
}

//---------------------------------------------------------------------------*

#pragma mark Installation Did Fail

//---------------------------------------------------------------------------*

- (void) installationDidFail {
  [[NSRunLoop currentRunLoop]
    performSelector: @selector (installationHasBeenCancelledDeferredAction:)
    target:self
    argument:[NSString stringWithFormat:@"Installation did fail (during %@).", mCurrentOperation]
    order:0
    modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
  ] ;
}

//---------------------------------------------------------------------------*

#pragma mark Installation Has Been Cancelled

//---------------------------------------------------------------------------*

- (void) installationHasBeenCancelled {
  [[NSRunLoop currentRunLoop]
    performSelector: @selector (installationHasBeenCancelledDeferredAction:)
    target:self
    argument:@"Installation has been cancelled."
    order:0
    modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) installationHasBeenCancelledDeferredAction: (NSString *) inMessage {
  NSAlert * alert = [NSAlert
    alertWithMessageText:inMessage
    defaultButton:@"Quit and launch Cocoa Galgas"
    alternateButton:@"Quit"
    otherButton:@"Resume Installation"
    informativeTextWithFormat:@""
  ] ;
  [alert
    beginSheetModalForWindow:[mStatusTextField window]
    modalDelegate:self
    didEndSelector:@selector (installationHasBeenCancelledAlertDidEnd:returnCode:contextInfo:)
    contextInfo:nil
  ] ;
}

//---------------------------------------------------------------------------*

- (void) installationHasBeenCancelledAlertDidEnd:(NSAlert *)alert
         returnCode:(int) inReturnCode
	 contextInfo:(void  *) inContextInfo {
  // NSLog (@"inReturnCode %d", inReturnCode) ;
  if (inReturnCode == 1) { // Quit and launch Cocoa Galgas
    [self launchGalgasAndQuit] ;
  }else if (inReturnCode == -1) { // Resume Installation
    [[NSRunLoop currentRunLoop]
      performSelector: @selector (applicationDidFinishLaunching:)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }else{ // Quit
    [NSApp terminate:nil] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Installation Did Succeed

//---------------------------------------------------------------------------*

- (void) installationDidSucceed {
  [[NSRunLoop currentRunLoop]
    performSelector: @selector (installationDidSucceedDeferredAction:)
    target:self
    argument:nil
    order:0
    modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
  ] ;
}

//---------------------------------------------------------------------------*

- (void) installationDidSucceedDeferredAction: (id) inUnusedArgument {
  NSAlert * alert = [NSAlert
    alertWithMessageText:@"Installation succeeds."
    defaultButton:@"Quit and launch new Cocoa Galgas"
    alternateButton:@"Quit"
    otherButton:nil
    informativeTextWithFormat:@""
  ] ;
  [alert
    beginSheetModalForWindow:[mStatusTextField window]
    modalDelegate:self
    didEndSelector:@selector (installationDidSucceedAlertDidEnd:returnCode:contextInfo:)
    contextInfo:nil
  ] ;
}

//---------------------------------------------------------------------------*

- (void) installationDidSucceedAlertDidEnd:(NSAlert *)alert
         returnCode:(int) inReturnCode
	 contextInfo:(void  *) inContextInfo {
  // NSLog (@"inReturnCode %d", inReturnCode) ;
  if (inReturnCode == 1) { // Quit and launch Cocoa Galgas
    [self launchGalgasAndQuit] ;
  }else{ // Quit
    [NSApp terminate:nil] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Start Up

//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  [mStatusTextField setStringValue:@""] ;
  [mStatusTextField setTextColor:[NSColor blackColor]] ;
}

//---------------------------------------------------------------------------*

- (void) applicationDidFinishLaunching:(NSNotification *) inUnusedNotification {
  NSFileManager * fm = [NSFileManager defaultManager] ;
//--- Create an empty Authorization
  AuthorizationFlags myFlags = kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights ; 
  AuthorizationCreate (NULL, kAuthorizationEmptyEnvironment, myFlags, & mAuthorizationRef) ; 
//--- Update user interface
  [mStatusTextField setStringValue:@"Retrieving Installation Configuration File..."] ;
  [mStatusTextField displayIfNeeded] ;
//--- Get Cocoa Galgas Updater directory
  NSString * cocoaGalgasUpdaterDirectory = [[[NSBundle mainBundle] bundlePath] stringByDeletingLastPathComponent] ;
  //NSLog (@"cocoaGalgasUpdaterDirectory '%@'", cocoaGalgasUpdaterDirectory) ;
//--- Get path for Cocoa Galgas Application
  NSString * currentCanariApplicationPathDescriptorFile = [NSString stringWithFormat:@"%@/cocoa_galgas_path.txt", cocoaGalgasUpdaterDirectory] ;
  NSStringEncoding encoding ;
  mCurrentCocoaGalgasApplicationPath = [NSString
    stringWithContentsOfFile:currentCanariApplicationPathDescriptorFile
    usedEncoding:& encoding
    error:NULL
  ] ;
  [mCurrentCocoaGalgasApplicationPath retain] ;
  //NSLog (@"mCurrentCocoaGalgasApplicationPath '%@'", mCurrentCocoaGalgasApplicationPath) ;
  BOOL ok = mCurrentCocoaGalgasApplicationPath != nil ;
  if (! ok) {
    [mStatusTextField setStringValue:@"Failed: cannot retrieve installation configuration file."] ;
  }
//--- Check Cocoa Galgas Application is present
  if (ok) {
    [mStatusTextField setStringValue:@"Check For New Cocoa Galgas Application..."] ;
    NSString * newCanariApplicationPath = [NSString stringWithFormat:@"%@/cocoaGalgas.app", cocoaGalgasUpdaterDirectory] ;
    ok = [fm fileExistsAtPath:newCanariApplicationPath] ;
    if (! ok) {
      [mStatusTextField setStringValue:@"Failed: cannot find new Cocoa Galgas application."] ;
    }
  }
//--- Wait for Current Cocoa Galgas Application to Quit
  if (ok) {
    [mStatusTextField setStringValue:@"Waiting Cocoa Galgas Application to quit..."] ;
  //--- Install timer
    mTimer = [NSTimer
     scheduledTimerWithTimeInterval:1.0 // In seconds
     target:self
     selector:@selector (checkCanariApplicationDidQuit:)
     userInfo:nil
     repeats:YES
    ] ;
  }
//--- Hilite error message
  if (! ok) {
    [mStatusTextField setTextColor:[NSColor redColor]] ;
    [self installationDidFail] ;
  }
}

//---------------------------------------------------------------------------*

- (BOOL) isFinalPathWritable: (NSString *) inFinalFullPath {
  NSFileManager * fm = [NSFileManager defaultManager] ;
//--- Final path dir is writable
  BOOL isWritable = [fm isWritableFileAtPath:[inFinalFullPath stringByDeletingLastPathComponent]] ;
  // NSLog (@"'%@' is writable:%@", [inFinalFullPath stringByDeletingLastPathComponent], isWritable ? @"YES" : @"NO") ;
//--- Destination file exists ? If YES, check permissions
  if ([fm fileExistsAtPath:inFinalFullPath]) {
  //--- Destination dir is writable
    if (isWritable) {
      isWritable = [fm isWritableFileAtPath:inFinalFullPath] ;
      // NSLog (@"'%@' is writable:%@", inFinalFullPath, isWritable ? @"YES" : @"NO") ;
    }
  //--- All sub directories are writable
    NSDirectoryEnumerator * enumerator = [fm enumeratorAtPath:inFinalFullPath] ;
    NSString * partialPath = nil ;
    while (isWritable && ((partialPath = [enumerator nextObject]))) {
      NSString * fullPath = [inFinalFullPath stringByAppendingPathComponent:partialPath] ;
      isWritable = [fm isWritableFileAtPath:fullPath] ;
      // NSLog (@"'%@' is writable:%@", fullPath, isWritable ? @"YES" : @"NO") ;
    }
  }
//---
  // NSLog (@"FINAL writable:%@", isWritable ? @"YES" : @"NO") ;
  return isWritable ;
}

//---------------------------------------------------------------------------*

- (BOOL) installFromDirectory: (NSString *) inSourceFullPath 
         toDirectory: (NSString *) inFinalFullPath
         withTemporayDirectory: (NSString *) inTemporaryDir {
//--- Installer has write permission on destination dir ?
  const BOOL isWritable = [self isFinalPathWritable:inFinalFullPath] ;
  BOOL ok = NO ;
  if (isWritable) {
    NSFileManager * fm = [NSFileManager defaultManager] ;
    mCurrentOperation = @"copy" ;
    ok = [fm
      copyPath:inSourceFullPath
      toPath:inTemporaryDir
      handler:nil
    ] ;
    if (ok) {
      mCurrentOperation = @"remove previous" ;
      [fm removeFileAtPath:inFinalFullPath handler:nil] ;
    }
    if (ok) {
      mCurrentOperation = @"move new" ;
      ok = [fm
        movePath:inTemporaryDir
        toPath:inFinalFullPath
        handler:nil
      ] ;
    }
  }else{
//--- Copy application
    OSStatus myStatus = 0 ;
    { const char * copyDirArguments [] = {"-r", [inSourceFullPath cStringUsingEncoding:NSUTF8StringEncoding], [inTemporaryDir cStringUsingEncoding:NSUTF8StringEncoding], NULL} ;
      FILE * myCommunicationPipe = NULL ;
      mCurrentOperation = @"copy with privileges" ;
      myStatus = AuthorizationExecuteWithPrivileges (mAuthorizationRef,
                                                     "/bin/cp", 
                                                     kAuthorizationFlagDefaults,
                                                     (char * *) copyDirArguments, 
                                                     & myCommunicationPipe) ; 
      if (myStatus == 0) { // Wait until tool exit
        char unusedBuffer [128] ;
        while (fread (unusedBuffer, 1, 128, myCommunicationPipe) > 0) {}    
      }
      // NSLog (@"Copy returns %d", myStatus) ;
    }
  //--- Suppress current application
    if (myStatus == 0) {
      const char * const removeDirArguments [] = {"-fr", [inFinalFullPath cStringUsingEncoding:NSUTF8StringEncoding], NULL} ;
      FILE * myCommunicationPipe = NULL ;
      mCurrentOperation = @"remove previous with privileges" ;
      myStatus = AuthorizationExecuteWithPrivileges (mAuthorizationRef,
                                                     "/bin/rm", 
                                                     kAuthorizationFlagDefaults,
                                                     (char * *) removeDirArguments, 
                                                     & myCommunicationPipe) ; 
      if (myStatus == 0) { // Wait until tool exit
         char unusedBuffer [100] ;
         while (fread (unusedBuffer, 1, 100, myCommunicationPipe) > 0) {}    
      }
      // NSLog (@"Suppressing current returns %d", myStatus) ;
    }
  //--- Rename new application
    if (myStatus == 0) {
      const char * const renameDirArguments [] = {[inTemporaryDir cStringUsingEncoding:NSUTF8StringEncoding], [inFinalFullPath cStringUsingEncoding:NSUTF8StringEncoding], NULL} ;
      FILE * myCommunicationPipe = NULL ;
      mCurrentOperation = @"move new with privileges" ;
      myStatus = AuthorizationExecuteWithPrivileges (mAuthorizationRef,
                                                     "/bin/mv", 
                                                     kAuthorizationFlagDefaults,
                                                     (char * *) renameDirArguments, 
                                                     & myCommunicationPipe) ; 
      if (myStatus == 0) { // Wait until tool exit
         char unusedBuffer [100] ;
         while (fread (unusedBuffer, 1, 100, myCommunicationPipe) > 0) {}    
      }
      // NSLog (@"Renaming returns %d", myStatus) ;
    }
    ok = myStatus == 0 ;
  }
  // NSLog (@"Installing method returns ok=%d", ok) ;
  return ok ;
}

//---------------------------------------------------------------------------*

- (void) installCocoaGalgas {
  NSFileManager * fm = [NSFileManager defaultManager] ;
  NSString * cocoaGalgasUpdaterDirectory = [[[NSBundle mainBundle] bundlePath] stringByDeletingLastPathComponent] ;
  NSString * currentPath = [mCurrentCocoaGalgasApplicationPath stringByDeletingLastPathComponent] ;
//--- Signal Installing
  [mStatusTextField setStringValue:@"Install New Cocoa Galgas Application..."] ;
  [mStatusTextField displayIfNeeded] ;
//--- Find a temporary unique name for cocoa Galgas
  unsigned i = 0 ;
  NSString * temporaryNewName = @"cocoa-galgas-temp.app" ;
  while ([fm fileExistsAtPath:[NSString stringWithFormat:@"%@/%@", currentPath, temporaryNewName]]) {
    i ++ ;
    temporaryNewName = [NSString stringWithFormat:@"cocoa-galgas-temp-%u.app", i] ;
  }
//--- Install
  NSString * applicationSourceFullPath = [NSString stringWithFormat:@"%@/%@", cocoaGalgasUpdaterDirectory, @"cocoaGalgas.app"] ;
  NSString * applicationTempDestPath = [NSString stringWithFormat:@"%@/%@", currentPath, temporaryNewName] ;
  const BOOL ok = [self
    installFromDirectory:applicationSourceFullPath
    toDirectory:mCurrentCocoaGalgasApplicationPath
    withTemporayDirectory:applicationTempDestPath
  ] ;
//---
  if (ok) {
    [mStatusTextField setStringValue:@"Done"] ;
    [self installationDidSucceed] ;
  }else{
    [mStatusTextField setStringValue:[NSString stringWithFormat:@"cannot copy Cocoa Application."]] ;
    [mStatusTextField setTextColor:[NSColor redColor]] ;
    [self installationDidFail] ;
  }
}

//---------------------------------------------------------------------------*

- (void) checkCanariApplicationDidQuit: (NSTimer *) inTimer {
  NSWorkspace * ws = [NSWorkspace sharedWorkspace] ;
  NSArray * launchedApplications = [ws launchedApplications] ;
//NSLog (@"launchedApplications %@", launchedApplications) ;
  BOOL stillRunning = NO ;
  unsigned i ;
  for (i=0 ; (i<[launchedApplications count]) && ! stillRunning ; i++) {
    NSDictionary * d = [launchedApplications objectAtIndex:i] ;
    NSString * applicationPath = [d objectForKey:@"NSApplicationPath"] ;
    // NSLog (@"applicationPath '%@'", applicationPath) ;
    stillRunning = [applicationPath isEqualToString:mCurrentCocoaGalgasApplicationPath] ;
  }
  if (! stillRunning) {
    [inTimer invalidate] ;
    [self installCocoaGalgas] ;
  }
}

//---------------------------------------------------------------------------*

@end
