//
//  OC_GGS_TextSyntaxColoring.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OC_GGS_TextDisplayDescriptor ;

@interface OC_GGS_TextSyntaxColoring : NSObject {
  @private NSAttributedString * mSourceString ;
  @private NSMutableSet * mTextDisplayDescriptorSet ; // Set of OC_GGS_TextDisplayDescriptor

}

- (OC_GGS_TextSyntaxColoring *) initWithSourceString: (NSString *) inSource ;

- (void) addTextDisplayDescriptor: (OC_GGS_TextDisplayDescriptor *) inDisplayDescriptor ;
- (void) removeTextDisplayDescriptor: (OC_GGS_TextDisplayDescriptor *) inDisplayDescriptor ;

@end
