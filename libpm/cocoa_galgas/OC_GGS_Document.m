//---------------------------------------------------------------------------*
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2003, ..., 2011 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#import "OC_GGS_Document.h"
#import "PMCocoaCallsDebug.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_DocumentInterface.h"
#import "F_CocoaWrapperForGalgas.h"

//---------------------------------------------------------------------------*

//#define DEBUG_MESSAGES

//---------------------------------------------------------------------------*

@implementation OC_GGS_Document

+ (NSArray *)restorableStateKeyPaths {
  return [NSArray arrayWithObjects:@"mDocumentInterfaceArray", @"mSourceTextWithSyntaxColoring", nil] ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       I N I T                                                             *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    #ifdef DEBUG_MESSAGES
      NSLog (@"%s", __PRETTY_FUNCTION__) ;
    #endif
    mDocumentInterfaceArray = [NSMutableArray new] ;
    mFileEncoding = NSUTF8StringEncoding ;
    self.undoManager = nil ;
  }
  return self;
}

//---------------------------------------------------------------------------*

- (NSString *) sourceStringForGlobalSearch {
  return mSourceTextWithSyntaxColoring.sourceString ;
}

//---------------------------------------------------------------------------*

- (void) replaceSourceStringWithString: (NSString *) inString {
  [mSourceTextWithSyntaxColoring replaceSourceStringWithString:inString] ;
}

//---------------------------------------------------------------------------*

#pragma mark Document Save

//---------------------------------------------------------------------------*
//                                                                           *
//    W R I T E    T O    F I L E                                            *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) writeToURL: (NSURL *) inAbsoluteURL
         ofType: (NSString *) inTypeName
         error: (NSError **) outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <writeToURL:ofType:error:>") ;
  #endif
  [mSourceTextWithSyntaxColoring breakUndoCoalescing] ;
  NSString * string = [mSourceTextWithSyntaxColoring sourceString] ;
  const BOOL ok = [string
    writeToURL:inAbsoluteURL
    atomically:YES
    encoding:NSUTF8StringEncoding
    error:outError
  ] ;
//---
  if (ok) {
    [mSourceTextWithSyntaxColoring documentHasBeenSaved] ;
  }
//---
  return ok ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//  S A V I N G    H F S    T Y P E    A N D    C R E A T O R    C O D E S   *
//                                                                           *
//---------------------------------------------------------------------------*

- (NSDictionary *) fileAttributesToWriteToURL:(NSURL *) inDocumentURL
    ofType:(NSString *)documentTypeName
    forSaveOperation:(NSSaveOperationType)saveOperationType
    originalContentsURL: (NSURL *) inOriginalURL
    error: (NSError **) outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <fileAttributesToWriteToFile:>") ;
  #endif
    
  NSDictionary *infoPlist = [[NSBundle mainBundle] infoDictionary];
  NSString *creatorCodeString;
  NSArray *documentTypes;
  NSNumber *typeCode, *creatorCode;
  NSMutableDictionary *newAttributes;
  
  typeCode = creatorCode = nil;
  
  // First, set creatorCode to the HFS creator code for the application,
  // if it exists.
   creatorCodeString = [infoPlist objectForKey:@"CFBundleSignature"];
  if(creatorCodeString)
  {
      creatorCode = [NSNumber
          numberWithUnsignedLong:NSHFSTypeCodeFromFileType([NSString
          stringWithFormat:@"'%@'",creatorCodeString])];
  }
  
  // Then, find the matching Info.plist dictionary entry for this type.
  // Use the first associated HFS type code, if any exist.
  documentTypes = [infoPlist objectForKey:@"CFBundleDocumentTypes"];
  if(documentTypes)
  {
      NSInteger i, count = [documentTypes count];
      
      for(i = 0; i < count; i++)
      {
          NSString *type = [[documentTypes objectAtIndex:i HERE]
              objectForKey:@"CFBundleTypeName"];
          if(type && [type isEqualToString:documentTypeName])
          {
              NSArray *typeCodeStrings = [[documentTypes objectAtIndex:i HERE]
                  objectForKey:@"CFBundleTypeOSTypes"];
              if(typeCodeStrings)
              {
                 NSString *firstTypeCodeString = [typeCodeStrings
                      objectAtIndex:0 HERE];
                  if (firstTypeCodeString)
                  {
                      typeCode = [NSNumber                            numberWithUnsignedLong:
                         NSHFSTypeCodeFromFileType([NSString
                         stringWithFormat:@"'%@'",firstTypeCodeString])];
                  }
              }
              break;
          }
      }
  }
   // If neither type nor creator code exist, use the default implementation.
  if(!(typeCode || creatorCode))
  {
      return [super
        fileAttributesToWriteToURL:inDocumentURL
        ofType:documentTypeName
        forSaveOperation:saveOperationType
        originalContentsURL:inOriginalURL
        error:outError
      ];
  }
  
  // Otherwise, add the type and/or creator to the dictionary.
  newAttributes = [NSMutableDictionary
    dictionaryWithDictionary:[super
      fileAttributesToWriteToURL:inDocumentURL
      ofType:documentTypeName
      forSaveOperation:saveOperationType
      originalContentsURL:inOriginalURL
      error:outError
    ]
  ];
  if(typeCode)
      [newAttributes setObject:typeCode forKey:NSFileHFSTypeCode];
  if(creatorCode)
      [newAttributes setObject:creatorCode forKey:NSFileHFSCreatorCode];
  return newAttributes;
}

