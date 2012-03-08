#import "PMCocoaCallsDebug.h"

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG

//---------------------------------------------------------------------------*

@interface NSString (PMStringDebugCategory)

- (unichar) characterAtIndex: (NSUInteger) index LOCATION_ARGS ;

@end

//---------------------------------------------------------------------------*

#endif
