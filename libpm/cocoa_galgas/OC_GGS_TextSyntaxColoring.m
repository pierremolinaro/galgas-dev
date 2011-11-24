//
//  OC_GGS_TextSyntaxColoring.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_TextDisplayDescriptor.h"

//---------------------------------------------------------------------------*

@implementation OC_GGS_TextSyntaxColoring

//---------------------------------------------------------------------------*

- (OC_GGS_TextSyntaxColoring *) initWithSourceString: (NSString *) inSource {
  self = [super init] ;
  if (self) {
    mTextDisplayDescriptorSet = [NSMutableSet new] ;
    mSourceString = [[NSAttributedString alloc] initWithString:inSource] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) addTextDisplayDescriptor: (OC_GGS_TextDisplayDescriptor *) inDisplayDescriptor {
  if (! [mTextDisplayDescriptorSet containsObject:inDisplayDescriptor]) {
    [mTextDisplayDescriptorSet addObject:inDisplayDescriptor] ;
    [inDisplayDescriptor setSyntaxColoringDelegate:self] ;
  }
}

//---------------------------------------------------------------------------*

- (void) removeTextDisplayDescriptor: (OC_GGS_TextDisplayDescriptor *) inDisplayDescriptor {
  if ([mTextDisplayDescriptorSet containsObject:inDisplayDescriptor]) {
    [mTextDisplayDescriptorSet removeObject:inDisplayDescriptor] ;
    [inDisplayDescriptor setSyntaxColoringDelegate:nil] ;
  }

}

//---------------------------------------------------------------------------*

@end
