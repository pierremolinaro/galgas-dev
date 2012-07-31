//
//  OC_GGS_DocumentData.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 31/07/12.
//  Copyright (c) 2012 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_DocumentData.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "F_CocoaWrapperForGalgas.h"

//---------------------------------------------------------------------------*

static NSMutableDictionary * gDocumentDataDictionary ;

//---------------------------------------------------------------------------*

@implementation OC_GGS_DocumentData

//---------------------------------------------------------------------------*

- (void) performCharacterConversion {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Get source string
  NSString * source = [mSourceTextWithSyntaxColoring sourceString] ;
//--- Search for "\r" ?
  BOOL needsConversionForCR = NO ;
  if ([[NSUserDefaults standardUserDefaults] boolForKey:@"PMConvert_CRLF_And_CR_To_LF_AtStartUp"]) {
    // NSLog (@"Convert CRLF and CR to LF") ;
    needsConversionForCR = [source rangeOfString:@"\r"].location != NSNotFound ;
  }
  BOOL needsConversionForHTAB = NO ;
  if ([[NSUserDefaults standardUserDefaults] boolForKey:@"PMConvert_HTAB_To_SPACE_AtStartUp"]) {
    // NSLog (@"Convert HTAB to SPACE") ;
    needsConversionForHTAB = [source rangeOfString:@"\x09"].location != NSNotFound ;
  }
  if (needsConversionForCR || needsConversionForHTAB) {
    NSMutableString * s = [NSMutableString new] ;
    if (needsConversionForCR) {
    //--- Convert CR LF to LF
      NSArray * a = [source componentsSeparatedByString:@"\r\n"] ;
      const NSUInteger CRLFcount = [a count] - 1 ;
      if (CRLFcount > 0) {
        source = [a componentsJoinedByString:@"\n"] ;
        if (CRLFcount == 1) {
          [s appendFormat:@"1 CRLF has been converted to LF."] ;
        }else if (CRLFcount > 1) {
          [s appendFormat:@"%lu CRLF have been converted to LF.", CRLFcount] ;
        }
      }
    //--- Convert CR to LF
      a = [source componentsSeparatedByString:@"\r"] ;
      const NSUInteger CRcount = [a count] - 1 ;
      if (CRcount > 0) {
        source = [a componentsJoinedByString:@"\n"] ;
        if ([s length] > 0) {
          [s appendString:@"\n"] ;
        }
        if (CRcount == 1) {
          [s appendFormat:@"1 CR has been converted to LF."] ;
        }else if (CRcount > 1) {
          [s appendFormat:@"%lu CR have been converted to LF.", CRcount] ;
        }
      }
    }
    if (needsConversionForHTAB) {
      NSArray * a = [source componentsSeparatedByString:@"\x09"] ;
      const NSUInteger HTABcount = [a count] - 1 ;
      if (HTABcount > 0) {
        source = [a componentsJoinedByString:@" "] ;
        if ([s length] > 0) {
          [s appendString:@"\n"] ;
        }
        if (HTABcount == 1) {
          [s appendFormat:@"1 HTAB has been converted to SPACE."] ;
        }else if (HTABcount > 1) {
          [s appendFormat:@"%lu HTAB have been converted to SPACE.", HTABcount] ;
        }
      }
    }
  //--- Display sheet if conversion done
    if ([s length] > 0) {
      [mSourceTextWithSyntaxColoring replaceSourceStringWithString:source] ;
      NSAlert * alert = [NSAlert 
        alertWithMessageText:@"Source String Conversion"
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"%@", s
      ] ;
      [alert
        beginSheetModalForWindow:nil // [self windowForSheet]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (void) readDocumentFromFile {
//--- Try UTF8
  NSString * source = [[NSString alloc]
    initWithContentsOfURL:mDocumentURL
    encoding:mFileEncoding
    error:nil
  ] ;
//--- If not UTF8, try any encoding
  if (source == nil) {
    NSLog (@"Try any encoding") ;
    source = [[NSString alloc]
      initWithContentsOfURL:mDocumentURL
      usedEncoding:& mFileEncoding
      error:nil
    ] ;
  }
//--- If error, try lossy encoding
  if (source == nil) {
    NSLog (@"Try lossy encoding") ;
    mFileEncoding = NSUTF8StringEncoding ;
    NSData * data = [NSData dataWithContentsOfURL:mDocumentURL options:0 error:nil] ;
    if (nil != data) {
      const NSUInteger dataLength = [data length] ;
      const unsigned char * bytes = [data bytes] ;
      NSMutableString * s = [NSMutableString new] ;
      for (NSUInteger i=0 ; i<dataLength ; i++) {
        const unsigned char c = bytes [i] ;
        if ((c == 0x0A) || (c == 0x0D) || (c == 0x09) || ((c >= ' ') && (c <= 0x7E))) {
          [s appendFormat:@"%c", c] ;
        }else{
          [s appendFormat:@"%C", (uint16_t) 0xFFFD] ; // Replacement character
        }
      }
      source = [s copy] ;
    }
  }
//--- Delegate for syntax coloring
  mSourceTextWithSyntaxColoring = [[OC_GGS_TextSyntaxColoring alloc]
    initWithSourceString:source
    tokenizer:tokenizerForExtension (mDocumentURL.absoluteString.pathExtension)
    documentData:self
    issueArray:nil // mIssueArrayController.arrangedObjects
  ] ;
//---
  if (source != nil) {
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (performCharacterConversion)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}

//---------------------------------------------------------------------------*

- (OC_GGS_DocumentData *) initWithDataFromURL: (NSURL *) inDocumentURL {
  self = [super init] ;
  if (self) {
    mDocumentURL = inDocumentURL.copy ;
    mFileEncoding = NSUTF8StringEncoding ;
    mDisplayDescriptorArray = [NSMutableArray new] ;
    [self readDocumentFromFile] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) setCocoaDocument: (OC_GGS_Document *) inDocument {
  if (nil != inDocument) {
    mDocument = inDocument ;
  }
}

//---------------------------------------------------------------------------*

+ (OC_GGS_DocumentData *) findOrAddDataForDocumentURL: (NSURL *) inDocumentURL
                          forCocoaDocument: (OC_GGS_Document *) inDocument {
  if (nil == gDocumentDataDictionary) {
    gDocumentDataDictionary = [NSMutableDictionary new] ;
  }
  OC_GGS_DocumentData * documentData = [gDocumentDataDictionary objectForKey:inDocumentURL] ;
  if (nil == documentData) {
    documentData = [[OC_GGS_DocumentData alloc]
      initWithDataFromURL:inDocumentURL
    ] ;
    [gDocumentDataDictionary setObject:documentData forKey:inDocumentURL] ;
  }
  [documentData setCocoaDocument:inDocument] ;
  return documentData ;
}

//---------------------------------------------------------------------------*

- (OC_GGS_TextDisplayDescriptor *) newSourceDisplayDescriptorForDocument: (OC_GGS_Document *) inDocumentUsedForDisplaying {
  OC_GGS_TextDisplayDescriptor * tdd = [[OC_GGS_TextDisplayDescriptor alloc]
    initWithDocumentData:self
    displayDocument:inDocumentUsedForDisplaying
  ] ;
  [mDisplayDescriptorArray addObject:tdd] ;
  return tdd ;
}

//---------------------------------------------------------------------------*

- (NSString *) sourceString {
  return mSourceTextWithSyntaxColoring.sourceString ;
}

//---------------------------------------------------------------------------*

- (OC_GGS_TextSyntaxColoring *) textSyntaxColoring {
  return mSourceTextWithSyntaxColoring ;
}

//---------------------------------------------------------------------------*

- (void) replaceSourceStringWithString: (NSString *) inString {
  [mSourceTextWithSyntaxColoring replaceSourceStringWithString:inString] ;
}

//---------------------------------------------------------------------------*

- (NSURL *) fileURL  {
  return mDocumentURL ;
}

//---------------------------------------------------------------------------*

- (OC_GGS_Document *) document {
  return mDocument ;
}

//---------------------------------------------------------------------------*

- (BOOL) performSaveToURL: (NSURL *) inAbsoluteURL {
  [mSourceTextWithSyntaxColoring breakUndoCoalescing] ;
  NSString * string = [mSourceTextWithSyntaxColoring sourceString] ;
  NSError * error = nil ;
  const BOOL ok = [string
    writeToURL:(inAbsoluteURL == nil) ? mDocumentURL : inAbsoluteURL
    atomically:YES
    encoding:NSUTF8StringEncoding
    error:& error
  ] ;
//---
  if (ok) {
    [mSourceTextWithSyntaxColoring documentHasBeenSaved] ;
  }else{
    [NSApp presentError:error] ;
  }
  return ok ;
}

//---------------------------------------------------------------------------*

- (void) save {
  if (nil == mDocument) {
    [self performSaveToURL:nil] ;
  }else{
    [mDocument saveDocument:nil] ;
  }
}

//---------------------------------------------------------------------------*

+ (void) saveAllDocuments {
  for (OC_GGS_DocumentData * documentData in gDocumentDataDictionary.allValues) {
    [documentData save] ;
  }
}

//---------------------------------------------------------------------------*

@end

//---------------------------------------------------------------------------*
