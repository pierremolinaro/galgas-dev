//
//  OC_GGS_SourceTextView.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface OC_GGS_SourceTextView : NSTextView <NSTextViewDelegate> {
  @private NSUndoManager * mUndoManager ;
}

@end
