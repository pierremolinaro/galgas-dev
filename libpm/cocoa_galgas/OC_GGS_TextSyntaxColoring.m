//
//  OC_GGS_TextSyntaxColoring.m
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_Lexique.h"
#import "OC_Token.h"
#import "PMCocoaCallsDebug.h"
#import "OC_GGS_PreferencesController.h"

//---------------------------------------------------------------------------*

#define TAG_MASK                          (0xFF000000)
#define TAG_FOR_FOREGROUND_COLOR          (0x80000000)
#define TAG_FOR_BACKGROUND_COLOR          (0x90000000)
#define TAG_FOR_FONT_ATTRIBUTE            (0xA0000000)
#define TAG_FOR_TEMPLATE_FOREGROUND_COLOR (0xB0000000)
#define TAG_FOR_TEMPLATE_BACKGROUND_COLOR (0xC0000000)
#define TAG_FOR_TEMPLATE_FONT_ATTRIBUTE   (0xD0000000)

//---------------------------------------------------------------------------*

@implementation OC_GGS_TextSyntaxColoring

//---------------------------------------------------------------------------*

- (void) refreshRulers {
  for (NSLayoutManager * lm in mSourceTextStorage.layoutManagers) {
    for (NSTextContainer * tc in lm.textContainers) {
      NSTextView * tw = [tc textView] ;
      NSScrollView * sv = (NSScrollView *) [[tw superview] superview] ;
      // NSLog (@"%@", sv) ;
      if ([sv isKindOfClass:[NSScrollView class]]) {
        NSRulerView * ruler = [sv verticalRulerView] ;
        [ruler setNeedsDisplay:YES] ;
      }
    }    
  }
}

//---------------------------------------------------------------------------*

