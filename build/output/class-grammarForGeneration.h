#ifndef class_2D_grammarForGeneration_DEFINED
#define class_2D_grammarForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-grammarForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-nonTerminalToAddList.h"
#include "map-nonTerminalSymbolMapForGrammarAnalysis.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @grammarForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mGrammarName ;
  public : GALGAS_string mAttribute_mLexiqueName ;
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis mAttribute_mNonTerminalMapForGrammarAnalysis ;
  public : GALGAS_nonTerminalToAddList mAttribute_mNonTerminalToAddList ;
  public : GALGAS_bool mAttribute_mHasIndexing ;
  public : GALGAS_lstringlist mAttribute_mSyntaxComponents ;
  public : GALGAS_string mAttribute_mStartSymbolName ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;
  public : GALGAS_string mAttribute_mCppFileContents ;
  public : GALGAS_string mAttribute_mHTLMHelperContents ;

//--- Constructor
  public : cPtr_grammarForGeneration (const GALGAS_bool & in_mHasHeader,
                                      const GALGAS_string & in_mImplementationCppFileName,
                                      const GALGAS_string & in_mGrammarName,
                                      const GALGAS_string & in_mLexiqueName,
                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                      const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                      const GALGAS_bool & in_mHasIndexing,
                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                      const GALGAS_string & in_mStartSymbolName,
                                      const GALGAS_bool & in_mHasTranslateFeature,
                                      const GALGAS_string & in_mCppFileContents,
                                      const GALGAS_string & in_mHTLMHelperContents
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGrammarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalSymbolMapForGrammarAnalysis reader_mNonTerminalMapForGrammarAnalysis (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalToAddList reader_mNonTerminalToAddList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mSyntaxComponents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mStartSymbolName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppFileContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mHTLMHelperContents (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

