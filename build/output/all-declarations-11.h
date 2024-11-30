#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @productionRuleListForGrammarAnalysis list
//
//--------------------------------------------------------------------------------------------------

class GGS_productionRuleListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_productionRuleListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_productionRuleListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLeftNonterminalSymbol,
                                                 const class GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                 const class GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                 const class GGS_uint & in_mProductionIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_productionRuleListForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_productionRuleListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_productionRuleListForGrammarAnalysis class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_productionRuleListForGrammarAnalysis class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                          const class GGS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_productionRuleListForGrammarAnalysis inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                     const class GGS_uint & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_productionRuleListForGrammarAnalysis add_operation (const GGS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               class GGS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                                               class GGS_uint constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                 class GGS_uint & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_uint & outArgument1,
                                                class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                class GGS_uint & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                      class GGS_uint & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftNonterminalSymbolAtIndex (class GGS_lstring constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftNonterminalSymbolIndexAtIndex (class GGS_uint constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductionIndexAtIndex (class GGS_uint constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_uint & outArgument1,
                                              class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                              class GGS_uint & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_uint & outArgument1,
                                             class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                             class GGS_uint & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLeftNonterminalSymbolAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLeftNonterminalSymbolIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mProductionIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_productionRuleListForGrammarAnalysis_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_productionRuleListForGrammarAnalysis ;
 
} ; // End of GGS_productionRuleListForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_productionRuleListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mLeftNonterminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mProductionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_productionRuleListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @productionRuleListForGrammarAnalysis_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_productionRuleListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLeftNonterminalSymbol ;
  public: inline GGS_lstring readProperty_mLeftNonterminalSymbol (void) const {
    return mProperty_mLeftNonterminalSymbol ;
  }

  public: GGS_uint mProperty_mLeftNonterminalSymbolIndex ;
  public: inline GGS_uint readProperty_mLeftNonterminalSymbolIndex (void) const {
    return mProperty_mLeftNonterminalSymbolIndex ;
  }

  public: GGS_syntaxInstructionListForGrammarAnalysis mProperty_mInstructionList ;
  public: inline GGS_syntaxInstructionListForGrammarAnalysis readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_uint mProperty_mProductionIndex ;
  public: inline GGS_uint readProperty_mProductionIndex (void) const {
    return mProperty_mProductionIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLeftNonterminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbol = inValue ;
  }

  public: inline void setter_setMLeftNonterminalSymbolIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbolIndex = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMProductionIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_productionRuleListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                               const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                               const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                               const GGS_uint & in_mProductionIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_productionRuleListForGrammarAnalysis_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                           const class GGS_uint & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_productionRuleListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_productionRuleListForGrammarAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                           const class GGS_uint & inOperand3,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_productionRuleListForGrammarAnalysis_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_unusedNonTerminalSymbolMapForGrammarAnalysis add_operation (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mNonTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                         const GGS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
 
} ; // End of GGS_unusedNonTerminalSymbolMapForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@unusedNonTerminalSymbolMapForGrammarAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mNonTerminalIndex ;

//--- Constructors
  public: cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                                    const GGS_uint & in_mNonTerminalIndex
                                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                       const GGS_uint & in_mNonTerminalIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_uint & inOperand1,
                                                                                                   class Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: unusedNonTerminalSymbolMapForGrammarAnalysis.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list
//
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolSortedListForGrammarAnalysis class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_nonTerminalSymbolSortedListForGrammarAnalysis class_func_sortedListWithValue (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_uint & inOperand1,
                                                                                                         const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_lstring inArgument0,
                                               class GGS_uint inArgument1,
                                               class GGS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_lstring & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_lstring & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_lstring & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_lstring & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
 
} ; // End of GGS_nonTerminalSymbolSortedListForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject,
                                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mNonTerminalSymbol ;
  public: inline GGS_lstring readProperty_mNonTerminalSymbol (void) const {
    return mProperty_mNonTerminalSymbol ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GGS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonTerminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalSymbol = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_lstring & in_mNonTerminalSymbol,
                                                                        const GGS_uint & in_mNonTerminalIndex,
                                                                        const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_uint & inOperand1,
                                                                                                const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_uint & inOperand1,
                                                                                                    const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                                    class Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalInstructionForGrammarAnalysis reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nonTerminalInstructionForGrammarAnalysis (const class cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNonterminalSymbolName (void) const ;

  public: class GGS_uint readProperty_mNonterminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_uint & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalInstructionForGrammarAnalysis class_func_new (const class GGS_location & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    const class GGS_uint & inOperand2,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_nonTerminalInstructionForGrammarAnalysis class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalInstructionForGrammarAnalysis_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nonTerminalInstructionForGrammarAnalysis bang_nonTerminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_nonTerminalInstructionForGrammarAnalysis unwrappedValue (void) const {
    GGS_nonTerminalInstructionForGrammarAnalysis result ;
    if (isValid ()) {
      const cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) ptr () ;
      if (nullptr != p) {
        result = GGS_nonTerminalInstructionForGrammarAnalysis (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @branchListForGrammarAnalysis list
//
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_branchListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_branchListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchListForGrammarAnalysis class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_branchListForGrammarAnalysis class_func_listWithValue (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_branchListForGrammarAnalysis inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_branchListForGrammarAnalysis add_operation (const GGS_branchListForGrammarAnalysis & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_branchListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_branchListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_branchListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_branchListForGrammarAnalysis_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_branchListForGrammarAnalysis ;
 
} ; // End of GGS_branchListForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_branchListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @branchListForGrammarAnalysis_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxInstructionListForGrammarAnalysis mProperty_mSyntaxInstructionList ;
  public: inline GGS_syntaxInstructionListForGrammarAnalysis readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GGS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_branchListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis_2E_element init_21_ (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchListForGrammarAnalysis_2E_element class_func_new (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_branchListForGrammarAnalysis_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGrammarAnalysis reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstructionForGrammarAnalysis (const class cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mSelectBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionForGrammarAnalysis class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                               const class GGS_uint & inOperand2,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selectInstructionForGrammarAnalysis class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;

#include "separateHeaderFor_selectInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGrammarAnalysis_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

  public: GGS_selectInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstructionForGrammarAnalysis bang_selectInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_selectInstructionForGrammarAnalysis unwrappedValue (void) const {
    GGS_selectInstructionForGrammarAnalysis result ;
    if (isValid ()) {
      const cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) ptr () ;
      if (nullptr != p) {
        result = GGS_selectInstructionForGrammarAnalysis (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selectInstructionForGrammarAnalysis_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGrammarAnalysis reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstructionForGrammarAnalysis (const class cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mRepeatBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_repeatInstructionForGrammarAnalysis class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                               const class GGS_uint & inOperand2,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_repeatInstructionForGrammarAnalysis class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;

#include "separateHeaderFor_repeatInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGrammarAnalysis_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_repeatInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_repeatInstructionForGrammarAnalysis bang_repeatInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_repeatInstructionForGrammarAnalysis unwrappedValue (void) const {
    GGS_repeatInstructionForGrammarAnalysis result ;
    if (isValid ()) {
      const cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) ptr () ;
      if (nullptr != p) {
        result = GGS_repeatInstructionForGrammarAnalysis (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_repeatInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_repeatInstructionForGrammarAnalysis_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentListForGrammarAnalysis list
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_syntaxComponentListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                 const class GGS_lstring & in_mSyntaxComponentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxComponentListForGrammarAnalysis class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_syntaxComponentListForGrammarAnalysis class_func_listWithValue (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                           const class GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_syntaxComponentListForGrammarAnalysis inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syntaxComponentListForGrammarAnalysis add_operation (const GGS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductionRulesListAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_mProductionRulesListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxComponentListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxComponentListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxComponentListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_syntaxComponentListForGrammarAnalysis_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxComponentListForGrammarAnalysis ;
 
} ; // End of GGS_syntaxComponentListForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxComponentListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject,
                                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxComponentListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentListForGrammarAnalysis_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_productionRuleListForGrammarAnalysis mProperty_mProductionRulesList ;
  public: inline GGS_productionRuleListForGrammarAnalysis readProperty_mProductionRulesList (void) const {
    return mProperty_mProductionRulesList ;
  }

  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProductionRulesList (const GGS_productionRuleListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionRulesList = inValue ;
  }

  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syntaxComponentListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                const GGS_lstring & in_mSyntaxComponentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element init_21__21_ (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxComponentListForGrammarAnalysis_2E_element class_func_new (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxComponentListForGrammarAnalysis_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalSymbolsMapForGrammarAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_terminalSymbolsMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public: GGS_terminalSymbolsMapForGrammarAnalysis & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalSymbolsMapForGrammarAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_terminalSymbolsMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_terminalSymbolsMapForGrammarAnalysis add_operation (const GGS_terminalSymbolsMapForGrammarAnalysis & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalIndexForKey (class GGS_uint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalSymbolsMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_terminalSymbolsMapForGrammarAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GGS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_terminalSymbolsMapForGrammarAnalysis ;
 
} ; // End of GGS_terminalSymbolsMapForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_terminalSymbolsMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@terminalSymbolsMapForGrammarAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_terminalSymbolsMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mTerminalIndex ;

//--- Constructors
  public: cMapElement_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_terminalSymbolsMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                            const GGS_uint & in_mTerminalIndex
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalSymbolsMapForGrammarAnalysis_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mTerminalIndex ;
  public: inline GGS_uint readProperty_mTerminalIndex (void) const {
    return mProperty_mTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_uint & in_mTerminalIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_uint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_terminalSymbolsMapForGrammarAnalysis_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: terminalSymbolsMapForGrammarAnalysis.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_terminalSymbolsMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstruction (class cPtr_syntaxInstructionAST * inObject,
                                               class GGS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                               const class GGS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                               class GGS_uint & io_ioAddedNonTerminalIndex,
                                               class GGS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const class GGS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   class GGS_rowList & io_ioRowList,
                                                   const class GGS_uint constin_inRow,
                                                   class GGS_uint & io_ioColumn,
                                                   class GGS_string & io_ioCurrentNode,
                                                   class GGS_string & io_ioArrowShape,
                                                   class GGS_string & io_ioArrows,
                                                   class GGS_uint & io_ioMaxUsedRowIndex,
                                                   const class GGS_bool constin_inDebug,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @rowList list
//
//--------------------------------------------------------------------------------------------------

class GGS_rowList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_rowList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_rowList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS__32_stringlist & in_columns
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_rowList init (Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_rowList extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_rowList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_rowList class_func_listWithValue (const class GGS__32_stringlist & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_rowList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS__32_stringlist & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_rowList add_operation (const GGS_rowList & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS__32_stringlist constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS__32_stringlist constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS__32_stringlist & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS__32_stringlist & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS__32_stringlist & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setColumnsAtIndex (class GGS__32_stringlist constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS__32_stringlist & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS__32_stringlist & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_columnsAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_rowList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_rowList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_rowList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_rowList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_rowList ;
 
} ; // End of GGS_rowList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_rowList : public cGenericAbstractEnumerator {
  public: cEnumerator_rowList (const GGS_rowList & inEnumeratedObject,
                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS__32_stringlist current_columns (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_rowList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       class GGS_rowList & io_ioRowList,
                                                       const class GGS_uint constin_inRow,
                                                       class GGS_uint & io_ioColumn,
                                                       class GGS_string & io_ioCurrentNode,
                                                       class GGS_string & io_ioArrowShape,
                                                       class GGS_string & io_ioArrows,
                                                       class GGS_uint & io_ioMaxUsedRowIndex,
                                                       const class GGS_bool constin_inDebug,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@rowList appendRow'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (class GGS_rowList & ioObject,
                                const class GGS_string constin_inNodeDefinition,
                                const class GGS_uint constin_inRow,
                                const class GGS_uint constin_inColumn,
                                class GGS_string & out_outNodeName,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @rowList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_rowList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__32_stringlist mProperty_columns ;
  public: inline GGS__32_stringlist readProperty_columns (void) const {
    return mProperty_columns ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_rowList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setColumns (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_columns = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_rowList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_rowList_2E_element (const GGS__32_stringlist & in_columns) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_rowList_2E_element init_21_ (const class GGS__32_stringlist & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_rowList_2E_element extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_rowList_2E_element class_func_new (const class GGS__32_stringlist & inOperand0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_rowList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@syntaxInstructionListForGrammarAnalysis displayVertically' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_displayVertically (const class GGS_syntaxInstructionListForGrammarAnalysis & inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractSyntaxInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isLinear (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_programListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_programListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_programListForGeneration class_func_listWithValue (const class GGS_semanticDeclarationForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_programListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_semanticDeclarationForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_programListForGeneration add_operation (const GGS_programListForGeneration & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticDeclarationForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticDeclarationForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticDeclarationForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_programListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_programListForGeneration ;
 
} ; // End of GGS_programListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_programListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_programListForGeneration (const GGS_programListForGeneration & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GGS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_programListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GGS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_programListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_programListForGeneration_2E_element (const GGS_semanticDeclarationForGeneration & in_mDeclaration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration_2E_element init_21_ (const class GGS_semanticDeclarationForGeneration & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programListForGeneration_2E_element class_func_new (const class GGS_semanticDeclarationForGeneration & inOperand0,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_programListForGeneration_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @genericExtensionMethodListMapDictionary dict
//
//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_genericExtensionMethodListMapDictionary ;

//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMapDictionary : public AC_GALGAS_root {
//--------------------------------- Attributes
  private: cSharedDictRoot_genericExtensionMethodListMapDictionary * mSharedDict ;

//--------------------------------- Default constructor
  public: GGS_genericExtensionMethodListMapDictionary (void) ;

//--------------------------------- Destructor
  public: virtual ~ GGS_genericExtensionMethodListMapDictionary (void) ;

//--------------------------------- Handle copy
  public: GGS_genericExtensionMethodListMapDictionary (const GGS_genericExtensionMethodListMapDictionary & inSource) ;
  public: GGS_genericExtensionMethodListMapDictionary & operator = (const GGS_genericExtensionMethodListMapDictionary & inSource) ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Insulate
  private: void insulate (LOCATION_ARGS) ;

//--- Object compare
  public: VIRTUAL_IN_DEBUG ComparisonResult objectCompare (const GGS_genericExtensionMethodListMapDictionary & inOperand) const ;

//--- Enumeration
  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericExtensionMethodListMapDictionary init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMapDictionary extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_genericExtensionMethodListMapDictionary class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_lstringlist & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_string constinArgument0,
                                                  class GGS_lstringlist & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMListForKey (class GGS_lstringlist constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_string constinArgument0,
                                                  class GGS_lstringlist & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mListForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_genericExtensionMethodListMapDictionary_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_genericExtensionMethodListMapDictionary ;
 
} ; // End of GGS_genericExtensionMethodListMapDictionary class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_genericExtensionMethodListMapDictionary : public cGenericAbstractEnumerator {
  public: cEnumerator_genericExtensionMethodListMapDictionary (const GGS_genericExtensionMethodListMapDictionary & inEnumeratedObject,
                                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_key (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_genericExtensionMethodListMapDictionary_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @genericExtensionMethodListMapDictionary_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMapDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_lstringlist mProperty_mList ;
  public: inline GGS_lstringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericExtensionMethodListMapDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_genericExtensionMethodListMapDictionary_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_string & in_key,
                                                                  const GGS_lstringlist & in_mList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                      const class GGS_lstringlist & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_genericExtensionMethodListMapDictionary_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                              const class GGS_lstringlist & inOperand1,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_genericExtensionMethodListMapDictionary_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: genericExtensionMethodListMapDictionary.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_genericExtensionMethodListMapDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_genericExtensionMethodListMapDictionary_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @genericExtensionMethodListMap struct
//
//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_genericExtensionMethodListMapDictionary mProperty_dictionary ;
  public: inline GGS_genericExtensionMethodListMapDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericExtensionMethodListMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_genericExtensionMethodListMapDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_genericExtensionMethodListMap (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericExtensionMethodListMap (const GGS_genericExtensionMethodListMapDictionary & in_dictionary) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericExtensionMethodListMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMap extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_genericExtensionMethodListMap class_func_new (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_genericExtensionMethodListMap class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@genericExtensionMethodListMap listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist extensionGetter_listForKey (const class GGS_genericExtensionMethodListMap & inObject,
                                                  const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (class cPtr_semanticDeclarationAST * inObject,
                                                 class GGS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 class GGS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @descendantClassListMapDictionary dict
//
//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_descendantClassListMapDictionary ;

//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMapDictionary : public AC_GALGAS_root {
//--------------------------------- Attributes
  private: cSharedDictRoot_descendantClassListMapDictionary * mSharedDict ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMapDictionary (void) ;

//--------------------------------- Destructor
  public: virtual ~ GGS_descendantClassListMapDictionary (void) ;

//--------------------------------- Handle copy
  public: GGS_descendantClassListMapDictionary (const GGS_descendantClassListMapDictionary & inSource) ;
  public: GGS_descendantClassListMapDictionary & operator = (const GGS_descendantClassListMapDictionary & inSource) ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Insulate
  private: void insulate (LOCATION_ARGS) ;

//--- Object compare
  public: VIRTUAL_IN_DEBUG ComparisonResult objectCompare (const GGS_descendantClassListMapDictionary & inOperand) const ;

//--- Enumeration
  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_descendantClassListMapDictionary init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMapDictionary extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_descendantClassListMapDictionary class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_unifiedTypeMapEntryList & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string constinArgument0,
                                               class GGS_unifiedTypeMapEntryList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_string constinArgument0,
                                                  class GGS_unifiedTypeMapEntryList & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setTypeListForKey (class GGS_unifiedTypeMapEntryList constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_string constinArgument0,
                                                  class GGS_unifiedTypeMapEntryList & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntryList getter_typeListForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_descendantClassListMapDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_descendantClassListMapDictionary_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_descendantClassListMapDictionary ;
 
} ; // End of GGS_descendantClassListMapDictionary class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_descendantClassListMapDictionary : public cGenericAbstractEnumerator {
  public: cEnumerator_descendantClassListMapDictionary (const GGS_descendantClassListMapDictionary & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_key (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntryList current_typeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_descendantClassListMapDictionary_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @descendantClassListMapDictionary_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMapDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_unifiedTypeMapEntryList mProperty_typeList ;
  public: inline GGS_unifiedTypeMapEntryList readProperty_typeList (void) const {
    return mProperty_typeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMapDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setTypeList (const GGS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_descendantClassListMapDictionary_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_descendantClassListMapDictionary_2E_element (const GGS_string & in_key,
                                                           const GGS_unifiedTypeMapEntryList & in_typeList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_descendantClassListMapDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                               const class GGS_unifiedTypeMapEntryList & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMapDictionary_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_descendantClassListMapDictionary_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                       const class GGS_unifiedTypeMapEntryList & inOperand1,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_descendantClassListMapDictionary_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: descendantClassListMapDictionary.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMapDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_descendantClassListMapDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMapDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_descendantClassListMapDictionary_2E_element_3F_ (const GGS_descendantClassListMapDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_descendantClassListMapDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_descendantClassListMapDictionary_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMapDictionary_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_descendantClassListMapDictionary_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @descendantClassListMap struct
//
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_descendantClassListMapDictionary mProperty_dictionary ;
  public: inline GGS_descendantClassListMapDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_descendantClassListMapDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_descendantClassListMap (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_descendantClassListMap (const GGS_descendantClassListMapDictionary & in_dictionary) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_descendantClassListMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_descendantClassListMap class_func_new (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_descendantClassListMap class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@descendantClassListMap listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntryList extensionGetter_listForKey (const class GGS_descendantClassListMap & inObject,
                                                              const class GGS_string & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForGlobalCheckings map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inSource) ;
  public: GGS_extensionMethodMapForGlobalCheckings & operator = (const GGS_extensionMethodMapForGlobalCheckings & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForGlobalCheckings class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionMethodMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_extensionMethodMapForGlobalCheckings add_operation (const GGS_extensionMethodMapForGlobalCheckings & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForGlobalCheckings * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GGS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_extensionMethodMapForGlobalCheckings_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionMethodMapForGlobalCheckings ;
 
} ; // End of GGS_extensionMethodMapForGlobalCheckings class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionMethodMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionMethodMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionMethodMapForGlobalCheckings' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionMethodMapForGlobalCheckings (const GGS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForGlobalCheckings_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForGlobalCheckings_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionMethodMapForGlobalCheckings_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionMethodMapForGlobalCheckings.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMethodMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMethodMapForGlobalCheckings_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForGlobalCheckings map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings & inSource) ;
  public: GGS_extensionSetterMapForGlobalCheckings & operator = (const GGS_extensionSetterMapForGlobalCheckings & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForGlobalCheckings class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionSetterMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_extensionSetterMapForGlobalCheckings add_operation (const GGS_extensionSetterMapForGlobalCheckings & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionSetterMapForGlobalCheckings * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GGS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_extensionSetterMapForGlobalCheckings_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionSetterMapForGlobalCheckings ;
 
} ; // End of GGS_extensionSetterMapForGlobalCheckings class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionSetterMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionSetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionSetterMapForGlobalCheckings' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionSetterMapForGlobalCheckings (const GGS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForGlobalCheckings_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForGlobalCheckings_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionSetterMapForGlobalCheckings_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionSetterMapForGlobalCheckings.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionSetterMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionSetterMapForGlobalCheckings_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForGlobalCheckings map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings & inSource) ;
  public: GGS_extensionGetterMapForGlobalCheckings & operator = (const GGS_extensionGetterMapForGlobalCheckings & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForGlobalCheckings class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionGetterMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_extensionGetterMapForGlobalCheckings add_operation (const GGS_extensionGetterMapForGlobalCheckings & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForGlobalCheckings * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GGS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_extensionGetterMapForGlobalCheckings_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionGetterMapForGlobalCheckings ;
 
} ; // End of GGS_extensionGetterMapForGlobalCheckings class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionGetterMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionGetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionGetterMapForGlobalCheckings' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionGetterMapForGlobalCheckings (const GGS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForGlobalCheckings_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForGlobalCheckings_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionGetterMapForGlobalCheckings_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionGetterMapForGlobalCheckings.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionGetterMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionGetterMapForGlobalCheckings_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3QualifiedFeatureList list
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_QualifiedFeatureList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_galgas_33_QualifiedFeatureList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFeatureName,
                                                 const class GGS_lstring & in_mFeatureValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_QualifiedFeatureList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_QualifiedFeatureList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_QualifiedFeatureList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_galgas_33_QualifiedFeatureList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_galgas_33_QualifiedFeatureList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_galgas_33_QualifiedFeatureList add_operation (const GGS_galgas_33_QualifiedFeatureList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureValueAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFeatureNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFeatureValueAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_QualifiedFeatureList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_QualifiedFeatureList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_QualifiedFeatureList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_galgas_33_QualifiedFeatureList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_galgas_33_QualifiedFeatureList ;
 
} ; // End of GGS_galgas_33_QualifiedFeatureList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_QualifiedFeatureList : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgas_33_QualifiedFeatureList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_QualifiedFeatureList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_QualifiedFeatureList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFeatureName ;
  public: inline GGS_lstring readProperty_mFeatureName (void) const {
    return mProperty_mFeatureName ;
  }

  public: GGS_lstring mProperty_mFeatureValue ;
  public: inline GGS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_QualifiedFeatureList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFeatureName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureName = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_galgas_33_QualifiedFeatureList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_QualifiedFeatureList_2E_element (const GGS_lstring & in_mFeatureName,
                                                         const GGS_lstring & in_mFeatureValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_QualifiedFeatureList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_QualifiedFeatureList_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_QualifiedFeatureList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_QualifiedFeatureList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProjectSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProjectSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProjectSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_folderDirectory_ (const class GGS_string constinArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_folderDirectory_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_folderDirectory_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_ (class GGS_galgas_33_ProjectComponentAST & outArgument0,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_ (class GGS_lbigint & outArgument0,
                                                 class GGS_lbigint & outArgument1,
                                                 class GGS_lbigint & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GGS_lbigint & outArgument0,
                                                                      GGS_lbigint & outArgument1,
                                                                      GGS_lbigint & outArgument2,
                                                                      GGS_lstring & outArgument3,
                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GGS_galgas_33_ProjectComponentAST & outArgument0,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_folderDirectory_i2_ (const GGS_string constinArgument0,
                                                                    GGS_lstringlist & ioArgument1,
                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_folderDirectory_i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_folderDirectory_i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProjectSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_ProjectComponentAST struct
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstringlist mProperty_mProjectSourceList ;
  public: inline GGS_lstringlist readProperty_mProjectSourceList (void) const {
    return mProperty_mProjectSourceList ;
  }

  public: GGS_lbigint mProperty_mMajorVersion ;
  public: inline GGS_lbigint readProperty_mMajorVersion (void) const {
    return mProperty_mMajorVersion ;
  }

  public: GGS_lbigint mProperty_mMinorVersion ;
  public: inline GGS_lbigint readProperty_mMinorVersion (void) const {
    return mProperty_mMinorVersion ;
  }

  public: GGS_lbigint mProperty_mRevisionVersion ;
  public: inline GGS_lbigint readProperty_mRevisionVersion (void) const {
    return mProperty_mRevisionVersion ;
  }

  public: GGS_lstringlist mProperty_mGenerationFeatureList ;
  public: inline GGS_lstringlist readProperty_mGenerationFeatureList (void) const {
    return mProperty_mGenerationFeatureList ;
  }

  public: GGS_galgas_33_QualifiedFeatureList mProperty_mQualifiedFeatureList ;
  public: inline GGS_galgas_33_QualifiedFeatureList readProperty_mQualifiedFeatureList (void) const {
    return mProperty_mQualifiedFeatureList ;
  }

  public: GGS_lstring mProperty_mTargetName ;
  public: inline GGS_lstring readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_location mProperty_mEndOfSourceFile ;
  public: inline GGS_location readProperty_mEndOfSourceFile (void) const {
    return mProperty_mEndOfSourceFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProjectSourceList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectSourceList = inValue ;
  }

  public: inline void setter_setMMajorVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMajorVersion = inValue ;
  }

  public: inline void setter_setMMinorVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinorVersion = inValue ;
  }

  public: inline void setter_setMRevisionVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRevisionVersion = inValue ;
  }

  public: inline void setter_setMGenerationFeatureList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerationFeatureList = inValue ;
  }

  public: inline void setter_setMQualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifiedFeatureList = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMEndOfSourceFile (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfSourceFile = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_ProjectComponentAST (const GGS_lstringlist & in_mProjectSourceList,
                                             const GGS_lbigint & in_mMajorVersion,
                                             const GGS_lbigint & in_mMinorVersion,
                                             const GGS_lbigint & in_mRevisionVersion,
                                             const GGS_lstringlist & in_mGenerationFeatureList,
                                             const GGS_galgas_33_QualifiedFeatureList & in_mQualifiedFeatureList,
                                             const GGS_lstring & in_mTargetName,
                                             const GGS_location & in_mEndOfSourceFile) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_ProjectComponentAST init_21__21__21__21__21__21__21__21_ (const class GGS_lstringlist & inOperand0,
                                                                                         const class GGS_lbigint & inOperand1,
                                                                                         const class GGS_lbigint & inOperand2,
                                                                                         const class GGS_lbigint & inOperand3,
                                                                                         const class GGS_lstringlist & inOperand4,
                                                                                         const class GGS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                                         const class GGS_lstring & inOperand6,
                                                                                         const class GGS_location & inOperand7,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_ProjectComponentAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_ProjectComponentAST class_func_new (const class GGS_lstringlist & inOperand0,
                                                                         const class GGS_lbigint & inOperand1,
                                                                         const class GGS_lbigint & inOperand2,
                                                                         const class GGS_lbigint & inOperand3,
                                                                         const class GGS_lstringlist & inOperand4,
                                                                         const class GGS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                         const class GGS_lstring & inOperand6,
                                                                         const class GGS_location & inOperand7,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_ProjectComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControlAST checkCompatibilityWithLet'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompatibilityWithLet (const class GGS_AccessControlAST inObject,
                                                const class GGS_location constin_inLocation,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@AccessControlAST accessControl' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl extensionGetter_accessControl (const class GGS_AccessControlAST & inObject,
                                                       const class GGS_unifiedTypeMapEntry & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ExpressionSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ExpressionSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_and_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_semanticExpressionAST & outArgument1,
                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_semanticExpressionAST & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                 class GGS_semanticExpressionAST & outArgument1,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__ (class GGS_lstring & outArgument0,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_actualOutputArgumentList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_semanticExpressionAST & outArgument1,
                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_semanticExpressionAST & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticExpressionAST & outArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                               class GGS_semanticExpressionAST & outArgument1,
                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_semanticExpressionAST & outArgument1,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticExpressionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                             GGS_semanticExpressionAST & outArgument1,
                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                     GGS_semanticExpressionAST & outArgument1,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_ (GGS_lstring & outArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_semanticExpressionAST & outArgument1,
                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticExpressionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                GGS_actualOutputArgumentList & outArgument1,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                    GGS_actualOutputArgumentList & outArgument1,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ExpressionSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;


} ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

extern UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ;

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ParameterArgumentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__ (class GGS_lstringlist & outArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                         GGS_formalParameterListAST & outArgument1,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_actualParameterListAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                              GGS_formalInputParameterListAST & outArgument1,
                                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                  GGS_formalInputParameterListAST & outArgument1,
                                                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_ (GGS_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_ (GGS_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_actualInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_semanticInstructionListAST & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_castInstructionBranchListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_semanticExpressionAST & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__ (const class GGS_bool constinArgument0,
                                                                  const class GGS_bool constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  const class GGS_lstring constinArgument3,
                                                                  class GGS_galgasDeclarationAST & ioArgument4,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                              const class GGS_location constinArgument1,
                                                              const class GGS_actualParameterListAST constinArgument2,
                                                              const class GGS_lstring constinArgument3,
                                                              const class GGS_lstring constinArgument4,
                                                              class GGS_semanticInstructionAST & outArgument5,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          const class GGS_location constinArgument1,
                                                                          const class GGS_lstring constinArgument2,
                                                                          const class GGS_lstring constinArgument3,
                                                                          class GGS_semanticInstructionAST & outArgument4,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_ifExpressionList & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS_semanticInstructionAST & outArgument1,
                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS_fixitListAST & outArgument1,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_actualOutputArgumentList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                          const class GGS_bool constinArgument1,
                                                                                          class GGS_semanticInstructionAST & outArgument2,
                                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_semanticInstructionAST & outArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                     const class GGS_bool constinArgument1,
                                                                     class GGS_semanticInstructionAST & outArgument2,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1,
                                              class GGS_switchExtractedValuesListAST & outArgument2,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           const class GGS_location constinArgument1,
                                                           const class GGS_semanticExpressionAST constinArgument2,
                                                           const class GGS_location constinArgument3,
                                                           const class GGS_lstring constinArgument4,
                                                           class GGS_semanticInstructionAST & outArgument5,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                    GGS_semanticInstructionListAST & outArgument1,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_ (const GGS_bool constinArgument0,
                                                                                            const GGS_bool constinArgument1,
                                                                                            const GGS_bool constinArgument2,
                                                                                            const GGS_lstring constinArgument3,
                                                                                            GGS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_ (const GGS_bool constinArgument0,
                                                                                            const GGS_bool constinArgument1,
                                                                                            const GGS_bool constinArgument2,
                                                                                            const GGS_lstring constinArgument3,
                                                                                            GGS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                         GGS_actualInputParameterListAST & outArgument1,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_castInstructionBranchListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_semanticInstructionListAST & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                     const GGS_bool constinArgument1,
                                                                                                                     GGS_semanticInstructionAST & outArgument2,
                                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                  GGS_actualOutputArgumentList & outArgument1,
                                                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS_fixitListAST & outArgument1,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GGS_location constinArgument1,
                                                                                                     const GGS_lstring constinArgument2,
                                                                                                     const GGS_lstring constinArgument3,
                                                                                                     GGS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GGS_location constinArgument1,
                                                                                                     const GGS_lstring constinArgument2,
                                                                                                     const GGS_lstring constinArgument3,
                                                                                                     GGS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                const GGS_bool constinArgument1,
                                                                                                GGS_semanticInstructionAST & outArgument2,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticInstructionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i39_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                      GGS_ifExpressionList & outArgument1,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS__5B_lstring_5D_ & outArgument1,
                                                                         GGS_switchExtractedValuesListAST & outArgument2,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i60_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                      const GGS_location constinArgument1,
                                                                                      const GGS_semanticExpressionAST constinArgument2,
                                                                                      const GGS_location constinArgument3,
                                                                                      const GGS_lstring constinArgument4,
                                                                                      GGS_semanticInstructionAST & outArgument5,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i68_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                      const GGS_location constinArgument1,
                                                                                      const GGS_semanticExpressionAST constinArgument2,
                                                                                      const GGS_location constinArgument3,
                                                                                      const GGS_lstring constinArgument4,
                                                                                      GGS_semanticInstructionAST & outArgument5,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_68 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_69 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_70 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_71 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_72 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_73 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_74 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_75 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_76 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_77 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_78 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_79 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_80 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_81 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_82 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_83 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_84 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_85 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

