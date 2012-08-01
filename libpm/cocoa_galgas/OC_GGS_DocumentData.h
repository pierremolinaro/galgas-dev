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
  @private NSMutableArray * mDisplayDescriptorArray ;

//--- Document encoding
  @private NSStringEncoding mFileEncoding ;
}

@property (retain, atomic, readonly) OC_GGS_Document * document ; // May be nil
@property (retain, atomic, readonly) OC_GGS_TextSyntaxColoring * textSyntaxColoring ;
@property (copy, atomic, readonly) NSURL * fileURL ;

+ (void) saveAllDocuments ;

+ (OC_GGS_DocumentData *) findOrAddDataForDocumentURL: (NSURL *) inDocumentURL
                          forCocoaDocument: (OC_GGS_Document *) inDocument ;

- (OC_GGS_TextDisplayDescriptor *) newSourceDisplayDescriptorForDocument: (OC_GGS_Document *) inDocumentUsedForDisplaying ;

- (void) detachFromCocoaDocument ;

- (NSString *) sourceString ;

- (void) replaceSourceStringWithString: (NSString *) inString ;

- (BOOL) performSaveToURL: (NSURL *) inAbsoluteURL ;
@end

//---------------------------------------------------------------------------*
