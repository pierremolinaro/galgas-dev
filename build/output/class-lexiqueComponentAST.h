#ifndef class_2D_lexiqueComponentAST_DEFINED
#define class_2D_lexiqueComponentAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexiqueComponentAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-externFunctionListAST.h"
#include "list-externRoutineListAST.h"
#include "list-indexingListAST.h"
#include "list-lexicalAttributeListAST.h"
#include "list-lexicalListDeclarationListAST.h"
#include "list-lexicalMessageDeclarationListAST.h"
#include "list-lexicalRuleListAST.h"
#include "list-lexicalStyleListAST.h"
#include "list-metamodelTemplateDelimitorListAST.h"
#include "list-templateReplacementListAST.h"
#include "list-terminalDeclarationListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @lexiqueComponentAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexiqueComponentAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLexiqueComponentName ;
  public : GALGAS_bool mAttribute_mIsTemplate ;
  public : GALGAS_metamodelTemplateDelimitorListAST mAttribute_mTemplateDelimitorList ;
  public : GALGAS_templateReplacementListAST mAttribute_mTemplateReplacementList ;
  public : GALGAS_lexicalAttributeListAST mAttribute_mLexicalAttributeList ;
  public : GALGAS_lexicalStyleListAST mAttribute_mLexicalStyleList ;
  public : GALGAS_terminalDeclarationListAST mAttribute_mTerminalDeclarationList ;
  public : GALGAS_lexicalMessageDeclarationListAST mAttribute_mLexicalMessageDeclarationList ;
  public : GALGAS_lexicalListDeclarationListAST mAttribute_mLexicalListDeclarationList ;
  public : GALGAS_lexicalRuleListAST mAttribute_mLexicalRuleList ;
  public : GALGAS_externRoutineListAST mAttribute_mExternRoutineList ;
  public : GALGAS_externFunctionListAST mAttribute_mExternFunctionList ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;

//--- Constructor
  public : cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mLexiqueComponentName,
                                     const GALGAS_bool & in_mIsTemplate,
                                     const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                     const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                     const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                     const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                     const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                     const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                     const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                     const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                     const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                     const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                     const GALGAS_indexingListAST & in_mIndexingListAST,
                                     const GALGAS_lstring & in_mIndexingDirectory
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexiqueComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsTemplate (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_metamodelTemplateDelimitorListAST reader_mTemplateDelimitorList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateReplacementListAST reader_mTemplateReplacementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalAttributeListAST reader_mLexicalAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalStyleListAST reader_mLexicalStyleList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_terminalDeclarationListAST reader_mTerminalDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalMessageDeclarationListAST reader_mLexicalMessageDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalListDeclarationListAST reader_mLexicalListDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRuleListAST reader_mLexicalRuleList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST reader_mExternRoutineList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externFunctionListAST reader_mExternFunctionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_indexingListAST reader_mIndexingListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mIndexingDirectory (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

