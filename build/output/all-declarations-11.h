#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
 
} ; // End of GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@unusedNonTerminalSymbolMapForGrammarAnalysis' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mNonTerminalIndex ;

//--- Constructor
  public: cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                    const GALGAS_uint & in_mNonTerminalIndex
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
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mNonTerminalIndex ;
  public: inline GALGAS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                          const GALGAS_uint & in_mNonTerminalIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_uint & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constructor_sortedListWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                             const class GALGAS_uint & inOperand1,
                                                                                                             const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
 
} ; // End of GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mNonTerminalSymbol ;
  public: inline GALGAS_lstring readProperty_mNonTerminalSymbol (void) const {
    return mProperty_mNonTerminalSymbol ;
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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonTerminalSymbol (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalSymbol = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                           const GALGAS_uint & in_mNonTerminalIndex,
                                                                           const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                        const class GALGAS_uint & inOperand1,
                                                                                                        const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_terminalInstructionForGrammarAnalysis (const class cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GALGAS_uint readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSymbolIndex (class GALGAS_uint inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSymbolName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis (const class cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mNonterminalSymbolName (void) const ;

  public: class GALGAS_uint readProperty_mNonterminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_uint & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolIndex (class GALGAS_uint inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak (const class GALGAS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis bang_nonTerminalInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchListForGrammarAnalysis list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_branchListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_branchListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_branchListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_branchListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_branchListForGrammarAnalysis constructor_listWithValue (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_branchListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_branchListForGrammarAnalysis add_operation (const GALGAS_branchListForGrammarAnalysis & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_branchListForGrammarAnalysis_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis getter_mSyntaxInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_branchListForGrammarAnalysis ;
 
} ; // End of GALGAS_branchListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_branchListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_branchListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_syntaxInstructionListForGrammarAnalysis mProperty_mSyntaxInstructionList ;
  public: inline GALGAS_syntaxInstructionListForGrammarAnalysis readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_branchListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_branchListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GALGAS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_branchListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_branchListForGrammarAnalysis_2D_element (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_branchListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_branchListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_branchListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selectInstructionForGrammarAnalysis (const class cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_branchListForGrammarAnalysis readProperty_mSelectBranchList (void) const ;

  public: class GALGAS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_branchListForGrammarAnalysis & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAddedNonTerminalSymbolIndex (class GALGAS_uint inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectBranchList (class GALGAS_branchListForGrammarAnalysis inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;

#include "separateHeaderFor_selectInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selectInstructionForGrammarAnalysis_2D_weak (const class GALGAS_selectInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_selectInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_selectInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selectInstructionForGrammarAnalysis bang_selectInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_repeatInstructionForGrammarAnalysis (const class cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_branchListForGrammarAnalysis readProperty_mRepeatBranchList (void) const ;

  public: class GALGAS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_branchListForGrammarAnalysis & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAddedNonTerminalSymbolIndex (class GALGAS_uint inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRepeatBranchList (class GALGAS_branchListForGrammarAnalysis inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;

#include "separateHeaderFor_repeatInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (const class GALGAS_repeatInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_repeatInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_repeatInstructionForGrammarAnalysis bang_repeatInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentListForGrammarAnalysis list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxComponentListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                 const class GALGAS_lstring & in_mSyntaxComponentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxComponentListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxComponentListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxComponentListForGrammarAnalysis constructor_listWithValue (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxComponentListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxComponentListForGrammarAnalysis add_operation (const GALGAS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_productionRuleListForGrammarAnalysis constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductionRulesListAtIndex (class GALGAS_productionRuleListForGrammarAnalysis constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis getter_mProductionRulesListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxComponentListForGrammarAnalysis ;
 
} ; // End of GALGAS_syntaxComponentListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_syntaxComponentListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_productionRuleListForGrammarAnalysis mProperty_mProductionRulesList ;
  public: inline GALGAS_productionRuleListForGrammarAnalysis readProperty_mProductionRulesList (void) const {
    return mProperty_mProductionRulesList ;
  }

  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: inline GALGAS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxComponentListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProductionRulesList (const GALGAS_productionRuleListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionRulesList = inValue ;
  }

  public: inline void setter_setMSyntaxComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                   const GALGAS_lstring & in_mSyntaxComponentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxComponentListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxComponentListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalSymbolsMapForGrammarAnalysis map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_terminalSymbolsMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalSymbolsMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis & operator = (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalSymbolsMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalSymbolsMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_terminalSymbolsMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalSymbolsMapForGrammarAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_terminalSymbolsMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_terminalSymbolsMapForGrammarAnalysis ;
 
} ; // End of GALGAS_terminalSymbolsMapForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_terminalSymbolsMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@terminalSymbolsMapForGrammarAnalysis' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_terminalSymbolsMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mTerminalIndex ;

//--- Constructor
  public: cMapElement_terminalSymbolsMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mTerminalIndex
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
// Phase 1: @terminalSymbolsMapForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mTerminalIndex ;
  public: inline GALGAS_uint readProperty_mTerminalIndex (void) const {
    return mProperty_mTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                  const GALGAS_uint & in_mTerminalIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstruction (const class cPtr_syntaxInstructionAST * inObject,
                                               GALGAS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                               GALGAS_uint & io_ioAddedNonTerminalIndex,
                                               GALGAS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const class GALGAS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   class GALGAS_rowList & io_ioRowList,
                                                   const class GALGAS_uint constin_inRow,
                                                   class GALGAS_uint & io_ioColumn,
                                                   class GALGAS_string & io_ioCurrentNode,
                                                   class GALGAS_string & io_ioArrowShape,
                                                   class GALGAS_string & io_ioArrows,
                                                   class GALGAS_uint & io_ioMaxUsedRowIndex,
                                                   const class GALGAS_bool constin_inDebug,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @rowList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_rowList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_rowList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_rowList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS__32_stringlist & in_columns
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_rowList extractObject (const GALGAS_object & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_rowList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_rowList constructor_listWithValue (const class GALGAS__32_stringlist & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_rowList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS__32_stringlist & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_rowList add_operation (const GALGAS_rowList & inOperand,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_rowList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS__32_stringlist & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS__32_stringlist & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS__32_stringlist & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setColumnsAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                          class GALGAS_uint constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS__32_stringlist & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS__32_stringlist & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_columnsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_rowList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_rowList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_rowList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_rowList ;
 
} ; // End of GALGAS_rowList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_rowList : public cGenericAbstractEnumerator {
  public: cEnumerator_rowList (const GALGAS_rowList & inEnumeratedObject,
                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS__32_stringlist current_columns (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_rowList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       GALGAS_rowList & io_ioRowList,
                                                       const GALGAS_uint constin_inRow,
                                                       GALGAS_uint & io_ioColumn,
                                                       GALGAS_string & io_ioCurrentNode,
                                                       GALGAS_string & io_ioArrowShape,
                                                       GALGAS_string & io_ioArrows,
                                                       GALGAS_uint & io_ioMaxUsedRowIndex,
                                                       const GALGAS_bool constin_inDebug,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@rowList appendRow'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (class GALGAS_rowList & ioObject,
                                const class GALGAS_string constin_inNodeDefinition,
                                const class GALGAS_uint constin_inRow,
                                const class GALGAS_uint constin_inColumn,
                                class GALGAS_string & out_outNodeName,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @rowList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_rowList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS__32_stringlist mProperty_columns ;
  public: inline GALGAS__32_stringlist readProperty_columns (void) const {
    return mProperty_columns ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_rowList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_rowList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setColumns (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_columns = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_rowList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_rowList_2D_element (const GALGAS__32_stringlist & in_columns) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_rowList_2D_element extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_rowList_2D_element constructor_new (const class GALGAS__32_stringlist & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_rowList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rowList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@syntaxInstructionListForGrammarAnalysis displayVertically' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_displayVertically (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractSyntaxInstructionForGrammarAnalysis isLinear'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isLinear (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_programListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_programListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programListForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_programListForGeneration constructor_listWithValue (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_programListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_programListForGeneration add_operation (const GALGAS_programListForGeneration & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_programListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticDeclarationForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GALGAS_semanticDeclarationForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_programListForGeneration ;
 
} ; // End of GALGAS_programListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_programListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_programListForGeneration (const GALGAS_programListForGeneration & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_programListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GALGAS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_programListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GALGAS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_programListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_programListForGeneration_2D_element (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programListForGeneration_2D_element constructor_new (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @genericExtensionMethodListMap list map
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_genericExtensionMethodListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_genericExtensionMethodListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_genericExtensionMethodListMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_genericExtensionMethodListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_listForKey (const class GALGAS_string & constinOperand0
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_genericExtensionMethodListMap ;
 
} ; // End of GALGAS_genericExtensionMethodListMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_genericExtensionMethodListMap : public cGenericAbstractEnumerator {
  public: cEnumerator_genericExtensionMethodListMap (const GALGAS_genericExtensionMethodListMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_genericExtensionMethodListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @genericExtensionMethodListMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_genericExtensionMethodListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_lstringlist mProperty_mList ;
  public: inline GALGAS_lstringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_genericExtensionMethodListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_genericExtensionMethodListMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_genericExtensionMethodListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_genericExtensionMethodListMap_2D_element (const GALGAS_string & in_key,
                                                           const GALGAS_lstringlist & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_genericExtensionMethodListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_genericExtensionMethodListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_lstringlist & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_genericExtensionMethodListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_genericExtensionMethodListMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (const class cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionSettierListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @descendantClassListMap list map
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_descendantClassListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_descendantClassListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_descendantClassListMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_descendantClassListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_listForKey (const class GALGAS_string & constinOperand0
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_descendantClassListMap ;
 
} ; // End of GALGAS_descendantClassListMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_descendantClassListMap : public cGenericAbstractEnumerator {
  public: cEnumerator_descendantClassListMap (const GALGAS_descendantClassListMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntryList current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_descendantClassListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @descendantClassListMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_descendantClassListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_unifiedTypeMapEntryList mProperty_mList ;
  public: inline GALGAS_unifiedTypeMapEntryList readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_descendantClassListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_descendantClassListMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_descendantClassListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_descendantClassListMap_2D_element (const GALGAS_string & in_key,
                                                    const GALGAS_unifiedTypeMapEntryList & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_descendantClassListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_descendantClassListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_unifiedTypeMapEntryList & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_descendantClassListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_descendantClassListMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForGlobalCheckings map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) ;
  public: GALGAS_extensionMethodMapForGlobalCheckings & operator = (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionMethodMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_extensionMethodMapForGlobalCheckings & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForGlobalCheckings getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionMethodMapForGlobalCheckings ;
 
} ; // End of GALGAS_extensionMethodMapForGlobalCheckings class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extensionMethodMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionMethodMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionMethodMapForGlobalCheckings' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_extensionMethodMapForGlobalCheckings (const GALGAS_lstring & inKey
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
// Phase 1: @extensionMethodMapForGlobalCheckings_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodMapForGlobalCheckings_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForGlobalCheckings map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) ;
  public: GALGAS_extensionSetterMapForGlobalCheckings & operator = (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionSetterMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_extensionSetterMapForGlobalCheckings & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionSetterMapForGlobalCheckings getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionSetterMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionSetterMapForGlobalCheckings ;
 
} ; // End of GALGAS_extensionSetterMapForGlobalCheckings class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extensionSetterMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionSetterMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionSetterMapForGlobalCheckings' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_extensionSetterMapForGlobalCheckings (const GALGAS_lstring & inKey
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
// Phase 1: @extensionSetterMapForGlobalCheckings_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionSetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterMapForGlobalCheckings_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForGlobalCheckings map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) ;
  public: GALGAS_extensionGetterMapForGlobalCheckings & operator = (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionGetterMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_extensionGetterMapForGlobalCheckings & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForGlobalCheckings getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionGetterMapForGlobalCheckings ;
 
} ; // End of GALGAS_extensionGetterMapForGlobalCheckings class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extensionGetterMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionGetterMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionGetterMapForGlobalCheckings' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_extensionGetterMapForGlobalCheckings (const GALGAS_lstring & inKey
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
// Phase 1: @extensionGetterMapForGlobalCheckings_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionGetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterMapForGlobalCheckings_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//LEXIQUE galgas_33_Scanner
//
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S                                             
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S                                           
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S                                                  
//----------------------------------------------------------------------------------------------------------------------

class cTokenFor_galgas_33_Scanner : public cToken {
  public: C_BigInt mLexicalAttribute_bigintValue ;
  public: utf32 mLexicalAttribute_charValue ;
  public: double mLexicalAttribute_floatValue ;
  public: C_String mLexicalAttribute_identifierString ;
  public: int32_t mLexicalAttribute_sint_33__32_value ;
  public: int64_t mLexicalAttribute_sint_36__34_value ;
  public: C_String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;
  public: uint64_t mLexicalAttribute_uint_36__34_value ;

  public: cTokenFor_galgas_33_Scanner (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S                                                
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_galgas_33_Scanner : public C_Lexique {
//--- Constructors
  public: C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ C_Lexique_galgas_33_Scanner (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier,
   kToken_double_2E_xxx,
   kToken_uint_33__32_,
   kToken_sint_33__32__5F_S,
   kToken_uint_36__34__5F_L,
   kToken_sint_36__34__5F_LS,
   kToken_bigint_5F_G,
   kToken__2E_,
   kToken__2E__2E__2E_,
   kToken__2E__2E__3C_,
   kToken__40_type,
   kToken__25_attribute,
   kToken__27_char_27_,
   kToken__24_terminal_24_,
   kToken__3F_,
   kToken__3F__21_,
   kToken__21_,
   kToken__21__3F_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3C__3C_,
   kToken__3C_non_5F_terminal_3E_,
   kToken__22_string_22_,
   kToken_comment,
   kToken_commentMark,
   kToken_abstract,
   kToken_after,
   kToken_array,
   kToken_as,
   kToken_before,
   kToken_between,
   kToken_block,
   kToken_boolset,
   kToken_cast,
   kToken_case,
   kToken_class,
   kToken_constructor,
   kToken_default,
   kToken_dict,
   kToken_do,
   kToken_drop,
   kToken_else,
   kToken_elsif,
   kToken_end,
   kToken_enum,
   kToken_error,
   kToken_extension,
   kToken_extern,
   kToken_false,
   kToken_filewrapper,
   kToken_for,
   kToken_fixit,
   kToken_func,
   kToken_getter,
   kToken_grammar,
   kToken_graph,
   kToken_gui,
   kToken_if,
   kToken_in,
   kToken_indexing,
   kToken_insert,
   kToken_is,
   kToken_label,
   kToken_let,
   kToken_lexique,
   kToken_list,
   kToken_listmap,
   kToken_log,
   kToken_loop,
   kToken_map,
   kToken_message,
   kToken_method,
   kToken_mod,
   kToken_mutating,
   kToken_not,
   kToken_on,
   kToken_operator,
   kToken_option,
   kToken_or,
   kToken_override,
   kToken_parse,
   kToken_public,
   kToken_private,
   kToken_proc,
   kToken_project,
   kToken_refclass,
   kToken_remove,
   kToken_replace,
   kToken_repeat,
   kToken_rewind,
   kToken_rule,
   kToken_search,
   kToken_select,
   kToken_self,
   kToken_send,
   kToken_setter,
   kToken_sortedlist,
   kToken_struct,
   kToken_style,
   kToken_switch,
   kToken_syntax,
   kToken_tag,
   kToken_template,
   kToken_then,
   kToken_true,
   kToken_unused,
   kToken_var,
   kToken_valueclass,
   kToken_warning,
   kToken_while,
   kToken_with,
   kToken__2A_,
   kToken__2C_,
   kToken__2B_,
   kToken__26__2B_,
   kToken__26__2D_,
   kToken__26__2A_,
   kToken__26__2F_,
   kToken__3E_,
   kToken__3B_,
   kToken__3A_,
   kToken__3A__3E_,
   kToken__2D_,
   kToken__28_,
   kToken__29_,
   kToken__2D__3E_,
   kToken__3D__3D_,
   kToken__3D_,
   kToken__26__26_,
   kToken__5B_,
   kToken__5D_,
   kToken__2B__3D_,
   kToken__2D__3D_,
   kToken__2A__3D_,
   kToken__2F__3D_,
   kToken__2F_,
   kToken__21__3D_,
   kToken__3E__3D_,
   kToken__26_,
   kToken__7B_,
   kToken__7D_,
   kToken__60_,
   kToken__7C__7C_,
   kToken__7C_,
   kToken__5E_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__2D__2D_,
   kToken__2B__2B_,
   kToken__26__2D__2D_,
   kToken__26__2B__2B_,
   kToken__B0_,
   kToken__3D__3D__3D_,
   kToken__21__3D__3D_} ;

//--- Key words table 'galgasKeyWordList'
  public: static int16_t search_into_galgasKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int16_t search_into_galgasDelimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public: GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GALGAS_lsint synthetizedAttribute_sint_33__32_value (void) const ;
  public: GALGAS_lsint_36__34_ synthetizedAttribute_sint_36__34_value (void) const ;
  public: GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;
  public: GALGAS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


//--- Attribute access
  public: C_BigInt attributeValue_bigintValue (void) const ;
  public: utf32 attributeValue_charValue (void) const ;
  public: double attributeValue_floatValue (void) const ;
  public: C_String attributeValue_identifierString (void) const ;
  public: int32_t attributeValue_sint_33__32_value (void) const ;
  public: int64_t attributeValue_sint_36__34_value (void) const ;
  public: C_String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;
  public: uint64_t attributeValue_uint_36__34_value (void) const ;


//--- Indexing keys
  public: enum {
    kIndexing_classDefinition,
    kIndexing_enumDefinition,
    kIndexing_structDefinition,
    kIndexing_listDefinition,
    kIndexing_sortedListDefinition,
    kIndexing_listmapDefinition,
    kIndexing_mapDefinition,
    kIndexing_externTypeDefinition,
    kIndexing_mapEntryDefinition,
    kIndexing_arrayTypeDefinition,
    kIndexing_arrayElementTypeReference,
    kIndexing_filewrapperDefinition,
    kIndexing_filewrapperReference,
    kIndexing_graphDefinition,
    kIndexing_classReferencedAsSuperClass,
    kIndexing_typeReferenceInConstructor,
    kIndexing_typeReferenceInTypeMethod,
    kIndexing_routineDefinition,
    kIndexing_routineCall,
    kIndexing_functionDefinition,
    kIndexing_functionCall,
    kIndexing_terminalDeclaration,
    kIndexing_terminalReference,
    kIndexing_ruleDefinition,
    kIndexing_ruleReference,
    kIndexing_abstractExtensionSetterDefinition,
    kIndexing_typeReferenceAbstractExtensionSetter,
    kIndexing_overrideabstractExtensionSetterDefinition,
    kIndexing_extensionSetterDefinition,
    kIndexing_typeReferenceExtensionSetter,
    kIndexing_overrideExtensionSetterDefinition,
    kIndexing_typeReferenceOverrideExtensionSetterDefinition,
    kIndexing_typeReferenceOverrideAbstractExtensionSetter,
    kIndexing_abstractExtensionMethodDefinition,
    kIndexing_typeReferenceAbstractExtensionMethod,
    kIndexing_overrideAbstractExtensionMethodDefinition,
    kIndexing_extensionMethodDefinition,
    kIndexing_typeReferenceExtensionMethod,
    kIndexing_overrideExtensionMethodDefinition,
    kIndexing_typeReferenceOverrideExtensionMethodDefinition,
    kIndexing_typeReferenceOverrideAbstractExtensionMethod,
    kIndexing_abstractExtensionGetterDefinition,
    kIndexing_typeReferenceAbstractExtensionGetter,
    kIndexing_overrideAbstractExtensionGetterDefinition,
    kIndexing_typeReferenceOverrideAbstractExtensionGetter,
    kIndexing_extensionGetterDefinition,
    kIndexing_typeReferenceExtensionGetter,
    kIndexing_overrideExtensionGetterDefinition,
    kIndexing_typeReferenceOverrideExtensionGetter,
    kIndexing_optionComponentDefinition,
    kIndexing_optionComponentReference,
    kIndexing_grammarComponentDefinition,
    kIndexing_grammarComponentReference,
    kIndexing_indexingNameDefinition,
    kIndexing_indexingNameReference
  } ;

//--- Unicode test functions
  public: static bool galgasUnicodeLetter (const utf32 inUnicodeCharacter) ;

//--- Indexing directory
  protected: virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected: virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public: virtual int16_t terminalVocabularyCount (void) const { return 154 ; }

//--- Get Token String
  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected: void enterToken (cTokenFor_galgas_33_Scanner & ioToken) ;

//--- Style name for Latex
  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProjectSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProjectSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProjectSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_ (class GALGAS_lbigint & outArgument0,
                                                 class GALGAS_lbigint & outArgument1,
                                                 class GALGAS_lbigint & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GALGAS_lbigint & outArgument0,
                                                                      GALGAS_lbigint & outArgument1,
                                                                      GALGAS_lbigint & outArgument2,
                                                                      GALGAS_lstring & outArgument3,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3QualifiedFeatureList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_QualifiedFeatureList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_QualifiedFeatureList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFeatureName,
                                                 const class GALGAS_lstring & in_mFeatureValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_QualifiedFeatureList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_QualifiedFeatureList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_QualifiedFeatureList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_QualifiedFeatureList add_operation (const GALGAS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_galgas_33_QualifiedFeatureList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureValueAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_QualifiedFeatureList ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_QualifiedFeatureList : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_QualifiedFeatureList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_ProjectComponentAST struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_mProjectSourceList ;
  public: inline GALGAS_lstringlist readProperty_mProjectSourceList (void) const {
    return mProperty_mProjectSourceList ;
  }

  public: GALGAS_lbigint mProperty_mMajorVersion ;
  public: inline GALGAS_lbigint readProperty_mMajorVersion (void) const {
    return mProperty_mMajorVersion ;
  }

  public: GALGAS_lbigint mProperty_mMinorVersion ;
  public: inline GALGAS_lbigint readProperty_mMinorVersion (void) const {
    return mProperty_mMinorVersion ;
  }

  public: GALGAS_lbigint mProperty_mRevisionVersion ;
  public: inline GALGAS_lbigint readProperty_mRevisionVersion (void) const {
    return mProperty_mRevisionVersion ;
  }

  public: GALGAS_lstringlist mProperty_mGenerationFeatureList ;
  public: inline GALGAS_lstringlist readProperty_mGenerationFeatureList (void) const {
    return mProperty_mGenerationFeatureList ;
  }

  public: GALGAS_galgas_33_QualifiedFeatureList mProperty_mQualifiedFeatureList ;
  public: inline GALGAS_galgas_33_QualifiedFeatureList readProperty_mQualifiedFeatureList (void) const {
    return mProperty_mQualifiedFeatureList ;
  }

  public: GALGAS_lstring mProperty_mTargetName ;
  public: inline GALGAS_lstring readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GALGAS_location mProperty_mEndOfSourceFile ;
  public: inline GALGAS_location readProperty_mEndOfSourceFile (void) const {
    return mProperty_mEndOfSourceFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_ProjectComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProjectSourceList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectSourceList = inValue ;
  }

  public: inline void setter_setMMajorVersion (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMajorVersion = inValue ;
  }

  public: inline void setter_setMMinorVersion (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinorVersion = inValue ;
  }

  public: inline void setter_setMRevisionVersion (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRevisionVersion = inValue ;
  }

  public: inline void setter_setMGenerationFeatureList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerationFeatureList = inValue ;
  }

  public: inline void setter_setMQualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifiedFeatureList = inValue ;
  }

  public: inline void setter_setMTargetName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMEndOfSourceFile (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfSourceFile = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_ProjectComponentAST (const GALGAS_lstringlist & in_mProjectSourceList,
                                                const GALGAS_lbigint & in_mMajorVersion,
                                                const GALGAS_lbigint & in_mMinorVersion,
                                                const GALGAS_lbigint & in_mRevisionVersion,
                                                const GALGAS_lstringlist & in_mGenerationFeatureList,
                                                const GALGAS_galgas_33_QualifiedFeatureList & in_mQualifiedFeatureList,
                                                const GALGAS_lstring & in_mTargetName,
                                                const GALGAS_location & in_mEndOfSourceFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_ProjectComponentAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_ProjectComponentAST constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                             const class GALGAS_lbigint & inOperand1,
                                                                             const class GALGAS_lbigint & inOperand2,
                                                                             const class GALGAS_lbigint & inOperand3,
                                                                             const class GALGAS_lstringlist & inOperand4,
                                                                             const class GALGAS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                             const class GALGAS_lstring & inOperand6,
                                                                             const class GALGAS_location & inOperand7
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_ProjectComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_ProjectComponentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_QualifiedFeatureList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_QualifiedFeatureList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFeatureName ;
  public: inline GALGAS_lstring readProperty_mFeatureName (void) const {
    return mProperty_mFeatureName ;
  }

  public: GALGAS_lstring mProperty_mFeatureValue ;
  public: inline GALGAS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFeatureName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureName = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & in_mFeatureName,
                                                            const GALGAS_lstring & in_mFeatureValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_QualifiedFeatureList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ExpressionSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ExpressionSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_collection_5F_value_5F_element_ (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_ (class GALGAS_lstring & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GALGAS_semanticExpressionAST & outArgument0,
                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_i18_ (GALGAS_semanticExpressionAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_i19_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_i25_ (GALGAS_lstring & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i32_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i34_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i36_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i37_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i38_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_i39_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_i40_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_gmp ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorClassDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorValueClassDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ParameterArgumentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_castInstructionBranchListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                              class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                              const class GALGAS_actualParameterListAST constinArgument1,
                                                              const class GALGAS_lstring constinArgument2,
                                                              const class GALGAS_lstring constinArgument3,
                                                              class GALGAS_semanticInstructionAST & outArgument4,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (const class GALGAS_location constinArgument0,
                                                                          const class GALGAS_lstring constinArgument1,
                                                                          const class GALGAS_lstring constinArgument2,
                                                                          class GALGAS_semanticInstructionAST & outArgument3,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_ (class GALGAS_ifExpressionList & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GALGAS_fixitListAST & outArgument0,
                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (const class GALGAS_bool constinArgument0,
                                                                                          class GALGAS_semanticInstructionAST & outArgument1,
                                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (const class GALGAS_bool constinArgument0,
                                                                     class GALGAS_semanticInstructionAST & outArgument1,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                           const class GALGAS_semanticExpressionAST constinArgument1,
                                                           const class GALGAS_location constinArgument2,
                                                           const class GALGAS_lstring constinArgument3,
                                                           class GALGAS_semanticInstructionAST & outArgument4,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_ (const GALGAS_bool constinArgument0,
                                                                                                                     GALGAS_semanticInstructionAST & outArgument1,
                                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_ (GALGAS_fixitListAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i30_ (const GALGAS_location constinArgument0,
                                                                                                     const GALGAS_lstring constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     GALGAS_semanticInstructionAST & outArgument3,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_ (const GALGAS_location constinArgument0,
                                                                                                     const GALGAS_lstring constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     GALGAS_semanticInstructionAST & outArgument3,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_ (const GALGAS_bool constinArgument0,
                                                                                                GALGAS_semanticInstructionAST & outArgument1,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_ (GALGAS_ifExpressionList & outArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_ (GALGAS_lstringlist & outArgument0,
                                                                         GALGAS_switchExtractedValuesListAST & outArgument1,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_68 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_69 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_70 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_71 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_72 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_73 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_74 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_75 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_76 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_77 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_78 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_79 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_80 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_81 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_82 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

