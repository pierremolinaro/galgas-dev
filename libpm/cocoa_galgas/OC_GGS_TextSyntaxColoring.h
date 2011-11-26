//
//  OC_GGS_TextSyntaxColoring.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 24/11/11.
//  Copyright (c) 2011 IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OC_GGS_TextDisplayDescriptor ;
@class OC_Lexique ;

@interface OC_GGS_TextSyntaxColoring : NSObject {
  @private NSString * mSourcePath ;
  @private NSTextStorage * mSourceTextStorage ;
  @private NSMutableSet * mTextDisplayDescriptorSet ; // Set of OC_GGS_TextDisplayDescriptor
  @private OC_Lexique * mTokenizer ;
  @private BOOL mIsDirty ;

  @private double mMaxAscender ; // Only mMaxAscender is observable
  @private double mMaxLeadingMinusDescender ; // leading - descender (because descender is < 0)

//--- Undo manager
  @private NSUndoManager * mUndoManager ;
  
//--- Attributes for syntax coloring
  @private NSMutableArray * mStyledRangeArray ;
  @private NSMutableArray * mFontAttributesDictionaryArray ; // Array of OC_Token
  @private NSMutableDictionary * mTemplateTextAttributeDictionary ;
}

- (OC_GGS_TextSyntaxColoring *) initWithSourceString: (NSString *) inSource
                                tokenizer: (OC_Lexique *) inTokenizer
                                sourcePath: (NSString *) inPath ;

- (NSTextStorage *) textStorage ;
- (NSUndoManager *) undoManager ;
- (OC_Lexique *) tokenizer ;
- (NSString *) sourcePath ;

- (BOOL) isDirty ;

- (NSString *) sourceString ;
- (void) replaceSourceStringWithString: (NSString *) inString ;

- (void) updateSyntaxColoringForEditedRange: (NSRange) inEditedRange
         changeInLength: (NSInteger) inChangeInLength ;

- (NSMenu *) menuForEntryPopUpButton ;

- (void) breakUndoCoalescing ;

- (NSRange) uncommentRange: (NSRange) initialSelectedRange ;
- (NSRange) commentRange: (NSRange) initialSelectedRange ;

- (NSMenu *) indexMenuForRange: (NSRange) inRange ;

@end
