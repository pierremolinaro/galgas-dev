//
//  OC_GGS_SourceTextView.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_SourceTextView.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"

//---------------------------------------------------------------------------*

@implementation OC_GGS_SourceTextView

//---------------------------------------------------------------------------*

- (void) refreshShowInvisibleCharacters {
  const BOOL show = [[NSUserDefaults standardUserDefaults] boolForKey:@"PMShowInvisibleCharacters"] ;
  [self.layoutManager setShowsInvisibleCharacters:show] ;
  [self setNeedsDisplay:YES] ;
}

//---------------------------------------------------------------------------*

- (void) awakeFromNib {
  [self setDelegate:self] ;
//--- Add "Show Invisible Character" preference observer
  NSUserDefaultsController * udc = [NSUserDefaultsController sharedUserDefaultsController] ;
  [udc
    addObserver:self
    forKeyPath:@"values.PMShowInvisibleCharacters"
    options:0
    context:NULL
  ] ;
  [self refreshShowInvisibleCharacters] ;
}

//---------------------------------------------------------------------------*

- (NSUndoManager *) undoManagerForTextView:(NSTextView *)aTextView { // Delegate Method
  return mUndoManager ;
}

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject: (id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if ([inKeyPath isEqualToString:@"selectionIndex"]) {
    NSArray * arrangedObjects = ((NSArrayController *) inObject).arrangedObjects ;
    if (arrangedObjects.count > 0) {
      const NSUInteger sel = ((NSArrayController *) inObject).selectionIndex ;
      OC_GGS_TextDisplayDescriptor * object = [arrangedObjects objectAtIndex:sel] ;
      // NSLog (@"object %@", object) ;
      OC_GGS_TextSyntaxColoring * textSyntaxColoring = [object textSyntaxColoring] ;
      [textSyntaxColoring.textStorage addLayoutManager:self.layoutManager] ;
      mUndoManager = textSyntaxColoring.undoManager ;
    }else{
      NSTextStorage * textStorage = self.layoutManager.textStorage ;
      [textStorage removeLayoutManager:self.layoutManager] ;
      mUndoManager = nil ;
    }
  }else if ([inKeyPath isEqualToString:@"values.PMShowInvisibleCharacters"]) {
    [self refreshShowInvisibleCharacters] ;
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
    NSTextStorage * textStorage = self.layoutManager.textStorage ;
    [textStorage removeLayoutManager:self.layoutManager] ;
    mUndoManager = nil ;
  }else{
    [super
      removeObserver:inObserver
      forKeyPath:inKeyPath
    ] ;
  }
}

//---------------------------------------------------------------------------*

@end
