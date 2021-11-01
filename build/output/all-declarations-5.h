#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalLabelListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_nonTerminalLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabelName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                 const class GALGAS_location & in_mEndOfArgumentLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalLabelListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalParameterListAST & inOperand1,
                                                                                 const class GALGAS_location & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonTerminalLabelListAST add_operation (const GALGAS_nonTerminalLabelListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_nonTerminalLabelListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonTerminalLabelListAST ;
 
} ; // End of GALGAS_nonTerminalLabelListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalLabelListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabelName ;

  public: GALGAS_formalParameterListAST mProperty_mFormalArgumentList ;

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonTerminalLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArgumentList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentList = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                     const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                     const GALGAS_location & in_mEndOfArgumentLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_formalParameterListAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalLabelListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalDeclarationListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_nonterminalDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mNonterminalName,
                                                 const class GALGAS_nonTerminalLabelListAST & in_mLabels
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonterminalDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalDeclarationListAST add_operation (const GALGAS_nonterminalDeclarationListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_nonterminalDeclarationListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_nonTerminalLabelListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelsAtIndex (class GALGAS_nonTerminalLabelListAST constinArgument0,
                                                          class GALGAS_uint constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonTerminalLabelListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_nonTerminalLabelListAST & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_mLabelsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonterminalDeclarationListAST ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_nonTerminalLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalDeclarationListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mNonterminalName ;

  public: GALGAS_nonTerminalLabelListAST mProperty_mLabels ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonterminalDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMLabels (const GALGAS_nonTerminalLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalDeclarationListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                                           const GALGAS_nonTerminalLabelListAST & in_mLabels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_mLabels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleLabelListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxRuleLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabelName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalArguments,
                                                 const class GALGAS_location & in_mEndOfArgumentLocation,
                                                 const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const class GALGAS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleLabelListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxRuleLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxRuleLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalParameterListAST & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                const class GALGAS_syntaxInstructionList & inOperand3,
                                                                                const class GALGAS_location & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxRuleLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     const class GALGAS_location & inOperand2,
                                                     const class GALGAS_syntaxInstructionList & inOperand3,
                                                     const class GALGAS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxRuleLabelListAST add_operation (const GALGAS_syntaxRuleLabelListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_syntaxRuleLabelListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_syntaxInstructionList constinArgument3,
                                                      class GALGAS_location constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 class GALGAS_syntaxInstructionList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                class GALGAS_syntaxInstructionList & outArgument3,
                                                class GALGAS_location & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_syntaxInstructionList & outArgument3,
                                                      class GALGAS_location & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentsAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              class GALGAS_syntaxInstructionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             class GALGAS_syntaxInstructionList & outArgument3,
                                             class GALGAS_location & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxRuleLabelListAST ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_syntaxRuleLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxRuleLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleLabelListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabelName ;

  public: GALGAS_formalParameterListAST mProperty_mFormalArguments ;

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;

  public: GALGAS_syntaxInstructionList mProperty_mSyntaxInstructionList ;

  public: GALGAS_location mProperty_mEndOfInstructionList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxRuleLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArguments (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArguments = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMSyntaxInstructionList (const GALGAS_syntaxInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxRuleLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                    const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                    const GALGAS_location & in_mEndOfArgumentLocation,
                                                    const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxRuleLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalParameterListAST & inOperand1,
                                                                                 const class GALGAS_location & inOperand2,
                                                                                 const class GALGAS_syntaxInstructionList & inOperand3,
                                                                                 const class GALGAS_location & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxRuleLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArguments (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mNonterminalName,
                                                 const class GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleListAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxRuleListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxRuleListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxRuleListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxRuleListAST add_operation (const GALGAS_syntaxRuleListAST & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_syntaxRuleListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_syntaxRuleLabelListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelListAtIndex (class GALGAS_syntaxRuleLabelListAST constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_mLabelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxRuleListAST ;
 
} ; // End of GALGAS_syntaxRuleListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_syntaxRuleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleLabelListAST current_mLabelList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxRuleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mNonterminalName ;

  public: GALGAS_syntaxRuleLabelListAST mProperty_mLabelList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxRuleListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMLabelList (const GALGAS_syntaxRuleLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxRuleListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                               const GALGAS_syntaxRuleLabelListAST & in_mLabelList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxRuleListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxRuleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_mLabelList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxRuleListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSyntaxInstructionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listOfSyntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_listOfSyntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_listOfSyntaxInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const class GALGAS_location & in_mEndOf_5F_instructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listOfSyntaxInstructionList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listOfSyntaxInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_listOfSyntaxInstructionList constructor_listWithValue (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                     const class GALGAS_location & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_listOfSyntaxInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionList & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList add_operation (const GALGAS_listOfSyntaxInstructionList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_listOfSyntaxInstructionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_syntaxInstructionList & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_syntaxInstructionList & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_syntaxInstructionList & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_instructionsAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionList & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionList & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_instructionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_listOfSyntaxInstructionList ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_listOfSyntaxInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_listOfSyntaxInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSyntaxInstructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listOfSyntaxInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_syntaxInstructionList mProperty_mSyntaxInstructionList ;

  public: GALGAS_location mProperty_mEndOf_5F_instructions ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_listOfSyntaxInstructionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GALGAS_syntaxInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOf_5F_instructions (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOf_5F_instructions = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                         const GALGAS_location & in_mEndOf_5F_instructions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listOfSyntaxInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listOfSyntaxInstructionList_2D_element constructor_new (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                      const class GALGAS_location & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listOfSyntaxInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_instructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxComponentListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_SyntaxComponentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSyntaxComponentName,
                                                 const class GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                 const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const class GALGAS_syntaxRuleListAST & in_mRuleList,
                                                 const class GALGAS_bool & in_mHasTranslateFeature
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentListAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_SyntaxComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_SyntaxComponentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                          const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                     const class GALGAS_syntaxRuleListAST & inOperand3,
                                                     const class GALGAS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxComponentListAST add_operation (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                                      class GALGAS_syntaxRuleListAST constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                 class GALGAS_syntaxRuleListAST & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                class GALGAS_syntaxRuleListAST & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                      class GALGAS_syntaxRuleListAST & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureAtIndex (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImportedLexiqueFilePathAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListAtIndex (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListAtIndex (class GALGAS_syntaxRuleListAST constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                              class GALGAS_syntaxRuleListAST & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                             class GALGAS_syntaxRuleListAST & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImportedLexiqueFilePathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_SyntaxComponentListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_SyntaxComponentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_SyntaxComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxComponentListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;

  public: GALGAS_lstring mProperty_mImportedLexiqueFilePath ;

  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;

  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;

  public: GALGAS_bool mProperty_mHasTranslateFeature ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_SyntaxComponentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMImportedLexiqueFilePath (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedLexiqueFilePath = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GALGAS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GALGAS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_SyntaxComponentListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                              const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                              const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                              const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                              const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_SyntaxComponentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                           const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                                           const class GALGAS_bool & inOperand4
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImportedLexiqueFilePath (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxExtensionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxExtensionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_SyntaxExtensionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSyntaxComponentName,
                                                 const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const class GALGAS_syntaxRuleListAST & in_mRuleList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxExtensionListAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_SyntaxExtensionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_SyntaxExtensionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                          const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                     const class GALGAS_syntaxRuleListAST & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxExtensionListAST add_operation (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                                      class GALGAS_syntaxRuleListAST constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                 class GALGAS_syntaxRuleListAST & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                class GALGAS_syntaxRuleListAST & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                      class GALGAS_syntaxRuleListAST & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListAtIndex (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListAtIndex (class GALGAS_syntaxRuleListAST constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                              class GALGAS_syntaxRuleListAST & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                             class GALGAS_syntaxRuleListAST & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_SyntaxExtensionListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_SyntaxExtensionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxExtensionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;

  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;

  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GALGAS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GALGAS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                              const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                              const GALGAS_syntaxRuleListAST & in_mRuleList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                           const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensions list map
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensions : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensions (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxExtensions extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxExtensions constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                     const class GALGAS_syntaxRuleListAST & inOperand3
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_listForKey (const class GALGAS_string & constinOperand0
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxExtensions ;
 
} ; // End of GALGAS_syntaxExtensions class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_syntaxExtensions : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_galgas_33_SyntaxExtensionListAST current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxExtensions_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensions_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensions_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;

  public: GALGAS_galgas_33_SyntaxExtensionListAST mProperty_mList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxExtensions_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_galgas_33_SyntaxExtensionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxExtensions_2D_element (const GALGAS_string & in_key,
                                              const GALGAS_galgas_33_SyntaxExtensionListAST & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxExtensions_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxExtensions_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_key (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_mList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxExtensions_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prologueEpilogueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_prologueEpilogueList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_prologueEpilogueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prologueEpilogueList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prologueEpilogueList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_prologueEpilogueList constructor_listWithValue (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_prologueEpilogueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_prologueEpilogueList add_operation (const GALGAS_prologueEpilogueList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_prologueEpilogueList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionListAST & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionListAST & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionListAST & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionListAST & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionListAST & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_prologueEpilogueList ;
 
} ; // End of GALGAS_prologueEpilogueList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_prologueEpilogueList : public cGenericAbstractEnumerator {
  public: cEnumerator_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_prologueEpilogueList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prologueEpilogueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;

  public: GALGAS_location mProperty_mEndOfInstructionList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prologueEpilogueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                  const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prologueEpilogueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prologueEpilogueList_2D_element constructor_new (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                               const class GALGAS_location & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prologueEpilogueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prologueEpilogueList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programRuleList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_programRuleList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_programRuleList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSourceFileExtension,
                                                 const class GALGAS_lstring & in_mSourceFileHelp,
                                                 const class GALGAS_lstring & in_mSourceFileVariableName,
                                                 const class GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                                 const class GALGAS_lstring & in_mReferenceGrammar,
                                                 const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programRuleList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programRuleList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_programRuleList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_lstring & inOperand4,
                                                                         const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                         const class GALGAS_location & inOperand6
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_programRuleList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_lstring & inOperand4,
                                                     const class GALGAS_semanticInstructionListAST & inOperand5,
                                                     const class GALGAS_location & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_programRuleList add_operation (const GALGAS_programRuleList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_programRuleList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_lstring constinArgument4,
                                                      class GALGAS_semanticInstructionListAST constinArgument5,
                                                      class GALGAS_location constinArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_semanticInstructionListAST & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_lstring & outArgument4,
                                                class GALGAS_semanticInstructionListAST & outArgument5,
                                                class GALGAS_location & outArgument6,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_lstring & outArgument4,
                                                      class GALGAS_semanticInstructionListAST & outArgument5,
                                                      class GALGAS_location & outArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReferenceGrammarAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileExtensionAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileHelpAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileVariableNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileVariableNameIsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_semanticInstructionListAST & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_lstring & outArgument4,
                                             class GALGAS_semanticInstructionListAST & outArgument5,
                                             class GALGAS_location & outArgument6,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReferenceGrammarAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileExtensionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileHelpAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileVariableNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSourceFileVariableNameIsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_programRuleList ;
 
} ; // End of GALGAS_programRuleList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_programRuleList : public cGenericAbstractEnumerator {
  public: cEnumerator_programRuleList (const GALGAS_programRuleList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSourceFileExtension (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSourceFileHelp (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSourceFileVariableName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mReferenceGrammar (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_programRuleList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programRuleList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSourceFileExtension ;

  public: GALGAS_lstring mProperty_mSourceFileHelp ;

  public: GALGAS_lstring mProperty_mSourceFileVariableName ;

  public: GALGAS_bool mProperty_mSourceFileVariableNameIsUnused ;

  public: GALGAS_lstring mProperty_mReferenceGrammar ;

  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;

  public: GALGAS_location mProperty_mEndOfInstructionList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_programRuleList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSourceFileExtension (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileExtension = inValue ;
  }

  public: inline void setter_setMSourceFileHelp (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileHelp = inValue ;
  }

  public: inline void setter_setMSourceFileVariableName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableName = inValue ;
  }

  public: inline void setter_setMSourceFileVariableNameIsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableNameIsUnused = inValue ;
  }

  public: inline void setter_setMReferenceGrammar (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReferenceGrammar = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_programRuleList_2D_element (const GALGAS_lstring & in_mSourceFileExtension,
                                             const GALGAS_lstring & in_mSourceFileHelp,
                                             const GALGAS_lstring & in_mSourceFileVariableName,
                                             const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                             const GALGAS_lstring & in_mReferenceGrammar,
                                             const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                             const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programRuleList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programRuleList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_bool & inOperand3,
                                                                          const class GALGAS_lstring & inOperand4,
                                                                          const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                          const class GALGAS_location & inOperand6
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programRuleList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReferenceGrammar (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileExtension (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileHelp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileVariableName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programRuleList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_DeclarationAST struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_DeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticDeclarationListAST mProperty_mDeclarationList ;

  public: GALGAS_galgas_33_SyntaxComponentListAST mProperty_mSyntaxComponentList ;

  public: GALGAS_syntaxExtensions mProperty_mSyntaxExtensions ;

  public: GALGAS_galgas_33_GUIComponentListAST mProperty_mGUIComponentList ;

  public: GALGAS_prologueEpilogueList mProperty_mPrologueDeclarationList ;

  public: GALGAS_programRuleList mProperty_mSourceRuleList ;

  public: GALGAS_prologueEpilogueList mProperty_mEpilogueDeclarationList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_DeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationList (const GALGAS_semanticDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationList = inValue ;
  }

  public: inline void setter_setMSyntaxComponentList (const GALGAS_galgas_33_SyntaxComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentList = inValue ;
  }

  public: inline void setter_setMSyntaxExtensions (const GALGAS_syntaxExtensions & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxExtensions = inValue ;
  }

  public: inline void setter_setMGUIComponentList (const GALGAS_galgas_33_GUIComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentList = inValue ;
  }

  public: inline void setter_setMPrologueDeclarationList (const GALGAS_prologueEpilogueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPrologueDeclarationList = inValue ;
  }

  public: inline void setter_setMSourceRuleList (const GALGAS_programRuleList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceRuleList = inValue ;
  }

  public: inline void setter_setMEpilogueDeclarationList (const GALGAS_prologueEpilogueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEpilogueDeclarationList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_DeclarationAST (const GALGAS_semanticDeclarationListAST & in_mDeclarationList,
                                           const GALGAS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                           const GALGAS_syntaxExtensions & in_mSyntaxExtensions,
                                           const GALGAS_galgas_33_GUIComponentListAST & in_mGUIComponentList,
                                           const GALGAS_prologueEpilogueList & in_mPrologueDeclarationList,
                                           const GALGAS_programRuleList & in_mSourceRuleList,
                                           const GALGAS_prologueEpilogueList & in_mEpilogueDeclarationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_DeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_DeclarationAST constructor_new (const class GALGAS_semanticDeclarationListAST & inOperand0,
                                                                        const class GALGAS_galgas_33_SyntaxComponentListAST & inOperand1,
                                                                        const class GALGAS_syntaxExtensions & inOperand2,
                                                                        const class GALGAS_galgas_33_GUIComponentListAST & inOperand3,
                                                                        const class GALGAS_prologueEpilogueList & inOperand4,
                                                                        const class GALGAS_programRuleList & inOperand5,
                                                                        const class GALGAS_prologueEpilogueList & inOperand6
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_DeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_mDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_mEpilogueDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_mGUIComponentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_mPrologueDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_mSourceRuleList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_mSyntaxComponentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxExtensions getter_mSyntaxExtensions (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_DeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_DeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionSignature_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mFormalArgumentType ;

  public: GALGAS_string mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionSignature_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_functionSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                               const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                               const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                            const class GALGAS_string & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionSignature_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constructorMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReturnedType ;

//--- Constructor
  public: cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                      const GALGAS_functionSignature & in_mArgumentTypeList,
                                      const GALGAS_bool & in_mHasCompilerArgument,
                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReturnedType
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;

  public: GALGAS_bool mProperty_mHasCompilerArgument ;

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReturnedType ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constructorMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_functionSignature & in_mArgumentTypeList,
                                            const GALGAS_bool & in_mHasCompilerArgument,
                                            const GALGAS_unifiedTypeMap_2D_entry & in_mReturnedType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_functionSignature & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         const class GALGAS_unifiedTypeMap_2D_entry & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @methodQualifier enum                                           *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_methodQualifier : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_methodQualifier (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_isAbstract,
    kEnum_isBasic,
    kEnum_isBasicFinal,
    kEnum_isInherited,
    kEnum_isOverriding,
    kEnum_isOverridingAbstract
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_methodQualifier extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodQualifier constructor_isAbstract (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isBasic (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isBasicFinal (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isInherited (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isOverriding (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isOverridingAbstract (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_methodQualifier & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsAbstract (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasicFinal (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsInherited (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsOverriding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsOverridingAbstract (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_isAbstract () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isBasic () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isBasicFinal () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isInherited () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isOverriding () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isOverridingAbstract () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodQualifier class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodQualifier ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @methodKind enum                                              *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_methodKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_methodKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_definedAsMember,
    kEnum_definedAsExtension
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_methodKind extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodKind constructor_definedAsExtension (LOCATION_ARGS) ;

  public: static class GALGAS_methodKind constructor_definedAsMember (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_methodKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefinedAsExtension (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefinedAsMember (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_definedAsExtension () const ;

  public: VIRTUAL_IN_DEBUG bool optional_definedAsMember () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodSignature list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_optionalMethodSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_optionalMethodSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_mInputArgument,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                 const class GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodSignature extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodSignature constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodSignature constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                 const class GALGAS_string & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_optionalMethodSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_optionalMethodSignature add_operation (const GALGAS_optionalMethodSignature & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_optionalMethodSignature_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_unifiedTypeMap_2D_entry constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputArgumentAtIndex (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mInputArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_optionalMethodSignature ;
 
} ; // End of GALGAS_optionalMethodSignature class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_optionalMethodSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_optionalMethodSignature (const GALGAS_optionalMethodSignature & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_mInputArgument (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMap_2D_entry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_optionalMethodSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodSignature_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mInputArgument ;

  public: GALGAS_lstring mProperty_mFormalSelector ;

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mFormalArgumentType ;

  public: GALGAS_string mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionalMethodSignature_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputArgument = inValue ;
  }

  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_optionalMethodSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodSignature_2D_element (const GALGAS_bool & in_mInputArgument,
                                                     const GALGAS_lstring & in_mFormalSelector,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                     const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodSignature_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                  const class GALGAS_string & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mInputArgument (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionalMethodSignature_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@optionalMethodMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_optionalMethodMap : public cMapElement {
//--- Map attributes
  public: GALGAS_optionalMethodSignature mProperty_mArgumentTypeList ;

//--- Constructor
  public: cMapElement_optionalMethodMap (const GALGAS_lstring & inKey,
                                         const GALGAS_optionalMethodSignature & in_mArgumentTypeList
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_optionalMethodSignature mProperty_mArgumentTypeList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionalMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GALGAS_optionalMethodSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_optionalMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_optionalMethodSignature & in_mArgumentTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_optionalMethodSignature & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionalMethodSignature getter_mArgumentTypeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionalMethodMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@getterMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_getterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReturnedType ;
  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: GALGAS_string mProperty_mErrorMessage ;

//--- Constructor
  public: cMapElement_getterMap (const GALGAS_lstring & inKey,
                                 const GALGAS_methodKind & in_mKind,
                                 const GALGAS_functionSignature & in_mArgumentTypeList,
                                 const GALGAS_location & in_mDeclarationLocation,
                                 const GALGAS_bool & in_mHasCompilerArgument,
                                 const GALGAS_unifiedTypeMap_2D_entry & in_mReturnedType,
                                 const GALGAS_methodQualifier & in_mQualifier,
                                 const GALGAS_string & in_mErrorMessage
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getterMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_methodKind mProperty_mKind ;

  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;

  public: GALGAS_location mProperty_mDeclarationLocation ;

  public: GALGAS_bool mProperty_mHasCompilerArgument ;

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReturnedType ;

  public: GALGAS_methodQualifier mProperty_mQualifier ;

  public: GALGAS_string mProperty_mErrorMessage ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_getterMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_methodKind & in_mKind,
                                       const GALGAS_functionSignature & in_mArgumentTypeList,
                                       const GALGAS_location & in_mDeclarationLocation,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_unifiedTypeMap_2D_entry & in_mReturnedType,
                                       const GALGAS_methodQualifier & in_mQualifier,
                                       const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_methodKind & inOperand1,
                                                                    const class GALGAS_functionSignature & inOperand2,
                                                                    const class GALGAS_location & inOperand3,
                                                                    const class GALGAS_bool & inOperand4,
                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                    const class GALGAS_methodQualifier & inOperand6,
                                                                    const class GALGAS_string & inOperand7
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifier (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterSignature list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_formalParameterSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formalParameterSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formalParameterSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                 const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterSignature extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_formalParameterSignature constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formalParameterSignature constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                  const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                  const class GALGAS_string & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                     const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterSignature add_operation (const GALGAS_formalParameterSignature & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_formalParameterSignature_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_unifiedTypeMap_2D_entry constinArgument1,
                                                      class GALGAS_formalArgumentPassingModeAST constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                                class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                                      class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeAtIndex (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                             class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterSignature ;
 
} ; // End of GALGAS_formalParameterSignature class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_formalParameterSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMap_2D_entry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formalParameterSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterSignature_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_formalParameterSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mFormalArgumentType ;

  public: GALGAS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;

  public: GALGAS_string mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_formalParameterSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                      const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_formalParameterSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                   const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                   const class GALGAS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_formalParameterSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalParameterSignature_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@setterMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_setterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: GALGAS_string mProperty_mErrorMessage ;

//--- Constructor
  public: cMapElement_setterMap (const GALGAS_lstring & inKey,
                                 const GALGAS_methodKind & in_mKind,
                                 const GALGAS_formalParameterSignature & in_mParameterList,
                                 const GALGAS_bool & in_mHasCompilerArgument,
                                 const GALGAS_methodQualifier & in_mQualifier,
                                 const GALGAS_string & in_mErrorMessage
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_methodKind mProperty_mKind ;

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;

  public: GALGAS_bool mProperty_mHasCompilerArgument ;

  public: GALGAS_methodQualifier mProperty_mQualifier ;

  public: GALGAS_string mProperty_mErrorMessage ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_setterMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_methodKind & in_mKind,
                                       const GALGAS_formalParameterSignature & in_mParameterList,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_methodQualifier & in_mQualifier,
                                       const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_methodKind & inOperand1,
                                                                    const class GALGAS_formalParameterSignature & inOperand2,
                                                                    const class GALGAS_bool & inOperand3,
                                                                    const class GALGAS_methodQualifier & inOperand4,
                                                                    const class GALGAS_string & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifier (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@instanceMethodMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_instanceMethodMap : public cMapElement {
//--- Map attributes
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: GALGAS_string mProperty_mErrorMessage ;

//--- Constructor
  public: cMapElement_instanceMethodMap (const GALGAS_lstring & inKey,
                                         const GALGAS_methodKind & in_mKind,
                                         const GALGAS_formalParameterSignature & in_mParameterList,
                                         const GALGAS_location & in_mDeclarationLocation,
                                         const GALGAS_bool & in_mHasCompilerArgument,
                                         const GALGAS_methodQualifier & in_mQualifier,
                                         const GALGAS_string & in_mErrorMessage
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instanceMethodMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instanceMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_methodKind mProperty_mKind ;

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;

  public: GALGAS_location mProperty_mDeclarationLocation ;

  public: GALGAS_bool mProperty_mHasCompilerArgument ;

  public: GALGAS_methodQualifier mProperty_mQualifier ;

  public: GALGAS_string mProperty_mErrorMessage ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_instanceMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_methodKind & in_mKind,
                                               const GALGAS_formalParameterSignature & in_mParameterList,
                                               const GALGAS_location & in_mDeclarationLocation,
                                               const GALGAS_bool & in_mHasCompilerArgument,
                                               const GALGAS_methodQualifier & in_mQualifier,
                                               const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instanceMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instanceMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_methodKind & inOperand1,
                                                                            const class GALGAS_formalParameterSignature & inOperand2,
                                                                            const class GALGAS_location & inOperand3,
                                                                            const class GALGAS_bool & inOperand4,
                                                                            const class GALGAS_methodQualifier & inOperand5,
                                                                            const class GALGAS_string & inOperand6
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instanceMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifier (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instanceMethodMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@classMethodMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_classMethodMap : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public: cMapElement_classMethodMap (const GALGAS_lstring & inKey,
                                      const GALGAS_formalParameterSignature & in_mParameterList,
                                      const GALGAS_bool & in_mHasCompilerArgument
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classMethodMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;

  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_classMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_classMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_formalParameterSignature & in_mParameterList,
                                            const GALGAS_bool & in_mHasCompilerArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_classMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_formalParameterSignature & inOperand1,
                                                                         const class GALGAS_bool & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mParameterList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classMethodMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDescriptorList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mEnumeratedType ;

  public: GALGAS_string mProperty_mEnumerationName ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationDescriptorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumeratedType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedType = inValue ;
  }

  public: inline void setter_setMEnumerationName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & in_mEnumeratedType,
                                                       const GALGAS_string & in_mEnumerationName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationDescriptorList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                    const class GALGAS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mEnumeratedType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDescriptorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                        Phase 1: @predefinedTypeKindEnum enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_predefinedTypeKindEnum (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_predefined_5F_uint,
    kEnum_predefined_5F_uint_36__34_,
    kEnum_predefined_5F_sint,
    kEnum_predefined_5F_sint_36__34_,
    kEnum_predefined_5F_char,
    kEnum_predefined_5F_double,
    kEnum_predefined_5F_string,
    kEnum_predefined_5F_stringset,
    kEnum_predefined_5F_bool,
    kEnum_predefined_5F_binaryset,
    kEnum_predefined_5F_function,
    kEnum_predefined_5F_location,
    kEnum_predefined_5F_type,
    kEnum_predefined_5F_object,
    kEnum_predefined_5F_data,
    kEnum_predefined_5F_filewrapper,
    kEnum_predefined_5F_application,
    kEnum_predefined_5F_bigint,
    kEnum_predefined_5F_timer
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_predefinedTypeKindEnum extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_application (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_bigint (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_binaryset (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_bool (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_char (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_data (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_double (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_filewrapper (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_function (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_location (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_object (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint_36__34_ (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_string (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_stringset (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_timer (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_type (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint (LOCATION_ARGS) ;

  public: static class GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_predefinedTypeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_application (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_binaryset (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_bool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_char (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_data (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_filewrapper (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_function (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_location (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_object (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_sint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_stringset (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_timer (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_type (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_uint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPredefined_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_application () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_bigint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_binaryset () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_bool () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_char () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_data () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_double () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_filewrapper () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_function () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_location () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_object () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_sint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_sint_36__34_ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_string () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_stringset () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_timer () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_type () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_uint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_predefined_5F_uint_36__34_ () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeKindEnum class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @typeKindEnum enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKindEnum_classType : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKindEnum_classType (const GALGAS_bool & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKindEnum_classType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKindEnum_weakReferenceType : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMap_2D_entry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKindEnum_weakReferenceType (const GALGAS_unifiedTypeMap_2D_entry & inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKindEnum_weakReferenceType (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKindEnum string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_typeKindEnum & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsPublic ;
  public: GALGAS_bool mProperty_mIsConstant ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mPropertyType ;

//--- Constructor
  public: cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                   const GALGAS_bool & in_mIsPublic,
                                   const GALGAS_bool & in_mIsConstant,
                                   const GALGAS_unifiedTypeMap_2D_entry & in_mPropertyType
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_bool mProperty_mIsPublic ;

  public: GALGAS_bool mProperty_mIsConstant ;

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mPropertyType ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_propertyMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPublic (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMIsConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

  public: inline void setter_setMPropertyType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_bool & in_mIsPublic,
                                         const GALGAS_bool & in_mIsConstant,
                                         const GALGAS_unifiedTypeMap_2D_entry & in_mPropertyType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_bool & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_unifiedTypeMap_2D_entry & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mPropertyType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantIndexMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_unifiedTypeMapEntryList mProperty_mAssociatedTypeList ;

//--- Constructor
  public: cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_unifiedTypeMapEntryList & in_mAssociatedTypeList
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constantIndexMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_uint mProperty_mIndex ;

  public: GALGAS_unifiedTypeMapEntryList mProperty_mAssociatedTypeList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constantIndexMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedTypeList (const GALGAS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedTypeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constantIndexMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex,
                                              const GALGAS_unifiedTypeMapEntryList & in_mAssociatedTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constantIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantIndexMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1,
                                                                           const class GALGAS_unifiedTypeMapEntryList & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_mAssociatedTypeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantIndexMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@unifiedTypeMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsPredefined ;
  public: GALGAS_bool mProperty_mIsConcrete ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mSuperType ;
  public: GALGAS_typeKindEnum mProperty_mTypeKindEnum ;
  public: GALGAS_bool mProperty_mSupportCollectionValue ;
  public: GALGAS_typedPropertyList mProperty_mAllTypedPropertyList ;
  public: GALGAS_propertyMap mProperty_mPropertyMap ;
  public: GALGAS_typedPropertyList mProperty_mCurrentTypedPropertyList ;
  public: GALGAS_constructorMap mProperty_mConstructorMap ;
  public: GALGAS_getterMap mProperty_mGetterMap ;
  public: GALGAS_setterMap mProperty_mSetterMap ;
  public: GALGAS_instanceMethodMap mProperty_mInstanceMethodMap ;
  public: GALGAS_classMethodMap mProperty_mClassMethodMap ;
  public: GALGAS_optionalMethodMap mProperty_mOptionalMethodMap ;
  public: GALGAS_enumerationDescriptorList mProperty_mEnumerationDescriptor ;
  public: GALGAS_operators mProperty_mHandledOperatorFlags ;
  public: GALGAS_functionSignature mProperty_mAddAssignOperatorArguments ;
  public: GALGAS_constantIndexMap mProperty_mEnumConstantMap ;
  public: GALGAS_enumConstantList mProperty_mEnumConstantList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mMapSearchMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mMapEntrySearchConstructorList ;
  public: GALGAS_bool mProperty_mGenerateHeaderInSeparateFile ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mTypeForEnumeratedElement ;
  public: GALGAS_string mProperty_mDefaultConstructorName ;
  public: GALGAS_string mProperty_mHeaderFileName ;
  public: GALGAS_headerKind mProperty_mHeaderKind ;

//--- Constructor
  public: cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                      const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_bool & in_mIsConcrete,
                                      const GALGAS_unifiedTypeMap_2D_entry & in_mSuperType,
                                      const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                      const GALGAS_bool & in_mSupportCollectionValue,
                                      const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                      const GALGAS_propertyMap & in_mPropertyMap,
                                      const GALGAS_typedPropertyList & in_mCurrentTypedPropertyList,
                                      const GALGAS_constructorMap & in_mConstructorMap,
                                      const GALGAS_getterMap & in_mGetterMap,
                                      const GALGAS_setterMap & in_mSetterMap,
                                      const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                      const GALGAS_classMethodMap & in_mClassMethodMap,
                                      const GALGAS_optionalMethodMap & in_mOptionalMethodMap,
                                      const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                      const GALGAS_operators & in_mHandledOperatorFlags,
                                      const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                      const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                      const GALGAS_enumConstantList & in_mEnumConstantList,
                                      const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                      const GALGAS_mapSearchMethodListAST & in_mMapEntrySearchConstructorList,
                                      const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                      const GALGAS_unifiedTypeMap_2D_entry & in_mTypeForEnumeratedElement,
                                      const GALGAS_string & in_mDefaultConstructorName,
                                      const GALGAS_string & in_mHeaderFileName,
                                      const GALGAS_headerKind & in_mHeaderKind
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @predefinedTypeAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypeAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_predefinedTypeAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_predefinedTypeAST (const class cPtr_predefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_predefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_predefinedTypeAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_predefinedTypeKindEnum inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPredefinedTypeName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_predefinedTypeKindEnum getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mPredefinedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @predefinedTypeAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_predefinedTypeAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_string mProperty_mPredefinedTypeName ;
  public: GALGAS_predefinedTypeKindEnum mProperty_mKind ;

//--- Constructor
  public: cPtr_predefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                  const GALGAS_string & in_mPredefinedTypeName,
                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @predefinedTypeAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypeAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_predefinedTypeAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_predefinedTypeAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_predefinedTypeAST_2D_weak (const class GALGAS_predefinedTypeAST & inSource) ;

  public: GALGAS_predefinedTypeAST_2D_weak & operator = (const class GALGAS_predefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_predefinedTypeAST bang_predefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_predefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_predefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_predefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ;