//---------------------------------------------------------------------------*

#pragma mark Document Read

//---------------------------------------------------------------------------*

- (void) performCharacterConversion {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <performCharacterConversion>") ;
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
          [s appendFormat:@"%u CRLF have been converted to LF.", CRLFcount] ;
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
          [s appendFormat:@"%u CR have been converted to LF.", CRcount] ;
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
          [s appendFormat:@"%u HTAB have been converted to SPACE.", HTABcount] ;
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
        beginSheetModalForWindow:[self windowForSheet]
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <decodeLoadedDataWithStringEncoding> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//    R E A D    F R O M    F I L E                                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) readFromURL:(NSURL *) inAbsoluteURL
         ofType:(NSString *) inTypeName
         error:(NSError **)outError {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_Document <readFromURL:'%@' ofType:>", inAbsoluteURL) ;
  #endif
//--- Try UTF8
  NSStringEncoding fileEncoding = mFileEncoding ;
  NSString * source = [[NSString alloc]
    initWithContentsOfURL:inAbsoluteURL
    encoding:fileEncoding
    error:outError
  ] ;
//--- If not UTF8, try any encoding
  if (source == nil) {
    NSLog (@"Try any encoding") ;
    if (nil != outError) {
      * outError = nil ;
    }
    source = [[NSString alloc]
      initWithContentsOfURL:inAbsoluteURL
      usedEncoding:& fileEncoding
      error:outError
    ] ;
  }
//--- If error, try lossy encoding
  if (source == nil) {
    NSLog (@"Try lossy encoding") ;
    if (nil != outError) {
      * outError = nil ;
    }
    NSData * data = [NSData dataWithContentsOfURL:inAbsoluteURL options:0 error:outError] ;
    if (nil != data) {
      const NSUInteger dataLength = [data length] ;
      const unsigned char * bytes = [data bytes] ;
      NSMutableString * s = [NSMutableString new] ;
      for (NSUInteger i=0 ; i<dataLength ; i++) {
        const unsigned char c = bytes [i] ;
        if ((c == 0x0A) || (c == 0x0D) || (c == 0x09) || ((c >= ' ') && (c <= 0x7E))) {
          [s appendFormat:@"%c", c] ;
        }else{
          [s appendFormat:@"%C", 0xFFFD] ; // Replacement character
        }
      }
      source = [s copy] ;
    }
  }
  mFileEncoding = fileEncoding ;
//--- Delegate for syntax coloring
  if (source != nil) {
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (performCharacterConversion)
      target:self
      argument:nil
      order:0
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
//---
  mSourceTextWithSyntaxColoring = [[OC_GGS_TextSyntaxColoring alloc]
    initWithSourceString:source
    tokenizer:tokenizerForExtension ([[inAbsoluteURL absoluteString] pathExtension])
    sourcePath:self.fileURL.path
  ] ;
//---
  return source != nil ;
}

//---------------------------------------------------------------------------*

- (void) showWindows {
  NSWindow * window = [self addInterfaceWindow] ;
  [self setWindow:window] ;
  [super showWindows] ;
}

//---------------------------------------------------------------------------*

- (NSWindow *) addInterfaceWindow {
  OC_GGS_DocumentInterface * newInterface = [[OC_GGS_DocumentInterface alloc] initWithDocument:self] ;
  [mDocumentInterfaceArray addObject:newInterface] ;
//--- Load NIB
  const BOOL ok = [NSBundle loadNibNamed:@"OC_GGS_DocumentInterface" owner:newInterface] ;
//---
  if (!ok) {
    NSBeep () ;
  }
//---
  return newInterface.window ;
}

//---------------------------------------------------------------------------*

- (OC_GGS_TextSyntaxColoring *) sourceTextWithSyntaxColoring {
  return mSourceTextWithSyntaxColoring ;
}

//---------------------------------------------------------------------------*

- (BOOL) canTerminateApplication {
  return YES ;
}

//---------------------------------------------------------------------------*

@end
