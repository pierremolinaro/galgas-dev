#ifndef struct_2D_galgas_33_DeclarationAST_1_DEFINED
#define struct_2D_galgas_33_DeclarationAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-galgas3GUIComponentListAST.h"
#include "list-galgas3GrammarComponentListAST.h"
#include "list-galgas3LexiqueComponentListAST.h"
#include "list-galgas3OptionComponentListAST.h"
#include "list-galgas3SyntaxComponentListAST.h"
#include "list-programRuleList.h"
#include "list-prologueEpilogueList.h"
#include "list-semanticDeclarationListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas_33_DeclarationAST struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_DeclarationAST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticDeclarationListAST mAttribute_mSemanticDeclarationList ;
  public : GALGAS_galgas_33_LexiqueComponentListAST mAttribute_mLexiqueComponentList ;
  public : GALGAS_galgas_33_SyntaxComponentListAST mAttribute_mSyntaxComponentList ;
  public : GALGAS_galgas_33_GrammarComponentListAST mAttribute_mGrammarComponentList ;
  public : GALGAS_galgas_33_GUIComponentListAST mAttribute_mGUIComponentList ;
  public : GALGAS_galgas_33_OptionComponentListAST mAttribute_mOptionComponentList ;
  public : GALGAS_prologueEpilogueList mAttribute_mPrologueDeclarationList ;
  public : GALGAS_programRuleList mAttribute_mSourceRuleList ;
  public : GALGAS_prologueEpilogueList mAttribute_mEpilogueDeclarationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_DeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_DeclarationAST (const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                            const GALGAS_galgas_33_LexiqueComponentListAST & in_mLexiqueComponentList,
                                            const GALGAS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                            const GALGAS_galgas_33_GrammarComponentListAST & in_mGrammarComponentList,
                                            const GALGAS_galgas_33_GUIComponentListAST & in_mGUIComponentList,
                                            const GALGAS_galgas_33_OptionComponentListAST & in_mOptionComponentList,
                                            const GALGAS_prologueEpilogueList & in_mPrologueDeclarationList,
                                            const GALGAS_programRuleList & in_mSourceRuleList,
                                            const GALGAS_prologueEpilogueList & in_mEpilogueDeclarationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_DeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_DeclarationAST constructor_new (const class GALGAS_semanticDeclarationListAST & inOperand0,
                                                                   const class GALGAS_galgas_33_LexiqueComponentListAST & inOperand1,
                                                                   const class GALGAS_galgas_33_SyntaxComponentListAST & inOperand2,
                                                                   const class GALGAS_galgas_33_GrammarComponentListAST & inOperand3,
                                                                   const class GALGAS_galgas_33_GUIComponentListAST & inOperand4,
                                                                   const class GALGAS_galgas_33_OptionComponentListAST & inOperand5,
                                                                   const class GALGAS_prologueEpilogueList & inOperand6,
                                                                   const class GALGAS_programRuleList & inOperand7,
                                                                   const class GALGAS_prologueEpilogueList & inOperand8
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_DeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList reader_mEpilogueDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST reader_mGUIComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GrammarComponentListAST reader_mGrammarComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_LexiqueComponentListAST reader_mLexiqueComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_OptionComponentListAST reader_mOptionComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList reader_mPrologueDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST reader_mSemanticDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programRuleList reader_mSourceRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST reader_mSyntaxComponentList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_DeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_DeclarationAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

