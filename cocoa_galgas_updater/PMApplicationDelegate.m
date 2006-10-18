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

#pragma mark Get Installation Privileges

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
//--- Copy Application under a new temporary name
  BOOL ok = [fm
    copyPath:[NSString stringWithFormat:@"%@/%@", cocoaGalgasUpdaterDirectory, @"cocoaGalgas.app"]
    toPath:[NSString stringWithFormat:@"%@/%@", currentPath, temporaryNewName]
    handler:nil
  ] ;
//--- Suppress current Cocoa Galgas application
  if (ok) {
    [fm removeFileAtPath:mCurrentCocoaGalgasApplicationPath handler:nil] ;
  }
//--- Rename new Cocoa Galgas application
  if (ok) {
    ok = [fm
      movePath:[NSString stringWithFormat:@"%@/%@", currentPath, temporaryNewName]
      toPath:mCurrentCocoaGalgasApplicationPath
      handler:nil
    ] ;
  }
//---
  if (ok) {
    [mStatusTextField setStringValue:@"Done"] ;
    [self installationDidSucceed] ;
  }else{
    [mStatusTextField setStringValue:@"Failed: cannot copy new Cocoa Galgas application"] ;
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

- (void) authorizationError: (OSStatus) inStatus
         forOperation: (NSString *) inOperation {
    NSAlert * alert = [NSAlert
      alertWithMessageText:inOperation
      defaultButton:@"Ok"
      alternateButton:nil
      otherButton:nil
      informativeTextWithFormat:@"Returned error: %d", inStatus
    ] ;
    [alert
      beginSheetModalForWindow:[mStatusTextField window]
      modalDelegate:nil
      didEndSelector:NULL
      contextInfo:NULL
    ] ;
}

//---------------------------------------------------------------------------*

- (void) installCocoaGalgasAndLIBPMAtPath: (NSString *) inLIBPMpath {
  NSFileManager * fm = [NSFileManager defaultManager] ;
  NSString * cocoaGalgasUpdaterDirectory = [[[NSBundle mainBundle] bundlePath] stringByDeletingLastPathComponent] ;
  NSString * libpmDirectory = [inLIBPMpath stringByDeletingLastPathComponent] ;
//--- Get Authorization
  AuthorizationFlags myFlags = kAuthorizationFlagDefaults | kAuthorizationFlagInteractionAllowed |kAuthorizationFlagExtendRights ; 
  AuthorizationRef myAuthorizationRef ; 
  OSStatus myStatus = AuthorizationCreate (NULL, kAuthorizationEmptyEnvironment, 
                                           myFlags, & myAuthorizationRef) ; 
  if (myStatus != errAuthorizationSuccess) {
    AuthorizationFree (myAuthorizationRef, myFlags) ;
    myAuthorizationRef = NULL ;
    [self authorizationError:myStatus forOperation:@"Authorization Failure"] ;
  }
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
//--- Copy libpm under a new temporary name
  NSString * libpmSourceFullPath = [NSString stringWithFormat:@"%@/%@", cocoaGalgasUpdaterDirectory, @"libpm"] ;
  NSString * libpmTempDestFullPath = [NSString stringWithFormat:@"%@/%@", libpmDirectory, temporaryNewName] ;
//--- Create temp dest dir
  const char * createDirArguments [] = {[libpmTempDestFullPath cString], NULL} ;
  myStatus = AuthorizationExecuteWithPrivileges (myAuthorizationRef,
                                                 "/usr/bin/mkdir", 
                                                 kAuthorizationFlagDefaults,
                                                 createDirArguments, 
                                                 NULL) ; 
  BOOL ok = myStatus == 0 ;
  if (! ok) {
    [self authorizationError:myStatus forOperation:@"Cannot Create libpm"] ;
  }
//--- Copy libpm
  if (ok) {
    const char * const copyDirArguments [] = {"-r", [libpmSourceFullPath cString], [libpmTempDestFullPath cString], NULL} ;
    myStatus = AuthorizationExecuteWithPrivileges (myAuthorizationRef,
                                                   "/usr/bin/cp", 
                                                   kAuthorizationFlagDefaults,
                                                   copyDirArguments, 
                                                   NULL) ; 
    ok = myStatus == 0 ;
    if (! ok) {
      [self authorizationError:myStatus forOperation:@"Cannot Copy libpm"] ;
    }
  }
/*  BOOL ok = [fm
    copyPath:libpmSourceFullPath
    toPath:libpmTempDestFullPath
    handler:nil
  ] ;*/
//--- Suppress current libpm directory
  if (ok) {
    [fm removeFileAtPath:inLIBPMpath handler:nil] ;
  }
//--- Rename new Cocoa Galgas application
  if (ok) {
    ok = [fm
      movePath:[NSString stringWithFormat:@"%@/%@", libpmDirectory, temporaryNewName]
      toPath:inLIBPMpath
      handler:nil
    ] ;
  }
//--- If Ok, install cocoaGALGAS
  if (ok) {
    [self writeLIBPMpathInCocoaGalgasPreferences:inLIBPMpath] ;
    [self installCocoaGalgas] ;
  }else{
    [mStatusTextField setStringValue:@"Failed: cannot copy libpm."] ;
    [mStatusTextField setTextColor:[NSColor redColor]] ;
    [self installationDidFail] ;
  }
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
  NSLog (@"inReturnCode %d", inReturnCode) ;
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

- (BOOL) panel:(id)sender isValidFilename:(NSString *)filename {
  // NSLog (@"panel:isValidFilename: '%@'", filename) ;
  const BOOL ok = [[filename lastPathComponent] isEqualToString:@"libpm"] ;
  if (! ok) {
    NSBeep () ;
/*    NSAlert * alert = [NSAlert
      alertWithMessageText:@"Only a folder named 'libpm' is valid."
      defaultButton:@"Ok"
      alternateButton:nil
      otherButton:nil
      informativeTextWithFormat:@"You haved selected the '%@' folder.", filename
    ] ;
    [alert runModal] ;*/
  }
  return ok ;
}

//---------------------------------------------------------------------------*

- (void) openLIBPMsavePanel: (NSString *) inDirectory {
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
