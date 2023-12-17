#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxExtensionListAST list
//
//--------------------------------------------------------------------------------------------------

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                               class GALGAS_syntaxRuleListAST constinArgument2,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_SyntaxExtensionListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxExtensionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: inline GALGAS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GALGAS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GALGAS_syntaxRuleListAST readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                           const class GALGAS_syntaxRuleListAST & inOperand2,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensions list map
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensions : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensions (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_string constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                               class GALGAS_syntaxRuleListAST constinArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_listForKey (const class GALGAS_string & constinOperand0
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxExtensions ;
 
} ; // End of GALGAS_syntaxExtensions class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxExtensions : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_galgas_33_SyntaxExtensionListAST current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxExtensions_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensions_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensions_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_galgas_33_SyntaxExtensionListAST mProperty_mList ;
  public: inline GALGAS_galgas_33_SyntaxExtensionListAST readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxExtensions_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxExtensions_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxExtensions_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList list
//
//--------------------------------------------------------------------------------------------------

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticInstructionListAST constinArgument0,
                                               class GALGAS_location constinArgument1,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_prologueEpilogueList ;
 
} ; // End of GALGAS_prologueEpilogueList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_prologueEpilogueList : public cGenericAbstractEnumerator {
  public: cEnumerator_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_prologueEpilogueList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prologueEpilogueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInstructionList ;
  public: inline GALGAS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prologueEpilogueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prologueEpilogueList_2D_element constructor_new (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prologueEpilogueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prologueEpilogueList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList list
//
//--------------------------------------------------------------------------------------------------

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               class GALGAS_lstring constinArgument4,
                                               class GALGAS_semanticInstructionListAST constinArgument5,
                                               class GALGAS_location constinArgument6,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_programRuleList ;
 
} ; // End of GALGAS_programRuleList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_programRuleList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSourceFileExtension ;
  public: inline GALGAS_lstring readProperty_mSourceFileExtension (void) const {
    return mProperty_mSourceFileExtension ;
  }

  public: GALGAS_lstring mProperty_mSourceFileHelp ;
  public: inline GALGAS_lstring readProperty_mSourceFileHelp (void) const {
    return mProperty_mSourceFileHelp ;
  }

  public: GALGAS_lstring mProperty_mSourceFileVariableName ;
  public: inline GALGAS_lstring readProperty_mSourceFileVariableName (void) const {
    return mProperty_mSourceFileVariableName ;
  }

  public: GALGAS_bool mProperty_mSourceFileVariableNameIsUnused ;
  public: inline GALGAS_bool readProperty_mSourceFileVariableNameIsUnused (void) const {
    return mProperty_mSourceFileVariableNameIsUnused ;
  }

  public: GALGAS_lstring mProperty_mReferenceGrammar ;
  public: inline GALGAS_lstring readProperty_mReferenceGrammar (void) const {
    return mProperty_mReferenceGrammar ;
  }

  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInstructionList ;
  public: inline GALGAS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
                                                                          const class GALGAS_location & inOperand6,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programRuleList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_programRuleList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgasDeclarationAST struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgasDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticDeclarationListAST mProperty_mDeclarationList ;
  public: inline GALGAS_semanticDeclarationListAST readProperty_mDeclarationList (void) const {
    return mProperty_mDeclarationList ;
  }

  public: GALGAS_stringset mProperty_mImplicitTypeDeclarationSet ;
  public: inline GALGAS_stringset readProperty_mImplicitTypeDeclarationSet (void) const {
    return mProperty_mImplicitTypeDeclarationSet ;
  }

  public: GALGAS_galgas_33_SyntaxComponentListAST mProperty_mSyntaxComponentList ;
  public: inline GALGAS_galgas_33_SyntaxComponentListAST readProperty_mSyntaxComponentList (void) const {
    return mProperty_mSyntaxComponentList ;
  }

  public: GALGAS_syntaxExtensions mProperty_mSyntaxExtensions ;
  public: inline GALGAS_syntaxExtensions readProperty_mSyntaxExtensions (void) const {
    return mProperty_mSyntaxExtensions ;
  }

  public: GALGAS_galgasGUIComponentListAST mProperty_mGUIComponentList ;
  public: inline GALGAS_galgasGUIComponentListAST readProperty_mGUIComponentList (void) const {
    return mProperty_mGUIComponentList ;
  }

  public: GALGAS_prologueEpilogueList mProperty_mPrologueDeclarationList ;
  public: inline GALGAS_prologueEpilogueList readProperty_mPrologueDeclarationList (void) const {
    return mProperty_mPrologueDeclarationList ;
  }

  public: GALGAS_programRuleList mProperty_mSourceRuleList ;
  public: inline GALGAS_programRuleList readProperty_mSourceRuleList (void) const {
    return mProperty_mSourceRuleList ;
  }

  public: GALGAS_prologueEpilogueList mProperty_mEpilogueDeclarationList ;
  public: inline GALGAS_prologueEpilogueList readProperty_mEpilogueDeclarationList (void) const {
    return mProperty_mEpilogueDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_galgasDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationList (const GALGAS_semanticDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationList = inValue ;
  }

  public: inline void setter_setMImplicitTypeDeclarationSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplicitTypeDeclarationSet = inValue ;
  }

  public: inline void setter_setMSyntaxComponentList (const GALGAS_galgas_33_SyntaxComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentList = inValue ;
  }

  public: inline void setter_setMSyntaxExtensions (const GALGAS_syntaxExtensions & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxExtensions = inValue ;
  }

  public: inline void setter_setMGUIComponentList (const GALGAS_galgasGUIComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
  public: virtual ~ GALGAS_galgasDeclarationAST (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgasDeclarationAST (const GALGAS_semanticDeclarationListAST & in_mDeclarationList,
                                       const GALGAS_stringset & in_mImplicitTypeDeclarationSet,
                                       const GALGAS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                       const GALGAS_syntaxExtensions & in_mSyntaxExtensions,
                                       const GALGAS_galgasGUIComponentListAST & in_mGUIComponentList,
                                       const GALGAS_prologueEpilogueList & in_mPrologueDeclarationList,
                                       const GALGAS_programRuleList & in_mSourceRuleList,
                                       const GALGAS_prologueEpilogueList & in_mEpilogueDeclarationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgasDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgasDeclarationAST constructor_new (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgasDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgasDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mFormalArgumentName ;
  public: inline GALGAS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_functionSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                               const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                               const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                            const class GALGAS_string & inOperand2,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constructorMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnedType ;

//--- Constructor
  public: cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                      const GALGAS_functionSignature & in_mArgumentTypeList,
                                      const GALGAS_bool & in_mHasCompilerArgument,
                                      const GALGAS_unifiedTypeMapEntry & in_mReturnedType
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GALGAS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

  public: inline void setter_setMReturnedType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_functionSignature & in_mArgumentTypeList,
                                            const GALGAS_bool & in_mHasCompilerArgument,
                                            const GALGAS_unifiedTypeMapEntry & in_mReturnedType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_functionSignature & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @methodQualifier enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_methodQualifier : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_methodQualifier (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_isVirtual,
    kEnum_isVirtualAbstract,
    kEnum_isBasic,
    kEnum_isBasicFinal,
    kEnum_isInherited,
    kEnum_isVirtualOverriding,
    kEnum_isVirtualOverridingAbstract
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_methodQualifier extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodQualifier constructor_isBasic (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isBasicFinal (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isInherited (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isVirtual (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isVirtualAbstract (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isVirtualOverriding (LOCATION_ARGS) ;

  public: static class GALGAS_methodQualifier constructor_isVirtualOverridingAbstract (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_methodQualifier & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasicFinal (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsInherited (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsVirtual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsVirtualAbstract (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsVirtualOverriding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsVirtualOverridingAbstract (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_isBasic () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isBasicFinal () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isInherited () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isVirtual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isVirtualAbstract () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isVirtualOverriding () const ;

  public: VIRTUAL_IN_DEBUG bool optional_isVirtualOverridingAbstract () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_methodQualifier class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodQualifier ;

//--------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @methodKind enum                                              *
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_methodKind extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodKind constructor_definedAsExtension (LOCATION_ARGS) ;

  public: static class GALGAS_methodKind constructor_definedAsMember (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_methodKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodSignature list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_optionalMethodSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_optionalMethodSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_mInputArgument,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodSignature extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodSignature constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_optionalMethodSignature constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                 const class GALGAS_string & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_optionalMethodSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_optionalMethodSignature add_operation (const GALGAS_optionalMethodSignature & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_bool constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMapEntry constinArgument2,
                                               class GALGAS_string constinArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_unifiedTypeMapEntry constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
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
                                              class GALGAS_unifiedTypeMapEntry & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_unifiedTypeMapEntry & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_optionalMethodSignature ;
 
} ; // End of GALGAS_optionalMethodSignature class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_optionalMethodSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_optionalMethodSignature (const GALGAS_optionalMethodSignature & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_mInputArgument (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_optionalMethodSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mInputArgument ;
  public: inline GALGAS_bool readProperty_mInputArgument (void) const {
    return mProperty_mInputArgument ;
  }

  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mFormalArgumentName ;
  public: inline GALGAS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputArgument = inValue ;
  }

  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
                                                     const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                     const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodSignature_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@optionalMethodMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_optionalMethodSignature mProperty_mArgumentTypeList ;
  public: inline GALGAS_optionalMethodSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionalMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_optionalMethodSignature & inOperand1,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionalMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@getterMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_getterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: GALGAS_string mProperty_mGetterNameThatObsoletesInvokationName ;

//--- Constructor
  public: cMapElement_getterMap (const GALGAS_lstring & inKey,
                                 const GALGAS_methodKind & in_mKind,
                                 const GALGAS_functionSignature & in_mArgumentTypeList,
                                 const GALGAS_location & in_mDeclarationLocation,
                                 const GALGAS_bool & in_mHasCompilerArgument,
                                 const GALGAS_unifiedTypeMapEntry & in_mReturnedType,
                                 const GALGAS_methodQualifier & in_mQualifier,
                                 const GALGAS_string & in_mGetterNameThatObsoletesInvokationName
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_methodKind mProperty_mKind ;
  public: inline GALGAS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GALGAS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: inline GALGAS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GALGAS_string mProperty_mGetterNameThatObsoletesInvokationName ;
  public: inline GALGAS_string readProperty_mGetterNameThatObsoletesInvokationName (void) const {
    return mProperty_mGetterNameThatObsoletesInvokationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

  public: inline void setter_setMReturnedType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMGetterNameThatObsoletesInvokationName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterNameThatObsoletesInvokationName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_getterMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_methodKind & in_mKind,
                                       const GALGAS_functionSignature & in_mArgumentTypeList,
                                       const GALGAS_location & in_mDeclarationLocation,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_unifiedTypeMapEntry & in_mReturnedType,
                                       const GALGAS_methodQualifier & in_mQualifier,
                                       const GALGAS_string & in_mGetterNameThatObsoletesInvokationName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                    const class GALGAS_methodQualifier & inOperand6,
                                                                    const class GALGAS_string & inOperand7,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterSignature list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalParameterSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formalParameterSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formalParameterSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterSignature extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_formalParameterSignature constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formalParameterSignature constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                  const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                  const class GALGAS_string & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterSignature add_operation (const GALGAS_formalParameterSignature & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_unifiedTypeMapEntry constinArgument1,
                                               class GALGAS_formalArgumentPassingModeAST constinArgument2,
                                               class GALGAS_string constinArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                      class GALGAS_formalArgumentPassingModeAST constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_unifiedTypeMapEntry & outArgument1,
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

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMapEntry & outArgument1,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_unifiedTypeMapEntry & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterSignature ;
 
} ; // End of GALGAS_formalParameterSignature class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalParameterSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formalParameterSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalParameterSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GALGAS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GALGAS_string mProperty_mFormalArgumentName ;
  public: inline GALGAS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
                                                      const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                      const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_formalParameterSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                   const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_formalParameterSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formalParameterSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@setterMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_setterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_methodKind mProperty_mKind ;
  public: inline GALGAS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: inline GALGAS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GALGAS_string mProperty_mErrorMessage ;
  public: inline GALGAS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
                                                                    const class GALGAS_string & inOperand5,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_setterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@instanceMethodMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instanceMethodMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instanceMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_methodKind mProperty_mKind ;
  public: inline GALGAS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: inline GALGAS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: inline GALGAS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GALGAS_string mProperty_mErrorMessage ;
  public: inline GALGAS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
                                                                            const class GALGAS_string & inOperand6,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instanceMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instanceMethodMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@classMethodMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classMethodMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterSignature mProperty_mParameterList ;
  public: inline GALGAS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: inline GALGAS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_formalParameterSignature & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_classMethodMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDescriptorList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumerationDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mEnumeratedType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mEnumeratedType (void) const {
    return mProperty_mEnumeratedType ;
  }

  public: GALGAS_string mProperty_mEnumerationName ;
  public: inline GALGAS_string readProperty_mEnumerationName (void) const {
    return mProperty_mEnumerationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumeratedType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedType = inValue ;
  }

  public: inline void setter_setMEnumerationName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                       const GALGAS_string & in_mEnumerationName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationDescriptorList_2D_element constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumerationDescriptorList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                        Phase 1: @predefinedTypeKindEnum enum                                        *
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_predefinedTypeKindEnum class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @typeKindEnum enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKindEnum_classType : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKindEnum_classType (const GALGAS_bool inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKindEnum_classType (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKindEnum_weakReferenceType : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKindEnum_weakReferenceType (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKindEnum_weakReferenceType (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKindEnum string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_typeKindEnum & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @AccessControl enum                                            *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_AccessControl (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_publicAccess,
    kEnum_protectedAccess,
    kEnum_protectedSetAccess,
    kEnum_privateAccess,
    kEnum_privateSetAccess,
    kEnum_fileprivateAccess,
    kEnum_fileprivateSetAccess
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControl extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_AccessControl constructor_fileprivateAccess (const class GALGAS_location & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl constructor_fileprivateSetAccess (const class GALGAS_location & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl constructor_privateAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl constructor_privateSetAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl constructor_protectedAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl constructor_protectedSetAccess (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControl constructor_publicAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_AccessControl & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fileprivateAccess (class GALGAS_location & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fileprivateSetAccess (class GALGAS_location & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_privateAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_privateSetAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_protectedAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_protectedSetAccess (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPublicAccess (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_fileprivateAccess (class GALGAS_location & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fileprivateSetAccess (class GALGAS_location & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_privateAccess (class GALGAS_unifiedTypeMapEntry & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_privateSetAccess (class GALGAS_unifiedTypeMapEntry & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_protectedAccess (class GALGAS_unifiedTypeMapEntry & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_protectedSetAccess (class GALGAS_unifiedTypeMapEntry & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_publicAccess () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AccessControl class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public: GALGAS_AccessControl mProperty_mAccessControl ;
  public: GALGAS_bool mProperty_mIsConstant ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyType ;

//--- Constructor
  public: cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                   const GALGAS_AccessControl & in_mAccessControl,
                                   const GALGAS_bool & in_mIsConstant,
                                   const GALGAS_unifiedTypeMapEntry & in_mPropertyType
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_AccessControl mProperty_mAccessControl ;
  public: inline GALGAS_AccessControl readProperty_mAccessControl (void) const {
    return mProperty_mAccessControl ;
  }

  public: GALGAS_bool mProperty_mIsConstant ;
  public: inline GALGAS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessControl (const GALGAS_AccessControl & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessControl = inValue ;
  }

  public: inline void setter_setMIsConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

  public: inline void setter_setMPropertyType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_AccessControl & in_mAccessControl,
                                         const GALGAS_bool & in_mIsConstant,
                                         const GALGAS_unifiedTypeMapEntry & in_mPropertyType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_AccessControl & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @AccessControl enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_protectedAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_protectedAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_AccessControl_protectedAccess (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_protectedSetAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_protectedSetAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_AccessControl_protectedSetAccess (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_privateAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_privateAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_AccessControl_privateAccess (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_privateSetAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_privateSetAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_AccessControl_privateSetAccess (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_fileprivateAccess : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_fileprivateAccess (const GALGAS_location inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_AccessControl_fileprivateAccess (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_fileprivateSetAccess : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_fileprivateSetAccess (const GALGAS_location inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_AccessControl_fileprivateSetAccess (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantIndexMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantIndexMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constantIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_unifiedTypeMapEntryList mProperty_mAssociatedTypeList ;
  public: inline GALGAS_unifiedTypeMapEntryList readProperty_mAssociatedTypeList (void) const {
    return mProperty_mAssociatedTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constantIndexMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1,
                                                                           const class GALGAS_unifiedTypeMapEntryList & inOperand2,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constantIndexMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @predefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypeAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_predefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_predefinedTypeAST (const class cPtr_predefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mPredefinedTypeName (void) const ;

  public: class GALGAS_predefinedTypeKindEnum readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_predefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_predefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_predefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @predefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_predefinedTypeAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionMethodMapForBuildingContext & ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & ioExtensionOverrideDefinitionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionMethodMapForBuildingContext inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticContext & ioSemanticContext,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getAddAssignArgumentList
  public: virtual void method_getAddAssignArgumentList (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_functionSignature & outAddAssignArgumentList,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_classMethodMap & outClassMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getEnumerationList
  public: virtual void method_getEnumerationList (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_enumerationDescriptorList & outEnumerationList,
           class GALGAS_string & outEnumeratedType,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_instanceMethodMap & outInstanceMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getOptionalMethodMap
  public: virtual void method_getOptionalMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_optionalMethodMap & outMap,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_setterMap & outSetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_string inProductDirectory,
           const class GALGAS_semanticContext inSemanticContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_predefinedTypes inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & ioSemanticDeclarationListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @predefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypeAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_predefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_predefinedTypeAST_2D_weak (const class GALGAS_predefinedTypeAST & inSource) ;

  public: GALGAS_predefinedTypeAST_2D_weak & operator = (const class GALGAS_predefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_predefinedTypeAST bang_predefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_predefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @applicationPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_applicationPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_applicationPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_applicationPredefinedTypeAST (const class cPtr_applicationPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_applicationPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_applicationPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_applicationPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_applicationPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @applicationPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_applicationPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_classMethodMap & outClassMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_applicationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_string & in_mPredefinedTypeName,
                                             const GALGAS_predefinedTypeKindEnum & in_mKind
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @applicationPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_applicationPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_applicationPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_applicationPredefinedTypeAST_2D_weak (const class GALGAS_applicationPredefinedTypeAST & inSource) ;

  public: GALGAS_applicationPredefinedTypeAST_2D_weak & operator = (const class GALGAS_applicationPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_applicationPredefinedTypeAST bang_applicationPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_applicationPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_applicationPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_applicationPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_applicationPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bigintPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_bigintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_bigintPredefinedTypeAST (const class cPtr_bigintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bigintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bigintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bigintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bigintPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bigintPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_bigintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_instanceMethodMap & outInstanceMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_setterMap & outSetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_bigintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_string & in_mPredefinedTypeName,
                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bigintPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigintPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bigintPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bigintPredefinedTypeAST_2D_weak (const class GALGAS_bigintPredefinedTypeAST & inSource) ;

  public: GALGAS_bigintPredefinedTypeAST_2D_weak & operator = (const class GALGAS_bigintPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bigintPredefinedTypeAST bang_bigintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bigintPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bigintPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bigintPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bigintPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_objectPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_objectPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_objectPredefinedTypeAST (const class cPtr_objectPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_objectPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_objectPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_objectPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_objectPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @objectPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_objectPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_objectPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_string & in_mPredefinedTypeName,
                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_objectPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_objectPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_objectPredefinedTypeAST_2D_weak (const class GALGAS_objectPredefinedTypeAST & inSource) ;

  public: GALGAS_objectPredefinedTypeAST_2D_weak & operator = (const class GALGAS_objectPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_objectPredefinedTypeAST bang_objectPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_objectPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_objectPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_objectPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_objectPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperPredefinedTypeAST (const class cPtr_filewrapperPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_setterMap & outSetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_filewrapperPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_string & in_mPredefinedTypeName,
                                             const GALGAS_predefinedTypeKindEnum & in_mKind
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperPredefinedTypeAST_2D_weak (const class GALGAS_filewrapperPredefinedTypeAST & inSource) ;

  public: GALGAS_filewrapperPredefinedTypeAST_2D_weak & operator = (const class GALGAS_filewrapperPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperPredefinedTypeAST bang_filewrapperPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binarysetPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binarysetPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_binarysetPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_binarysetPredefinedTypeAST (const class cPtr_binarysetPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binarysetPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binarysetPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_binarysetPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binarysetPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @binarysetPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_binarysetPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_classMethodMap & outClassMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_binarysetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_string & in_mPredefinedTypeName,
                                           const GALGAS_predefinedTypeKindEnum & in_mKind
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binarysetPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binarysetPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_binarysetPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_binarysetPredefinedTypeAST_2D_weak (const class GALGAS_binarysetPredefinedTypeAST & inSource) ;

  public: GALGAS_binarysetPredefinedTypeAST_2D_weak & operator = (const class GALGAS_binarysetPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_binarysetPredefinedTypeAST bang_binarysetPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binarysetPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binarysetPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_binarysetPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binarysetPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_boolPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolPredefinedTypeAST (const class cPtr_boolPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_boolPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName,
                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolPredefinedTypeAST_2D_weak (const class GALGAS_boolPredefinedTypeAST & inSource) ;

  public: GALGAS_boolPredefinedTypeAST_2D_weak & operator = (const class GALGAS_boolPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolPredefinedTypeAST bang_boolPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uintPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_uintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_uintPredefinedTypeAST (const class cPtr_uintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_uintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uintPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @uintPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_uintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_classMethodMap & outClassMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName,
                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uintPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uintPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_uintPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_uintPredefinedTypeAST_2D_weak (const class GALGAS_uintPredefinedTypeAST & inSource) ;

  public: GALGAS_uintPredefinedTypeAST_2D_weak & operator = (const class GALGAS_uintPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_uintPredefinedTypeAST bang_uintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uintPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_uintPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_uintPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uintPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uint_36__34_PredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint_36__34_PredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_uint_36__34_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_uint_36__34_PredefinedTypeAST (const class cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uint_36__34_PredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_uint_36__34_PredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uint_36__34_PredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @uint64PredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_uint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_string & in_mPredefinedTypeName,
                                              const GALGAS_predefinedTypeKindEnum & in_mKind
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uint_36__34_PredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint_36__34_PredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (const class GALGAS_uint_36__34_PredefinedTypeAST & inSource) ;

  public: GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & operator = (const class GALGAS_uint_36__34_PredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_uint_36__34_PredefinedTypeAST bang_uint_36__34_PredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uint_36__34_PredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_uint_36__34_PredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uint_36__34_PredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sintPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_sintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sintPredefinedTypeAST (const class cPtr_sintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sintPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sintPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_sintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName,
                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sintPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sintPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sintPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sintPredefinedTypeAST_2D_weak (const class GALGAS_sintPredefinedTypeAST & inSource) ;

  public: GALGAS_sintPredefinedTypeAST_2D_weak & operator = (const class GALGAS_sintPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sintPredefinedTypeAST bang_sintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sintPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sintPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sintPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sintPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sint_36__34_PredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sint_36__34_PredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_sint_36__34_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sint_36__34_PredefinedTypeAST (const class cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sint_36__34_PredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sint_36__34_PredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sint_36__34_PredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sint64PredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_sint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_string & in_mPredefinedTypeName,
                                              const GALGAS_predefinedTypeKindEnum & in_mKind
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sint_36__34_PredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sint_36__34_PredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (const class GALGAS_sint_36__34_PredefinedTypeAST & inSource) ;

  public: GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & operator = (const class GALGAS_sint_36__34_PredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sint_36__34_PredefinedTypeAST bang_sint_36__34_PredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sint_36__34_PredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sint_36__34_PredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sint_36__34_PredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @charPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_charPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_charPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_charPredefinedTypeAST (const class cPtr_charPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_charPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_charPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_charPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_charPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @charPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_charPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_charPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName,
                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @charPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_charPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_charPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_charPredefinedTypeAST_2D_weak (const class GALGAS_charPredefinedTypeAST & inSource) ;

  public: GALGAS_charPredefinedTypeAST_2D_weak & operator = (const class GALGAS_charPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_charPredefinedTypeAST bang_charPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_charPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_charPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_charPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_charPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @doublePredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_doublePredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_doublePredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_doublePredefinedTypeAST (const class cPtr_doublePredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_doublePredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_doublePredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_doublePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_doublePredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @doublePredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_doublePredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_doublePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_string & in_mPredefinedTypeName,
                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @doublePredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_doublePredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_doublePredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_doublePredefinedTypeAST_2D_weak (const class GALGAS_doublePredefinedTypeAST & inSource) ;

  public: GALGAS_doublePredefinedTypeAST_2D_weak & operator = (const class GALGAS_doublePredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_doublePredefinedTypeAST bang_doublePredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_doublePredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_doublePredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_doublePredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_doublePredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_stringPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_stringPredefinedTypeAST (const class cPtr_stringPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_stringPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_stringPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_stringPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_classMethodMap & outClassMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_instanceMethodMap & outInstanceMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getOptionalMethodMap
  public: virtual void method_getOptionalMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_optionalMethodMap & outMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_setterMap & outSetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_string & in_mPredefinedTypeName,
                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_stringPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_stringPredefinedTypeAST_2D_weak (const class GALGAS_stringPredefinedTypeAST & inSource) ;

  public: GALGAS_stringPredefinedTypeAST_2D_weak & operator = (const class GALGAS_stringPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_stringPredefinedTypeAST bang_stringPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_stringPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_stringPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @locationPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_locationPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_locationPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_locationPredefinedTypeAST (const class cPtr_locationPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_locationPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_locationPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_locationPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_locationPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @locationPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_locationPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_locationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_string & in_mPredefinedTypeName,
                                          const GALGAS_predefinedTypeKindEnum & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @locationPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_locationPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_locationPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_locationPredefinedTypeAST_2D_weak (const class GALGAS_locationPredefinedTypeAST & inSource) ;

  public: GALGAS_locationPredefinedTypeAST_2D_weak & operator = (const class GALGAS_locationPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_locationPredefinedTypeAST bang_locationPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_locationPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_locationPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_locationPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_locationPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringsetPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringsetPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_stringsetPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_stringsetPredefinedTypeAST (const class cPtr_stringsetPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringsetPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_stringsetPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_stringsetPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringsetPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringsetPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_stringsetPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getAddAssignArgumentList
  public: virtual void method_getAddAssignArgumentList (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_functionSignature & outAddAssignArgumentList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getEnumerationList
  public: virtual void method_getEnumerationList (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_enumerationDescriptorList & outEnumerationList,
           class GALGAS_string & outEnumeratedType,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_setterMap & outSetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_stringsetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_string & in_mPredefinedTypeName,
                                           const GALGAS_predefinedTypeKindEnum & in_mKind
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringsetPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringsetPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_stringsetPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_stringsetPredefinedTypeAST_2D_weak (const class GALGAS_stringsetPredefinedTypeAST & inSource) ;

  public: GALGAS_stringsetPredefinedTypeAST_2D_weak & operator = (const class GALGAS_stringsetPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_stringsetPredefinedTypeAST bang_stringsetPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringsetPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_stringsetPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_stringsetPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringsetPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_functionPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_functionPredefinedTypeAST (const class cPtr_functionPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_functionPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_functionPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_string & in_mPredefinedTypeName,
                                          const GALGAS_predefinedTypeKindEnum & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionPredefinedTypeAST_2D_weak (const class GALGAS_functionPredefinedTypeAST & inSource) ;

  public: GALGAS_functionPredefinedTypeAST_2D_weak & operator = (const class GALGAS_functionPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionPredefinedTypeAST bang_functionPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typePredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typePredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_typePredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_typePredefinedTypeAST (const class cPtr_typePredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typePredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typePredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @typePredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_typePredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_typePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName,
                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typePredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typePredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typePredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typePredefinedTypeAST_2D_weak (const class GALGAS_typePredefinedTypeAST & inSource) ;

  public: GALGAS_typePredefinedTypeAST_2D_weak & operator = (const class GALGAS_typePredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typePredefinedTypeAST bang_typePredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typePredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typePredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typePredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dataPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dataPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_dataPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dataPredefinedTypeAST (const class cPtr_dataPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dataPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dataPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dataPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dataPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dataPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dataPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getEnumerationList
  public: virtual void method_getEnumerationList (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_enumerationDescriptorList & outEnumerationList,
           class GALGAS_string & outEnumeratedType,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_instanceMethodMap & outInstanceMethodMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_setterMap & outSetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_dataPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName,
                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dataPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dataPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dataPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dataPredefinedTypeAST_2D_weak (const class GALGAS_dataPredefinedTypeAST & inSource) ;

  public: GALGAS_dataPredefinedTypeAST_2D_weak & operator = (const class GALGAS_dataPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dataPredefinedTypeAST bang_dataPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dataPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dataPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dataPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dataPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @timerPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_timerPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_timerPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_timerPredefinedTypeAST (const class cPtr_timerPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_timerPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_timerPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_timerPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_timerPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @timerPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_timerPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_operators getter_getSupportedOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getConstructorMap
  public: virtual void method_getConstructorMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_constructorMap & outConstructorMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_getterMap & outGetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & ioUnifiedTypeMap,
           class GALGAS_setterMap & outSetterMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_timerPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName,
                                       const GALGAS_predefinedTypeKindEnum & in_mKind
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @timerPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_timerPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_timerPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_timerPredefinedTypeAST_2D_weak (const class GALGAS_timerPredefinedTypeAST & inSource) ;

  public: GALGAS_timerPredefinedTypeAST_2D_weak & operator = (const class GALGAS_timerPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_timerPredefinedTypeAST bang_timerPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_timerPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_timerPredefinedTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_timerPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_timerPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getConstructorMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getConstructorMap (class cPtr_predefinedTypeAST * inObject,
                                            class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            class GALGAS_constructorMap & out_outConstructorMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getGetterMap (class cPtr_predefinedTypeAST * inObject,
                                       class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       class GALGAS_getterMap & out_outGetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getSetterMap (class cPtr_predefinedTypeAST * inObject,
                                       class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       class GALGAS_setterMap & out_outSetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getInstanceMethodMap (class cPtr_predefinedTypeAST * inObject,
                                               class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               class GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassMethodMap (class cPtr_predefinedTypeAST * inObject,
                                            class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            class GALGAS_classMethodMap & out_outClassMethodMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getOptionalMethodMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptionalMethodMap (class cPtr_predefinedTypeAST * inObject,
                                               class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               class GALGAS_optionalMethodMap & out_outMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_operators callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getAddAssignArgumentList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getAddAssignArgumentList (class cPtr_predefinedTypeAST * inObject,
                                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   class GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getEnumerationList (class cPtr_predefinedTypeAST * inObject,
                                             class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             class GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                             class GALGAS_string & out_outEnumeratedType,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location sourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_sourceFile (const class GALGAS_location & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location commaSourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_commaSourceFile (const class GALGAS_location & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (class cPtr_semanticInstructionAST * inObject,
                                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (class cPtr_semanticExpressionAST * inObject,
                                                           class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionListInSemanticContext (const class GALGAS_semanticInstructionListAST inObject,
                                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarLabelMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarLabelMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_grammarLabelMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_grammarLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_grammarLabelMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_grammarLabelMap (const GALGAS_grammarLabelMap & inSource) ;
  public: GALGAS_grammarLabelMap & operator = (const GALGAS_grammarLabelMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarLabelMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarLabelMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_grammarLabelMap constructor_mapWithMapToOverride (const class GALGAS_grammarLabelMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterSignature & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_grammarLabelMap add_operation (const GALGAS_grammarLabelMap & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mLabelSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterSignature & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_grammarLabelMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_grammarLabelMap ;
 
} ; // End of GALGAS_grammarLabelMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_grammarLabelMap : public cGenericAbstractEnumerator {
  public: cEnumerator_grammarLabelMap (const GALGAS_grammarLabelMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mLabelSignature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_grammarLabelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@grammarLabelMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarLabelMap : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterSignature mProperty_mLabelSignature ;

//--- Constructor
  public: cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                       const GALGAS_formalParameterSignature & in_mLabelSignature
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarLabelMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarLabelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterSignature mProperty_mLabelSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mLabelSignature (void) const {
    return mProperty_mLabelSignature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelSignature = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_grammarLabelMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_formalParameterSignature & in_mLabelSignature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarLabelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarLabelMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_formalParameterSignature & inOperand1,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarLabelMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarLabelMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ;

