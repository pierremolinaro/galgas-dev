//
//  OC_GGS_DocumentData.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 31/07/12.
//  Copyright (c) 2012 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@class OC_GGS_TextSyntaxColoring ;
@class OC_GGS_TextDisplayDescriptor ;
@class OC_GGS_Document ;

//---------------------------------------------------------------------------*

@interface OC_GGS_DocumentData : NSObject {
  @protected NSURL * mDocumentURL ;
  @private OC_GGS_TextSyntaxColoring * mSourceTextWithSyntaxColoring ;
  @private NSMutableArray * mDisplayDescriptorArray ;
  @private OC_GGS_Document * mDocument ; // May be nil

//--- Document encoding
  @private NSStringEncoding mFileEncoding ;
}

+ (void) saveAllDocuments ;

+ (OC_GGS_DocumentData *) findOrAddDataForDocumentURL: (NSURL *) inDocumentURL
                          forCocoaDocument: (OC_GGS_Document *) inDocument ;

- (OC_GGS_TextDisplayDescriptor *) newSourceDisplayDescriptorForDocument: (OC_GGS_Document *) inDocumentUsedForDisplaying ;

- (OC_GGS_TextSyntaxColoring *) textSyntaxColoring ;

- (OC_GGS_Document *) document ;

- (NSString *) sourceString ;

- (void) replaceSourceStringWithString: (NSString *) inString ;

- (NSURL *) fileURL ;

- (BOOL) performSaveToURL: (NSURL *) inAbsoluteURL ;
@end

//---------------------------------------------------------------------------*
