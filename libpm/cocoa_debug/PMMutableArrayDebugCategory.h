#import "PMCocoaCallsDebug.h"

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG

//---------------------------------------------------------------------------*

@interface NSMutableArray (PMMutableArrayDebugCategory)

- (void) addObject: (id) inObject LOCATION_ARGS ;

- (void) removeAllObjects COLON_LOCATION_ARGS ;

- (void) removeObject: (id) inObject LOCATION_ARGS ;

@end

//---------------------------------------------------------------------------*

#endif
