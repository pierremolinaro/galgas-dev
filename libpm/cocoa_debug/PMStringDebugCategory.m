#import "PMCocoaCallsDebug.h"

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG

//---------------------------------------------------------------------------*

@implementation NSString (PMStringDebugCategory)

//---------------------------------------------------------------------------*

- (unichar) characterAtIndex: (NSUInteger) inIndex LOCATION_ARGS {
  if (inIndex >= self.length) {
    NSLog (@"characterAtIndex:%lu >= length %lu in:%s:%d", inIndex, self.length, IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  return [self characterAtIndex:inIndex] ; // DO NOT ADD 'HERE' !!!
}

//---------------------------------------------------------------------------*

@end

//---------------------------------------------------------------------------*

#endif
