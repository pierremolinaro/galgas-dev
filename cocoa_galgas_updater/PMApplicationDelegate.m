//
//  PMApplicationDelegate.m
//  canari_updater
//
//  Created by Pierre Molinaro on 19/08/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMApplicationDelegate.h"
#import <Security/Security.h>

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
    argument:@"Installation did fail."
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

- (void) applicationDidFinishLaunching:(NSNotification *) inUnusedNotification {
  [mStatusTextField setStringValue:@""] ;
  [mStatusTextField setTextColor:[NSColor blackColor]] ;
  NSFileManager * fm = [NSFileManager defaultManager] ;
  [mStatusTextField setStringValue:@"Retrieving Installation Configuration File..."] ;
  [mStatusTextField displayIfNeeded] ;
//--- Get Cocoa Galgas Updater directory
  NSString * cocoaGalgasUpdaterDirectory = [[[NSBundle mainBundle] bundlePath] stringByDeletingLastPathComponent] ;
  //NSLog (@"cocoaGalgasUpdaterDirectory '%@'", cocoaGalgasUpdaterDirectory) ;
//--- Get path for Cocoa Galgas Application
  NSString * currentCanariApplicationPathDescriptorFile = [NSString stringWithFormat:@"%@/cocoa_galgas_path.txt", cocoaGalgasUpdaterDirectory] ;
  mCurrentCocoaGalgasApplicationPath = [NSString stringWithContentsOfFile:currentCanariApplicationPathDescriptorFile] ;
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
//--- Check libpm is present
  if (ok) {
    [mStatusTextField setStringValue:@"Check For New libpm..."] ;
    NSString * newCanariApplicationPath = [NSString stringWithFormat:@"%@/libpm", cocoaGalgasUpdaterDirectory] ;
    ok = [fm fileExistsAtPath:newCanariApplicationPath] ;
    if (! ok) {
      [mStatusTextField setStringValue:@"Failed: cannot find new libpm."] ;
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

- (BOOL) installFromDirectory: (NSString *) inSourceFullPath 
         toDirectory: (NSString *) inFinalFullPath
         withTemporayDirectory: (NSString *) inTemporaryDir
         usingAuthorization: (AuthorizationRef) inAuthorizationRef {
//--- Installer has write permission on destination dir ?
  NSFileManager * fm = [NSFileManager defaultManager] ;
  NSDictionary * fileAttributes = [fm fileAttributesAtPath:[inFinalFullPath stringByDeletingLastPathComponent] traverseLink:YES] ;
  const unsigned long posixPermissions = [[fileAttributes objectForKey:NSFilePosixPermissions] unsignedLongValue] ;
  const BOOL isWritable = (posixPermissions & S_IWUSR) != 0 ;
  BOOL ok = NO ;
  if (isWritable) {
    ok = [fm
      copyPath:inSourceFullPath
      toPath:inTemporaryDir
      handler:nil
    ] ;
    if (ok) {
      [fm removeFileAtPath:inFinalFullPath handler:nil] ;
    }
    if (ok) {
      ok = [fm
        movePath:inTemporaryDir
        toPath:inFinalFullPath
        handler:nil
      ] ;
    }
  }else{
//--- Copy application
    OSStatus myStatus = 0 ;
    { const char * copyDirArguments [] = {"-r", [inSourceFullPath cString], [inTemporaryDir cString], NULL} ;
      FILE * myCommunicationPipe = NULL ;
      myStatus = AuthorizationExecuteWithPrivileges (inAuthorizationRef,
                                                     "/bin/cp", 
                                                     kAuthorizationFlagDefaults,
                                                     copyDirArguments, 
                                                     & myCommunicationPipe) ; 
      if (myStatus == 0) { // Wait until tool exit
        char unusedBuffer [128] ;
        while (fread (unusedBuffer, 1, 128, myCommunicationPipe) > 0) {}    
      }
      // NSLog (@"Copy returns %d", myStatus) ;
    }
  //--- Suppress current application
    if (myStatus == 0) {
      const char * const removeDirArguments [] = {"-fr", [inFinalFullPath cString], NULL} ;
      FILE * myCommunicationPipe = NULL ;
      myStatus = AuthorizationExecuteWithPrivileges (inAuthorizationRef,
                                                     "/bin/rm", 
                                                     kAuthorizationFlagDefaults,
                                                     removeDirArguments, 
                                                     & myCommunicationPipe) ; 
      if (myStatus == 0) { // Wait until tool exit
         char unusedBuffer [100] ;
         while (fread (unusedBuffer, 1, 100, myCommunicationPipe) > 0) {}    
      }
      // NSLog (@"Suppressing current returns %d", myStatus) ;
    }
  //--- Rename new application
    if (myStatus == 0) {
      const char * const renameDirArguments [] = {[inTemporaryDir cString], [inFinalFullPath cString], NULL} ;
      FILE * myCommunicationPipe = NULL ;
      myStatus = AuthorizationExecuteWithPrivileges (inAuthorizationRef,
                                                     "/bin/mv", 
                                                     kAuthorizationFlagDefaults,
                                                     renameDirArguments, 
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

- (void) installCocoaGalgasWithAuthorization: (AuthorizationRef) inAuthorizationRef {
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
    usingAuthorization:inAuthorizationRef
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

- (void) writeLIBPMpathInCocoaGalgasPreferences: (NSString *) inLIBPMpath {
  NSString * cocoaGalgasPreferencesPath = @"~/Library/Preferences/fr.ec-nantes.irccyn.molinaro.cocoaGalgas.plist" ;
  cocoaGalgasPreferencesPath = [cocoaGalgasPreferencesPath stringByExpandingTildeInPath] ;
  NSDictionary * cocoaGalgasPreferences = [NSDictionary dictionaryWithContentsOfFile:cocoaGalgasPreferencesPath] ;
  //NSLog (@"cocoaGalgasPreferences %@", cocoaGalgasPreferences) ;
  NSString * libpmPath = [cocoaGalgasPreferences objectForKey:@"libpmPath"] ;
  if (! [inLIBPMpath isEqualToString:libpmPath]) {
    NSMutableDictionary * newPrefs = [cocoaGalgasPreferences mutableCopy] ;
    [newPrefs setObject:inLIBPMpath forKey:@"libpmPath"] ;
    [newPrefs writeToFile:cocoaGalgasPreferencesPath atomically:YES] ;
  }
}

//---------------------------------------------------------------------------*

- (void) installCocoaGalgasAndLIBPMAtPath: (NSString *) inLIBPMpath {
  NSFileManager * fm = [NSFileManager defaultManager] ;
  NSString * cocoaGalgasUpdaterDirectory = [[[NSBundle mainBundle] bundlePath] stringByDeletingLastPathComponent] ;
  NSString * libpmDirectory = [inLIBPMpath stringByDeletingLastPathComponent] ;
//--- Get Authorization
  AuthorizationFlags myFlags = kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights ; 
  AuthorizationRef myAuthorizationRef ; 
  const OSStatus status = AuthorizationCreate (NULL, kAuthorizationEmptyEnvironment, 
                                      myFlags, & myAuthorizationRef) ; 
  BOOL ok = status == 0 ;
  // NSLog (@"AuthorizationCreate returns %d", status) ;
//--- Find a temporary unique name for cocoa Galgas
  unsigned i = 0 ;
  NSString * temporaryNewName = @"libpm-temp" ;
  while ([fm fileExistsAtPath:[NSString stringWithFormat:@"%@/%@", libpmDirectory, temporaryNewName]]) {
    i ++ ;
    temporaryNewName = [NSString stringWithFormat:@"libpm-temp-%u", i] ;
  }
//--- Signal Installing
  [mStatusTextField setStringValue:@"Installing LIBPM..."] ;
  [mStatusTextField displayIfNeeded] ;
//--- Install LIBPM
  NSString * libpmSourceFullPath = [NSString stringWithFormat:@"%@/%@", cocoaGalgasUpdaterDirectory, @"libpm"] ;
  NSString * libpmTempDestFullPath = [NSString stringWithFormat:@"%@/%@", libpmDirectory, temporaryNewName] ;
  if (ok) {
    ok = [self
      installFromDirectory:libpmSourceFullPath
      toDirectory:inLIBPMpath
      withTemporayDirectory:libpmTempDestFullPath
      usingAuthorization:myAuthorizationRef
    ] ;
  }
//--- If Ok, install cocoaGALGAS
  if (ok) {
    [self writeLIBPMpathInCocoaGalgasPreferences:inLIBPMpath] ;
    [self installCocoaGalgasWithAuthorization:myAuthorizationRef] ;
  }else{
    [mStatusTextField setStringValue:[NSString stringWithFormat:@"cannot copy libpm."]] ;
    [mStatusTextField setTextColor:[NSColor redColor]] ;
    [self installationDidFail] ;
  }
  AuthorizationFree (myAuthorizationRef, myFlags) ;
}

//---------------------------------------------------------------------------*

- (void) checkCanariApplicationDidQuit: (NSTimer *) inTimer {
  NSFileManager * fm = [NSFileManager defaultManager] ;
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
  //----------------------------- Installing libpm
  //--- Signal Installing
    [mStatusTextField setStringValue:@"Installing LIBPM..."] ;
    [mStatusTextField displayIfNeeded] ;
  //--- Get libpm path from cocoa Galgas preferences
    NSString * cocoaGalgasPreferencesPath = @"~/Library/Preferences/fr.ec-nantes.irccyn.molinaro.cocoaGalgas.plist" ;
    cocoaGalgasPreferencesPath = [cocoaGalgasPreferencesPath stringByExpandingTildeInPath] ;
    NSDictionary * cocoaGalgasPreferences = [NSDictionary dictionaryWithContentsOfFile:cocoaGalgasPreferencesPath] ;
    //NSLog (@"cocoaGalgasPreferences %@", cocoaGalgasPreferences) ;
    NSString * libpmPath = [cocoaGalgasPreferences objectForKey:@"libpmPath"] ;
    //NSLog (@"libpmPath %@", libpmPath) ;
    if ([libpmPath length] == 0) {
      [mStatusTextField setStringValue:@"Waiting the user to select a path for libpm"] ;
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Where do I have to install libpm ?"
        defaultButton:@"Choose directory..."
        alternateButton:@"Cancel Installation"
        otherButton:nil
        informativeTextWithFormat:@"Currently, Cocoa Galgas defines no path for libpm."
      ] ;
      [alert
        beginSheetModalForWindow:[mStatusTextField window]
        modalDelegate:self
        didEndSelector:@selector (noPathForLIBPMalertDidEnd:returnCode:contextInfo:)
        contextInfo:NULL
      ] ;
    }else if (! [fm fileExistsAtPath:libpmPath]) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Where do I have to install libpm ?"
        defaultButton:@"Create Folder and Install"
        alternateButton:@"Cancel Installation"
        otherButton:@"Choose directory..."
        informativeTextWithFormat:@"Currently, the folder '%@' does not exist.", libpmPath
      ] ;
      [libpmPath retain] ;
      [alert
        beginSheetModalForWindow:[mStatusTextField window]
        modalDelegate:self
        didEndSelector:@selector (pathForLIBPMDoesNotExistAlertDidEnd:returnCode:contextInfo:)
        contextInfo:libpmPath
      ] ;
    }else{
      [self installCocoaGalgasAndLIBPMAtPath:libpmPath] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (void) pathForLIBPMDoesNotExistAlertDidEnd:(NSAlert *)alert
         returnCode:(int) inReturnCode
	 contextInfo:(void  *) inContextInfo {
  NSString * libpmPath = (NSString *) inContextInfo ;
  // NSLog (@"inReturnCode %d", inReturnCode) ;
  if (inReturnCode == 1) {
    [self installCocoaGalgasAndLIBPMAtPath:libpmPath] ;
  }else if (inReturnCode == -1) {
    [[NSRunLoop currentRunLoop]
      performSelector: @selector (openLIBPMsavePanel:)
      target:self
      argument:libpmPath
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }else{ // Cancel
    [self installationHasBeenCancelled] ;
  }
  [libpmPath release] ;
}

//---------------------------------------------------------------------------*

- (void) noPathForLIBPMalertDidEnd:(NSAlert *)alert
         returnCode:(int)returnCode
	 contextInfo:(void  *)contextInfo{
  if (returnCode == YES) {
    [[NSRunLoop currentRunLoop]
      performSelector: @selector (openLIBPMsavePanel:)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }else{  // Cancel
    [self installationHasBeenCancelled] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Open Panel for LIBPM

//---------------------------------------------------------------------------*

- (BOOL) panel:(id)sender isValidFilename:(NSString *)filename {
  // NSLog (@"panel:isValidFilename: '%@'", filename) ;
  const BOOL ok = [[filename lastPathComponent] isEqualToString:@"libpm"] ;
  if (! ok) {
    NSBeep () ;
    [sender setMessage:@"Select a folder named 'libpm': only a folder named 'libpm' is valid."] ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

- (void) openLIBPMsavePanel: (NSString *) inDirectory {
/*  AuthorizationFlags myFlags = kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights ; 
  AuthorizationRef myAuthorizationRef ; 
  OSStatus status = AuthorizationCreate (NULL, kAuthorizationEmptyEnvironment, 
                                         myFlags, & myAuthorizationRef) ; 
  NSLog (@"AuthorizationCreate returns %d", status) ;
  AuthorizationItem myItems = {kAuthorizationRightExecute, 0, NULL, 0} ;
  AuthorizationRights myRights = {1, & myItems} ;
  status = AuthorizationCopyRights (myAuthorizationRef, & myRights, NULL, myFlags, NULL) ; 
  NSLog (@"AuthorizationCopyRights returns %d", status) ;*/
  
  NSOpenPanel * libpmOpenPanel = [NSOpenPanel openPanel] ;
  [libpmOpenPanel setMessage:@"Select a folder named 'libpm'."] ;
  [libpmOpenPanel setDelegate:self] ;
  [libpmOpenPanel setCanCreateDirectories:YES] ;
  [libpmOpenPanel setCanChooseDirectories:YES] ;
  [libpmOpenPanel setAllowsMultipleSelection:NO] ;
  [libpmOpenPanel setCanChooseFiles:NO] ;
  [libpmOpenPanel setCanSelectHiddenExtension:YES] ;
  [libpmOpenPanel setTreatsFilePackagesAsDirectories:NO] ;
  [libpmOpenPanel
    beginSheetForDirectory:inDirectory
    file:nil
    types: [NSArray array]
    modalForWindow:[mStatusTextField window]
    modalDelegate:self
    didEndSelector:@selector (saveLIBPMPanelDidEnd:returnCode:contextInfo:)
    contextInfo:NULL
  ] ;
}

//---------------------------------------------------------------------------*

- (void) saveLIBPMPanelDidEnd: (NSSavePanel *) inSheet
         returnCode:(int) inReturnCode
	 contextInfo:(void  *) inContextInfo {
  if (inReturnCode == YES) {
    NSString * newLibPMPath = [inSheet filename] ;
    //NSLog (@"newLibPMPath '%@'", newLibPMPath) ;
    [[NSRunLoop currentRunLoop]
      performSelector: @selector (installCocoaGalgasAndLIBPMAtPath:)
      target:self
      argument:newLibPMPath
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }else{ // Cancel
    [self installationHasBeenCancelled] ;
  }
}

//---------------------------------------------------------------------------*

@end
