//
//  OC_GGS_TextDisplayDescriptor.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OC_GGS_TextSyntaxColoring ;


@interface OC_GGS_TextDisplayDescriptor : NSObject {

  @private OC_GGS_TextSyntaxColoring * mTextSyntaxColoring ;

}

- (OC_GGS_TextDisplayDescriptor *) initWithDelegateForSyntaxColoring: (OC_GGS_TextSyntaxColoring *) inDelegate ;

- (void) setSyntaxColoringDelegate: (OC_GGS_TextSyntaxColoring *) inDelegate ;
@end
