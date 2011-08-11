//
//  PMDownloadData.m
//  canari
//
//  Created by Pierre Molinaro on 20/08/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import "PMDownloadData.h"


@implementation PMDownloadData

//---------------------------------------------------------------------------*

- (void) notifyDelegate {
  [[NSRunLoop currentRunLoop]
    performSelector:mDownloadDidEndSelector
    target:mDelegate
    argument:self
    order:0
    modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
  ] ;
}

//---------------------------------------------------------------------------*

- (id) initDownloadWithURLString: (NSString *) inURLString
       delegate: (id) inDelegate
       downloadDidEndSelector: (SEL) inDownloadDidEndSelector
       userInfo: (id) inUserInfo {
  self = [super init] ;
  if (self) {
    mDownloadDidEndSelector = inDownloadDidEndSelector ;
    mURL = [NSURL URLWithString:inURLString] ; // mURL is nil is URL string is malformed
    [mURL retain] ;
    mDelegate = inDelegate ;
    [mDelegate retain] ;
    mDownloadedData = [NSMutableData new] ;
    mUserInfo = inUserInfo ;
    [mUserInfo retain] ;
  //--- Start Download
    if (mURL == nil) {
      mDownloadError = [NSError 
        errorWithDomain:@"PMError"
        code:0
        userInfo:[NSDictionary dictionaryWithObject:@"malformed URL" forKey:NSLocalizedFailureReasonErrorKey]
      ] ;
      [self notifyDelegate] ;
    }else{
      NSURLRequest * request = [NSURLRequest requestWithURL:mURL] ;
      mDownloadConnection = [[NSURLConnection alloc] initWithRequest:request delegate:self] ;
    }
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) dealloc {
  [mURL release] ;
  [mDelegate release] ;
  [mDownloadedData release] ;
  [mDownloadError release] ;
  [mUserInfo release] ;
  [mDownloadConnection release] ;
  [super dealloc] ;
}

//---------------------------------------------------------------------------*

//- (void)URL:(NSURL *)sender resourceDataDidBecomeAvailable:(NSData *) inNewBytes {
- (void)connection: (NSURLConnection *) connection didReceiveData:(NSData *) inNewBytes {
  // NSLog (@"resourceDataDidBecomeAvailable %u bytes", [inNewBytes length]) ;
  [mDownloadedData appendData:inNewBytes] ;
}

//---------------------------------------------------------------------------*

- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *) inError {
//- (void)URL:(NSURL *)sender resourceDidFailLoadingWithReason:(NSString *) inReason {
  // NSLog (@"resourceDidFailLoadingWithReason '%@'", inReason) ;
  mDownloadError = inError ;
  [mDownloadError retain] ;
  [self notifyDelegate] ;
}

//---------------------------------------------------------------------------*

/*- (void) URLResourceDidCancelLoading:(NSURL *)sender {
  // NSLog (@"URLResourceDidCancelLoading") ;
  mDownloadErrorString = @"Resource did cancel downloading" ;
  [self notifyDelegate] ;
}*/

//---------------------------------------------------------------------------*

- (void)connectionDidFinishLoading:(NSURLConnection *)connection {
//- (void) URLResourceDidFinishLoading:(NSURL *)sender {
  // NSLog (@"URLResourceDidFinishLoading") ;
  [self notifyDelegate] ;
}

//---------------------------------------------------------------------------*

- (NSError *) downloadError {
  return mDownloadError ;
}

//---------------------------------------------------------------------------*

- (NSData *) downloadedData {
  return mDownloadedData ;
}

//---------------------------------------------------------------------------*

- (id) userInfo {
  return mUserInfo ;
}

//---------------------------------------------------------------------------*

- (NSString *) urlString {
  return [mURL absoluteString] ;
}

//---------------------------------------------------------------------------*

@end
