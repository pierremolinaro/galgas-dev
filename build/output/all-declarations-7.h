#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand0
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_signatureForGrammarAnalysis & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis add_operation (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_signatureForGrammarAnalysis constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParametersListForKey (class GALGAS_signatureForGrammarAnalysis constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_signatureForGrammarAnalysis & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_mFormalParametersListForKey (const class GALGAS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_signatureForGrammarAnalysis & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                        const GALGAS_string & inKey
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
 
} ; // End of GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_signatureForGrammarAnalysis current_mFormalParametersList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonterminalSymbolLabelMapForGrammarAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_signatureForGrammarAnalysis mProperty_mFormalParametersList ;

//--- Constructor
  public: cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                   const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList
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
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_signatureForGrammarAnalysis mProperty_mFormalParametersList ;
  public: inline GALGAS_signatureForGrammarAnalysis readProperty_mFormalParametersList (void) const {
    return mProperty_mFormalParametersList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParametersList (const GALGAS_signatureForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParametersList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                         const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_signatureForGrammarAnalysis & inOperand1,
                                                                                                      class Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis & operator = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonTerminalSymbolMapForGrammarAnalysis add_operation (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolParametersMapForKey (class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis getter_mNonterminalSymbolParametersMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonTerminalSymbolMapForGrammarAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
 
} ; // End of GALGAS_nonTerminalSymbolMapForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalSymbolMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonTerminalSymbolMapForGrammarAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonTerminalSymbolMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mNonTerminalIndex ;
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;

//--- Constructor
  public: cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                              const GALGAS_uint & in_mNonTerminalIndex,
                                                              const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
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
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mNonTerminalIndex ;
  public: inline GALGAS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_uint & in_mNonTerminalIndex,
                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_uint & inOperand1,
                                                                                                 const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalToAddList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalToAddList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalToAddList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mSyntaxComponentName,
                                                 const class GALGAS_uint & in_mNonTerminalToAddCount
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalToAddList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalToAddList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalToAddList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_uint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalToAddList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonTerminalToAddList add_operation (const GALGAS_nonTerminalToAddList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalToAddCountAtIndex (class GALGAS_uint constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_string constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalToAddCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_nonTerminalToAddList ;
 
} ; // End of GALGAS_nonTerminalToAddList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalToAddList : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalToAddList (const GALGAS_nonTerminalToAddList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalToAddCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalToAddList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalToAddList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalToAddList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mSyntaxComponentName ;
  public: inline GALGAS_string readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GALGAS_uint mProperty_mNonTerminalToAddCount ;
  public: inline GALGAS_uint readProperty_mNonTerminalToAddCount (void) const {
    return mProperty_mNonTerminalToAddCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalToAddList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonTerminalToAddCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalToAddCount = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonTerminalToAddList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalToAddList_2D_element (const GALGAS_string & in_mSyntaxComponentName,
                                                  const GALGAS_uint & in_mNonTerminalToAddCount) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalToAddList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalToAddList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_uint & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalToAddList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonTerminalToAddList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckAssignementList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckAssignementList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckAssignementList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_terminalCheckAssignementList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTypeName,
                                                 const class GALGAS_string & in_mTargetVarCppName,
                                                 const class GALGAS_string & in_mSourceLexicalAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckAssignementList extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckAssignementList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_terminalCheckAssignementList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalCheckAssignementList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalCheckAssignementList add_operation (const GALGAS_terminalCheckAssignementList & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceLexicalAttributeNameAtIndex (class GALGAS_string constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetVarCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceLexicalAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetVarCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_terminalCheckAssignementList ;
 
} ; // End of GALGAS_terminalCheckAssignementList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_terminalCheckAssignementList : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalCheckAssignementList (const GALGAS_terminalCheckAssignementList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetVarCppName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSourceLexicalAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalCheckAssignementList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckAssignementList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckAssignementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTypeName ;
  public: inline GALGAS_string readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GALGAS_string mProperty_mTargetVarCppName ;
  public: inline GALGAS_string readProperty_mTargetVarCppName (void) const {
    return mProperty_mTargetVarCppName ;
  }

  public: GALGAS_string mProperty_mSourceLexicalAttributeName ;
  public: inline GALGAS_string readProperty_mSourceLexicalAttributeName (void) const {
    return mProperty_mSourceLexicalAttributeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_terminalCheckAssignementList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMTargetVarCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetVarCppName = inValue ;
  }

  public: inline void setter_setMSourceLexicalAttributeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceLexicalAttributeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalCheckAssignementList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalCheckAssignementList_2D_element (const GALGAS_string & in_mTypeName,
                                                          const GALGAS_string & in_mTargetVarCppName,
                                                          const GALGAS_string & in_mSourceLexicalAttributeName) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckAssignementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckAssignementList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_string & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckAssignementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalCheckAssignementList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxInstructionForGeneration (const class cPtr_syntaxInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public: cPtr_syntaxInstructionForGeneration (const GALGAS_location & in_mInstructionLocation
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
// Phase 1: @syntaxInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxInstructionForGeneration_2D_weak (const class GALGAS_syntaxInstructionForGeneration & inSource) ;

  public: GALGAS_syntaxInstructionForGeneration_2D_weak & operator = (const class GALGAS_syntaxInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxInstructionForGeneration bang_syntaxInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_filewrapperTemplateListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mFilewrapperTemplateName,
                                                 const class GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                 const class GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperTemplateListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_filewrapperTemplateListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                              const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                              const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_filewrapperTemplateListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                     const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListForGeneration add_operation (const GALGAS_filewrapperTemplateListForGeneration & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_formalInputParameterListForGeneration constinArgument1,
                                               class GALGAS_templateInstructionListForGeneration constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_formalInputParameterListForGeneration constinArgument1,
                                                      class GALGAS_templateInstructionListForGeneration constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                      class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateFormalInputParametersAtIndex (class GALGAS_formalInputParameterListForGeneration constinArgument0,
                                                                                            class GALGAS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateNameAtIndex (class GALGAS_string constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionListForGenerationAtIndex (class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                                                        class GALGAS_uint constinArgument1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                              class GALGAS_templateInstructionListForGeneration & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                             class GALGAS_templateInstructionListForGeneration & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mFilewrapperTemplateFormalInputParametersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperTemplateNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mTemplateInstructionListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_filewrapperTemplateListForGeneration ;
 
} ; // End of GALGAS_filewrapperTemplateListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperTemplateListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperTemplateListForGeneration (const GALGAS_filewrapperTemplateListForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GALGAS_formalInputParameterListForGeneration current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListForGeneration current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_filewrapperTemplateListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mFilewrapperTemplateName ;
  public: inline GALGAS_string readProperty_mFilewrapperTemplateName (void) const {
    return mProperty_mFilewrapperTemplateName ;
  }

  public: GALGAS_formalInputParameterListForGeneration mProperty_mFilewrapperTemplateFormalInputParameters ;
  public: inline GALGAS_formalInputParameterListForGeneration readProperty_mFilewrapperTemplateFormalInputParameters (void) const {
    return mProperty_mFilewrapperTemplateFormalInputParameters ;
  }

  public: GALGAS_templateInstructionListForGeneration mProperty_mTemplateInstructionListForGeneration ;
  public: inline GALGAS_templateInstructionListForGeneration readProperty_mTemplateInstructionListForGeneration (void) const {
    return mProperty_mTemplateInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFilewrapperTemplateName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateName = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateFormalInputParameters (const GALGAS_formalInputParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateFormalInputParameters = inValue ;
  }

  public: inline void setter_setMTemplateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateInstructionListForGeneration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_filewrapperTemplateListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_filewrapperTemplateListForGeneration_2D_element (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                  const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                  const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperTemplateListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                               const class GALGAS_templateInstructionListForGeneration & inOperand2,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                class GALGAS_stringset & io_ioInclusionSet,
                                                class GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                const class GALGAS_string constin_inOutputDirectory,
                                                class GALGAS_stringset & io_ioInclusionSet,
                                                class GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (class cPtr_semanticDeclarationForGeneration * inObject,
                                                       const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       class GALGAS_stringset & io_ioInclusionSet,
                                                       class GALGAS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (class cPtr_semanticDeclarationForGeneration * inObject,
                                              const class GALGAS_string constin_inProductDirectory,
                                              class GALGAS_stringset & io_ioAllProductFileSet,
                                              class GALGAS_stringlist & io_ioCocoaProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (class cPtr_semanticInstructionAST * inObject,
                                                     const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GALGAS_analysisContext constin_inAnalysisContext,
                                                     class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                     class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     class GALGAS_localVarManager & io_ioVariableMap,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_localConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_localConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_bool & in_mNoWarningIfUnused,
                                                 const class GALGAS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantList extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localConstantList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_localConstantList constructor_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_string & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_localConstantList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_localConstantList add_operation (const GALGAS_localConstantList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               class GALGAS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNoWarningIfUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNoWarningIfUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_localConstantList ;
 
} ; // End of GALGAS_localConstantList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_localConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_localConstantList (const GALGAS_localConstantList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mNoWarningIfUnused (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_localConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_bool mProperty_mNoWarningIfUnused ;
  public: inline GALGAS_bool readProperty_mNoWarningIfUnused (void) const {
    return mProperty_mNoWarningIfUnused ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMNoWarningIfUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNoWarningIfUnused = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mType,
                                               const GALGAS_lstring & in_mName,
                                               const GALGAS_bool & in_mNoWarningIfUnused,
                                               const GALGAS_string & in_mCppName) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localConstantList_2D_element constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localConstantList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localInitializedVariableList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localInitializedVariableList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_localInitializedVariableList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localInitializedVariableList extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localInitializedVariableList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_localInitializedVariableList constructor_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_localInitializedVariableList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_localInitializedVariableList add_operation (const GALGAS_localInitializedVariableList & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_localInitializedVariableList ;
 
} ; // End of GALGAS_localInitializedVariableList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_localInitializedVariableList : public cGenericAbstractEnumerator {
  public: cEnumerator_localInitializedVariableList (const GALGAS_localInitializedVariableList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_localInitializedVariableList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localInitializedVariableList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localInitializedVariableList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localInitializedVariableList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_localInitializedVariableList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_localInitializedVariableList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                          const GALGAS_lstring & in_mName,
                                                          const GALGAS_string & in_mCppName) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localInitializedVariableList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localInitializedVariableList_2D_element constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_string & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localInitializedVariableList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localInitializedVariableList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_correspondingEffectiveParameterString (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_string inSyntaxDirectedTranslationResultVarName,
           class GALGAS_stringlist & ioAssignementList,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           class GALGAS_localVarManager & ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           const class GALGAS_string inAccessMethodName,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (class cPtr_semanticDeclarationAST * inObject,
                                           class GALGAS_lstringlist & io_ioUsefulnessRootEntities,
                                           class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const class GALGAS_string constin_inProductDirectory,
                                           const class GALGAS_semanticContext constin_inSemanticContext,
                                           class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                           const class GALGAS_predefinedTypes constin_inPredefinedTypes,
                                           class GALGAS_semanticDeclarationListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyIndexMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyIndexMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyIndexMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_propertyIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_propertyIndexMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_propertyIndexMap (const GALGAS_propertyIndexMap & inSource) ;
  public: GALGAS_propertyIndexMap & operator = (const GALGAS_propertyIndexMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyIndexMap extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyIndexMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_propertyIndexMap constructor_mapWithMapToOverride (const class GALGAS_propertyIndexMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyIndexMap add_operation (const GALGAS_propertyIndexMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeIndexForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mPropertyTypeIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_unifiedTypeMapEntry & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyIndexMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_propertyIndexMap ;
 
} ; // End of GALGAS_propertyIndexMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyIndexMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyIndexMap (const GALGAS_propertyIndexMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyIndexMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyIndexMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyIndexMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyTypeIndex ;

//--- Constructor
  public: cMapElement_propertyIndexMap (const GALGAS_lstring & inKey,
                                        const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeIndex
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
// Phase 1: @propertyIndexMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyTypeIndex ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mPropertyTypeIndex (void) const {
    return mProperty_mPropertyTypeIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyIndexMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMPropertyTypeIndex (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyIndexMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyIndexMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeIndex) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyIndexMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyIndexMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalLabelMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalLabelMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonterminalLabelMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalLabelMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inSource) ;
  public: GALGAS_nonterminalLabelMap & operator = (const GALGAS_nonterminalLabelMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalLabelMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalLabelMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalLabelMap constructor_mapWithMapToOverride (const class GALGAS_nonterminalLabelMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                     const class GALGAS_location & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalLabelMap add_operation (const GALGAS_nonterminalLabelMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterListForGeneration constinArgument1,
                                                  class GALGAS_formalParameterSignature constinArgument2,
                                                  class GALGAS_location constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationForKey (class GALGAS_location constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForGenerationForKey (class GALGAS_formalParameterListForGeneration constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterListForGeneration & outArgument1,
                                                  class GALGAS_formalParameterSignature & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignatureForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalLabelMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterListForGeneration & outOperand1,
                                                    class GALGAS_formalParameterSignature & outOperand2,
                                                    class GALGAS_location & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonterminalLabelMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonterminalLabelMap ;
 
} ; // End of GALGAS_nonterminalLabelMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalLabelMap : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalLabelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonterminalLabelMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalLabelMap : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: GALGAS_formalParameterSignature mProperty_mSignature ;
  public: GALGAS_location mProperty_mEndOfArgumentLocation ;

//--- Constructor
  public: cMapElement_nonterminalLabelMap (const GALGAS_lstring & inKey,
                                           const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                           const GALGAS_formalParameterSignature & in_mSignature,
                                           const GALGAS_location & in_mEndOfArgumentLocation
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
// Phase 1: @nonterminalLabelMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalLabelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GALGAS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GALGAS_formalParameterSignature mProperty_mSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;
  public: inline GALGAS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalLabelMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GALGAS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonterminalLabelMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalLabelMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                 const GALGAS_formalParameterSignature & in_mSignature,
                                                 const GALGAS_location & in_mEndOfArgumentLocation) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalLabelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalLabelMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                              const class GALGAS_formalParameterSignature & inOperand2,
                                                                              const class GALGAS_location & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalLabelMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonterminalLabelMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonterminalMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonterminalMap (const GALGAS_nonterminalMap & inSource) ;
  public: GALGAS_nonterminalMap & operator = (const GALGAS_nonterminalMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalMap constructor_mapWithMapToOverride (const class GALGAS_nonterminalMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonterminalLabelMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalMap add_operation (const GALGAS_nonterminalMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_nonterminalLabelMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelMapForKey (class GALGAS_nonterminalLabelMap constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_nonterminalLabelMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalLabelMap getter_mLabelMapForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_nonterminalLabelMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonterminalMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonterminalMap ;
 
} ; // End of GALGAS_nonterminalMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalMap : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalMap (const GALGAS_nonterminalMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalLabelMap current_mLabelMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonterminalMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalMap : public cMapElement {
//--- Map attributes
  public: GALGAS_nonterminalLabelMap mProperty_mLabelMap ;

//--- Constructor
  public: cMapElement_nonterminalMap (const GALGAS_lstring & inKey,
                                      const GALGAS_nonterminalLabelMap & in_mLabelMap
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
// Phase 1: @nonterminalMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_nonterminalLabelMap mProperty_mLabelMap ;
  public: inline GALGAS_nonterminalLabelMap readProperty_mLabelMap (void) const {
    return mProperty_mLabelMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelMap (const GALGAS_nonterminalLabelMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonterminalMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_nonterminalLabelMap & in_mLabelMap) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_nonterminalLabelMap & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonterminalMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleLabelImplementationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleLabelImplementationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ruleLabelImplementationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabelName,
                                                 const class GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                 const class GALGAS_formalParameterSignature & in_mSignature,
                                                 const class GALGAS_location & in_mEndOfArgumentLocation,
                                                 const class GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleLabelImplementationList extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ruleLabelImplementationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ruleLabelImplementationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                                                     const class GALGAS_location & inOperand3,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ruleLabelImplementationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                     const class GALGAS_location & inOperand3,
                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ruleLabelImplementationList add_operation (const GALGAS_ruleLabelImplementationList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalParameterListForGeneration constinArgument1,
                                               class GALGAS_formalParameterSignature constinArgument2,
                                               class GALGAS_location constinArgument3,
                                               class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListForGeneration constinArgument1,
                                                      class GALGAS_formalParameterSignature constinArgument2,
                                                      class GALGAS_location constinArgument3,
                                                      class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListForGeneration & outArgument1,
                                                 class GALGAS_formalParameterSignature & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListForGeneration & outArgument1,
                                                class GALGAS_formalParameterSignature & outArgument2,
                                                class GALGAS_location & outArgument3,
                                                class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListForGeneration & outArgument1,
                                                      class GALGAS_formalParameterSignature & outArgument2,
                                                      class GALGAS_location & outArgument3,
                                                      class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForGenerationAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                                                class GALGAS_uint constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureAtIndex (class GALGAS_formalParameterSignature constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForGenerationAtIndex (class GALGAS_formalParameterListForGeneration constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListForGeneration & outArgument1,
                                              class GALGAS_formalParameterSignature & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListForGeneration & outArgument1,
                                             class GALGAS_formalParameterSignature & outArgument2,
                                             class GALGAS_location & outArgument3,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignatureForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ruleLabelImplementationList ;
 
} ; // End of GALGAS_ruleLabelImplementationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ruleLabelImplementationList : public cGenericAbstractEnumerator {
  public: cEnumerator_ruleLabelImplementationList (const GALGAS_ruleLabelImplementationList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListForGeneration current_mInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ruleLabelImplementationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleLabelImplementationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleLabelImplementationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabelName ;
  public: inline GALGAS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GALGAS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GALGAS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GALGAS_formalParameterSignature mProperty_mSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;
  public: inline GALGAS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionListForGeneration ;
  public: inline GALGAS_semanticInstructionListForGeneration readProperty_mInstructionListForGeneration (void) const {
    return mProperty_mInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ruleLabelImplementationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GALGAS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionListForGeneration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ruleLabelImplementationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ruleLabelImplementationList_2D_element (const GALGAS_lstring & in_mLabelName,
                                                         const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                         const GALGAS_formalParameterSignature & in_mSignature,
                                                         const GALGAS_location & in_mEndOfArgumentLocation,
                                                         const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleLabelImplementationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ruleLabelImplementationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                      const class GALGAS_formalParameterSignature & inOperand2,
                                                                                      const class GALGAS_location & inOperand3,
                                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand4,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ruleLabelImplementationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ruleLabelImplementationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleDeclarationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ruleDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mNonterminalName,
                                                 const class GALGAS_uint & in_mRuleIndex,
                                                 const class GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleDeclarationList extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ruleDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ruleDeclarationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_uint & inOperand1,
                                                                             const class GALGAS_ruleLabelImplementationList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ruleDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_ruleLabelImplementationList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ruleDeclarationList add_operation (const GALGAS_ruleDeclarationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_uint constinArgument1,
                                               class GALGAS_ruleLabelImplementationList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_ruleLabelImplementationList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_ruleLabelImplementationList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                class GALGAS_ruleLabelImplementationList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_ruleLabelImplementationList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelImplementationListAtIndex (class GALGAS_ruleLabelImplementationList constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleIndexAtIndex (class GALGAS_uint constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_ruleLabelImplementationList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             class GALGAS_ruleLabelImplementationList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_mLabelImplementationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRuleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ruleDeclarationList ;
 
} ; // End of GALGAS_ruleDeclarationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ruleDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_ruleDeclarationList (const GALGAS_ruleDeclarationList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public: class GALGAS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ruleDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleDeclarationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mNonterminalName ;
  public: inline GALGAS_string readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GALGAS_uint mProperty_mRuleIndex ;
  public: inline GALGAS_uint readProperty_mRuleIndex (void) const {
    return mProperty_mRuleIndex ;
  }

  public: GALGAS_ruleLabelImplementationList mProperty_mLabelImplementationList ;
  public: inline GALGAS_ruleLabelImplementationList readProperty_mLabelImplementationList (void) const {
    return mProperty_mLabelImplementationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMRuleIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleIndex = inValue ;
  }

  public: inline void setter_setMLabelImplementationList (const GALGAS_ruleLabelImplementationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelImplementationList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & in_mNonterminalName,
                                                 const GALGAS_uint & in_mRuleIndex,
                                                 const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ruleDeclarationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_uint & inOperand1,
                                                                              const class GALGAS_ruleLabelImplementationList & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ruleDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ruleDeclarationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxDeclarationForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_syntaxDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxDeclarationForGeneration (const class cPtr_syntaxDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GALGAS_string readProperty_mLexiqueName (void) const ;

  public: class GALGAS_nonterminalMap readProperty_mNonterminalDeclarationMap (void) const ;

  public: class GALGAS_ruleDeclarationList readProperty_mRuleDeclarationList (void) const ;

  public: class GALGAS_uint readProperty_mSelectMethodCount (void) const ;

  public: class GALGAS_bool readProperty_mHasIndexing (void) const ;

  public: class GALGAS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxDeclarationForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_nonterminalMap & inOperand2,
                                                                              const class GALGAS_ruleDeclarationList & inOperand3,
                                                                              const class GALGAS_uint & inOperand4,
                                                                              const class GALGAS_bool & inOperand5,
                                                                              const class GALGAS_bool & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxDeclarationForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter hasCppHeaderFile
  public: virtual class GALGAS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter implementationCppFileName
  public: virtual class GALGAS_string getter_implementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mSyntaxComponentName ;
  public: GALGAS_string mProperty_mLexiqueName ;
  public: GALGAS_nonterminalMap mProperty_mNonterminalDeclarationMap ;
  public: GALGAS_ruleDeclarationList mProperty_mRuleDeclarationList ;
  public: GALGAS_uint mProperty_mSelectMethodCount ;
  public: GALGAS_bool mProperty_mHasIndexing ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;

//--- Constructor
  public: cPtr_syntaxDeclarationForGeneration (const GALGAS_string & in_mSyntaxComponentName,
                                               const GALGAS_string & in_mLexiqueName,
                                               const GALGAS_nonterminalMap & in_mNonterminalDeclarationMap,
                                               const GALGAS_ruleDeclarationList & in_mRuleDeclarationList,
                                               const GALGAS_uint & in_mSelectMethodCount,
                                               const GALGAS_bool & in_mHasIndexing,
                                               const GALGAS_bool & in_mHasTranslateFeature
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
// Phase 1: @syntaxDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syntaxDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxDeclarationForGeneration_2D_weak (const class GALGAS_syntaxDeclarationForGeneration & inSource) ;

  public: GALGAS_syntaxDeclarationForGeneration_2D_weak & operator = (const class GALGAS_syntaxDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxDeclarationForGeneration bang_syntaxDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (class cPtr_syntaxInstructionAST * inObject,
                                                   const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                   class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const class GALGAS_analysisContext constin_inAnalysisContext,
                                                   class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                   const class GALGAS_bool constin_inHasTranslateFeature,
                                                   const class GALGAS_terminalMap constin_inTerminalMap,
                                                   const class GALGAS_string constin_inLexiqueName,
                                                   const class GALGAS_nonterminalMap constin_inNonterminalMap,
                                                   const class GALGAS_string constin_inComponentName,
                                                   const class GALGAS_stringset constin_inIndexNameSet,
                                                   class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   class GALGAS_localVarManager & io_ioVariableMap,
                                                   class GALGAS_uint & io_ioSelectMethodCount,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (class cPtr_abstractInputParameter * inObject,
                                                const class GALGAS_analysisContext constin_inAnalysisContext,
                                                class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                const class GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const class GALGAS_string constin_inLexicalAttributeName,
                                                class GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                class GALGAS_localVarManager & io_ioVariableMap,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const class GALGAS_analysisContext constin_inAnalysisContext,
                                     class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                     const class GALGAS_bool constin_inHasTranslateFeature,
                                     class GALGAS_localVarManager & io_ioVariableMap,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const class GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const class GALGAS_string constin_inAccessMethodName,
                                       class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                       class GALGAS_string & io_ioGeneratedCode,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uselessEntityLocationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_uselessEntityLocationMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_uselessEntityLocationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_uselessEntityLocationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inSource) ;
  public: GALGAS_uselessEntityLocationMap & operator = (const GALGAS_uselessEntityLocationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uselessEntityLocationMap extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_uselessEntityLocationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_uselessEntityLocationMap constructor_mapWithMapToOverride (const class GALGAS_uselessEntityLocationMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_location & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_uselessEntityLocationMap add_operation (const GALGAS_uselessEntityLocationMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_location constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocationForKey (class GALGAS_location constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocationForKey (const class GALGAS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uselessEntityLocationMap getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_location & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_uselessEntityLocationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_uselessEntityLocationMap ;
 
} ; // End of GALGAS_uselessEntityLocationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_uselessEntityLocationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_uselessEntityLocationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@uselessEntityLocationMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_uselessEntityLocationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cMapElement_uselessEntityLocationMap (const GALGAS_lstring & inKey,
                                                const GALGAS_location & in_mLocation
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
// Phase 1: @uselessEntityLocationMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uselessEntityLocationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_location mProperty_mLocation ;
  public: inline GALGAS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_uselessEntityLocationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_uselessEntityLocationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_uselessEntityLocationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_location & in_mLocation) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uselessEntityLocationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_uselessEntityLocationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_uselessEntityLocationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uselessEntityLocationMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableAttributes boolset
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVariableAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GALGAS_localVariableAttributes (void) ;

//--------------------------------- Private constructor
  private: GALGAS_localVariableAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableAttributes extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableAttributes constructor_acceptInitializedStateAsFinalState (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes constructor_acceptReadStateAsFinalState (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes constructor_all (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes constructor_none (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes constructor_rejectDeclaredStateAsFinalState (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes constructor_rejectWriteInInitializedAndReadStates (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes constructor_suggestDeclareUnusedParameterAsUnused (LOCATION_ARGS) ;

  public: static class GALGAS_localVariableAttributes constructor_warnsOnAnyAcces (LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_and (const GALGAS_localVariableAttributes & inOperand
                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_or (const GALGAS_localVariableAttributes & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_xor (const GALGAS_localVariableAttributes & inOperand
                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GALGAS_localVariableAttributes substract_operation (const GALGAS_localVariableAttributes & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableAttributes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_acceptInitializedStateAsFinalState (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_acceptReadStateAsFinalState (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_all (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_none (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_rejectDeclaredStateAsFinalState (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_rejectWriteInInitializedAndReadStates (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_suggestDeclareUnusedParameterAsUnused (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_warnsOnAnyAcces (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVariableAttributes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableAttributes ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @localVarValuation enum                                          *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarValuation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_localVarValuation (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_invalid,
    kEnum_declared,
    kEnum_initialized,
    kEnum_read,
    kEnum_mutated
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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVarValuation extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVarValuation constructor_declared (const class GALGAS_bool & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation constructor_initialized (LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation constructor_invalid (LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation constructor_mutated (LOCATION_ARGS) ;

  public: static class GALGAS_localVarValuation constructor_read (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVarValuation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_declared (class GALGAS_bool & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDeclared (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInitialized (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInvalid (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMutated (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRead (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_declared (class GALGAS_bool & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_initialized () const ;

  public: VIRTUAL_IN_DEBUG bool optional_invalid () const ;

  public: VIRTUAL_IN_DEBUG bool optional_mutated () const ;

  public: VIRTUAL_IN_DEBUG bool optional_read () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVarValuation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @localVarValuation enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_localVarValuation_declared : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_localVarValuation_declared (const GALGAS_bool inAssociatedValue0
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_localVarValuation_declared (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@scopeLocalVarMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_scopeLocalVarMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: GALGAS_string mProperty_mCppName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GALGAS_localVariableAttributes mProperty_mAttributes ;
  public: GALGAS_localVarValuation mProperty_mState ;

//--- Constructor
  public: cMapElement_scopeLocalVarMap (const GALGAS_lstring & inKey,
                                        const GALGAS_unifiedTypeMapEntry & in_mType,
                                        const GALGAS_string & in_mCppName,
                                        const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                        const GALGAS_localVariableAttributes & in_mAttributes,
                                        const GALGAS_localVarValuation & in_mState
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
// Phase 1: @scopeLocalVarMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_scopeLocalVarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: inline GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const {
    return mProperty_mNameForCheckingFormalParameterUsing ;
  }

  public: GALGAS_localVariableAttributes mProperty_mAttributes ;
  public: inline GALGAS_localVariableAttributes readProperty_mAttributes (void) const {
    return mProperty_mAttributes ;
  }

  public: GALGAS_localVarValuation mProperty_mState ;
  public: inline GALGAS_localVarValuation readProperty_mState (void) const {
    return mProperty_mState ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_scopeLocalVarMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

  public: inline void setter_setMNameForCheckingFormalParameterUsing (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }

  public: inline void setter_setMAttributes (const GALGAS_localVariableAttributes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributes = inValue ;
  }

  public: inline void setter_setMState (const GALGAS_localVarValuation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mState = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_scopeLocalVarMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_scopeLocalVarMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_unifiedTypeMapEntry & in_mType,
                                              const GALGAS_string & in_mCppName,
                                              const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                              const GALGAS_localVariableAttributes & in_mAttributes,
                                              const GALGAS_localVarValuation & in_mState) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_scopeLocalVarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_scopeLocalVarMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           const class GALGAS_localVariableAttributes & inOperand4,
                                                                           const class GALGAS_localVarValuation & inOperand5,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_scopeLocalVarMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_scopeLocalVarMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarMapListForLLVM_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarMapListForLLVM_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_scopeLocalVarMap mProperty_mMap ;
  public: inline GALGAS_scopeLocalVarMap readProperty_mMap (void) const {
    return mProperty_mMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localVarMapListForLLVM_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMap (const GALGAS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_localVarMapListForLLVM_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_localVarMapListForLLVM_2D_element (const GALGAS_scopeLocalVarMap & in_mMap) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVarMapListForLLVM_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVarMapListForLLVM_2D_element constructor_new (const class GALGAS_scopeLocalVarMap & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVarMapListForLLVM_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVarMapListForLLVM_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @overrideKind enum                                             *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_overrideKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_selectOverrideFirstBranch,
    kEnum_selectOverrideNextBranches,
    kEnum_repeatOverride
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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideKind extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overrideKind constructor_repeatOverride (LOCATION_ARGS) ;

  public: static class GALGAS_overrideKind constructor_selectOverrideFirstBranch (const class GALGAS_currentVarManager & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_overrideKind constructor_selectOverrideNextBranches (const class GALGAS_currentVarManager & inOperand0,
                                                                                   const class GALGAS_currentVarManager & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overrideKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_selectOverrideFirstBranch (class GALGAS_currentVarManager & outArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selectOverrideNextBranches (class GALGAS_currentVarManager & outArgument0,
                                                                   class GALGAS_currentVarManager & outArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRepeatOverride (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectOverrideNextBranches (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_repeatOverride () const ;

  public: VIRTUAL_IN_DEBUG bool optional_selectOverrideFirstBranch (class GALGAS_currentVarManager & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selectOverrideNextBranches (class GALGAS_currentVarManager & outOperand0,
                                                                     class GALGAS_currentVarManager & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overrideKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @overrideKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch : public cEnumAssociatedValues {
  public: const GALGAS_currentVarManager mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch (const GALGAS_currentVarManager inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_overrideKind_selectOverrideNextBranches : public cEnumAssociatedValues {
  public: const GALGAS_currentVarManager mAssociatedValue0 ;
  public: const GALGAS_currentVarManager mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_overrideKind_selectOverrideNextBranches (const GALGAS_currentVarManager inAssociatedValue0,
                                                                         const GALGAS_currentVarManager inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_overrideKind_selectOverrideNextBranches (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedOverrideList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_openedOverrideList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_overrideKind mProperty_mOverrideKind ;
  public: inline GALGAS_overrideKind readProperty_mOverrideKind (void) const {
    return mProperty_mOverrideKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_openedOverrideList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOverrideKind (const GALGAS_overrideKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverrideKind = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_openedOverrideList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_openedOverrideList_2D_element (const GALGAS_overrideKind & in_mOverrideKind) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_openedOverrideList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_openedOverrideList_2D_element constructor_new (const class GALGAS_overrideKind & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_openedOverrideList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_openedOverrideList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GALGAS_currentVarManager & ioObject,
                                    const class GALGAS_lstring constin_inVarName,
                                    class GALGAS_unifiedTypeMapEntry & out_outType,
                                    class GALGAS_string & out_outCppName,
                                    class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GALGAS_localVarMapListForLLVM & ioObject,
                                    const class GALGAS_lstring constin_inVarName,
                                    const class GALGAS_uint constin_inIndex,
                                    class GALGAS_unifiedTypeMapEntry & out_outType,
                                    class GALGAS_string & out_outCppName,
                                    class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GALGAS_currentVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const class GALGAS_localVarValuation inObject,
                                      const class GALGAS_lstring constin_inVarName,
                                      const class GALGAS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GALGAS_currentVarManager & ioObject,
                                           const class GALGAS_lstring constin_inVarName,
                                           class GALGAS_unifiedTypeMapEntry & out_outType,
                                           class GALGAS_string & out_outCppName,
                                           class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (class GALGAS_localVarMapListForLLVM & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          const class GALGAS_uint constin_inIndex,
                                          class GALGAS_unifiedTypeMapEntry & out_outType,
                                          class GALGAS_string & out_outCppName,
                                          class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation writeTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeTransition (class GALGAS_localVarValuation & ioObject,
                                      const class GALGAS_lstring constin_inVarName,
                                      const class GALGAS_bool constin_inOverridenMap,
                                      const class GALGAS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GALGAS_currentVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class GALGAS_unifiedTypeMapEntry & out_outType,
                                          class GALGAS_string & out_outCppName,
                                          class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GALGAS_localVarMapListForLLVM & ioObject,
                                 const class GALGAS_lstring constin_inVarName,
                                 const class GALGAS_uint constin_inIndex,
                                 class GALGAS_unifiedTypeMapEntry & out_outType,
                                 class GALGAS_string & out_outCppName,
                                 class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (class GALGAS_localVarValuation & ioObject,
                                     const class GALGAS_lstring constin_inVarName,
                                     const class GALGAS_localVariableAttributes constin_inAttributes,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GALGAS_currentVarManager & ioObject,
                                               const class GALGAS_lstring constin_inVarName,
                                               class GALGAS_unifiedTypeMapEntry & out_outType,
                                               class GALGAS_string & out_outCppName,
                                               class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarMapListForLLVM readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (class GALGAS_localVarMapListForLLVM & ioObject,
                                      const class GALGAS_lstring constin_inVarName,
                                      const class GALGAS_uint constin_inIndex,
                                      class GALGAS_unifiedTypeMapEntry & out_outType,
                                      class GALGAS_string & out_outCppName,
                                      class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarValuation readWriteTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteTransition (class GALGAS_localVarValuation & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          const class GALGAS_bool constin_inOverridenMap,
                                          const class GALGAS_localVariableAttributes constin_inAttributes,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (class GALGAS_currentVarManager & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (class GALGAS_currentVarManager & ioObject,
                                 const class GALGAS_location constin_inErrorLocation,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const class GALGAS_scopeLocalVarMap inObject,
                                       const class GALGAS_location constin_inErrorLocation,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GALGAS_currentVarManager & ioObject,
                                const class GALGAS_lstring constin_inVarName,
                                const class GALGAS_unifiedTypeMapEntry constin_inType,
                                const class GALGAS_string constin_inCppName,
                                const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                const class GALGAS_localVariableAttributes constin_inAttributes,
                                const class GALGAS_localVarValuation constin_inState,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GALGAS_currentVarManager inObject,
                                           const class GALGAS_location constin_inErrorLocation,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const class GALGAS_localVarValuation inObject,
                                           const class GALGAS_localVarValuation constin_inOther,
                                           class GALGAS_localVarValuation & out_outResult,
                                           class GALGAS_string & io_ioErrorMessage,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (class GALGAS_scopeLocalVarMap & ioObject,
                                     const class GALGAS_scopeLocalVarMap constin_inOtherMap,
                                     class GALGAS_string & io_ioErrorMessage,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (class GALGAS_currentVarManager & ioObject,
                                         const class GALGAS_currentVarManager constin_inOtherManager,
                                         const class GALGAS_location constin_inErrorLocation,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

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
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GALGAS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GALGAS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_unifiedTypeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_unifiedTypeMapElementClass & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_unifiedTypeMapElementClass & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GALGAS_unifiedTypeMap & ioObject,
                                const class GALGAS_lstring constin_inLKey,
                                class GALGAS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GALGAS_unifiedTypeMap & ioObject,
                                          const class GALGAS_string constin_inKey,
                                          class GALGAS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeMapEntryForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const class GALGAS_unifiedTypeMap & inObject,
                                                                      const class GALGAS_lstring & constinArgument0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GALGAS_unifiedTypeMap & ioObject,
                                 const class GALGAS_lstring constin_inTypeName,
                                 const class GALGAS_unifiedTypeDefinition constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GALGAS_unifiedTypeMap & inObject,
                                                                   const class GALGAS_lstring & constinArgument0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry definition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition extensionGetter_definition (const class GALGAS_unifiedTypeMapEntry & inObject,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry identifierRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_identifierRepresentation (const class GALGAS_unifiedTypeMapEntry & inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_typeName (const class GALGAS_unifiedTypeMapEntry & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry extensionGetter_baseType (const class GALGAS_unifiedTypeMapEntry & inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const class GALGAS_unifiedTypeMapEntry inObject,
                                        class GALGAS_stringset & io_ioInclusions,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GALGAS_unifiedTypeMapEntry inObject,
                                            class GALGAS_stringset & io_ioInclusions,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ifExpressionAST (const class cPtr_ifExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mIfExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mThenExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mElseExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_semanticExpressionAST & inOperand2,
                                                               const class GALGAS_semanticExpressionAST & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ifExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mIfExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mThenExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mElseExpression ;

//--- Constructor
  public: cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                const GALGAS_semanticExpressionAST & in_mIfExpression,
                                const GALGAS_semanticExpressionAST & in_mThenExpression,
                                const GALGAS_semanticExpressionAST & in_mElseExpression
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
// Phase 1: @ifExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionAST_2D_weak (const class GALGAS_ifExpressionAST & inSource) ;

  public: GALGAS_ifExpressionAST_2D_weak & operator = (const class GALGAS_ifExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionAST bang_ifExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ifExpressionForGeneration (const class cPtr_ifExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mIfExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mThenExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mElseExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ifExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mIfExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mThenExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mElseExpression ;

//--- Constructor
  public: cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                          const GALGAS_location & in_mLocation,
                                          const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                          const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                          const GALGAS_semanticExpressionForGeneration & in_mElseExpression
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
// Phase 1: @ifExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionForGeneration_2D_weak (const class GALGAS_ifExpressionForGeneration & inSource) ;

  public: GALGAS_ifExpressionForGeneration_2D_weak & operator = (const class GALGAS_ifExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionForGeneration bang_ifExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryPlusExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryPlusExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_unaryPlusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unaryPlusExpressionAST (const class cPtr_unaryPlusExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryPlusExpressionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryPlusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryPlusExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryPlusExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryPlusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryPlusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @unaryPlusExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryPlusExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryPlusExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryPlusExpressionAST_2D_weak (const class GALGAS_unaryPlusExpressionAST & inSource) ;

  public: GALGAS_unaryPlusExpressionAST_2D_weak & operator = (const class GALGAS_unaryPlusExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryPlusExpressionAST bang_unaryPlusExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryPlusExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryPlusExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryPlusExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unaryMinusExpressionAST (const class cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryMinusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @unaryMinusExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryMinusExpressionAST_2D_weak (const class GALGAS_unaryMinusExpressionAST & inSource) ;

  public: GALGAS_unaryMinusExpressionAST_2D_weak & operator = (const class GALGAS_unaryMinusExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryMinusExpressionAST bang_unaryMinusExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryMinusExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unaryMinusExpressionForGeneration (const class cPtr_unaryMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryMinusExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
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
// Phase 1: @unaryMinusExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak (const class GALGAS_unaryMinusExpressionForGeneration & inSource) ;

  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak & operator = (const class GALGAS_unaryMinusExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryMinusExpressionForGeneration bang_unaryMinusExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryMinusExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpressionAST (const class cPtr_varInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_varInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public: cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
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
// Phase 1: @varInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpressionAST_2D_weak (const class GALGAS_varInExpressionAST & inSource) ;

  public: GALGAS_varInExpressionAST_2D_weak & operator = (const class GALGAS_varInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpressionAST bang_varInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpressionForGeneration (const class cPtr_varInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mCppVarName (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_string & inOperand2,
                                                                            const class GALGAS_string & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_varInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mCppVarName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;

//--- Constructor
  public: cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                             const GALGAS_location & in_mLocation,
                                             const GALGAS_string & in_mCppVarName,
                                             const GALGAS_string & in_mNameForCheckingFormalParameterUsing
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
// Phase 1: @varInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpressionForGeneration_2D_weak (const class GALGAS_varInExpressionForGeneration & inSource) ;

  public: GALGAS_varInExpressionForGeneration_2D_weak & operator = (const class GALGAS_varInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpressionForGeneration bang_varInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualOutputExpressionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualOutputExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: inline GALGAS_lstring readProperty_mActualSelector (void) const {
    return mProperty_mActualSelector ;
  }

  public: GALGAS_semanticExpressionAST mProperty_mExpression ;
  public: inline GALGAS_semanticExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mEndOfExpressionLocation ;
  public: inline GALGAS_location readProperty_mEndOfExpressionLocation (void) const {
    return mProperty_mEndOfExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_actualOutputExpressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpressionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_actualOutputExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_actualOutputExpressionList_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                        const GALGAS_semanticExpressionAST & in_mExpression,
                                                        const GALGAS_location & in_mEndOfExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualOutputExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actualOutputExpressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                     const class GALGAS_location & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actualOutputExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actualOutputExpressionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputExpressionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputExpressionList enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const class GALGAS_actualOutputExpressionList inObject,
                                             class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_trueExpressionAST (const class cPtr_trueExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_trueExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_trueExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_trueExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
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
// Phase 1: @trueExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_trueExpressionAST_2D_weak (const class GALGAS_trueExpressionAST & inSource) ;

  public: GALGAS_trueExpressionAST_2D_weak & operator = (const class GALGAS_trueExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_trueExpressionAST bang_trueExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_trueExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_trueExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_falseExpressionAST (const class cPtr_falseExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_falseExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_falseExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_falseExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
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
// Phase 1: @falseExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_falseExpressionAST_2D_weak (const class GALGAS_falseExpressionAST & inSource) ;

  public: GALGAS_falseExpressionAST_2D_weak & operator = (const class GALGAS_falseExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_falseExpressionAST bang_falseExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_falseExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_falseExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_trueExpressionForGeneration (const class cPtr_trueExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_trueExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_location & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_trueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_trueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter isTrueExpression
  public: virtual class GALGAS_bool getter_isTrueExpression (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                            const GALGAS_location & in_mLocation
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
// Phase 1: @trueExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_trueExpressionForGeneration_2D_weak (const class GALGAS_trueExpressionForGeneration & inSource) ;

  public: GALGAS_trueExpressionForGeneration_2D_weak & operator = (const class GALGAS_trueExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_trueExpressionForGeneration bang_trueExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_trueExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_trueExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_falseExpressionForGeneration (const class cPtr_falseExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_falseExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_falseExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_falseExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_falseExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                             const GALGAS_location & in_mLocation
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
// Phase 1: @falseExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_falseExpressionForGeneration_2D_weak (const class GALGAS_falseExpressionForGeneration & inSource) ;

  public: GALGAS_falseExpressionForGeneration_2D_weak & operator = (const class GALGAS_falseExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_falseExpressionForGeneration bang_falseExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_falseExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_falseExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringExpressionAST (const class cPtr_literalStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_stringlist readProperty_mStringSequence (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_stringlist & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_stringlist mProperty_mStringSequence ;

//--- Constructor
  public: cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                           const GALGAS_stringlist & in_mStringSequence
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
// Phase 1: @literalStringExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringExpressionAST_2D_weak (const class GALGAS_literalStringExpressionAST & inSource) ;

  public: GALGAS_literalStringExpressionAST_2D_weak & operator = (const class GALGAS_literalStringExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringExpressionAST bang_literalStringExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringExpressionForGeneration (const class cPtr_literalStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mString (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_string & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mString ;

//--- Constructor
  public: cPtr_literalStringExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_string & in_mString
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
// Phase 1: @literalStringExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringExpressionForGeneration_2D_weak (const class GALGAS_literalStringExpressionForGeneration & inSource) ;

  public: GALGAS_literalStringExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalStringExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringExpressionForGeneration bang_literalStringExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalCharExpressionAST (const class cPtr_literalCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalCharExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
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
// Phase 1: @literalCharExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalCharExpressionAST_2D_weak (const class GALGAS_literalCharExpressionAST & inSource) ;

  public: GALGAS_literalCharExpressionAST_2D_weak & operator = (const class GALGAS_literalCharExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalCharExpressionAST bang_literalCharExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalCharExpressionForGeneration (const class cPtr_literalCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_char readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_char & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalCharExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_char mProperty_mCharacter ;

//--- Constructor
  public: cPtr_literalCharExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_char & in_mCharacter
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
// Phase 1: @literalCharExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalCharExpressionForGeneration_2D_weak (const class GALGAS_literalCharExpressionForGeneration & inSource) ;

  public: GALGAS_literalCharExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalCharExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalCharExpressionForGeneration bang_literalCharExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalDoubleExpressionAST (const class cPtr_literalDoubleExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_ldouble readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionAST constructor_new (const class GALGAS_ldouble & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalDoubleExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalDoubleExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ldouble mProperty_mValue ;

//--- Constructor
  public: cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
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
// Phase 1: @literalDoubleExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalDoubleExpressionAST_2D_weak (const class GALGAS_literalDoubleExpressionAST & inSource) ;

  public: GALGAS_literalDoubleExpressionAST_2D_weak & operator = (const class GALGAS_literalDoubleExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalDoubleExpressionAST bang_literalDoubleExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalDoubleExpressionForGeneration (const class cPtr_literalDoubleExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_double readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_double & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalDoubleExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalDoubleExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_string & outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_double mProperty_mValue ;

//--- Constructor
  public: cPtr_literalDoubleExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_double & in_mValue
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
// Phase 1: @literalDoubleExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak (const class GALGAS_literalDoubleExpressionForGeneration & inSource) ;

  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalDoubleExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalDoubleExpressionForGeneration bang_literalDoubleExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalBigIntExpressionAST (const class cPtr_literalBigIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbigint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalBigIntExpressionAST constructor_new (const class GALGAS_lbigint & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalBigIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBigIntExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalBigIntExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalBigIntExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry inType,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lbigint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalBigIntExpressionAST (const GALGAS_lbigint & in_mValue
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
// Phase 1: @literalBigIntExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalBigIntExpressionAST_2D_weak (const class GALGAS_literalBigIntExpressionAST & inSource) ;

  public: GALGAS_literalBigIntExpressionAST_2D_weak & operator = (const class GALGAS_literalBigIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalBigIntExpressionAST bang_literalBigIntExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalBigIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalBigIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBigIntExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2D_weak ;

