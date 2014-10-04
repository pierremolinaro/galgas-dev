#ifndef class_2D_lexiqueComponentAST_1_DEFINED
#define class_2D_lexiqueComponentAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexiqueComponentAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_lexiqueComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueComponentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexiqueComponentAST * ptr (void) const { return (const cPtr_lexiqueComponentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_bool & inOperand2,
                                                              const class GALGAS_metamodelTemplateDelimitorListAST & inOperand3,
                                                              const class GALGAS_templateReplacementListAST & inOperand4,
                                                              const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                              const class GALGAS_lexicalStyleListAST & inOperand6,
                                                              const class GALGAS_terminalDeclarationListAST & inOperand7,
                                                              const class GALGAS_lexicalMessageDeclarationListAST & inOperand8,
                                                              const class GALGAS_lexicalListDeclarationListAST & inOperand9,
                                                              const class GALGAS_lexicalRuleListAST & inOperand10,
                                                              const class GALGAS_externRoutineListAST & inOperand11,
                                                              const class GALGAS_externFunctionListAST & inOperand12,
                                                              const class GALGAS_indexingListAST & inOperand13,
                                                              const class GALGAS_lstring & inOperand14
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST reader_mExternFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST reader_mExternRoutineList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexingDirectory (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST reader_mIndexingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTemplate (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST reader_mLexicalAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST reader_mLexicalListDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST reader_mLexicalMessageDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST reader_mLexicalRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST reader_mLexicalStyleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexiqueComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST reader_mTemplateDelimitorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST reader_mTemplateReplacementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST reader_mTerminalDeclarationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

