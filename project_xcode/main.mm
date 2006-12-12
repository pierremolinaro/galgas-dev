//
//  main.m
//  essai_cocoa
//
//  Created by Pierre Molinaro on Fri Nov 28 2003.
//  Copyright (c) 2003 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface PMTextStorage : NSTextStorage {

}

@end

//---------------------------------------------------------------------------*

@implementation PMTextStorage

- (id) init {
  self = [super init] ;
  if (self) {
    NSLog (@"PMTextStorage <init>") ;
	// Register for "text changed" notifications of our text storage:
	  [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector:@selector(myProcessEditing:)
      name: NSTextStorageWillProcessEditingNotification
      object:self
    ];
  }
  return self ;
}

-(void) myProcessEditing: (NSNotification*)inNotification {
  const NSRange	range = [self editedRange];
  NSLog (@"Edited Range [%d, %d]", range.location, range.length) ; 
  unsigned i ;
  for (i=0 ; i<range.length ; i++) {
    const NSRange r = {range.location + i, 1} ;
    [self removeAttribute:NSForegroundColorAttributeName range:r] ;
    [self
      addAttribute:NSForegroundColorAttributeName
      value:((r.location & 1) == 0) ? [NSColor redColor] : [NSColor blueColor]
      range:r
    ] ;
  }
}


@end

//---------------------------------------------------------------------------*

int main (int argc, const char * argv []) {
//  [PMTextStorage poseAsClass:[NSTextStorage class]] ;
  return NSApplicationMain (argc, argv) ;
}

//---------------------------------------------------------------------------*
