#ifndef class_2D_grammarForGeneration_1_DEFINED
#define class_2D_grammarForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationWithHeaderForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @grammarForGeneration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_grammarForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarForGeneration * ptr (void) const { return (const cPtr_grammarForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                               const class GALGAS_string & inOperand1,
                                                               const class GALGAS_string & inOperand2,
                                                               const class GALGAS_string & inOperand3,
                                                               const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand4,
                                                               const class GALGAS_nonTerminalToAddList & inOperand5,
                                                               const class GALGAS_bool & inOperand6,
                                                               const class GALGAS_lstringlist & inOperand7,
                                                               const class GALGAS_string & inOperand8,
                                                               const class GALGAS_bool & inOperand9,
                                                               const class GALGAS_string & inOperand10,
                                                               const class GALGAS_string & inOperand11
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppFileContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGrammarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mHTLMHelperContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis reader_mNonTerminalMapForGrammarAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList reader_mNonTerminalToAddList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStartSymbolName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mSyntaxComponents (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

