//
//  OC_GGS_SourceScrollView.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_SourceScrollView.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_PreferencesController.h"
#import "OC_GGS_RulerViewForTextView.h"

//---------------------------------------------------------------------------*

@implementation OC_GGS_SourceScrollView

//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  [self setHasVerticalRuler:YES] ;
  OC_GGS_RulerViewForTextView * ruler = [[OC_GGS_RulerViewForTextView alloc] init] ;
  [self setVerticalRulerView:ruler] ;
  [ruler setRuleThickness:gCocoaGalgasPreferencesController.ruleThickness] ;
  [self setRulersVisible:[[NSUserDefaults standardUserDefaults] boolForKey:GGS_show_ruler]] ;
}

//---------------------------------------------------------------------------*

#pragma mark Pop up Button for entries

//---------------------------------------------------------------------------*

- (void) populatePopUpButtonWithMenu: (NSMenu *) inMenu {
  const NSUInteger n = [inMenu numberOfItems] ;
  if (n == 0) {
    [inMenu
      addItemWithTitle:@"No entry"
      action:NULL
      keyEquivalent:@""
    ] ;
    [mEntryListPopUpButton setEnabled:NO] ;
  }else{
    for (NSUInteger i=0 ; i<n ; i++) {
      NSMenuItem * item = [inMenu itemAtIndex:i] ;
      [item setTarget:self] ;
      [item setAction:@selector (gotoEntry:)] ;
    }
    [mEntryListPopUpButton setEnabled:YES] ;
  }
  [mEntryListPopUpButton setMenu:inMenu] ;
  //NSLog (@"mEntryListPopUpButton %@", mEntryListPopUpButton) ;
}

//---------------------------------------------------------------------------*

- (void) gotoEntry: (id) inSender {
  const NSRange range = {[inSender tag], 0} ;
  NSTextView * textView = self.documentView ;
  [textView setSelectedRange:range] ;
  [textView scrollRangeToVisible:range] ;
}

//---------------------------------------------------------------------------*

- (void) selectEntryPopUpForSelectionStart: (NSUInteger) inSelectionStart {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <selectEntryPopUpForSelectionStart:%d> POPUP ENABLED:%@", inSelectionStart, [mEntryListPopUpButton isEnabled] ? @"YES" : @"NO") ;
  #endif
  NSArray * menuItemArray = [mEntryListPopUpButton itemArray] ;
  if ([mEntryListPopUpButton isEnabled]) {
    NSInteger idx = NSNotFound ;
    NSInteger i ;
    const NSInteger n = [menuItemArray count] ;
    for (i=n-1 ; (i>=0) && (idx == NSNotFound) ; i--) {
      NSMenuItem * item = [menuItemArray objectAtIndex:i] ;
      const NSUInteger startPoint = [item tag] ;
      if (inSelectionStart >= startPoint) {
        idx = i ;
      }
    }
    if (idx == NSNotFound) {
      [mEntryListPopUpButton selectItemAtIndex:0] ;
    }else{
      [mEntryListPopUpButton selectItemAtIndex:idx] ;
    }
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <selectEntryPopUpForSelectionStart:> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject: (id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if ([inKeyPath isEqualToString:@"selection.textSelectionStart"]) {
    NSArray * arrangedObjects = ((NSArrayController *) inObject).arrangedObjects ;
    if (arrangedObjects.count > 0) {
      const NSUInteger sel = ((NSArrayController *) inObject).selectionIndex ;
      OC_GGS_TextDisplayDescriptor * object = [arrangedObjects objectAtIndex:sel] ;
      [self selectEntryPopUpForSelectionStart:object.textSelectionStart] ;
    }
  }else if ([inKeyPath isEqualToString:@"selectionIndex"]) {
    self.documentView = nil ;
    NSArray * arrangedObjects = ((NSArrayController *) inObject).arrangedObjects ;
    if (arrangedObjects.count > 0) {
      const NSUInteger sel = ((NSArrayController *) inObject).selectionIndex ;
      OC_GGS_TextDisplayDescriptor * object = [arrangedObjects objectAtIndex:sel] ;
      //NSLog (@"object.textView %@", object.textView) ;
      NSSize size = [NSScrollView
        contentSizeForFrameSize:self.frame.size
        hasHorizontalScroller:self.hasHorizontalScroller
        hasVerticalScroller:self.hasVerticalScroller
        borderType:self.borderType
      ] ;
      size.width -= gCocoaGalgasPreferencesController.ruleThickness ;
      object.textView.frameSize = size ;
      self.documentView = object.textView ;
      [self.window makeFirstResponder:object.textView] ;
    }
  }else if ([inKeyPath isEqualToString:@"selection.mTextSyntaxColoring.mTokenizer.menuForEntryPopUpButton"]) {
    NSArray * arrangedObjects = ((NSArrayController *) inObject).arrangedObjects ;
    if (arrangedObjects.count > 0) {
      const NSUInteger sel = ((NSArrayController *) inObject).selectionIndex ;
      OC_GGS_TextDisplayDescriptor * object = [arrangedObjects objectAtIndex:sel] ;
      NSMenu * menu = [object menuForEntryPopUpButton] ;
      [self populatePopUpButtonWithMenu:menu] ;
    }
  }else{
    [super
      observeValueForKeyPath:inKeyPath
      ofObject:inObject
      change:inChange
      context:inContext
    ] ;
  }
}

//---------------------------------------------------------------------------*

- (void) removeObserver:(NSObject *) inObserver
         forKeyPath:(NSString *) inKeyPath {
  if ([inKeyPath isEqualToString:@"selectionIndex"]) {
    self.documentView = nil ;
  }else{
    [super
      removeObserver:inObserver
      forKeyPath:inKeyPath
    ] ;
  }
}

//---------------------------------------------------------------------------*

@end
