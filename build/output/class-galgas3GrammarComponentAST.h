#ifndef class_2D_galgas_33_GrammarComponentAST_DEFINED
#define class_2D_galgas_33_GrammarComponentAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-galgas3GrammarComponentAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-nonTerminalLabelListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @galgas3GrammarComponentAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_galgas_33_GrammarComponentAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lbool mAttribute_mHasIndexing ;
  public : GALGAS_lstring mAttribute_mGrammarComponentName ;
  public : GALGAS_lstring mAttribute_mGrammarClass ;
  public : GALGAS_lstringlist mAttribute_mSyntaxComponents ;
  public : GALGAS_lstring mAttribute_mStartSymbolName ;
  public : GALGAS_nonTerminalLabelListAST mAttribute_mStartSymbolLabelList ;
  public : GALGAS_lstringlist mAttribute_mUnusedNonterminalList ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;

//--- Constructor
  public : cPtr_galgas_33_GrammarComponentAST (const GALGAS_bool & in_mIsPredefined,
                                               const GALGAS_lbool & in_mHasIndexing,
                                               const GALGAS_lstring & in_mGrammarComponentName,
                                               const GALGAS_lstring & in_mGrammarClass,
                                               const GALGAS_lstringlist & in_mSyntaxComponents,
                                               const GALGAS_lstring & in_mStartSymbolName,
                                               const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                               const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                               const GALGAS_bool & in_mHasTranslateFeature
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbool reader_mHasIndexing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mGrammarComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mGrammarClass (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mSyntaxComponents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mStartSymbolName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalLabelListAST reader_mStartSymbolLabelList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mUnusedNonterminalList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

