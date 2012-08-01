//
//  OC_GGS_TextView.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 27/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <AppKit/AppKit.h>

//---------------------------------------------------------------------------*

@class OC_GGS_TextDisplayDescriptor ;

//---------------------------------------------------------------------------*

@interface OC_GGS_TextView : NSTextView

@property (retain, atomic) OC_GGS_TextDisplayDescriptor * displayDescriptor ;
@property (retain, nonatomic, setter=setIssueArray:) NSArray * issueArray ;

@end

//---------------------------------------------------------------------------*
