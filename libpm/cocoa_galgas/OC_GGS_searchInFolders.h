//
//  OC_GGS_searchInFolders.h
//  galgas
//
//  Created by Pierre Molinaro on 14/07/11.
//  Copyright 2011 IRCCyN. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface OC_GGS_searchInFolders : NSObject {

  @private NSMutableArray * mSearchPathArray ; // Array of NSMutableDictionary
//--- The element dictionary contains 3 keys:
//      - pathSelected
//      - recursive
//      - path

 @private NSMutableArray * mResultArray ;
 @private IBOutlet NSTreeController * mResultArrayTreeController ;
 @private IBOutlet NSTextField * mResultTextField ;
 @private IBOutlet NSUInteger mMatchCount ;
}

- (IBAction) addFolderAction: (id) inSender ;

- (IBAction) findAction: (id) inSender ;

@end
