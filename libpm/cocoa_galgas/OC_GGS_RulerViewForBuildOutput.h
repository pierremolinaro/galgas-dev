//----------------------------------------------------------------------------------------------------------------------
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2012, ..., 2020 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#import <Cocoa/Cocoa.h>

//----------------------------------------------------------------------------------------------------------------------

@class OC_GGS_UserInterface ;

//----------------------------------------------------------------------------------------------------------------------

@interface OC_GGS_RulerViewForBuildOutput : NSRulerView {
  @private NSArray * mIssueArray ;
  @private OC_GGS_UserInterface * mDocument ;
}

- (id) initWithDocument: (OC_GGS_UserInterface *) inDocument ;

- (void) setIssueArray: (NSArray *) inIssueArray ;

- (void) detach ;
@end

//----------------------------------------------------------------------------------------------------------------------
