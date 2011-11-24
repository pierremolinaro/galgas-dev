//
//  OC_GGS_TextDisplayDescriptor.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"

@implementation OC_GGS_TextDisplayDescriptor

- (OC_GGS_TextDisplayDescriptor *) initWithDelegateForSyntaxColoring: (OC_GGS_TextSyntaxColoring *) inDelegateForSyntaxColoring {
  self = [self init] ;
  if (self) {
    mTextSyntaxColoring = inDelegateForSyntaxColoring ;
  }
  return self ;
}

- (void) setSyntaxColoringDelegate: (OC_GGS_TextSyntaxColoring *) inDelegate {
  if (mTextSyntaxColoring != inDelegate) {
    OC_GGS_TextSyntaxColoring * temp = mTextSyntaxColoring ;
    mTextSyntaxColoring = nil ;
    [temp removeTextDisplayDescriptor:self] ;
    mTextSyntaxColoring = inDelegate ;
    [mTextSyntaxColoring addTextDisplayDescriptor:self] ;
  }
}

- (OC_GGS_TextSyntaxColoring *) textSyntaxColoring {
  return mTextSyntaxColoring ;
}

@end