- (void) computeMaxLineHeight: (BOOL *) outLineHeightDidChange {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_DelegateForSyntaxColoring <computeMaxLineHeight:>") ;
  #endif
  NSFont * font = [mTemplateTextAttributeDictionary objectForKey:NSFontAttributeName] ;
  double maxAscender = [font ascender] + 4.0 ;
  double maxLeadingMinusDescender = [font leading] - [font descender] ;
  UInt32 i ;
  for (i=0 ; i<[mFontAttributesDictionaryArray count] ; i++) {
    NSDictionary * d = [mFontAttributesDictionaryArray objectAtIndex:i HERE] ;
    font = [d objectForKey:NSFontAttributeName] ;
    maxAscender = fmax (maxAscender, [font ascender] + 4.0) ;
    maxLeadingMinusDescender = fmax (maxLeadingMinusDescender, [font leading] - [font descender]) ;
  }
  const BOOL maxLineHeightHasChanged = (mMaxAscender != maxAscender) || (mMaxLeadingMinusDescender != maxLeadingMinusDescender) ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"maxLineHeightHasChanged: %@", maxLineHeightHasChanged ? @"yes" : @"no") ;
  #endif
  if (maxLineHeightHasChanged) {
    // NSLog (@"Max line Height: %f", maxLineHeight) ;
    mMaxAscender = maxAscender ;
    mMaxLeadingMinusDescender = maxLeadingMinusDescender ;
  //--- Set new value to default settings
    NSMutableParagraphStyle * paragraghStyle = [[[NSMutableParagraphStyle alloc] init] autorelease] ;
    [paragraghStyle setMaximumLineHeight:mMaxAscender + mMaxLeadingMinusDescender] ;
    [paragraghStyle setMinimumLineHeight:mMaxAscender + mMaxLeadingMinusDescender] ;
    if ([mFontAttributesDictionaryArray count] > 0) {
      NSMutableDictionary * d = [mFontAttributesDictionaryArray objectAtIndex:0 HERE] ;
      [d setObject:paragraghStyle forKey:NSParagraphStyleAttributeName] ;
    }
  }
  if (NULL != outLineHeightDidChange) {
    * outLineHeightDidChange = maxLineHeightHasChanged ;
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_DelegateForSyntaxColoring <computeMaxLineHeight:> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*

- (OC_GGS_TextSyntaxColoring *) initWithSourceString: (NSString *) inSource
                                tokenizer: (OC_Lexique *) inTokenizer {
  self = [super init] ;
  if (self) {
    mTokenizer = inTokenizer ;
    mTextDisplayDescriptorSet = [NSMutableSet new] ;
    mSourceTextStorage = [NSTextStorage new] ;
    mStyledRangeArray = [NSMutableArray new] ;
    mTemplateTextAttributeDictionary = [NSMutableDictionary new] ;
    mUndoManager = [NSUndoManager new] ;
  //---
    [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector:@selector(myProcessEditing:)
      name: NSTextStorageDidProcessEditingNotification
      object:mSourceTextStorage
    ] ;
  //--------------------------------------------------- Add foreground color observers
    NSUserDefaultsController * udc = [NSUserDefaultsController sharedUserDefaultsController] ;
    NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults] ;
    if ([mTokenizer isTemplateLexique]) {
      NSString * keyPath = [NSString stringWithFormat:@"values.%@_%@", GGS_template_foreground_color, [mTokenizer styleIdentifierForStyleIndex:0]] ;
      [udc
        addObserver:self
        forKeyPath:keyPath
        options:0
        context:(void *) (TAG_FOR_TEMPLATE_FOREGROUND_COLOR)
      ] ;
      NSString * name = [NSString stringWithFormat:@"%@_%@", GGS_template_foreground_color, [mTokenizer styleIdentifierForStyleIndex:0]] ;
      NSData * data = [defaults dataForKey:name] ;
      if (data != nil) {
        NSColor * color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
        [mTemplateTextAttributeDictionary setObject:color forKey:NSForegroundColorAttributeName] ;
      }else{
        [mTemplateTextAttributeDictionary setObject:[NSColor blackColor] forKey:NSForegroundColorAttributeName] ;
      }
    }
    for (NSUInteger i=0 ; i<[mTokenizer styleCount] ; i++) {
      NSString * keyPath = [NSString stringWithFormat:@"values.%@_%@", GGS_named_color, [mTokenizer styleIdentifierForStyleIndex:i]] ;
      [udc
        addObserver:self
        forKeyPath:keyPath
        options:0
        context:(void *) (TAG_FOR_FOREGROUND_COLOR | i)
      ] ;
    }
  //--------------------------------------------------- Add background color observers
    if ([mTokenizer isTemplateLexique]) {
      NSString * keyPath = [NSString stringWithFormat:@"values.%@_%@", GGS_template_background_color, [mTokenizer styleIdentifierForStyleIndex:0]] ;
      [udc
        addObserver:self
        forKeyPath:keyPath
        options:0
        context:(void *) (TAG_FOR_TEMPLATE_BACKGROUND_COLOR)
      ] ;
      NSString * name = [NSString stringWithFormat:@"%@_%@", GGS_template_background_color, [mTokenizer styleIdentifierForStyleIndex:0]] ;
      NSData * data = [defaults dataForKey:name] ;
      if (data != nil) {
        NSColor * color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
        [mTemplateTextAttributeDictionary setObject:color forKey:NSBackgroundColorAttributeName] ;
      }else{
        [mTemplateTextAttributeDictionary setObject:[NSColor blackColor] forKey:NSBackgroundColorAttributeName] ;
      }
    }
    for (NSUInteger i=0 ; i<[mTokenizer styleCount] ; i++) {
      NSString * keyPath = [NSString stringWithFormat:@"values.%@_%@", GGS_named_background_color, [mTokenizer styleIdentifierForStyleIndex:i]] ;
      [udc
        addObserver:self
        forKeyPath:keyPath
        options:0
        context:(void *) (TAG_FOR_BACKGROUND_COLOR | i)
      ] ;
    }
  //--------------------------------------------------- Add font observers
    if ([mTokenizer isTemplateLexique]) {
      NSString * keyPath = [NSString stringWithFormat:@"values.%@_%@", GGS_template_font, [mTokenizer styleIdentifierForStyleIndex:0]] ;
      [udc
        addObserver:self
        forKeyPath:keyPath
        options:0
        context:(void *) (TAG_FOR_TEMPLATE_FONT_ATTRIBUTE)
      ] ;
    //--- Add font attribute   
      NSString * name = [NSString stringWithFormat:@"%@_%@", GGS_template_font, [mTokenizer styleIdentifierForStyleIndex:0]] ;
      NSData * data = [defaults dataForKey:name] ;
      if (data != nil) {
        NSFont * font = (NSFont *) [NSUnarchiver unarchiveObjectWithData:data] ;
        [mTemplateTextAttributeDictionary setObject:font forKey:NSFontAttributeName] ;
      }
    }
    for (NSUInteger i=0 ; i<[mTokenizer styleCount] ; i++) {
      NSString * keyPath = [NSString stringWithFormat:@"values.%@_%@", GGS_named_font, [mTokenizer styleIdentifierForStyleIndex:i]] ;
      [udc
        addObserver:self
        forKeyPath:keyPath
        options:0
        context:(void *) (TAG_FOR_FONT_ATTRIBUTE | i)
      ] ;
    }
  //---
    // NSLog (@"%p [mTokenizer styleCount] %u", mTokenizer, [mTokenizer styleCount]) ;
    mFontAttributesDictionaryArray = [NSMutableArray new] ;
    for (NSUInteger i=0 ; i<[mTokenizer styleCount] ; i++) {
      NSMutableDictionary * attributeDictionary = [NSMutableDictionary new] ;
    //--- Add foreground color   
      NSString * name = [NSString stringWithFormat:@"%@_%@", GGS_named_color, [mTokenizer styleIdentifierForStyleIndex:i]] ;
      NSData * data = [defaults dataForKey:name] ;
      if (data != nil) {
        NSColor * color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
        [attributeDictionary setObject:color forKey:NSForegroundColorAttributeName] ;
      }else{
        [attributeDictionary setObject:[NSColor blackColor] forKey:NSForegroundColorAttributeName] ;
      }
    //--- Add background color   
      name = [NSString stringWithFormat:@"%@_%@", GGS_named_background_color, [mTokenizer styleIdentifierForStyleIndex:i]] ;
      data = [defaults dataForKey:name] ;
      if (data != nil) {
        NSColor * color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
        [attributeDictionary setObject:color forKey:NSBackgroundColorAttributeName] ;
      }else{
        [attributeDictionary setObject:[NSColor blackColor] forKey:NSBackgroundColorAttributeName] ;
      }
    //--- Add font attribute   
      name = [NSString stringWithFormat:@"%@_%@", GGS_named_font, [mTokenizer styleIdentifierForStyleIndex:i]] ;
      data = [defaults dataForKey:name] ;
      if (data != nil) {
        NSFont * font = (NSFont *) [NSUnarchiver unarchiveObjectWithData:data] ;
        [attributeDictionary setObject:font forKey:NSFontAttributeName] ;
      }
    //--- Add dictionary
      [mFontAttributesDictionaryArray addObject:attributeDictionary] ;
    }
  //--- Max line height
 //   [self computeMaxLineHeight:NULL] ;
  //--- Enter source string
    [mSourceTextStorage beginEditing] ;
    // NSLog (@"LINE %d, inSource '%@'", __LINE__, inSource) ;
    [mSourceTextStorage replaceCharactersInRange:NSMakeRange (0, mSourceTextStorage.length) withString:inSource] ;
    [mSourceTextStorage endEditing] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) addTextDisplayDescriptor: (OC_GGS_TextDisplayDescriptor *) inDisplayDescriptor {
  if (! [mTextDisplayDescriptorSet containsObject:inDisplayDescriptor]) {
    [mTextDisplayDescriptorSet addObject:inDisplayDescriptor] ;
    [inDisplayDescriptor setSyntaxColoringDelegate:self] ;
  }
}

//---------------------------------------------------------------------------*

- (void) removeTextDisplayDescriptor: (OC_GGS_TextDisplayDescriptor *) inDisplayDescriptor {
  if ([mTextDisplayDescriptorSet containsObject:inDisplayDescriptor]) {
    [mTextDisplayDescriptorSet removeObject:inDisplayDescriptor] ;
    [inDisplayDescriptor setSyntaxColoringDelegate:nil] ;
  }

}

//---------------------------------------------------------------------------*

- (NSTextStorage *) textStorage {
  return mSourceTextStorage ;
}

//---------------------------------------------------------------------------*

- (NSUndoManager *) undoManager {
  return mUndoManager ;
}

//---------------------------------------------------------------------------*

#pragma mark Text attribute did change

//---------------------------------------------------------------------------*

- (void) applyTextAttributeForIndex: (NSInteger) inChangedColorIndex {
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_DelegateForSyntaxColoring <applyTextAttributeForIndex:%u>", inChangedColorIndex) ;
  #endif
  if ((mTokenizer != NULL) && ([mSourceTextStorage length] > 0)) {
    [self refreshRulers] ;
  //--- Remove observer so that myProcessEditing will not be called at the end of edition
    [[NSNotificationCenter defaultCenter]
      removeObserver:self
      name: NSTextStorageDidProcessEditingNotification
      object:mSourceTextStorage
    ];
    [mSourceTextStorage beginEditing] ;
  //--- Change default style ?
    if (inChangedColorIndex == 0) {
      const NSRange allTextRange = {0, [mSourceTextStorage length]} ;
      [mSourceTextStorage
        setAttributes:[mFontAttributesDictionaryArray objectAtIndex:0 HERE]
        range:allTextRange
      ] ;
      for (NSUInteger i=0 ; i<[mStyledRangeArray count] ; i++) {
        OC_Token * token = [mStyledRangeArray objectAtIndex:i HERE] ;
        const SInt32 colorIndex = [token style] ;
        const NSRange range = [token range] ;
        if (colorIndex == -2) {
          [mSourceTextStorage
            addAttributes:mTemplateTextAttributeDictionary
            range:range
          ] ;
        }else if (colorIndex == -1) {
        
        }else if (colorIndex > 0) {
          [mSourceTextStorage
            addAttributes:[mFontAttributesDictionaryArray objectAtIndex:colorIndex HERE]
            range:range
          ] ;
        }
      }    
    }else{
      for (NSUInteger i=0 ; i<[mStyledRangeArray count] ; i++) {
        OC_Token * token = [mStyledRangeArray objectAtIndex:i HERE] ;
        const SInt32 colorIndex = [token style] ;
        if (colorIndex == inChangedColorIndex) {
          const NSRange range = [token range] ;
          #ifdef DEBUG_MESSAGES
            NSLog (@"change attribute for index %d [%d, %d]>", i, range.location, range.length) ;
          #endif
          if (colorIndex == -2) {
            [mSourceTextStorage
              addAttributes:mTemplateTextAttributeDictionary
              range:range
            ] ;
          }else if (colorIndex == -1) {
          
          }else if (colorIndex > 0) {
            [mSourceTextStorage
              addAttributes:[mFontAttributesDictionaryArray objectAtIndex:colorIndex HERE]
              range:range
            ] ;
          }
        }
      }
    }
    [mSourceTextStorage endEditing] ;
  //--- Resinstall observer
    [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector:@selector(myProcessEditing:)
      name: NSTextStorageDidProcessEditingNotification
      object:mSourceTextStorage
    ] ;
    #ifdef DEBUG_MESSAGES
      NSLog (@"OC_GGS_DelegateForSyntaxColoring <applyTextAttributeForIndex:> DONE") ;
    #endif
  }
}

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath: (NSString *) inKeyPath
         ofObject: (id) inObject
         change: (NSDictionary *) inChangeDictionary
         context: (void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if (mTokenizer != NULL) {
    BOOL lineHeightDidChange = NO ;
    NSColor * color = nil ;
    NSMutableDictionary * d = nil ;
    NSData * data = [inObject valueForKeyPath:inKeyPath] ;
    const NSUInteger tag = ((NSUInteger) inContext) & TAG_MASK ;
    const NSUInteger idx = ((NSUInteger) inContext) & ~ TAG_MASK ;
    switch (tag) {
    case TAG_FOR_FOREGROUND_COLOR:
      if (data == nil) {
        color = [NSColor whiteColor] ;
      }else{
        color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
      }
      d = [mFontAttributesDictionaryArray objectAtIndex:idx HERE] ;
      [d setObject:color forKey:NSForegroundColorAttributeName] ;
      [self applyTextAttributeForIndex:idx] ;
      break;
    case TAG_FOR_TEMPLATE_FOREGROUND_COLOR:
      if (data == nil) {
        color = [NSColor whiteColor] ;
      }else{
        color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
      }
      [mTemplateTextAttributeDictionary setObject:color forKey:NSForegroundColorAttributeName] ;
      [self applyTextAttributeForIndex:-2] ;
      break;
    case TAG_FOR_BACKGROUND_COLOR:
      if (data == nil) {
        color = [NSColor whiteColor] ;
      }else{
        color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
      }
      d = [mFontAttributesDictionaryArray objectAtIndex:idx HERE] ;
      [d setObject:color forKey:NSBackgroundColorAttributeName] ;
      [self applyTextAttributeForIndex:idx] ;
      break;
    case TAG_FOR_TEMPLATE_BACKGROUND_COLOR:
      if (data == nil) {
        color = [NSColor whiteColor] ;
      }else{
        color = (NSColor *) [NSUnarchiver unarchiveObjectWithData:data] ;
      }
      [mTemplateTextAttributeDictionary setObject:color forKey:NSBackgroundColorAttributeName] ;
      [self applyTextAttributeForIndex:-2] ;
      break;
    case TAG_FOR_FONT_ATTRIBUTE:
      d = [mFontAttributesDictionaryArray objectAtIndex:idx HERE] ;
      [d setObject:[NSUnarchiver unarchiveObjectWithData:data] forKey:NSFontAttributeName] ;
      [self computeMaxLineHeight: & lineHeightDidChange] ;
      [self applyTextAttributeForIndex:lineHeightDidChange ? 0 : idx] ;
      break;
    case TAG_FOR_TEMPLATE_FONT_ATTRIBUTE:
      [mTemplateTextAttributeDictionary setObject:[NSUnarchiver unarchiveObjectWithData:data] forKey:NSFontAttributeName] ;
      [self computeMaxLineHeight: & lineHeightDidChange] ;
      [self applyTextAttributeForIndex:lineHeightDidChange ? 0 : -2] ;
      break;
    default:
      break;
    }
  }
}

//---------------------------------------------------------------------------*

#pragma mark Syntax Coloring

//---------------------------------------------------------------------------*

- (void) updateSyntaxColoringForEditedRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength {
  const NSInteger textLength = mSourceTextStorage.string.length ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_DelegateForSyntaxColoring <myProcessEditing:>, edited range [%lu, %lu], changeInLength %ld", inEditedRange.location, inEditedRange.length, inChangeInLength) ;
  #endif
  NSInteger firstIndexToRedraw = 0 ;
  NSInteger lastIndexToRedraw = 0 ;
  NSInteger eraseRangeStart = 0 ;
  NSInteger eraseRangeEnd = 0 ;
  [mTokenizer
    tokenizeForSourceString:mSourceTextStorage.string
    tokenArray:mStyledRangeArray // Array of OC_Token
    editedRange:inEditedRange
    changeInLength:inChangeInLength
    firstIndexToRedraw: & firstIndexToRedraw
    lastIndexToRedraw: & lastIndexToRedraw
    eraseRangeStart: & eraseRangeStart
    eraseRangeEnd: & eraseRangeEnd
  ] ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"scanThenGetStyledRangeArray DONE (%lu)", [mFontAttributesDictionaryArray count]) ;
  #endif
//--- Erase text attributes
  if (eraseRangeEnd >= textLength) {
    eraseRangeEnd = textLength - 1 ;
  }
  if (eraseRangeStart < eraseRangeEnd) {
    const NSRange eraseRange = {eraseRangeStart, eraseRangeEnd - eraseRangeStart} ;
    #ifdef DEBUG_MESSAGES
      NSLog (@"PERFORM REMOVE ATTRIBUTE range [%lu, %lu] text length %lu", eraseRange.location, eraseRange.length, textLength) ;
    #endif
    [mSourceTextStorage
      setAttributes:[mFontAttributesDictionaryArray objectAtIndex:0 HERE]
      range:eraseRange
    ] ;
    #ifdef DEBUG_MESSAGES
      NSLog (@"mSourceTextStorage setAttributes DONE") ;
    #endif
  }
//--- Perform text coloring
  #ifdef DEBUG_MESSAGES
   NSLog (@"COLORING from %ld to %ld", firstIndexToRedraw, lastIndexToRedraw) ;
  #endif
  for (NSInteger i=firstIndexToRedraw ; i<=lastIndexToRedraw ; i++) {
    OC_Token * token = [mStyledRangeArray objectAtIndex:i HERE] ;
    const NSRange range = [token range] ;
    #ifdef DEBUG_MESSAGES
      NSLog (@"PERFORM COLORING '%@' range [%lu, %lu] [mSourceTextStorage length] %lu", [mSourceTextStorage.string substringWithRange:range], range.location, range.length, mSourceTextStorage.string.length) ;
    #endif
    const int style = [token style] ;
    if (style == -1) { // Error
      [mSourceTextStorage
        addAttribute:NSForegroundColorAttributeName
        value:[NSColor redColor]
        range:range
      ] ;
    }else if (style == -2) { // Template string
      [mSourceTextStorage
        addAttributes:mTemplateTextAttributeDictionary
        range:range
      ] ;
    }else if (style > 0) {
      [mSourceTextStorage
        addAttributes:[mFontAttributesDictionaryArray objectAtIndex:style HERE]
        range:range
      ] ;
    }
  }
//---
  #ifdef DEBUG_MESSAGES
    NSLog (@"OC_GGS_DelegateForSyntaxColoring <myProcessEditing:> DONE") ;
  #endif
}

//---------------------------------------------------------------------------*

- (void) myProcessEditing: (NSNotification *) inNotification {
  const NSRange editedRange = mSourceTextStorage.editedRange ;
  const NSInteger changeInLength = mSourceTextStorage.changeInLength ;
    // NSLog (@"editedRange [%lu, %lu], changeInLength %ld", editedRange.location, editedRange.length, changeInLength) ;
  [self updateSyntaxColoringForEditedRange:editedRange changeInLength:changeInLength] ;
    // NSLog (@"%@", self.textStorage.string) ;
}


//---------------------------------------------------------------------------*

@end
