//
//  GGSUpdateCocoaGalgas.m
//  galgas
//
//  Created by Pierre MOLINARO on 02/10/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//
//--------------------------------------------------------------------------*

#import "GGSUpdateCocoaGalgas.h"
#import "OC_GGS_PreferencesController.h"

//--------------------------------------------------------------------------*

@implementation GGSUpdateCocoaGalgas

//--------------------------------------------------------------------------*

- (void) awakeFromNib {
  NSTabView * prefsTabView = [gCocoaGalgasPreferencesController preferencesTabView] ;
  NSTabViewItem * updateTabViewItem = [[NSTabViewItem alloc] init] ;
  [updateTabViewItem setView:mUpdateView] ;
  [updateTabViewItem setLabel:@"Update"] ;
  [prefsTabView addTabViewItem:updateTabViewItem] ;
  [updateTabViewItem release] ;
}

//--------------------------------------------------------------------------*

@end
